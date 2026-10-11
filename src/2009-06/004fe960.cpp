// from server: 80% by atomic.potato
// roc 2009-06 004fe960  unit: RakPeer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fe960
//
// 004fe960  56                   push esi
// 004fe961  8b742408             mov esi, dword ptr [esp + 8]
// 004fe965  83fe03               cmp esi, 3
// 004fe968  7205                 jb 0x4fe96f
// 004fe96a  be09000000           mov esi, 9
// 004fe96f  6a30                 push 0x30
// 004fe971  6a00                 push 0
// 004fe973  684406a400           push 0xa40644
// 004fe978  e8f7b22100           call 0x719c74
// 004fe97d  83c40c               add esp, 0xc
// 004fe980  684406a400           push 0xa40644
// 004fe985  b94006a400           mov ecx, 0xa40640
// 004fe98a  e8a1ebffff           call 0x4fd530
// 004fe98f  8bc6                 mov eax, esi
// 004fe991  c1e004               shl eax, 4
// 004fe994  054406a400           add eax, 0xa40644
// 004fe999  5e                   pop esi
// 004fe99a  c20400               ret 4

extern "C" void __cdecl sub_719c74(void*, int, int);
extern "C" void __fastcall sub_4fd530(void*);

struct RakPeer {
    char pad[0x30];
};

RakPeer* sub_4fe960(int a);
RakPeer* sub_4fe960(int a) {
    if (a >= 3) {
        a = 9;
    }
    sub_719c74((void*)0xa40644, 0, 0x30);
    sub_4fd530((void*)0xa40640);
    return (RakPeer*)((a << 4) + 0xa40644);
}
