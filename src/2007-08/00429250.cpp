// from server: 67% by colin
// roc 2007-08 00429250  unit: ThreadLogManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00429250
//
// 00429250  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00429254  8b01                 mov eax, dword ptr [ecx]
// 00429256  8b5004               mov edx, dword ptr [eax + 4]
// 00429259  56                   push esi
// 0042925a  ffd2                 call edx
// 0042925c  8bf0                 mov esi, eax
// 0042925e  56                   push esi
// 0042925f  6a01                 push 1
// 00429261  e8dae9ffff           call 0x427c40
// 00429266  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042926a  83c408               add esp, 8
// 0042926d  6a00                 push 0
// 0042926f  686c4e7c00           push 0x7c4e6c
// 00429274  6a00                 push 0
// 00429276  6a00                 push 0
// 00429278  56                   push esi
// 00429279  50                   push eax
// 0042927a  e8e1fdffff           call 0x429060
// 0042927f  5e                   pop esi
// 00429280  c3                   ret 

extern "C" int __stdcall sub_427c40(int, int);
extern "C" int __stdcall sub_429060(int, int, int, int, int, int);

struct ThreadLogManager {
    int field0;
    int getLogFileName();
};

int ThreadLogManager::getLogFileName()
{
    int* p = *(int**)((char*)this + 8);
    int (*fn)(void*) = (int (*)(void*))p[1];
    int r = fn(p);
    sub_427c40(r, 1);
    int a = *(int*)((char*)this + 16);
    sub_429060(a, r, 0, 0, 0x7c4e6c, 0);
    return r;
}
