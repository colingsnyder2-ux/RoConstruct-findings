// from server: 100% by king_originala
// roc 2008-06 004a49a0  unit: VDHTMLWindow::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a49a0
//
// 004a49a0  8bc1                 mov eax, ecx
// 004a49a2  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004a49a5  034c2404             add ecx, dword ptr [esp + 4]
// 004a49a9  8b4038               mov eax, dword ptr [eax + 0x38]
// 004a49ac  56                   push esi
// 004a49ad  57                   push edi
// 004a49ae  ffd0                 call eax
// 004a49b0  8bf8                 mov edi, eax
// 004a49b2  e809820c00           call 0x56cbc0
// 004a49b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a49bb  6a08                 push 8
// 004a49bd  8901                 mov dword ptr [ecx], eax
// 004a49bf  8d7104               lea esi, [ecx + 4]
// 004a49c2  e859bf1f00           call 0x6a0920
// 004a49c7  83c404               add esp, 4
// 004a49ca  85c0                 test eax, eax
// 004a49cc  740b                 je 0x4a49d9
// 004a49ce  c700cc068100         mov dword ptr [eax], 0x8106cc
// 004a49d4  897804               mov dword ptr [eax + 4], edi
// 004a49d7  eb02                 jmp 0x4a49db
// 004a49d9  33c0                 xor eax, eax
// 004a49db  8d54240c             lea edx, [esp + 0xc]
// 004a49df  8bc8                 mov ecx, eax
// 004a49e1  3bd6                 cmp edx, esi
// 004a49e3  7404                 je 0x4a49e9
// 004a49e5  8b0e                 mov ecx, dword ptr [esi]
// 004a49e7  8906                 mov dword ptr [esi], eax
// 004a49e9  5f                   pop edi
// 004a49ea  5e                   pop esi
// 004a49eb  85c9                 test ecx, ecx
// 004a49ed  7408                 je 0x4a49f7
// 004a49ef  8b01                 mov eax, dword ptr [ecx]
// 004a49f1  8b10                 mov edx, dword ptr [eax]
// 004a49f3  6a01                 push 1
// 004a49f5  ffd2                 call edx
// 004a49f7  c20800               ret 8

struct VDHTMLWindow_BoundFuncDesc {
    char pad0[0x38];
    int (__thiscall *field38)(int);
    int field3c;
    void method(int, int*);
};

extern "C" int __cdecl sub_56cbc0();
extern "C" void* __cdecl sub_6a0920(int);

void VDHTMLWindow_BoundFuncDesc::method(int a, int* out)
{
    int result = field38(field3c + a);
    int* p = out;
    *p = sub_56cbc0();
    int* slot = p + 1;
    void* obj = sub_6a0920(8);
    if (obj) {
        *(int*)obj = 0x8106cc;
        *(int*)((char*)obj + 4) = result;
    } else {
        obj = 0;
    }
    int old = (int)obj;
    if (&old != slot) {
        old = *slot;
        *slot = (int)obj;
    }
    if (old) {
        typedef void (__thiscall *Destroy)(int, int);
        (*(Destroy**)old)[0](old, 1);
    }
}
