// from server: 95% by atomic.potato
struct PlayerGui
{
    virtual void Reserved0() = 0;
    virtual bool IsVisible(int) = 0;
    bool f(int);
};

bool PlayerGui::f(int value)
{
    return !IsVisible(value);
}
