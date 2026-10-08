// from server: 100% by colin
// roc 2007-08 005244d0  unit: G3D::Line  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005244d0
//
// 005244d0  8b442408             mov eax, dword ptr [esp + 8]
// 005244d4  50                   push eax
// 005244d5  ff15c4e67700         call dword ptr [0x77e6c4]
// 005244db  59                   pop ecx
// 005244dc  c3                   ret 

extern "C" __declspec(dllimport) void free(void* ptr);

void f(void* a, void* b) {
    free(b);
}
