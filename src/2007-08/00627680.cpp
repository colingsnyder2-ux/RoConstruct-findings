// from server: 44% by colin
// roc 2007-08 00627680  unit: RBX::CollisionStage  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627680
//
// 00627680  8b542404             mov edx, dword ptr [esp + 4]
// 00627684  8bc2                 mov eax, edx
// 00627686  83e800               sub eax, 0
// 00627689  7419                 je 0x6276a4
// 0062768b  83e801               sub eax, 1
// 0062768e  740e                 je 0x62769e
// 00627690  8b4908               mov ecx, dword ptr [ecx + 8]
// 00627693  8b01                 mov eax, dword ptr [ecx]
// 00627695  89542404             mov dword ptr [esp + 4], edx
// 00627699  8b5018               mov edx, dword ptr [eax + 0x18]
// 0062769c  ffe2                 jmp edx
// 0062769e  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006276a1  c20400               ret 4
// 006276a4  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006276a7  c20400               ret 4

struct RBX_CollisionStage {
    int getValue(int which);
    char pad[0x20];
};

int RBX_CollisionStage::getValue(int which)
{
    if (which == 0)
        return *(int*)((char*)this + 0x10);
    if (which == 1)
        return *(int*)((char*)this + 0x18);
    {
        void* p = *(void**)((char*)this + 8);
        void** vt = *(void***)p;
        int (*fn)(void*, int) = (int (*)(void*, int))vt[6];
        return fn(p, which);
    }
}
