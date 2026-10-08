// from server: 75% by colin
// roc 2007-08 0069dd50  unit: CXTPPropertyGridItemBool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069dd50
//
// 0069dd50  56                   push esi
// 0069dd51  8bf1                 mov esi, ecx
// 0069dd53  8d8e0c010000         lea ecx, [esi + 0x10c]
// 0069dd59  c706f4247d00         mov dword ptr [esi], 0x7d24f4
// 0069dd5f  c7462094247d00       mov dword ptr [esi + 0x20], 0x7d2494
// 0069dd66  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0069dd6c  8d8e08010000         lea ecx, [esi + 0x108]
// 0069dd72  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0069dd78  8bce                 mov ecx, esi
// 0069dd7a  5e                   pop esi
// 0069dd7b  e9d0c3ffff           jmp 0x69a150

struct CXTPPropertyGridItemBool {
    void Destructor();
    char pad[0x108];
    int field108;
    int field10c;
};

extern "C" void __stdcall sub_77ddbc(int*);

void CXTPPropertyGridItemBool::Destructor()
{
    *(int*)this = 0x7d24f4;
    *(int*)((char*)this + 0x20) = 0x7d2494;
    sub_77ddbc((int*)((char*)this + 0x10c));
    sub_77ddbc((int*)((char*)this + 0x108));
    ((void (__thiscall*)(void*))0x69a150)(this);
}
