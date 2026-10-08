// from server: 85% by colin
// roc 2007-08 0069e0f0  unit: CXTPPropertyGridItemEnum  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e0f0
//
// 0069e0f0  56                   push esi
// 0069e0f1  8bf1                 mov esi, ecx
// 0069e0f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069e0f7  8b06                 mov eax, dword ptr [esi]
// 0069e0f9  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 0069e0ff  51                   push ecx
// 0069e100  8bce                 mov ecx, esi
// 0069e102  ffd2                 call edx
// 0069e104  8d86a0000000         lea eax, [esi + 0xa0]
// 0069e10a  50                   push eax
// 0069e10b  8d8ea4000000         lea ecx, [esi + 0xa4]
// 0069e111  c7868c00000005000000 mov dword ptr [esi + 0x8c], 5
// 0069e11b  c7467c01000000       mov dword ptr [esi + 0x7c], 1
// 0069e122  ff1534d47700         call dword ptr [0x77d434]
// 0069e128  5e                   pop esi
// 0069e129  c20400               ret 4

struct CXTPPropertyGridItemEnum {
    void SetValue(int);
};

extern "C" void __stdcall sub_77D434(void*, void*);

void CXTPPropertyGridItemEnum::SetValue(int value)
{
    (*(void (__thiscall**)(CXTPPropertyGridItemEnum*, int))(*(int*)this + 0xe8))(this, value);
    *(int*)((char*)this + 0x8c) = 5;
    *(int*)((char*)this + 0x7c) = 1;
    sub_77D434((char*)this + 0xa4, (char*)this + 0xa0);
}
