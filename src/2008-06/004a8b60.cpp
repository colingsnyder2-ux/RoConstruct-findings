// from server: 100% by king_originala
// roc 2008-06 004a8b60  unit: RBX::VHint::?$FactoryProduct::Creator  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a8b60
//
// 004a8b60  8b442404             mov eax, dword ptr [esp + 4]
// 004a8b64  56                   push esi
// 004a8b65  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a8b69  56                   push esi
// 004a8b6a  50                   push eax
// 004a8b6b  e840e5ffff           call 0x4a70b0
// 004a8b70  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a8b74  51                   push ecx
// 004a8b75  56                   push esi
// 004a8b76  e8052fffff           call 0x49ba80
// 004a8b7b  83c408               add esp, 8
// 004a8b7e  5e                   pop esi
// 004a8b7f  c20c00               ret 0xc

extern "C" void __cdecl finish(const char*, int);

struct S {
    void prepare(int, const char*);
    void f(int, int, const char*);
};

void S::f(int a, int b, const char* text)
{
    prepare(a, text);
    finish(text, b);
}
