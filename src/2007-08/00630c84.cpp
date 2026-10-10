// from server: 56% by colin
extern "C" __declspec(dllimport) void* __cdecl _encode_pointer(void*);
extern "C" __declspec(dllimport) void* __cdecl _decode_pointer(void*);
extern "C" __declspec(dllimport) int __cdecl _onexit(void (__cdecl*)());

void __cdecl sub_00631620();
void __cdecl sub_00631665();
void __cdecl sub_00631686();
int __cdecl sub_00631680(void*, void*, void*);
void __cdecl sub_00630d1a();

extern void* dword_8C9C04;
extern void* dword_8C9C00;

void __cdecl sub_00630c84(void* a1)
{
    void* v1;
    void* v2;
    int v3;

    sub_00631620();
    v1 = _encode_pointer(dword_8C9C04);
    if (v1 == (void*)-1) {
        _decode_pointer(a1);
        sub_00631665();
        return;
    }
    sub_00631686();
    v1 = _encode_pointer(dword_8C9C04);
    v2 = _encode_pointer(dword_8C9C00);
    v3 = sub_00631680(a1, &v1, &v2);
    dword_8C9C04 = _decode_pointer(v1);
    dword_8C9C00 = _decode_pointer(v2);
    sub_00630d1a();
    sub_00631665();
}
