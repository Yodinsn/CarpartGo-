#ifndef FEESTRATEGY_H
#define FEESTRATEGY_H

class FeeStrategy {
public:
    virtual double calculateFee(int hours) const = 0;
    virtual ~FeeStrategy() {}
};

class HourlyFeeStrategy : public FeeStrategy {
public:
    double calculateFee(int hours) const override {
        return hours * 50.0;
    }
};

class MotorcycleFeeStrategy : public FeeStrategy {
public:
    double calculateFee(int hours) const override {
        return hours * 20.0;
    }
};

#endif

