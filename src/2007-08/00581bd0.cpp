// from server: 66% by colin
// roc 2007-08 00581bd0  unit: RBX::Accoutrement  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581bd0
//
// 00581bd0  8b442404             mov eax, dword ptr [esp + 4]
// 00581bd4  6a00                 push 0
// 00581bd6  50                   push eax
// 00581bd7  e8c4feffff           call 0x581aa0
// 00581bdc  83c408               add esp, 8
// 00581bdf  c3                   ret 
// 00581be0  e94bfbffff           jmp 0x581730

struct Accoutrement {
    void setDesiredState(int desiredState, const void* serviceProvider);
    void setDesiredState(int desiredState);
};

void Accoutrement::setDesiredState(int desiredState) {
    setDesiredState(desiredState, 0);
}
