// from server: 100% by tester
// roc 2008-06 0063ec10  unit: RBX::SlingshotTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ec10
//
// 0063ec10  56                   push esi
// 0063ec11  8bf1                 mov esi, ecx
// 0063ec13  8b06                 mov eax, dword ptr [esi]
// 0063ec15  8b5024               mov edx, dword ptr [eax + 0x24]
// 0063ec18  ffd2                 call edx
// 0063ec1a  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 0063ec1e  750c                 jne 0x63ec2c
// 0063ec20  8b442408             mov eax, dword ptr [esp + 8]
// 0063ec24  50                   push eax
// 0063ec25  8bce                 mov ecx, esi
// 0063ec27  e864fcffff           call 0x63e890
// 0063ec2c  8bc6                 mov eax, esi
// 0063ec2e  5e                   pop esi
// 0063ec2f  c20400               ret 4

struct SlingshotTool {
    void sub_5FC540(int);
    SlingshotTool* method(int);
};

SlingshotTool* SlingshotTool::method(int arg) {
    (*(void (__thiscall **)(SlingshotTool*))(*(int*)this + 0x24))(this);
    if (*(int*)((char*)this + 0x2c) == 0) {
        this->sub_5FC540(arg);
    }
    return this;
}
