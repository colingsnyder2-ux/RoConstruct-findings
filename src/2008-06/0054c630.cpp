// from server: 100% by king_originala
// roc 2008-06 0054c630  unit: RBX::RenderBase::Mesh  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c630
//
// 0054c630  55                   push ebp
// 0054c631  8bec                 mov ebp, esp
// 0054c633  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c636  5d                   pop ebp
// 0054c637  c3                   ret 

#pragma optimize("", off)
void * __cdecl f(void *arg)
{
    return arg;
}
#pragma optimize("", on)
