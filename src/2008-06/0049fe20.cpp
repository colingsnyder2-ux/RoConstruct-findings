// from server: 100% by king_originala
// roc 2008-06 0049fe20  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$TSignalDesc::TSignalInstance  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049fe20
//
// 0049fe20  8b442404             mov eax, dword ptr [esp + 4]
// 0049fe24  50                   push eax
// 0049fe25  e8a69afeff           call 0x4898d0
// 0049fe2a  83c404               add esp, 4
// 0049fe2d  85c0                 test eax, eax
// 0049fe2f  7411                 je 0x49fe42
// 0049fe31  8bc8                 mov ecx, eax
// 0049fe33  e818feffff           call 0x49fc50
// 0049fe38  33c9                 xor ecx, ecx
// 0049fe3a  85c0                 test eax, eax
// 0049fe3c  0f95c1               setne cl
// 0049fe3f  8ac1                 mov al, cl
// 0049fe41  c3                   ret 
// 0049fe42  33c0                 xor eax, eax
// 0049fe44  33c9                 xor ecx, ecx
// 0049fe46  85c0                 test eax, eax
// 0049fe48  0f95c1               setne cl
// 0049fe4b  8ac1                 mov al, cl
// 0049fe4d  c3                   ret 

struct S {
    void *get();
};

extern S *__cdecl lookup(void *);

bool __cdecl func_0049fe20(void *arg)
{
    S *p = lookup(arg);
    return (p ? p->get() : 0) != 0;
}
