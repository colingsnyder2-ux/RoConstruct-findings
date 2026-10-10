// from server: 57% by atomic.potato
struct Configuration
{
    int value0;
    int value4;
    int value18;
    int value1c;

    void Configuration_tail(Configuration* value);
};

extern "C" void Configuration_tail(Configuration*);

void Configuration::Configuration_tail(Configuration* value)
{
    value->value0 = 0x9e24ac;
    value->value4 = 0x9e24a0;
    value->value18 = 0x9e2494;
    value->value1c = 0x9e248c;
    Configuration_tail(value);
}
