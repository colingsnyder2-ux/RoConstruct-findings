// from server: 92% by atomic.potato
extern "C" int __stdcall MapLookup(int, int *);

int __stdcall CMapWrapper(int value)
{
    return MapLookup(value, &value) ? value : 0;
}
