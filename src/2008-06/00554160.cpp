// from server: 100% by atomic.potato
// roc 2008-06 00554160  unit: RBX::RenderBase::AggregateChunk  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554160
//
// 00554160  6a00                 push 0
// 00554162  6816b78000           push 0x80b716
// 00554167  e824feffff           call 0x553f90
// 0055416c  83c408               add esp, 8
// 0055416f  a3d0399700           mov dword ptr [0x9739d0], eax
// 00554174  c3                   ret 

extern "C" void * __cdecl sub_553f90(const char *, int);

void *g_9739d0;

void *sub_554160()
{
    g_9739d0 = sub_553f90((const char *)0x80b716, 0);
    return g_9739d0;
}
