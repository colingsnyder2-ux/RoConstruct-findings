// from server: 19% by colin
struct U128 {
    unsigned int lo;
    unsigned int hi;
};

struct Big {
    unsigned int w[4];
};

extern "C" void __cdecl sub_4bba80(Big* out, const Big* a, const Big* b, Big* tmp);
extern "C" void __cdecl sub_4bbd40(Big* out, const Big* a, Big* b, Big* c, Big* d);

void __cdecl sub_4bda70(const Big* a, const Big* b, Big* out)
{
    Big v18;
    Big v38;
    Big v48;
    Big v58;
    Big v68;
    Big v28;
    int i;

    v28.w[0] = 0;
    v28.w[1] = 0;
    v28.w[2] = 0;
    v28.w[3] = 1;

    sub_4bba80(&v48, b, a, &v68);

    v18.w[0] = b->w[0];
    v18.w[1] = b->w[1];
    v18.w[2] = b->w[2];
    v18.w[3] = b->w[3];

    for (;;) {
        v38.w[0] = a->w[0];
        v38.w[1] = a->w[1];
        v38.w[2] = a->w[2];
        v38.w[3] = a->w[3];

        sub_4bba80(&v68, &v48, &v38, &v38);

        for (i = 0; i < 4; i++) {
            if (v38.w[i] != 0)
                break;
        }
        if (i == 4) {
            out->w[0] = v18.w[0];
            out->w[1] = v18.w[1];
            out->w[2] = v18.w[2];
            out->w[3] = v18.w[3];
            return;
        }

        sub_4bbd40(&v58, b, &v28, &v48, &v18);

        sub_4bba80(&v68, &v48, &v38, &v68);

        for (i = 0; i < 4; i++) {
            if (v68.w[i] != 0)
                break;
        }
        if (i == 4) {
            out->w[0] = v58.w[0];
            out->w[1] = v58.w[1];
            out->w[2] = v58.w[2];
            out->w[3] = v58.w[3];
            return;
        }

        sub_4bbd40(&v28, b, &v18, &v48, &v58);

        sub_4bba80(&v68, &v48, &v38, &v68);

        for (i = 0; i < 4; i++) {
            if (v68.w[i] != 0)
                break;
        }
        if (i == 4) {
            out->w[0] = v28.w[0];
            out->w[1] = v28.w[1];
            out->w[2] = v28.w[2];
            out->w[3] = v28.w[3];
            return;
        }

        sub_4bbd40(&v58, b, &v28, &v48, &v18);

        sub_4bba80(&v68, &v48, &v38, &v68);

        for (i = 0; i < 4; i++) {
            if (v68.w[i] != 0)
                break;
        }
        if (i == 4) {
            out->w[0] = v58.w[0];
            out->w[1] = v58.w[1];
            out->w[2] = v58.w[2];
            out->w[3] = v58.w[3];
            return;
        }

        sub_4bbd40(&v18, b, &v28, &v48, &v58);

        sub_4bba80(&v68, &v48, &v38, &v68);

        for (i = 0; i < 4; i++) {
            if (v68.w[i] != 0)
                break;
        }
        if (i == 4) {
            out->w[0] = v18.w[0];
            out->w[1] = v18.w[1];
            out->w[2] = v18.w[2];
            out->w[3] = v18.w[3];
            return;
        }

        sub_4bbd40(&v28, b, &v18, &v48, &v58);
    }
}
