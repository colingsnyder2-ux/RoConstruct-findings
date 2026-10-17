// from server: 24% by colin
struct OgreVector3 { float x, y, z; OgreVector3(); OgreVector3(const OgreVector3&); OgreVector3& operator=(const OgreVector3&); };

struct SubEntity {
    float getScale();
    void setVisible(int);
    float getBoundingRadius();
    OgreVector3 getWorldPosition();
    void setMaterialName(const char*);
    void setRenderQueueGroup(int);
    int isVisible();
};

struct Entity {
    char pad0[0xe4];
    void* vecBegin;
    void* vecEnd;
    char pad1[0x274-0xec];
    void* sceneNode;
    char visible;
    char pad2;
    char flag27a;
    char pad3[0x29c-0x27b];
    int minVal;
    int maxVal;
    void* vec2Begin;
    char pad5[0x2b0-0x2a8];
    char* arrBegin;
    char* arrEnd;
    void update(int);
};

extern "C" {
    void* __stdcall sub_6a17c6(void*, const char*, const char*, int, int);
    void* __stdcall sub_6a0920(int);
    void __stdcall sub_6a067a(void*);
    void* __stdcall sub_6a1704(void*, int, int);
    float __stdcall sub_6a17f0(float);
    int __stdcall sub_71f210(void*);
    void __stdcall sub_65b430(void*, int, int, int);
    void __stdcall sub_65aee0(void*, void*, void*, void*, void*);
    void __stdcall sub_516280(void*, int, int);
    void __stdcall sub_67d820(void*, void*, void*, int);
    void* __stdcall sub_678630(void*, int);
    void __stdcall sub_6785f0(void*, void*);
    void __stdcall sub_679990(void*, int);
}

void Entity::update(int arg) {
    sub_6a17c6(*(void**)this, (const char*)0x932cec, (const char*)0x932d04, 0, 0);
    void* p = sub_6a0920(4);
    if (p) *(void**)p = &p;
    else p = 0;
    void* local = p;
    void* a = 0;
    void* c = 0;
    int flag = 1;
    if (*(char*)0x962f64 && sceneNode) {
        int n = ((char*)vecEnd - (char*)vecBegin) >> 2;
        sub_65b430(&a, n, 0, 0);
        void* e = vecEnd;
        void* f = vecBegin;
        if ((unsigned)f > (unsigned)e) sub_6a067a(0);
        void* g = vecEnd;
        void* h = vecBegin;
        if ((unsigned)h > (unsigned)g) sub_6a067a(0);
        sub_65aee0(&c, vecBegin, vecEnd, 0, 0);
        if (((char*)vecEnd - (char*)vecBegin) & 0xfffffffc) {
            int n2 = ((char*)vecEnd - (char*)vecBegin) >> 2;
            sub_516280(&vec2Begin, n2, 0);
            int sz = (int)((char*)vec2Begin - (char*)vec2Begin);
            sub_6a1704(vec2Begin, 0, sz);
        }
        int count = ((char*)vecEnd - (char*)vecBegin) >> 2;
        for (int i = 0; i < count; i++) {
            void* sub = sub_6a17c6(*(void**)((char*)vecBegin + i*4), (const char*)0x962ffc, (const char*)0x96301c, 0, 0);
            SubEntity* se = (SubEntity*)sub;
            float r = se->getBoundingRadius();
            OgreVector3 wp = se->getWorldPosition();
            if (!se->isVisible()) se->setVisible(1);
            OgreVector3 pos;
            pos = wp;
            pos.x += r;
            pos.y += r;
            pos.z += r;
            bool vis = true;
            if (visible) { ((Entity*)this)->update(0); vis = true; }
            se->setVisible(vis);
            if (!vis) {
                arrBegin[i] = 2;
            } else {
                arrBegin[i] = 1;
                if (flag) {
                    se->setMaterialName((const char*)0);
                    se->getScale();
                    se->setRenderQueueGroup(0);
                }
            }
        }
    }
    if (flag) {
        int cnt = ((char*)vecEnd - (char*)vecBegin) >> 2;
        int idx = cnt;
        int r = sub_71f210(sceneNode);
        if (r > 0x1e) {
            void* e = sub_678630(sceneNode, 0);
            sub_679990(sceneNode, 0x14);
            float f = 1.0f / *(float*)&e;
            float g = f * (*(float*)e - 0.0f);
            float s = sub_6a17f0(g);
            if (s < 0.0f) {
                if (*(float*)((char*)e+4) > *(float*)((char*)e+8)) {
                    float t = (float)cnt;
                    if (t > *(float*)((char*)e+8)) t = *(float*)((char*)e+8);
                    idx = (int)sub_6a17f0(t);
                } else {
                    idx = cnt;
                }
            } else {
                float lim = *(float*)0x962f6c;
                if (s > lim) {
                    float q = *(float*)0x962f70;
                    if (q == lim) {
                        idx = (int)sub_6a17f0((float)idx * *(float*)((char*)e+8));
                    } else {
                        float t = (s - lim) / (q - lim);
                        float u = 1.0f - t;
                        float v = u * *(float*)((char*)e+8);
                        idx = (int)sub_6a17f0(v);
                    }
                    if ((float)idx > (float)cnt * *(float*)((char*)e+8)) {
                        idx = (int)sub_6a17f0((float)cnt * *(float*)((char*)e+8));
                    }
                    if (sub_6a17f0((float)idx - *(float*)((char*)e+8)) < 0.0f) {
                        idx = (int)sub_6a17f0(*(float*)((char*)e+8));
                    }
                    if (idx < minVal) idx = minVal;
                } else {
                    if (*(float*)((char*)e+4) > *(float*)((char*)e+8)) {
                        float t = (float)idx;
                        if (t > *(float*)((char*)e+8)) t = *(float*)((char*)e+8);
                        idx = (int)sub_6a17f0(t);
                    } else {
                        idx = cnt;
                    }
                }
            }
        }
        if (idx > cnt) idx = cnt;
        if (idx < cnt) {
            sub_67d820(vecBegin, vecEnd, 0, idx);
            for (int i = idx; i < cnt; i++) {
                void* sub = sub_6a17c6(*(void**)((char*)vecBegin + i*4), (const char*)0x962ffc, (const char*)0x96301c, 0, 0);
                ((SubEntity*)sub)->setVisible(0);
                arrBegin[i] = 3;
            }
        }
        if (flag27a) {
            float f = *(float*)0x81c3b8;
            sub_6785f0(sceneNode, &f);
            void* e = sub_678630(sceneNode, 0);
            *(float*)((char*)e+4) = (float)cnt;
            *(float*)((char*)e+8) = (float)idx;
        }
    }
    if (a) sub_6a067a(a);
    if (local) sub_6a067a(local);
}
