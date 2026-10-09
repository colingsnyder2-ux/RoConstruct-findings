// from server: 24% by colin
// roc 2007-08 0044f090  unit: RBX::CameraTiltUpCommand  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044f090
//
// 0044f090  55                   push ebp
// 0044f091  8bec                 mov ebp, esp
// 0044f093  6aff                 push -1
// 0044f095  68800a7400           push 0x740a80
// 0044f09a  64a100000000         mov eax, dword ptr fs:[0]
// 0044f0a0  50                   push eax
// 0044f0a1  83ec08               sub esp, 8
// 0044f0a4  53                   push ebx
// 0044f0a5  56                   push esi
// 0044f0a6  57                   push edi
// 0044f0a7  a188518b00           mov eax, dword ptr [0x8b5188]
// 0044f0ac  33c5                 xor eax, ebp
// 0044f0ae  50                   push eax
// 0044f0af  8d45f4               lea eax, [ebp - 0xc]
// 0044f0b2  64a300000000         mov dword ptr fs:[0], eax
// 0044f0b8  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044f0bb  894dec               mov dword ptr [ebp - 0x14], ecx
// 0044f0be  8b4104               mov eax, dword ptr [ecx + 4]
// 0044f0c1  a802                 test al, 2
// 0044f0c3  8b09                 mov ecx, dword ptr [ecx]
// 0044f0c5  8b09                 mov ecx, dword ptr [ecx]
// 0044f0c7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044f0ce  7409                 je 0x44f0d9
// 0044f0d0  83c104               add ecx, 4
// 0044f0d3  ff1504e67700         call dword ptr [0x77e604]

struct CameraTiltUpCommand {
    void doIt(int* dataState);
};

extern "C" int __stdcall pubsink(void*);

void CameraTiltUpCommand::doIt(int* dataState)
{
    int* p = (int*)*dataState;
    if ((*(unsigned char*)((char*)this + 4) & 2) != 0)
    {
        p = (int*)((char*)p + 4);
        pubsink(p);
    }
}
