// roc 2012-06 0046c8f0  unit: RBX::TeleportCallback  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046c8f0
//
// 0046c8f0  8b442404             mov eax, dword ptr [esp + 4]
// 0046c8f4  83f807               cmp eax, 7
// 0046c8f7  7725                 ja 0x46c91e
// 0046c8f9  ff248524c94600       jmp dword ptr [eax*4 + 0x46c924]
// 0046c900  b815000000           mov eax, 0x15
// 0046c905  c3                   ret 
// 0046c906  b846000000           mov eax, 0x46
// 0046c90b  c3                   ret 
// 0046c90c  b850000000           mov eax, 0x50
// 0046c911  c3                   ret 
// 0046c912  b8bb010000           mov eax, 0x1bb
// 0046c917  c3                   ret 
// 0046c918  b838040000           mov eax, 0x438
// 0046c91d  c3                   ret 
// 0046c91e  33c0                 xor eax, eax
// 0046c920  c3                   ret 
// 0046c921  8d4900               lea ecx, [ecx]
// 0046c924  00c9                 add cl, cl
// 0046c926  46                   inc esi
// 0046c927  0006                 add byte ptr [esi], al
// 0046c929  c9                   leave 
// 0046c92a  46                   inc esi
// 0046c92b  000cc9               add byte ptr [ecx + ecx*8], cl
// 0046c92e  46                   inc esi
// 0046c92f  0012                 add byte ptr [edx], dl
// 0046c931  c9                   leave 
// 0046c932  46                   inc esi
// 0046c933  001e                 add byte ptr [esi], bl
// 0046c935  c9                   leave 
// 0046c936  46                   inc esi
// 0046c937  001e                 add byte ptr [esi], bl
// 0046c939  c9                   leave 
// 0046c93a  46                   inc esi
// 0046c93b  001e                 add byte ptr [esi], bl
// 0046c93d  c9                   leave 
// 0046c93e  46                   inc esi
// 0046c93f  0018                 add byte ptr [eax], bl
// 0046c941  c9                   leave 
// 0046c942  46                   inc esi
// copied from an identical function in another client (function ?f@@YAHI@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
int __cdecl f(unsigned int value)
{
    switch (value)
    {
    case 0: return 21;
    case 1: return 70;
    case 2: return 80;
    case 3: return 443;
    case 7: return 1080;
    default: return 0;
    }
}