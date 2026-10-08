// from server: 57% by colin
// roc 2007-08 00625780  unit: RBX::PartDragTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625780
//
// 00625780  8b442404             mov eax, dword ptr [esp + 4]
// 00625784  0fbf500a             movsx edx, word ptr [eax + 0xa]
// 00625788  56                   push esi
// 00625789  8bf1                 mov esi, ecx
// 0062578b  0fbf4808             movsx ecx, word ptr [eax + 8]
// 0062578f  8b06                 mov eax, dword ptr [esi]
// 00625791  894c2408             mov dword ptr [esp + 8], ecx
// 00625795  8bce                 mov ecx, esi
// 00625797  db442408             fild dword ptr [esp + 8]
// 0062579b  89542408             mov dword ptr [esp + 8], edx
// 0062579f  8b5020               mov edx, dword ptr [eax + 0x20]
// 006257a2  db442408             fild dword ptr [esp + 8]
// 006257a6  d9c9                 fxch st(1)
// 006257a8  d95e28               fstp dword ptr [esi + 0x28]
// 006257ab  d95e2c               fstp dword ptr [esi + 0x2c]
// 006257ae  ffd2                 call edx
// 006257b0  8bc6                 mov eax, esi
// 006257b2  5e                   pop esi
// 006257b3  c20400               ret 4

struct PartDragTool {
    void onMouseDown(int* hitPart);
};

void PartDragTool::onMouseDown(int* hitPart) {
    int x = *(short*)((char*)hitPart + 8);
    int y = *(short*)((char*)hitPart + 10);
    *(float*)((char*)this + 0x28) = (float)x;
    *(float*)((char*)this + 0x2c) = (float)y;
    (*(void(__thiscall**)(void*))((*(int*)this) + 0x20))(this);
}
