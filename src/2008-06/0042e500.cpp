// from server: 100% by king_originala
// roc 2008-06 0042e500  unit: CMainFrame  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e500
//
// 0042e500  56                   push esi
// 0042e501  8b742408             mov esi, dword ptr [esp + 8]
// 0042e505  56                   push esi
// 0042e506  e8872a2700           call 0x6a0f92
// 0042e50b  85c0                 test eax, eax
// 0042e50d  7504                 jne 0x42e513
// 0042e50f  5e                   pop esi
// 0042e510  c20400               ret 4
// 0042e513  e80e242700           call 0x6a0926
// 0042e518  6880000000           push 0x80
// 0042e51d  6a0e                 push 0xe
// 0042e51f  6880000000           push 0x80
// 0042e524  e8032a2700           call 0x6a0f2c
// 0042e529  50                   push eax
// 0042e52a  ff15642d8000         call dword ptr [0x802d64]
// 0042e530  50                   push eax
// 0042e531  6a00                 push 0
// 0042e533  6a00                 push 0
// 0042e535  6a00                 push 0
// 0042e537  e8502a2700           call 0x6a0f8c
// 0042e53c  894628               mov dword ptr [esi + 0x28], eax
// 0042e53f  b801000000           mov eax, 1
// 0042e544  5e                   pop esi
// 0042e545  c20400               ret 4

struct S {
    char pad[0x28];
    int value;
};

extern "C" int __stdcall sub_006a0f92(S*);
extern "C" void __stdcall sub_006a0926();
extern "C" void* __stdcall sub_006a0f2c(const char*, const char*);
extern "C" void* (__stdcall *LoadIconA)(void*, const char*);
extern "C" int __stdcall sub_006a0f8c(int, int, int, void*);

int __stdcall create(S* object)
{
    if (!sub_006a0f92(object))
        return 0;

    sub_006a0926();
    object->value = sub_006a0f8c(
        0, 0, 0,
        LoadIconA(sub_006a0f2c((const char*)128, (const char*)14),
                  (const char*)128));
    return 1;
}
