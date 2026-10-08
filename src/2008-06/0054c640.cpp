// from server: 28% by colin
// roc 2008-06 0054c640  unit: RBX::RenderBase::Mesh  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c640
//
// 0054c640  55                   push ebp
// 0054c641  8bec                 mov ebp, esp
// 0054c643  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c646  83c004               add eax, 4
// 0054c649  5d                   pop ebp
// 0054c64a  c3                   ret 

struct Mesh {
    void clear();
};

extern "C" __declspec(dllimport) void clearMesh(void*);

void func_0054c640(void* this_ptr) {
    clearMesh(reinterpret_cast<void*>(reinterpret_cast<char*>(this_ptr) + 4));
}
