// roc 2009-06 005bf6d0  unit: RBX::AggregatingSceneManager::Bucket  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf6d0
//
// 005bf6d0  55                   push ebp
// 005bf6d1  8bec                 mov ebp, esp
// 005bf6d3  51                   push ecx
// 005bf6d4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bf6d7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bf6da  33c9                 xor ecx, ecx
// 005bf6dc  833800               cmp dword ptr [eax], 0
// 005bf6df  0f95c1               setne cl
// 005bf6e2  8ac1                 mov al, cl
// 005bf6e4  8be5                 mov esp, ebp
// 005bf6e6  5d                   pop ebp
// 005bf6e7  c3                   ret 
// copied from an identical function in another client (function ?present@Holder@@QAE_NXZ)

// from server: 100% by tester
// roc-cl: 50727
// roc-flags: /Od /GS- /MD
struct Holder { void* value; bool present(); };
bool Holder::present() { return value != 0; }