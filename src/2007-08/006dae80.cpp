// from server: 64% by colin
struct CXTPReportControl;

struct CReportDropTarget {
    void OnDrop(int);
};

extern "C" int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);

extern int g_bDragActive;
extern void* g_pDragSource;

struct CXTPReportControlLayout {
    char pad[0x54];
    int field_54;
    char pad2[0xa8 - 0x58];
    void* field_a8;
};

struct DragSourceLayout {
    char pad[0xe4];
    void* field_e4;
};

struct DragSourceInner {
    char pad[0x1a0];
    void* field_1a0;
};

struct DragSourceInner2 {
    char pad[0x54];
    void* field_54;
};

struct DragSourceInner3 {
    char pad[0xcc];
    void* field_cc;
};

extern int __stdcall sub_6e0540(void*, int, void*, int, int);
extern int __stdcall sub_66e000(void*);
extern void __stdcall sub_62ff4a(void*, int);
extern void __stdcall sub_6d9dd0(void*);

void CReportDropTarget::OnDrop(int param)
{
    if (g_bDragActive == 0)
        return;

    CXTPReportControlLayout* self = (CXTPReportControlLayout*)this;
    if (self->field_a8 == 0)
        return;

    DragSourceLayout* ds = (DragSourceLayout*)self->field_a8;
    if (ds->field_e4 != 0)
    {
        DragSourceInner* inner = (DragSourceInner*)ds->field_e4;
        void* p = inner->field_1a0;
        int r = sub_6e0540(&self->field_54, 0xa, p, 0, 0);
        if (sub_66e000((void*)r) != 0)
            return;

        ds = (DragSourceLayout*)self->field_a8;
        inner = (DragSourceInner*)ds->field_e4;
        p = inner->field_1a0;
        r = sub_6e0540(&self->field_54, 0xb, p, 0, 0);
        sub_66e000((void*)r);
    }

    if (param != 0)
    {
        ds = (DragSourceLayout*)self->field_a8;
        if (ds->field_e4 != 0)
        {
            sub_62ff4a(ds->field_e4, 0);
            int r = sub_6e0540(&self->field_54, 0, 0, 0, 0);
            ds = (DragSourceLayout*)self->field_a8;
            DragSourceInner2* inner2 = (DragSourceInner2*)ds->field_e4;
            DragSourceInner3* inner3 = (DragSourceInner3*)r;
            void* p = inner3->field_cc;
            void* vt = inner2->field_54;
            void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vt + 0x2c);
            fn((char*)inner2 + 0x54, p);
            ds = (DragSourceLayout*)self->field_a8;
            ds->field_e4 = 0;
        }

        ds = (DragSourceLayout*)self->field_a8;
        SetTimer(*(void**)((char*)ds + 0x20), 4, 0x32, 0);
        self->field_a8 = 0;
    }
    else
    {
        sub_6d9dd0(self->field_a8);
        self->field_a8 = 0;
    }
}
