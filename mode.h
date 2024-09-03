#ifndef MODE_H
#define MODE_H

class Mode {
public:
    virtual ~Mode() = default;
    virtual void apply_mode() = 0;
};

class ManualMode : public Mode {
public:
    void apply_mode() override;
};

class AutomaticMode : public Mode {
public:
    void apply_mode() override;
};

#endif // MODE_H
