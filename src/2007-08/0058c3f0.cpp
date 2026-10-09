// from server: 100% by colin
// roc 2007-08 0058c3f0  unit: SoundServiceStatsItem  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058c3f0
//
// 0058c3f0  56                   push esi
// 0058c3f1  8bf1                 mov esi, ecx
// 0058c3f3  e898f9ffff           call 0x58bd90
// 0058c3f8  c706ccf37a00         mov dword ptr [esi], 0x7af3cc
// 0058c3fe  c74604c4f37a00       mov dword ptr [esi + 4], 0x7af3c4
// 0058c405  c74610bcf37a00       mov dword ptr [esi + 0x10], 0x7af3bc
// 0058c40c  c74614acf37a00       mov dword ptr [esi + 0x14], 0x7af3ac
// 0058c413  c7462c9cf37a00       mov dword ptr [esi + 0x2c], 0x7af39c
// 0058c41a  c746448cf37a00       mov dword ptr [esi + 0x44], 0x7af38c
// 0058c421  c7465c7cf37a00       mov dword ptr [esi + 0x5c], 0x7af37c
// 0058c428  c746746cf37a00       mov dword ptr [esi + 0x74], 0x7af36c
// 0058c42f  c7868c0000005cf37a00 mov dword ptr [esi + 0x8c], 0x7af35c
// 0058c439  c786e800000050f37a00 mov dword ptr [esi + 0xe8], 0x7af350
// 0058c443  8bc6                 mov eax, esi
// 0058c445  5e                   pop esi
// 0058c446  c3                   ret 

struct Stats_Item {
    void construct();
};

struct SoundServiceStatsItem : Stats_Item {
    SoundServiceStatsItem* construct();
};

SoundServiceStatsItem* SoundServiceStatsItem::construct()
{
    Stats_Item::construct();
    *(int*)((char*)this + 0) = 0x7af3cc;
    *(int*)((char*)this + 4) = 0x7af3c4;
    *(int*)((char*)this + 0x10) = 0x7af3bc;
    *(int*)((char*)this + 0x14) = 0x7af3ac;
    *(int*)((char*)this + 0x2c) = 0x7af39c;
    *(int*)((char*)this + 0x44) = 0x7af38c;
    *(int*)((char*)this + 0x5c) = 0x7af37c;
    *(int*)((char*)this + 0x74) = 0x7af36c;
    *(int*)((char*)this + 0x8c) = 0x7af35c;
    *(int*)((char*)this + 0xe8) = 0x7af350;
    return this;
}
