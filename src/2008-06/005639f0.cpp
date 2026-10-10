// from server: 49% by atomic.potato
typedef double Real;

extern "C" void __stdcall Function(Real value)
{
    static Real globalValue;
    Real current = *(Real*)0x827988;
    globalValue = current < value ? value : current;
}
