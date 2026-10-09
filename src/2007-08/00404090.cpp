// from server: 72% by colin
// roc 2007-08 00404090  unit: VCWorkspace::?$CComObject  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00404090
//
// 00404090  56                   push esi
// 00404091  8d7104               lea esi, [ecx + 4]
// 00404094  c701fc4e7800         mov dword ptr [ecx], 0x784efc
// 0040409a  57                   push edi
// 0040409b  8bce                 mov ecx, esi
// 0040409d  e83ef1ffff           call 0x4031e0
// 004040a2  8bce                 mov ecx, esi
// 004040a4  e837f1ffff           call 0x4031e0
// 004040a9  8b06                 mov eax, dword ptr [esi]
// 004040ab  85c0                 test eax, eax
// 004040ad  8b3dc4e67700         mov edi, dword ptr [0x77e6c4]
// 004040b3  740c                 je 0x4040c1
// 004040b5  50                   push eax
// 004040b6  ffd7                 call edi
// 004040b8  83c404               add esp, 4
// 004040bb  c70600000000         mov dword ptr [esi], 0
// 004040c1  8b4604               mov eax, dword ptr [esi + 4]
// 004040c4  85c0                 test eax, eax
// 004040c6  740d                 je 0x4040d5
// 004040c8  50                   push eax
// 004040c9  ffd7                 call edi
// 004040cb  83c404               add esp, 4
// 004040ce  c7460400000000       mov dword ptr [esi + 4], 0
// 004040d5  5f                   pop edi
// 004040d6  c7460800000000       mov dword ptr [esi + 8], 0
// 004040dd  5e                   pop esi
// 004040de  c3                   ret 

struct VCWorkspace_CComObject
{
    void* field0;
    void* field4;
    void* field8;
    void destroy();
};

extern "C" void __stdcall sub_4031E0(void*);
extern "C" void* __cdecl free_ptr;
extern "C" void __cdecl free_import(void*);

void VCWorkspace_CComObject::destroy()
{
    field0 = (void*)0x784efc;
    sub_4031E0(&field4);
    sub_4031E0(&field4);
    if (field4)
    {
        free_import(field4);
        field4 = 0;
    }
    if (field8)
    {
        free_import(field8);
        field8 = 0;
    }
    field8 = 0;
}
