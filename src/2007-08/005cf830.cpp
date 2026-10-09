// from server: 72% by colin
// roc 2007-08 005cf830  unit: RBX::Kernel  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cf830
//
// 005cf830  53                   push ebx
// 005cf831  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005cf835  56                   push esi
// 005cf836  8d7128               lea esi, [ecx + 0x28]
// 005cf839  57                   push edi
// 005cf83a  8bcb                 mov ecx, ebx
// 005cf83c  e81f4ffdff           call 0x5a4760
// 005cf841  8b38                 mov edi, dword ptr [eax]
// 005cf843  8b06                 mov eax, dword ptr [esi]
// 005cf845  8b4e04               mov ecx, dword ptr [esi + 4]
// 005cf848  8b4c88fc             mov ecx, dword ptr [eax + ecx*4 - 4]
// 005cf84c  890cb8               mov dword ptr [eax + edi*4], ecx
// 005cf84f  e80c4ffdff           call 0x5a4760
// 005cf854  8938                 mov dword ptr [eax], edi
// 005cf856  8b5604               mov edx, dword ptr [esi + 4]
// 005cf859  6a00                 push 0
// 005cf85b  83ea01               sub edx, 1
// 005cf85e  52                   push edx
// 005cf85f  8bce                 mov ecx, esi
// 005cf861  e8bafbffff           call 0x5cf420
// 005cf866  8bcb                 mov ecx, ebx
// 005cf868  e8f34efdff           call 0x5a4760
// 005cf86d  5f                   pop edi
// 005cf86e  5e                   pop esi
// 005cf86f  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 005cf875  5b                   pop ebx
// 005cf876  c20400               ret 4

struct IndexArray {
    int* data;
    int count;
    int capacity;
};

struct Kernel {
    char pad[0x28];
    IndexArray bodyArray;
    void removeBody(int* body);
};

extern "C" int* __stdcall sub_5A4760(int* body);
extern "C" void __stdcall sub_5CF420(IndexArray* arr, int index, int value);

void Kernel::removeBody(int* body) {
    IndexArray* arr = &bodyArray;
    int idx = sub_5A4760(body)[0];
    int* data = arr->data;
    int cnt = arr->count;
    int last = data[cnt - 1];
    data[idx] = last;
    sub_5A4760(body)[0] = idx;
    int newCnt = arr->count - 1;
    sub_5CF420(arr, newCnt, 0);
    sub_5A4760(body)[0] = -1;
}
