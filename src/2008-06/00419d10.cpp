// from server: 91% by king_originala
typedef void (__thiscall *Callback)(void*, int, int);

struct CallData {
    Callback callback;
    char* object;
    int adjustment;
    int unused;
    int first;
    int second;
};

void __cdecl invoke(CallData* data)
{
    data->callback(data->object + data->adjustment, data->first, data->second);
}
