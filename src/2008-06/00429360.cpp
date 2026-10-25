// from server: 100% by king_originala
// roc 2008-06 00429360  unit: ThreadLogManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00429360
//
// 00429360  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00429364  8b01                 mov eax, dword ptr [ecx]
// 00429366  8b5004               mov edx, dword ptr [eax + 4]
// 00429369  56                   push esi
// 0042936a  ffd2                 call edx
// 0042936c  8bf0                 mov esi, eax
// 0042936e  56                   push esi
// 0042936f  6a01                 push 1
// 00429371  e8aae8ffff           call 0x427c20
// 00429376  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042937a  83c408               add esp, 8
// 0042937d  6a00                 push 0
// 0042937f  68ec018500           push 0x8501ec
// 00429384  6a00                 push 0
// 00429386  6a00                 push 0
// 00429388  56                   push esi
// 00429389  50                   push eax
// 0042938a  e821fdffff           call 0x4290b0
// 0042938f  5e                   pop esi
// 00429390  c3                   ret 

struct S {
    virtual void slot0();
    virtual int slot1();
};

extern char data_8501ec[];

extern "C" void __cdecl prepare(int, int);
extern "C" int __stdcall finish(int, int, int, int, const char *, int);

int __cdecl function_429360(int arg, S *object)
{
    int value = object->slot1();
    prepare(1, value);
    return finish(arg, value, 0, 0, data_8501ec, 0);
}
