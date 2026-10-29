// roc 2011-06 00801de0  unit: RBX::Tasks::SequenceBase  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00801de0
//
// 00801de0  55                   push ebp
// 00801de1  8bec                 mov ebp, esp
// 00801de3  8b4508               mov eax, dword ptr [ebp + 8]
// 00801de6  50                   push eax
// 00801de7  ff15f001a400         call dword ptr [0xa401f0]
// 00801ded  5d                   pop ebp
// 00801dee  c3                   ret 
// copied from an identical function in another client (function ?fileAttributes@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob1 /GS- /MT
extern "C" __declspec(dllimport) unsigned long __stdcall GetFileAttributesA(const char *fileName);

unsigned long fileAttributes(const char *fileName)
{
    return GetFileAttributesA(fileName);
}