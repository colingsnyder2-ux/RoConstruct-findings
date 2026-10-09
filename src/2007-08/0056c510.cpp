// from server: 21% by colin
// roc 2007-08 0056c510  unit: RBX::StandardOut  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c510
//
// 0056c510  55                   push ebp
// 0056c511  8bec                 mov ebp, esp
// 0056c513  6aff                 push -1
// 0056c515  6879487500           push 0x754879
// 0056c51a  64a100000000         mov eax, dword ptr fs:[0]
// 0056c520  50                   push eax
// 0056c521  64892500000000       mov dword ptr fs:[0], esp
// 0056c528  83ec2c               sub esp, 0x2c
// 0056c52b  53                   push ebx
// 0056c52c  56                   push esi
// 0056c52d  57                   push edi
// 0056c52e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0056c531  8bf9                 mov edi, ecx
// 0056c533  8b4508               mov eax, dword ptr [ebp + 8]
// 0056c536  83ec28               sub esp, 0x28
// 0056c539  8bf4                 mov esi, esp
// 0056c53b  8d4d0c               lea ecx, [ebp + 0xc]
// 0056c53e  8965ec               mov dword ptr [ebp - 0x14], esp
// 0056c541  51                   push ecx
// 0056c542  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0056c549  8d4e04               lea ecx, [esi + 4]
// 0056c54c  c645fc01             mov byte ptr [ebp - 4], 1
// 0056c550  8906                 mov dword ptr [esi], eax
// 0056c552  ff159ce67700         call dword ptr [0x77e69c]
// 0056c558  8b5528               mov edx, dword ptr [ebp + 0x28]
// 0056c55b  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 0056c55e  895620               mov dword ptr [esi + 0x20], edx
// 0056c561  8b452c               mov eax, dword ptr [ebp + 0x2c]
// 0056c564  894624               mov dword ptr [esi + 0x24], eax
// 0056c567  8b11                 mov edx, dword ptr [ecx]
// 0056c569  8b02                 mov eax, dword ptr [edx]
// 0056c56b  57                   push edi
// 0056c56c  ffd0                 call eax

struct StandardOutMessage {
    int type;
    char pad[0x1c];
    int field20;
    int field24;
};

struct StandardOut {
    void print(int type, const StandardOutMessage& message);
};

void StandardOut::print(int type, const StandardOutMessage& message)
{
    StandardOutMessage msg;
    msg.type = type;
    msg.field20 = message.field20;
    msg.field24 = message.field24;
    void (*fn)(void*, const StandardOutMessage&) = *(void(**)(void*, const StandardOutMessage&))0x77e69c;
    fn(this, msg);
}
