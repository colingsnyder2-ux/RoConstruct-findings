// roc 2008-06 00575820  unit: RBX::DataModel  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575820
//
// 00575820  8b810c020000         mov eax, dword ptr [ecx + 0x20c]
// 00575826  33c9                 xor ecx, ecx
// 00575828  83b8b401000001       cmp dword ptr [eax + 0x1b4], 1
// 0057582f  0f94c1               sete cl
// 00575832  8ac1                 mov al, cl
// 00575834  c3                   ret 

struct Workspace {
    char pad[0x1b4];
    int m_state;
};

struct DataModel {
    char pad[0x20c];
    Workspace* m_workspace;
    bool IsRunning();
};

bool DataModel::IsRunning()
{
    return m_workspace->m_state == 1;
}
