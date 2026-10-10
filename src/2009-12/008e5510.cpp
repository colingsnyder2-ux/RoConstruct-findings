// from server: 85% by atomic.potato
struct CXTCaptionButton
{
    int padding[28];
    unsigned char enabled;
    void Invoke();
    virtual void Dispatch();
    void f();
};

void CXTCaptionButton::f()
{
    Invoke();
    if (enabled)
        Dispatch();
}
