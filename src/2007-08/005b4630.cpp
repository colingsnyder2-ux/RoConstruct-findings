// from server: 58% by colin
struct Geometry {
    char pad0[8];
    int m_field8;
    char pad1[4];
    int m_field10;
    int m_field14;

    void removeFromTree(Geometry* other, int index);
};

void Geometry::removeFromTree(Geometry* other, int index)
{
    int i;
    for (i = 0; i < 2; ++i) {
        Geometry* node;
        if (i != 0)
            node = other;
        else
            node = other;

        int key = node->m_field8;
        int val = this->m_field8;

        if (key == val) {
            if (this->m_field8 == this->m_field8) {
                node->m_field8 = this->m_field10;
            } else {
                node->m_field8 = this->m_field14;
            }
        } else {
            while (1) {
                int nkey = node->m_field8;
                int nval;
                if (val == nkey)
                    nval = node->m_field10;
                else
                    nval = node->m_field14;

                if (nval == (int)this)
                    break;

                if (val == nkey)
                    node = (Geometry*)node->m_field10;
                else
                    node = (Geometry*)node->m_field14;
            }

            int repl;
            if (this->m_field8 == this->m_field8)
                repl = this->m_field10;
            else
                repl = this->m_field14;

            if (val == node->m_field8)
                node->m_field10 = repl;
            else
                node->m_field14 = repl;
        }

        --other->m_field8;
    }
}
