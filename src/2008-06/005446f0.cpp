// from server: 100% by tester
// roc 2008-06 005446f0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005446f0
//
// 005446f0  55                   push ebp
// 005446f1  8bec                 mov ebp, esp
// 005446f3  83ec0c               sub esp, 0xc
// 005446f6  894df8               mov dword ptr [ebp - 8], ecx
// 005446f9  c745fcffffff3f       mov dword ptr [ebp - 4], 0x3fffffff
// 00544700  837dfc00             cmp dword ptr [ebp - 4], 0
// 00544704  7608                 jbe 0x54470e
// 00544706  8b45fc               mov eax, dword ptr [ebp - 4]
// 00544709  8945f4               mov dword ptr [ebp - 0xc], eax
// 0054470c  eb07                 jmp 0x544715
// 0054470e  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 00544715  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00544718  8be5                 mov esp, ebp
// 0054471a  5d                   pop ebp
// 0054471b  c3                   ret 

struct S {
    unsigned int f();
};

#pragma optimize("", off)
unsigned int S::f()
{
    unsigned int count = 0x3fffffff;
    return count > 0 ? count : 1;
}
#pragma optimize("", on)
