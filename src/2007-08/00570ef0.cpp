// from server: 95% by colin
// roc 2007-08 00570ef0  unit: RBX::Reflection::ClassDescriptor  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570ef0
//
// 00570ef0  8b442408             mov eax, dword ptr [esp + 8]
// 00570ef4  50                   push eax
// 00570ef5  ff542408             call dword ptr [esp + 8]
// 00570ef9  59                   pop ecx
// 00570efa  c3                   ret 

typedef int (__stdcall *ThunkFn)(int);

int __cdecl WrapperThunk(ThunkFn fn, int value)
{
    return fn(value);
}
