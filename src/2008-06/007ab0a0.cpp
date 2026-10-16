// =============================================================================
//  RenderScene_2008.cpp
//
//  C++ conversion of the 32-bit x86 (MSVC __thiscall) listing of RenderScene,
//  RenderScene_2008_assembly_only.asm, addresses 007AB0A0 .. 007AB819.
//
//  C++98/03 only -- compiled with MSVC 2005 (50727) / 2008 RTM (21022).
// =============================================================================

// MSVC 2005/2008: calling convention AFTER return type (void __cdecl f()).
#define RS_THISCALL
#define RS_STDCALL
#define RS_CDECL

namespace rs {

typedef unsigned char  u8;
typedef unsigned int   u32;
typedef unsigned long  size_t;
typedef unsigned long  uintptr_t;

// =============================================================================
// External routines referenced by the listing (not part of this listing)
// =============================================================================

// ---- direct calls (E8 rel32) ------------------------------------------------
void  __cdecl sub_5107B0(void* self, void* out);                 // call 5107B0 : ecx=pose, [esp]=&matrix
void* __cdecl sub_6A0920(size_t size);                          // call 6A0920 : operator new(size)
void* __cdecl sub_674160(void* self, void* a, void* b);          // call 674160 : ctor, returns this
void  __cdecl sub_7A9D30(void* self, void* ctx, u32 flag);       // call 7A9D30 : member helper (ctx, flag)
void  __cdecl sub_7A9C40(void* self);                            // call 7A9C40 : member helper on target
u32   __cdecl sub_513E20();                                     // call 513E20 : returns a value in eax
void  __cdecl sub_513220(void* self, u32 value);                 // call 513220 : ctor(value)
void  __cdecl sub_510B50(void* self, void* timing);              // call 510B50 : pose.update(timing)
void* __cdecl sub_67D1F0(void* self);                            // call 67D1F0 : ctor, returns this
void  __cdecl sub_67C520(void* self);                            // call 67C520 : member helper (no args)
void  __cdecl sub_548F80(void* self, float v);
void* __cdecl sub_7A9CE0(void* self, void* a);
void* __cdecl sub_7A9C90(void* self, void* a);
void  __cdecl sub_45AD90(void* self);
void* __cdecl sub_6A17C6(unsigned long size);
void  __cdecl imp_804338(void* self);
void* __cdecl imp_804344(void* self);
void  __cdecl imp_804340(void* self);
void  __cdecl imp_80425C(void* self, void* src);
void  __cdecl imp_804498(void* self);
void  __cdecl sub_548F80(void* self, float v);
void* __cdecl sub_7A9CE0(void* self, void* a);
void* __cdecl sub_7A9C90(void* self, void* a);
void  __stdcall sub_5493E0(void* ctx);                           // call 5493E0 : callee pops its argument
void  __stdcall sub_54A920(void* ctx);                           // call 54A920 : callee pops its argument
void  __cdecl sub_6A067A(void* p);                              // call 6A067A : operator delete(p)

// ---- indirect calls through import slots (call [addr]) ----------------------
void  __cdecl imp_804C78(void* self, void* arg);                 // ecx=&vec4, push &matrix
void  __cdecl imp_8043B4(void* self, void* vec4);                // ecx=device, push &vec4
void  __cdecl imp_804EA4(void* self, float a, float b, float c); // ecx=device, 3 floats
void  __cdecl imp_804E7C(void* self);                            // scope object: enter
void  __cdecl imp_804E80(void* self);                            // scope object: leave
int   __stdcall imp_8021AC(void* p);                             // p != 0 -> "pinned": skip release
void  __cdecl imp_802458(void* self, const char* text);          // NameRef::name ctor(text)
void  __cdecl imp_802468(void* self);                            // NameRef dtor
void* __cdecl imp_804E60();                                     // singleton/manager getter
void  __cdecl imp_804268(void* self, void* src);                 // SharedHandle::operator=(src)
void* __cdecl imp_8042FC();                                     // manager getter
void  __cdecl imp_8042F4(void* self, void* src);                 // SharedHandle::operator=(src)
void  __cdecl imp_804C68(void* self, const void* arg);           // ctor(arg) of a stack temporary
void* __cdecl imp_804258(void* self);                            // getter on global object
void  __cdecl imp_8048C4(void* self, void* arg);                 // ctor(arg) of a stack temporary

// NULL for MSVC 2005/2008
#ifndef NULL
#define NULL 0
#endif

// =============================================================================
// Memory helpers
// =============================================================================

// Typed access at a byte offset ("[base + off]").
template <class T>
inline T& At(void* base, size_t off) {
    return *reinterpret_cast<T*>(static_cast<unsigned char*>(base) + off);
}

// Address of a byte offset ("lea reg, [base + off]").
inline void* Addr(void* base, size_t off) {
    return static_cast<unsigned char*>(base) + off;
}

// Virtual call helpers (overloads for 0-5 args, C++98 compatible).
template <class R>
inline R VCall(void* obj, size_t vtblOff) {
    typedef R (*Fn)(void*);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[vtblOff / 4])(obj);
}

template <class R, class A1>
inline R VCall(void* obj, size_t vtblOff, A1 a1) {
    typedef R (*Fn)(void*, A1);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[vtblOff / 4])(obj, a1);
}

template <class R, class A1, class A2>
inline R VCall(void* obj, size_t vtblOff, A1 a1, A2 a2) {
    typedef R (*Fn)(void*, A1, A2);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[vtblOff / 4])(obj, a1, a2);
}

template <class R, class A1, class A2, class A3>
inline R VCall(void* obj, size_t vtblOff, A1 a1, A2 a2, A3 a3) {
    typedef R (*Fn)(void*, A1, A2, A3);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[vtblOff / 4])(obj, a1, a2, a3);
}

template <class R, class A1, class A2, class A3, class A4>
inline R VCall(void* obj, size_t vtblOff, A1 a1, A2 a2, A3 a3, A4 a4) {
    typedef R (*Fn)(void*, A1, A2, A3, A4);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[vtblOff / 4])(obj, a1, a2, a3, a4);
}

template <class R, class A1, class A2, class A3, class A4, class A5>
inline R VCall(void* obj, size_t vtblOff, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
    typedef R (*Fn)(void*, A1, A2, A3, A4, A5);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[vtblOff / 4])(obj, a1, a2, a3, a4, a5);
}

template <class R, class A1, class A2, class A3, class A4, class A5, class A6>
inline R VCall(void* obj, size_t vtblOff, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) {
    typedef R (*Fn)(void*, A1, A2, A3, A4, A5, A6);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[vtblOff / 4])(obj, a1, a2, a3, a4, a5, a6);
}

// String literal located at its address in the original image.
inline const char* Lit(uintptr_t addr) {
    return reinterpret_cast<const char*>(addr);
}

// Vtable pointer installed in the handle temporaries (mov esi, 0x826BC4).
void* const kSharedRefVTable = reinterpret_cast<void*>(0x826BC4u);

// Module data used by the listing (absolute addresses).
float g_vec3Cache[3]   = {0.0f, 0.0f, 0.0f};  // 0x96F044 / 0x96F048 / 0x96F04C
u32   g_vec3CacheFlags = 0;                    // 0x96F050, bit 0 = initialised
u8    g_942EBC         = 0;                    // 0x942EBC, diagnostics enable
void* g_9738BC         = NULL;                 // 0x9738BC, global object pointer

// =============================================================================
// Data layouts recovered from the listing
// =============================================================================

// 12-byte handle written by the assignment imports (804268 / 8042F4).
struct SharedHandle {
    void* vptr;
    void* ptr;
    u32*  rc;
};

// Name/key temporary: kind at +0, string storage at +4.
struct NameRef {
    u32           kind;
    unsigned char name[0x1C];
};

// Node of a per-item result list: value at +0, next at +4.
struct ListNode {
    void*     value;
    ListNode* next;
};

// 4x4 float block filled by sub_5107B0.
struct Matrix4 {
    float m[16];
};

// Offsets of RenderScene fields ([ebp + N] in the listing).
static const size_t kItems     = 0x008;   // void** items
static const size_t kItemCount = 0x00C;   // int    itemCount
static const size_t kBackend   = 0x268;   // void*  backend   (0x248-byte object, created lazily)
static const size_t kTarget    = 0x26C;   // void*  target    (0x2BC-byte object, created lazily)
static const size_t kHandle270 = 0x270;   // SharedHandle (assigned via imp_804268)
static const size_t kFlag274   = 0x274;   // int
static const size_t kSub27C    = 0x27C;   // embedded sub-object (assigned via imp_8042F4)
static const size_t kFlag280   = 0x280;   // int
static const size_t kFlagF4    = 0x2F4;   // bool
static const size_t kFlagF6    = 0x2F6;   // bool
static const size_t kClear     = 0x328;   // float clear[3]

// Offsets of the context object (arg1, "edi").
static const size_t kCtxA      = 0x004;   // object with vtable 268/278/B4
static const size_t kCtxDevice = 0x008;   // device/renderer object (vtable 114/11C/124)
static const size_t kCtxFlag   = 0x7F5;   // byte

// Offsets of the pose object (arg2, "esi").
static const size_t kPose4     = 0x004;   // float
static const size_t kPoseC     = 0x00C;   // float
static const size_t kPose10    = 0x010;   // float

// Stack-frame slots: listing operand [esp+N] == frame byte N.
namespace frame {
    static const size_t kP18       = 0x18;   // item query result (007AB7CA)
    static const size_t kOut20     = 0x20;   // item query out-param, pass 1
    static const size_t kR24       = 0x24;   // int (zeroed at 007AB80A)
    static const size_t kFloat28   = 0x28;   // float passed by pointer (007AB1E5)
    static const size_t kP3C       = 0x3C;   // list out-param, pass 2
    static const size_t kP44       = 0x44;   // list out-param, pass 2
    static const size_t kP4C       = 0x4C;   // list out-param, pass 2
    static const size_t kVec4A     = 0x5C;   // {clear.r, clear.g, clear.b, 1} (007AB117)
    static const size_t kHandleB   = 0x5C;   // SharedHandle reusing kVec4A  (007AB3DD)
    static const size_t kHandleA   = 0x6C;   // SharedHandle                 (007AB324)
    static const size_t kNameD8    = 0xD8;   // NameRef                      (007AB24F, 007AB304, 007AB398)
    static const size_t kVec4One   = 0x100;  // {1, 0, 0, 0}                 (007AB146)
    static const size_t kGuard230  = 0x230;  // scope object                 (007AB205)
    static const size_t kMatrix260 = 0x260;  // Matrix4                      (007AB0CF)
    static const size_t kNameF8    = 0x1F8;  // NameRef                      (007AB398)
    static const size_t kTiming1A8 = 0x1A8;  // timing object, vec3 at +0x24 (007AB5C5)
}

// =============================================================================
// Release helpers (the refcount / list teardown sequences of the listing)
// =============================================================================

// 007AB35C..007AB374 and 007AB40B..007AB435:
//   if (h.rc && --*h.rc == 0) h.vptr[1](&h);
inline void ReleaseHandle(SharedHandle& h) {
    if (h.rc != NULL && --(*h.rc) == 0) {
        VCall<void>(&h, 0x04);
    }
}

// 007AB4F7..007AB543 (identical blocks at 007AB67A.. and 007AB77A..):
//   if (slot && !imp_8021AC(slot + 4)) {
//       for (n = slot->list; n; n = next) { n->value->vtbl[1](); next = n->next; free(n); }
//       slot->vtbl[0](1);                    // scalar deleting destructor
//   }
//   slot = NULL;
inline void ReleaseSlot(void*& slot) {
    if (slot != NULL && imp_8021AC(static_cast<char*>(slot) + 4) == 0) {
        ListNode* node = At<ListNode*>(slot, 0x08);
        while (node != NULL) {
            VCall<void>(node->value, 0x04);
            ListNode* next = node->next;
            sub_6A067A(node);
            node = next;
        }
        VCall<void>(slot, 0x00, 1);
    }
    slot = NULL;
}

// =============================================================================
// RenderScene
// =============================================================================

class RenderScene {
public:
    // 007AB0A0 : thiscall, this = ecx, ctx = arg1, pose = arg2.
    void Render(void* ctx, void* pose);
};

void RenderScene::Render(void* ctx, void* pose)
{
    using namespace frame;
    unsigned char f[0x310] = {};   // stack frame ([esp+N] == f[N])

    // ---- 007AB0BF..007AB0E4 : device, matrix, [ctx+4] and flag -------------
    void* device = *reinterpret_cast<void**>(reinterpret_cast<char*>(ctx) + kCtxDevice);  // mov esi,[edi+8]
    float* mat = &At<float>(f, kMatrix260);               // lea eax,[esp+260h]
    sub_5107B0(pose, mat);                               // ecx = pose, push &mat, call
    bool flagF4 = *reinterpret_cast<u8*>(reinterpret_cast<char*>(this) + kFlagF4) != 0;  // mov al,[ebp+2F4h]
    void* ctx4  = *reinterpret_cast<void**>(reinterpret_cast<char*>(ctx) + kCtxA);       // mov ecx,[edi+4]

    // ---- 007AB0F2..007AB144 : draw-state update on ctx+4 -------------------
    if (flagF4) {
        VCall<void>(ctx4, 0x268, 0x12);                   // push 12h ; call [vtbl+268h]
        float* v4 = &At<float>(f, kVec4A);               // lea eax,[esp+5Ch]
        v4[0] = *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + kClear + 0);   // fld [ebp+328h]
        v4[1] = *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + kClear + 4);   // fld [ebp+32Ch]
        v4[2] = *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + kClear + 8);   // fld [ebp+330h]
        v4[3] = 1.0f;                                     // fld1
        VCall<void>(ctx4, 0x278, static_cast<void*>(v4)); // push &v4 ; call [vtbl+278h]
    } else {
        VCall<void>(ctx4, 0x268, 0);                      // push 0 ; call [vtbl+268h]
    }

    // ---- 007AB146..007AB185 : constant vector and device call --------------
    float* one = &At<float>(f, kVec4One);                // lea eax,[esp+100h]
    one[0] = 1.0f;                                        // fld1
    one[1] = 0.0f;                                        // fldz
    one[2] = 0.0f;
    one[3] = 0.0f;
    imp_804C78(one, mat);                                 // ecx=&one, push &mat, call [804C78]
    imp_8043B4(device, one);                              // ecx=device, push &one, call [8043B4]

    // ---- 007AB18B..007AB1B0 : device->imp_804EA4(m[9], m[10], m[11]) -------
    imp_804EA4(device, mat[9], mat[10], mat[11]);

    // ---- 007AB1B6..007AB1FC : renderer calls with pose components ----------
    void* renderer = *reinterpret_cast<void**>(reinterpret_cast<char*>(ctx) + kCtxDevice);  // mov ecx,[edi+8]
    VCall<void>(renderer, 0x11C, *reinterpret_cast<float*>(reinterpret_cast<char*>(pose) + kPoseC));   // fld [esi+0Ch]
    VCall<void>(renderer, 0x124, *reinterpret_cast<float*>(reinterpret_cast<char*>(pose) + kPose10));  // fld [esi+10h]
    At<float>(f, kFloat28) = *reinterpret_cast<float*>(reinterpret_cast<char*>(pose) + kPose4);        // fld [esi+4] ; fstp [esp+28h]
    VCall<void>(renderer, 0x114, Addr(f, kFloat28));         // push &[esp+28h]

    // ---- 007AB205..007AB21D : scope object enter / leave -------------------
    imp_804E7C(Addr(f, kGuard230));
    imp_804E80(Addr(f, kGuard230));

    // ---- 007AB223..007AB2AC : lazily create the backend at this+268h -------
    if (At<void*>(this, kBackend) == NULL) {
        void* mem = sub_6A0920(0x248);                    // operator new(0248h)
        bool  built = false;                              // ebx
        NameRef& nr = At<NameRef>(f, kNameD8);
        void* created = NULL;
        if (mem != NULL) {
            imp_802458(&nr.name, Lit(0x84F534));          // name = literal @84F534
            built = true;                                 // mov ebx,1
            created = sub_674160(mem, At<void*>(ctx, kCtxA), &nr);  // ctor(ctx+4, &nr)
        }
        At<void*>(this, kBackend) = created;              // mov [ebp+268h],eax
        if (built) {
            imp_802468(&nr);                              // dtor of the temporary
        }
        // 007AB2AC : ctx->vtbl[B4h]()->vtbl[C8h](backend)
        void* r = VCall<void*>(At<void*>(ctx, kCtxA), 0xB4);
        VCall<void>(r, 0xC8, At<void*>(this, kBackend));
    }

    // ---- 007AB2CC..007AB2DE : per-frame object update ----------------------
    u8 flagF6 = At<u8>(this, kFlagF6);                    // mov al,[ebp+2F6h]
    sub_7A9D30(this, ctx, flagF6 != 0 ? 1u : 0u);        // push flag ; push ctx ; call

    // ---- 007AB2E3 : read ctx flag, then (if [ebp+274h]==0) pass 1 ---------
    u8 flag13 = At<u8>(ctx, kCtxFlag);                    // mov dl,[edi+7F5h]
    if (At<int>(this, kFlag274) == 0) {
        // 007AB2FF..007AB37D
        NameRef& nr2 = At<NameRef>(f, kNameD8);
        imp_802458(&nr2.name, Lit(0x874A70));
        void* mgr = imp_804E60();
        SharedHandle& tA = At<SharedHandle>(f, kHandleA);
        void* res = VCall<void*>(mgr, 0x4C, &tA, &nr2);  // push &nr2 ; push &tA ; call [vtbl+4Ch]
        imp_804268(Addr(this, kHandle270), res);          // ecx=&[ebp+270h], push res
        tA.vptr = kSharedRefVTable;                       // mov [esp+6Ch],esi
        ReleaseHandle(tA);
        imp_802468(&nr2);
    }

    // ---- 007AB38B..007AB45B : if ([ebp+280h]==0) pass 2 -------------------
    if (At<int>(this, kFlag280) == 0) {
        NameRef& nrF8 = At<NameRef>(f, kNameF8);
        imp_802458(&nrF8.name, Lit(0x8163C4));
        NameRef& nr2 = At<NameRef>(f, kNameD8);
        imp_802458(&nr2.name, Lit(0x84D4E4));
        void* mgr2 = imp_8042FC();
        SharedHandle& tB = At<SharedHandle>(f, kHandleB);
        // push 0 ; push 0 ; push 0 ; push &nrF8 ; push &nr2 ; push &tB ; call [vtbl+14h]
        void* res2 = VCall<void*>(mgr2, 0x14, &tB, &nr2, &nrF8, 0, 0, 0);
        imp_8042F4(Addr(this, kSub27C), res2);            // ecx=&[ebp+27Ch], push res2
        tB.vptr = kSharedRefVTable;                       // mov [esp+5Ch],esi
        ReleaseHandle(tB);
        imp_802468(&nr2);
        imp_802468(&nrF8);
    }

    // ---- 007AB461..007AB4D3 : lazily create the target at this+26Ch -------
    if (At<void*>(this, kTarget) == NULL && At<int>(this, kItemCount) != 0) {
        void* mem2 = sub_6A0920(0x2BC);                   // operator new(02BCh)
        void* target = NULL;
        if (mem2 != NULL) {
            target = sub_67D1F0(mem2);                    // ctor, returns this
        }
        At<void*>(this, kTarget) = target;                // mov [ebp+26Ch],eax
        void* backend = At<void*>(this, kBackend);        // mov ecx,[ebp+268h]
        VCall<void>(backend, 0x130, target);              // push eax ; call [vtbl+130h]
        unsigned char tmp12[0x0C] = {};                   // sub esp,0Ch ; ecx = esp
        imp_804C68(tmp12, Addr(this, kSub27C));           // push &[ebp+27Ch] ; call [804C68]
        sub_67C520(At<void*>(this, kTarget));             // ecx = target
    }

    // ---- 007AB4D8..007AB54B : pass 1 over items, release their results ----
    int    count = At<int>(this, kItemCount);
    void** items = At<void**>(this, kItems);
    for (int i = 0; i < count; ++i) {
        void* item = items[i];                            // mov ecx,[eax+edi*4]
        if (item == NULL) {
            continue;                                     // je 7AB547
        }
        VCall<void>(item, 0x18, &At<void*>(f, kOut20));   // push &[esp+20h] ; call [vtbl+18h]
        ReleaseSlot(At<void*>(f, kOut20));                // 7AB4F7..7AB543
    }

    // ---- 007AB54D..007AB5C0 : diagnostics block (g_942EBC && count && flag13)
    if (g_942EBC != 0 && count != 0 && flag13 != 0) {
        sub_5493E0(ctx);                                  // push [esp+330h] ; call 5493E0
        unsigned char tmp8[0x08] = {};                    // sub esp,8
        imp_804C68(tmp8, Lit(0x9738B8));                  // ecx=esp ; push literal ; call [804C68]
        sub_67C520(At<void*>(this, kTarget));             // ecx = target
        void* tgt = At<void*>(this, kTarget);
        if (At<int>(tgt, kSub27C + 0x18) == 0) {          // cmp [target+27Ch+18h], 0
            void* g    = g_9738BC;                        // mov ecx,[9738BCh]
            void* res3 = imp_804258(g);                   // call [804258]
            unsigned char tmp20[0x20] = {};               // sub esp,20h
            imp_8048C4(tmp20, res3);                      // push eax ; call [8048C4]
            sub_7A9C40(At<void*>(this, kTarget));         // ecx = target
        }
    }

    // ---- 007AB5C5..007AB5D2 : timing object -------------------------------
    u32 t = sub_513E20();                                 // call 513E20
    sub_513220(Addr(f, kTiming1A8), t);                   // push eax ; ecx=&[esp+1ACh] ; call 513220

    // ---- 007AB5D7..007AB5E9 : lazily initialise the static vec3 cache -----
    if ((g_vec3CacheFlags & 1u) == 0) {
        g_vec3CacheFlags |= 1u;                           // or dword [96F050h], 1
        g_vec3Cache[0] = 0.0f;                            // fldz ; fst ...
        g_vec3Cache[1] = 0.0f;
        g_vec3Cache[2] = 0.0f;
    }

    // ---- 007AB5FB..007AB631 : copy cache into the timing object, call pose --
    At<float>(f, kTiming1A8 + 0x24) = g_vec3Cache[0];   // fstp [esp+1CCh]
    At<float>(f, kTiming1A8 + 0x28) = g_vec3Cache[1];   // fstp [esp+1D0h]
    At<float>(f, kTiming1A8 + 0x2C) = g_vec3Cache[2];   // fstp [esp+1D4h]
    sub_510B50(pose, Addr(f, kTiming1A8));              // ecx = pose, push &timing ; call

    // ---- 007AB636..007AB819 : pass 2 over items (listing ends at 007AB819) -
    for (int i = 0; i < count; ++i) {
        void* item = items[i];                            // mov ebx,[edx+eax*4]
        if (item == NULL) {
            continue;                                     // je 7ACB33
        }

        // 007AB659 : first query (slot 18h) -> r1 ; flag11 = (*r1 != 0)
        void* r1 = VCall<void*>(item, 0x18, &At<void*>(f, kP3C));
        bool flag11 = At<int>(r1, 0) != 0;                // cmp dword [eax],0 ; setne
        ReleaseSlot(At<void*>(f, kP3C));                  // 7AB67A..7AB6BB

        // 007AB6BF : second query (slot 14h) -> r2 ; flag12 = (*r2 != 0)
        void* r2 = VCall<void*>(item, 0x14, &At<void*>(f, kP44));
        bool flag12 = At<int>(r2, 0) != 0;                // cmp dword [eax],0 ; setne
        ReleaseSlot(At<void*>(f, kP44));                  // 7AB6DA..7AB720

        if (!flag11) continue;                            // cmp byte [esp+11h],0 ; je 7ACB33
        if (!flag12) continue;                            // cmp byte [esp+12h],0 ; je 7ACB33

        // 007AB73A : third query (slot 14h) -> r3 ; obj = *r3 ; r4 = obj->vtbl[18h](0.0f)
        void* r3  = VCall<void*>(item, 0x14, &At<void*>(f, kP4C));
        void* obj = *static_cast<void**>(r3);             // mov ecx,[eax]
        void* r4  = VCall<void*>(obj, 0x18, 0.0f);        // fldz ; push ecx ; fstp [esp]
        flag11 = (r4 == NULL);                            // test eax,eax ; sete
        ReleaseSlot(At<void*>(f, kP4C));                  // 7AB77A..7AB7BB

        if (flag11) continue;                             // cmp byte [esp+11h],0 ; jne 7ACB33

        // 007AB7CA : fourth query (slot 18h) -> p18 (out-param)
        VCall<void>(item, 0x18, &At<void*>(f, kP18));
        void* p18 = At<void*>(f, kP18);

        // 007AB7D8 : if ([ebp+2F4h]) and [p18+80h]==0 -> sub_54A920(ctx)
        if (At<u8>(this, kFlagF4) != 0 && At<int>(p18, 0x80) == 0) {
            sub_54A920(ctx);                              // push [esp+330h] ; call 54A920
        }

        // 007AB802 : result slot cleared; if (p18->+10h == 2) take vtbl[1Ch]
        At<int>(f, kR24) = 0;                             // mov [esp+24h], edi (= 0)
        if (At<int>(p18, 0x10) == 2) {
            void* r5 = VCall<void*>(item, 0x1C);          // mov edx,[ebx] ; call [edx+1Ch]
            float floatVal = 0.0f;
            {
                float d0 = At<float>(r5, 0x24) - At<float>(f, kTiming1A8 + 0x24);
                float d1 = At<float>(r5, 0x28) - At<float>(f, kTiming1A8 + 0x28);
                float d2 = At<float>(r5, 0x2C) - At<float>(f, kTiming1A8 + 0x2C);
                float sum = d0 * At<float>(f, kTiming1A8 + 0x20) +
                            d1 * At<float>(f, kTiming1A8 + 0x1C) +
                            d2 * At<float>(f, kTiming1A8 + 0x18);
                floatVal = (sum < 0.0f) ? 1.0f : 0.0f;
            }
            At<int>(f, kR24) = (floatVal != 0.0f) ? 1 : 0;
            sub_548F80(p18, floatVal);

            if (At<int>(p18, 0x84) == 4) {
                void** itemObj = &items[i];
                if (*itemObj && reinterpret_cast<unsigned char*>(*itemObj)[0x1C] && !At<u8>(ctx, kCtxFlag)) {
                    sub_548F80(p18, 0.0f);
                }
            }

            ReleaseSlot(At<void*>(f, kP18));
        }
    }
}

}  // namespace rs
