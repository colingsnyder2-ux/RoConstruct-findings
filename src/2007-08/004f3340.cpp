// from server: 28% by TrollStein
extern "C" unsigned long long __stdcall perf_counter_thing(unsigned long long, unsigned long long, unsigned long long, unsigned long long);

unsigned long long __cdecl wrapper(unsigned long long (*fn)(unsigned long long), unsigned long long arg)
{
    unsigned long long start;
    unsigned long long end;
    unsigned long long result;
    unsigned long long dummy;

    start = perf_counter_thing(0, 0, 0, 0);
    fn(arg);
    end = perf_counter_thing(0, 0, 0, 0);
    result = end - start;
    return result;
}
