// from server: 20% by atomic.potato
struct CXTThemeManager
{
    int GetSafeThemeFactory();
    int Next();
};

int CXTThemeManager::GetSafeThemeFactory()
{
    return 0;
}

int CXTThemeManager::Next()
{
    int value = GetSafeThemeFactory();
    if (value)
    {
        return ((CXTThemeManager*)value)->Next();
    }
    return 0;
}
