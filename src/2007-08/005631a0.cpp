// from server: 83% by colin
// roc 2007-08 005631a0  unit: RBX::SecondaryControllerCommand  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005631a0
//
// 005631a0  56                   push esi
// 005631a1  6a02                 push 2
// 005631a3  e808f0ffff           call 0x5621b0
// 005631a8  8b742408             mov esi, dword ptr [esp + 8]
// 005631ac  6aff                 push -1
// 005631ae  8bce                 mov ecx, esi
// 005631b0  e8fbd6eaff           call 0x4108b0
// 005631b5  8b06                 mov eax, dword ptr [esi]
// 005631b7  8b5004               mov edx, dword ptr [eax + 4]
// 005631ba  6a01                 push 1
// 005631bc  8bce                 mov ecx, esi
// 005631be  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005631c5  ffd2                 call edx
// 005631c7  5e                   pop esi
// 005631c8  c20400               ret 4

struct SecondaryControllerCommand {
    void construct(int);
    void setController(int);
    void execute(int);
};

void SecondaryControllerCommand::execute(int)
{
    construct(2);
    setController(-1);
    (*(void (__thiscall **)(SecondaryControllerCommand *, int))(*(int *)this + 4))(this, 1);
    *(int *)((char *)this + 4) = -1;
}
