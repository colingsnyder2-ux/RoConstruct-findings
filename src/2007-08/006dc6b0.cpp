// from server: 33% by colin
// roc 2007-08 006dc6b0  unit: CXTPDockingPaneWindowSelect  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc6b0
//
// 006dc6b0  8b442404             mov eax, dword ptr [esp + 4]
// 006dc6b4  85c0                 test eax, eax
// 006dc6b6  7c0e                 jl 0x6dc6c6
// 006dc6b8  3b4108               cmp eax, dword ptr [ecx + 8]
// 006dc6bb  7d09                 jge 0x6dc6c6
// 006dc6bd  8b4904               mov ecx, dword ptr [ecx + 4]
// 006dc6c0  8d04c1               lea eax, [ecx + eax*8]
// 006dc6c3  c20400               ret 4
// 006dc6c6  e85538f5ff           call 0x62ff20

struct CXTPDockingPaneWindowSelect {
    int unknown0;
    int* data;
    int count;
    int GetAt(int index);
};

extern "C" void __cdecl _invalid_parameter_noinfo();

int CXTPDockingPaneWindowSelect::GetAt(int index)
{
    if (index < 0 || index >= count)
        _invalid_parameter_noinfo();
    return (int)(data + index * 2);
}
