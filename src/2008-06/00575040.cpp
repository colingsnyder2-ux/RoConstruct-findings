// from server: 96% by atomic.potato
struct UnifiedWidget
{
    float f1();
    float f2();
    float f();
};

float UnifiedWidget::f()
{
    float a = f1();
    f2();
    return a;
}
