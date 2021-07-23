#include <iostream>
#include "sculptor.hpp"

///@brief create a disk
int main() {
    Sculptor bobesponja(50, 50, 50);
    //SAPATOS
    bobesponja.setColor(0,0,0,1);
    bobesponja.putVoxel(1,10,0);
    bobesponja.putVoxel(2,10,0);


    bobesponja.putVoxel(1,15,0);
    bobesponja.putVoxel(2,15,0);
    // pernas
    bobesponja.setColor(2.55,2.55,2.55,1);
    bobesponja.putVoxel(1,10,1);
    bobesponja.putVoxel(1,15,1);
    bobesponja.putVoxel(1,10,2);
    bobesponja.putVoxel(1,15,2);

    bobesponja.setColor(2.55,2.55,0,1.0);
    bobesponja.putVoxel(1,10,3);
    bobesponja.putVoxel(1,15,3);
    bobesponja.putVoxel(1,10,4);
    bobesponja.putVoxel(1,15,4);
    bobesponja.putVoxel(1,10,5);
    bobesponja.putVoxel(1,15,5);

    //Coxas);
    bobesponja.setColor(0,0,2.25,1.0);
    bobesponja.putVoxel(0,16,6);
    bobesponja.putVoxel(0,15,6);
    bobesponja.putVoxel(0,14,6);
    bobesponja.putVoxel(1,16,6);
    bobesponja.putVoxel(1,15,6);
    bobesponja.putVoxel(1,14,6);
    bobesponja.putVoxel(2,16,6);
    bobesponja.putVoxel(2,15,6);
    bobesponja.putVoxel(2,14,6);

    //calças
    bobesponja.putVoxel(0,11,6);
    bobesponja.putVoxel(0,10,6);
    bobesponja.putVoxel(0,9,6);
    bobesponja.putVoxel(1,11,6);
    bobesponja.putVoxel(1,10,6);
    bobesponja.putVoxel(1,9,6);
    bobesponja.putVoxel(2,11,6);
    bobesponja.putVoxel(2,10,6);
    bobesponja.putVoxel(2,9,6);
    //
    bobesponja.putVoxel(0,11,7);
    bobesponja.putVoxel(0,10,7);
    bobesponja.putVoxel(0,9,7);
    bobesponja.putVoxel(1,11,7);
    bobesponja.putVoxel(1,10,7);
    bobesponja.putVoxel(1,9,7);
    bobesponja.putVoxel(2,11,7);
    bobesponja.putVoxel(2,10,7);
    bobesponja.putVoxel(2,9,7);

    // calça
    bobesponja.putVoxel(0,16,7);
    bobesponja.putVoxel(0,15,7);
    bobesponja.putVoxel(0,14,7);
    bobesponja.putVoxel(1,16,7);
    bobesponja.putVoxel(1,15,7);
    bobesponja.putVoxel(1,14,7);
    bobesponja.putVoxel(2,16,7);
    bobesponja.putVoxel(2,15,7);
    bobesponja.putVoxel(2,14,7);
    bobesponja.putVoxel(2,17,7);
    bobesponja.putVoxel(1,17,7);
    bobesponja.putVoxel(0,17,7);
    bobesponja.putVoxel(2,8,7);
    bobesponja.putVoxel(1,8,7);
    bobesponja.putVoxel(0,8,7);
    bobesponja.putVoxel(2,12,7);
    bobesponja.putVoxel(1,12,7);
    bobesponja.putVoxel(1,13,7);
    bobesponja.putVoxel(2,13,7);
    bobesponja.putVoxel(0,12,7);
    bobesponja.putVoxel(0,13,7);

    bobesponja.setColor(0,0,2.25,1.0);
    bobesponja.putBox(0,3,8,18,6,7);

    bobesponja.setColor(2.55,2.55,2.55,1.0);
    bobesponja.putBox(0,3,8,18,8,9);
    //corpo
    bobesponja.setColor(2.55,2.55,0,1);
    bobesponja.putBox(0,3,8,18,9,18);
    bobesponja.putBox(1,2,4,22,12,13);
    // olhos
    bobesponja.setColor(2.55,2.55,2.55,1);
    bobesponja.putBox(2,3,9,10, 14,17);
    bobesponja.putBox(2,3,11,12, 14,17);
    bobesponja.putVoxel(2,10,16);
    bobesponja.putVoxel(2,10,14);
    bobesponja.setColor(0,0,0,0);
    bobesponja.putVoxel(2,10,15);

    bobesponja.setColor(2.55,2.55,2.55,1);
    bobesponja.putBox(2,3,14,15, 14,17);
    bobesponja.putBox(2,3,16,17, 14,17);
    bobesponja.putVoxel(2,15,16);
    bobesponja.putBox(2,5,12,14,12,14);
    bobesponja.putVoxel(2,15,14);
    bobesponja.setColor(0,0,0,0);
    bobesponja.putVoxel(2,15,15);

    //Nariz e boca
    bobesponja.setColor(2.55,2.55,0,1);
    bobesponja.putBox(2,5,12,14,12,14);
    bobesponja.setColor(2.55,2.55,2.55,1);
    bobesponja.putVoxel(2,12,11);
    bobesponja.putVoxel(2,12,10);
    bobesponja.putVoxel(2,13,11);
    bobesponja.putVoxel(2,13,10);
    //Boca
    bobesponja.setColor(0,0,0,1);
    bobesponja.putVoxel(2,11,11);
    bobesponja.putVoxel(2,12,11);
    bobesponja.putVoxel(2,13,11);
    bobesponja.putVoxel(2,14,11);

    //chapeu
    bobesponja.setColor(0,1.28,0,1);
    bobesponja.putBox(0,5,11,15,18,20);
    bobesponja.putBox(0,2,8,18,18,20);
    bobesponja.writeOFF((char*)"bobesponja.off");

    return 0;
}
