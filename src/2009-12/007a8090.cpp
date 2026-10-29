// roc 2009-12 007a8090  unit: RBX::SlingshotTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a8090
//
// 007a8090  56                   push esi
// 007a8091  8bf1                 mov esi, ecx
// 007a8093  8b06                 mov eax, dword ptr [esi]
// 007a8095  8b5034               mov edx, dword ptr [eax + 0x34]
// 007a8098  ffd2                 call edx
// 007a809a  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 007a809e  750c                 jne 0x7a80ac
// 007a80a0  8b442408             mov eax, dword ptr [esp + 8]
// 007a80a4  50                   push eax
// 007a80a5  8bce                 mov ecx, esi
// 007a80a7  e864fcffff           call 0x7a7d10
// 007a80ac  8bc6                 mov eax, esi
// 007a80ae  5e                   pop esi
// 007a80af  c20400               ret 4
// copied from an identical function in another client (function ?method@SlingshotTool@ns_ROCX00000b@@QAEPAU12@H@Z)

namespace ns_ROCX00000b {
// from server: 100% by tester
struct SlingshotTool {
    void sub_5FC540(int);
    SlingshotTool* method(int);
};

SlingshotTool* SlingshotTool::method(int arg) {
    (*(void (__thiscall **)(SlingshotTool*))(*(int*)this + 0x34))(this);
    if (*(int*)((char*)this + 0x2c) == 0) {
        this->sub_5FC540(arg);
    }
    return this;
}
}
