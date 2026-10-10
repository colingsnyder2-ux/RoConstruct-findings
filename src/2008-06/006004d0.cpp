// from server: 42% by atomic.potato
struct S
{
    int f();
    int value;
};

void callee(S*, int);

int S::f()
{
    int value = this->value;
    int adjusted = (value + 1) & 0x80000001;
    if (adjusted < 0)
        adjusted = (adjusted - 1) | 0xfffffffe;
    ++adjusted;
    callee(this, adjusted + value + 1);
    return 0;
}
