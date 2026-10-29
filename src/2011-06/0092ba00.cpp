// roc 2011-06 0092ba00  unit: std::D::DU?$char_traits::V?$basic_string::V?$_Tset_traits::?$_Tree_nod::PAU_Node::?$STLAllocator  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092ba00
//
// 0092ba00  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0092ba04  8b542408             mov edx, dword ptr [esp + 8]
// 0092ba08  8b442404             mov eax, dword ptr [esp + 4]
// 0092ba0c  8b00                 mov eax, dword ptr [eax]
// 0092ba0e  51                   push ecx
// 0092ba0f  52                   push edx
// 0092ba10  ffd0                 call eax
// 0092ba12  83c408               add esp, 8
// 0092ba15  c3                   ret 
// copied from an identical function in another client (function ?sub_748f30@@YAHHHH@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" int __cdecl helper(int, int);

int __cdecl sub_748f30(int a, int b, int c)
{
    int (*fn)(int, int) = *(int (**)(int, int))a;
    return fn(b, c);
}