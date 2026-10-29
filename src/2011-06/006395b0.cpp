// roc 2011-06 006395b0  unit: RBX::P8BaseScript::?$GetSetImpl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006395b0
//
// 006395b0  6aff                 push -1
// 006395b2  6881669e00           push 0x9e6681
// 006395b7  64a100000000         mov eax, dword ptr fs:[0]
// 006395bd  50                   push eax
// 006395be  64892500000000       mov dword ptr fs:[0], esp
// 006395c5  51                   push ecx
// 006395c6  56                   push esi
// 006395c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 006395cb  89742404             mov dword ptr [esp + 4], esi
// 006395cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006395d7  85f6                 test esi, esi
// 006395d9  7414                 je 0x6395ef
// 006395db  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006395df  50                   push eax
// 006395e0  8bce                 mov ecx, esi
// 006395e2  ff15c804a400         call dword ptr [0xa404c8]
// 006395e8  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006395ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006395f3  5e                   pop esi
// 006395f4  64890d00000000       mov dword ptr fs:[0], ecx
// 006395fb  83c410               add esp, 0x10
// 006395fe  c3                   ret 
// copied from an identical function in another client (function ?construct@@YAXPAUValue@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <new>
#include <string>

// 0x20-byte value: std::string at +0, dword at +0x1c zeroed by the string ctor.
struct Value {
    std::string s;
    int extra;
    Value(const std::string& v) : s(v), extra(0) {}
};

void construct(Value* p, const std::string& v)
{
    new (p) Value(v);
}