// from server: 78% by colin
// roc 2008-06 0057d570  unit: RBX::CameraTiltUpCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d570
//
// 0057d570  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057d573  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057d579  8b5004               mov edx, dword ptr [eax + 4]
// 0057d57c  81c188020000         add ecx, 0x288
// 0057d582  ffd2                 call edx
// 0057d584  6aff                 push -1
// 0057d586  8bc8                 mov ecx, eax
// 0057d588  e8b3ea0400           call 0x5cc040
// 0057d58d  c3                   ret 

struct CameraTiltUpCommand {
    char pad[0xc];
    void* workspace;
    bool doIt(void* dataState);
};

extern "C" void __stdcall func_005cc040(void*);

bool CameraTiltUpCommand::doIt(void* dataState)
{
    char* ws = (char*)workspace;
    void** vtbl = *(void***)(ws + 0x288);
    void* result = ((void* (__thiscall*)(void*))vtbl[1])(ws + 0x288);
    func_005cc040(result);
    return true;
}
