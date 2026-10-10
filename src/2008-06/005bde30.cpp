// from server: 36% by atomic.potato
struct BasicString
{
    BasicString(const char *);
};

extern BasicString *gStringConstructor;

BasicString *func_005bde30(int, int, const char *value)
{
    BasicString *result = 0;
    const char *text = *value ? "true" : "false";
    return new BasicString(text);
}
