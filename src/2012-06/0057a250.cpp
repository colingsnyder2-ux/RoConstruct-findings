// roc 2012-06 0057a250  unit: G3D::$$A6AXABVVector3int16::?$signal::Vslot::?$callable  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0057a250
//
// 0057a250  8b442404             mov eax, dword ptr [esp + 4]
// 0057a254  56                   push esi
// 0057a255  8bf1                 mov esi, ecx
// 0057a257  8b08                 mov ecx, dword ptr [eax]
// 0057a259  890e                 mov dword ptr [esi], ecx
// 0057a25b  8b5004               mov edx, dword ptr [eax + 4]
// 0057a25e  83c008               add eax, 8
// 0057a261  50                   push eax
// 0057a262  8d4e08               lea ecx, [esi + 8]
// 0057a265  895604               mov dword ptr [esi + 4], edx
// 0057a268  e803e9ffff           call 0x578b70
// 0057a26d  8bc6                 mov eax, esi
// 0057a26f  5e                   pop esi
// 0057a270  c20400               ret 4
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ??0GpuNamedConstants@Ogre@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
