

#include <iostream>

#include <cstring>

#include <cstdlib>

#include <stdlib.h>

#include <time.h>
//MAPS NEEDA  STARTING POINTFunctionRoam(MapGangSafehouse[6][20],6,20,3,20)
//===============================FUNCTIONS=====================================================
void FunctionRoam(std::string MapLayout[100],int ymax,int xmax,int playerstartypos,int playerstartxpos){
    char StandingTile;
    bool RoamRunning=true;
    int PlayerYPos=playerstartypos;
    int PlayerXPos=playerstartxpos;
    std::cout<<"WORKSAAAA";
    while(RoamRunning==true){
        for(int a=0;a<ymax;a++){
            for(int b=0;b<xmax;b++){
                std::cout<<MapLayout[a][b];

            }
        std::cout<<"\n";

        }
        StandingTile=MapLayout[playerstartypos][playerstartxpos];
        MapLayout[playerstartypos][playerstartxpos]='@';
        
    }
};


//==================CLASS RACES==========================
class ClassRaces{
    public:
    //Race Info
        char NativeBiome;
        std::string RaceName;
        int RaceHealth;
        double RaceAttackMultiplier;
        double RaceDefenseMultiplier;
        std::string RaceDescription;
    //Population
    double RaceReproductionMultiplier;
    //Appearance
    std::string RaceFaceMiddle;
    std::string RaceFaceDown;
    

    //FIRST AND LAST NAMES
    std::string RaceFirstName[20];
    std::string RaceLastName[20];
        //Player Stuff
    
};
//==============INDIVIDUAL TILE==========================

class IndividualTile{
    public:
    std::string TileBiome;
    int TileNumber;
    
    int AnimalChance;
// ORES
    int TileCopperChance;
    int TileIronChance;
    int TileGoldChance;
    int TileJewelsChance;
    
    int TileCopperEfficency;
    int TileIronEfficency;
    int TileGoldEfficency;
    int TileJewelsEfficency;
    
    int TileCopperAmount;
    int TileIronAmount;
    int TileGoldOreAmount;
    int TileJewelsAmount;
//MATERIALS
    int TileWoodAmount;
    int TileStoneAmount;
    
    int TileFarmOutput;
    
    int TilePredatorAttackChance;
    
    int WaterFindChance;
//POPULATION
    int TilePopulation;
    std::string TileTerritory;
    bool TileHasVillage;
    

/*
tile has
-biome
-AnimalEncounterchance
-copper,iron,gold,jewel mine building efficency
-also amount of those things
-
-ammount of wood
-amount of stone
-ability to grow trees
-farm output
-PredatorAnimalsattackchance
-
waterfindchance

-population
-ethnic groups
-religion
-Territory occupancy
-

maybe-
-rain chance
-storm chance
-max amount of buildings
-
*/
};


//=====================NATION CLASS======================
class Nation{
    public:
    std::string NationName;
    int NationID;


    //DIPLOMACY
    int NationDiplomacyEnemy;
    int NationDiplomacyAlly;
    int NationDiplomacyTrade;

    //MISC
    int NationMaxPopulation;
    int NationRaceID;




};
class Camp{


};

//=====================AI VILLAGE CLASS==================
class AIVillages{
    public:
    std::string AIVillageName;
    int AIVillageTileNumber;
    int AIVillageOwnerRace;
    int Gold;
    int Wood;


    int Food;
    int Water;
    int FireWood;


    //Buildings
    int DirtHuts; //OCP
    int Woodcutters; //WOOD
    int Farmlands; //FOOD
    int Wells; //WATER
    int Parks;
    //Misc
    int Happiness;
    //MORE STUFF
    int AIVillageRelationToPlayer;
    
    int AIVillagePopulation;

    //AIVILLAGE-NPC
    int AIVillageElderNPCNumber;


};
//====================VILLAGEINFO CLASS===============
class VillageInfo {
    public:
    int population;
    bool InnExists;
    bool BarracksExists;
    bool LargeVillage;
    
       
    //BUILDINGS/RESIDENTAL
    int NumberOfDirtHuts;
    int NumberOfWoodHuts;
    int NumberOfWoodCabins;
    int NumberOfStoneHuts;
    int NumberOfStoneCabins;
    int NumberOfStoneMansions;
    
    
    //BUILDINGS/INDUSTRY
    int NumberOfFarms;
    int NumberOfMill;
    int NumberOfOrchard;
    
    int NumberOfStoneMines;
    int NumberOfCopperMines;
    int NumberOfIronMines;
    int NumberOfJewelsMines;
    
    
    int NumberOfWoodcutters;
    int NumberOfLumbermills;
    
    int NumberOfCottonFarms;
    int NumberOfLooms;
    int NumberOfTailors;
    
    
    int NumberOfMarketplaces;
    int NumberOfArenas;
    int NumberOfBakeries;
    
  

    int NumberOfWells;
    int NumberOfAqueducts;
    

    //VILLAGE INVENTORY
    int Gold;
    int Wood;
    int Stone;
    
    
    double Jewels;
    double Iron;
    double Copper;
    

    //NEEDED MATERIALS
    double Food;
    double Water;
    double Clothing;
    double Firewood;
    double VacantBeds;
};
//==============CITYINFO CLASS===========
class CityInfo{
public:
    std::string CityName;
    std::string CityOwner;
    int CityOwnerID;
    int CityTileNumber;

    int CityPopulationEthnicGroups[20];





};
//=============PLAYERCHARACTER CLASS=========
class PlayerCharacter {

public:

    std::string name;

    char avatar;
    int PlayerRace;

    int xpos;

    int ypos;

    int gold;
    int wood;
    int stone;
    int water;
    int food;
    int energy;
    
    
    double villagers;
    double warriors;

    int AnimalsKilled;

    //GANGS
        bool GangJoinedBool=false;
        int GangRank;

};
//==============NPCS CLASS==============
class NPCs{
    public:
    //NPC Primary stats
    int NPCNumberID;
    std::string NPCFirstName;
    std::string NPCLastName;
    int NPCRace;
    int NPCAge;

    //NPC APPEARANCE
    int NPCHairNumber;
    std::string NPCHairString;
    std::string NPCFaceMiddle;
    std::string NPCFaceDown;

    //Player Objects
    int NPCRelationToPlayer=0;


};
//======================CLASS HAIR=======================
class Hairs{
    public:
    int HairID;
    std::string HairName;
    std::string HairString;

};
//=====================CLASS HATS=========================

class Hats{
    public:
    int HatID;
    int HatDefense;
    std::string HatString;
    std::string HatName;


};
      
int main() {

//====================HAIR ASSIGN=========================
int InfoNumberOfHairs=10;
Hairs Hair[InfoNumberOfHairs];
    //0- Zero
    Hair[0].HairID=0;
    Hair[0].HairString=".....";
    Hair[0].HairName="Zero";
    //1- Short
    Hair[1].HairID=1;
    Hair[1].HairString=",,,,,";
    Hair[1].HairName="Short";
    //2- Short Buzzcut
    Hair[2].HairID=2;
    Hair[2].HairString="wwwww";
    Hair[2].HairName="Short Buzzcut";
    //3- Buzzcut Long
    Hair[3].HairID=3;
    Hair[3].HairString="WWWWW";
    Hair[3].HairName="Long Buzzcut";
    //4- Braids
    Hair[4].HairID=4;
    Hair[4].HairString=".,.,.";
    Hair[4].HairName="Braids";
    //5- Left Sideline
    Hair[5].HairID=5;
    Hair[5].HairString="kkKKK";
    Hair[5].HairName="Left Sideline";
    //6- Right Sideline
    Hair[6].HairID=6;
    Hair[6].HairString="KKKkk";
    Hair[6].HairName="Right Sideline";
    //7- Full
    Hair[7].HairID=7;
    Hair[7].HairString="fffff";
    Hair[7].HairName="Full";
    //8- Johnny Bravo
    Hair[8].HairID=8;
    Hair[8].HairString="77777";
    Hair[8].HairName="Johnny Bravo";
    //9- Doom
    Hair[9].HairID=9;
    Hair[9].HairString="TTTTT";
    Hair[9].HairName="Doom guy";

//=====================HAT CLASS ASSIGNER================
int InfoNumberOfHats=41;
Hats Hat[InfoNumberOfHats];
//ARMOR T1
    //0-Leather Cap
    Hat[0].HatID=0;
    Hat[0].HatString="/---\\";
    Hat[0].HatName="Leather Cap";
    Hat[0].HatDefense=
    //1-Leather Hood
    Hat[1].HatID=1;
    Hat[1].HatString="oO0Oo";
    Hat[1].HatName="Leather Hood";
    Hat[1].HatDefense=
    //2-Leather Helmet
    Hat[2].HatID=2;
    Hat[2].HatString="/=|=\\";
    Hat[2].HatName="Leather Helmet";
    Hat[2].HatDefense=
    //3-Reinforced Leather Helmet
//ARMOR T2
    Hat[3].HatID=3;
    Hat[3].HatString="/=I=\\";
    Hat[3].HatName="Reinforced Leather Helmet";
    Hat[3].HatDefense=
    //4-Padded Leather Cap
    Hat[4].HatID=4;
    Hat[4].HatString="/:::\\";
    Hat[4].HatName="Padded Leather Cap";
    Hat[4].HatDefense=22;
    //5-Padded Leather Helmet
    Hat[5].HatID=5;
    Hat[5].HatString="/:|:\\";
    Hat[5].HatName="Padded Leather Helmet";
    Hat[5].HatDefense=27;
    //6-Padded Leather Helmet
    Hat[6].HatID=6;
    Hat[6].HatString="/:I:\\";
    Hat[6].HatName="Reinforced Leather Helmet";
    Hat[6].HatDefense=32;
     //7-Reinforced Leather Helmet
    Hat[7].HatID=7;
    Hat[7].HatString="/:I:\\";
    Hat[7].HatName="Reinforced Leather Helmet";
    Hat[7].HatDefense=32;
//ARMOR T3
    //8-Metal Cap
    Hat[8].HatID=8;
    Hat[8].HatString="i---i";
    Hat[8].HatName="Metal Cap";
    Hat[8].HatDefense=30;
    //9-Metal Coif
    Hat[9].HatID=9;
    Hat[9].HatString="00000";
    Hat[9].HatName="Metal Coif";
    Hat[9].HatDefense=35;
    //10-Metal Helmet
    Hat[10].HatID=10;
    Hat[10].HatString="i=|=i";
    Hat[10].HatName="Metal Helmet";
    Hat[10].HatDefense=40;
    //11-Reinforced Metal Helmet
    Hat[11].HatID=11;
    Hat[11].HatString="i=I=i";
    Hat[11].HatName="Metal Helmet";
    Hat[11].HatDefense=45;
//ARMOR T4
    //12-Gold cap
    Hat[12].HatID=12;
    Hat[12].HatString="v-v-v";
    Hat[12].HatName="Gold cap";
    Hat[12].HatDefense=35;
    //13-Gold Helmet
    Hat[13].HatID=13;
    Hat[13].HatString="v=|=v";
    Hat[13].HatName="Gold Helmet";
    Hat[13].HatDefense=42;
    //14-Reinforced Gold Helmet
    Hat[14].HatID=14;
    Hat[14].HatString="v=I=v";
    Hat[14].HatName="Reinforced Gold Helmet";
    Hat[14].HatDefense=47;
    //15-Gold Prince Crown
    Hat[15].HatID=15;
    Hat[15].HatString="v/V\v";
    Hat[15].HatName="Gold Prince Crown";
    Hat[15].HatDefense=20;
    //16-Gold King Crown
    Hat[16].HatID=16;
    Hat[16].HatString="V/V\\V";
    Hat[16].HatName="Gold King Crown";
    Hat[16].HatDefense=40;
//Armor T5
    //17-Jewel Cap
    Hat[17].HatID=17;
    Hat[17].HatString="j---j";
    Hat[17].HatName="Jewel Cap";
    Hat[17].HatDefense=45;
    //18-Jewel Helmet
    Hat[18].HatID=18;
    Hat[18].HatString="j=|=j";
    Hat[18].HatName="Jewel Helmet";
    Hat[18].HatDefense=55;
    //19-Reinforced Jewel Helmet
    Hat[19].HatID=19;
    Hat[19].HatString="j=I=j";
    Hat[19].HatName="Reinforced Jewel Helmet";
    Hat[19].HatDefense=65;
    //20-B.E.J.O Helmet
    Hat[20].HatID=20;
    Hat[20].HatString="jIIIj";
    Hat[20].HatName="B.E.J.O Helmet";
    Hat[20].HatDefense=80;
//MISC
    //21-Farmer's Hat
    Hat[21].HatID=21;
    Hat[21].HatString="_===_";
    Hat[21].HatName="Farmer's hat";
    Hat[21].HatDefense=2;
    //22-Miner's Hat
    Hat[22].HatID=22;
    Hat[22].HatString="/-o-\\";
    Hat[22].HatName="Miners's hat";
    Hat[22].HatDefense=30;
    //23-Winter Hat
    Hat[23].HatID=23;
    Hat[23].HatString="==*==";
    Hat[23].HatName="Winter Hat";
    Hat[23].HatDefense=3;
    //24-Winter Hat
    Hat[24].HatID=24;
    Hat[24].HatString="_-_-_";
    Hat[24].HatName="Rancher's Hat";
    Hat[24].HatDefense=2;
    //25-Flower Hat v1
    Hat[25].HatID=25;
    Hat[25].HatString="xX:Xx";
    Hat[25].HatName="Flower Hat v1";
    Hat[25].HatDefense=0;
    //26-Flower Hat v2
    Hat[26].HatID=26;
    Hat[26].HatString="xXVXx";
    Hat[26].HatName="Flower Hat v2";
    Hat[26].HatDefense=0;
    //27-Flower Hat v3
    Hat[27].HatID=27;
    Hat[27].HatString="xXYXx";
    Hat[27].HatName="Flower Hat v3";
    Hat[27].HatDefense=0;
    //28-Bandana
    Hat[28].HatID=28;
    Hat[28].HatString="=====";
    Hat[28].HatName="Bandana";
    Hat[28].HatDefense=1;
    //29-Savage Cap
    Hat[29].HatID=29;
    Hat[29].HatString="<\\|/>";
    Hat[29].HatName="Savage Cap";
    Hat[29].HatDefense=5;
    //30-Forester Cap
    Hat[30].HatID=30;
    Hat[30].HatString="_-==>";
    Hat[30].HatName="Forester Cap";
    Hat[30].HatDefense=2;
    //31-Tribal Cap
    Hat[31].HatID=31;
    Hat[31].HatString="db_db";
    Hat[31].HatName="Tribal Cap";
    Hat[31].HatDefense=5;
    //32-Orc Cap
    Hat[32].HatID=32;
    Hat[32].HatString="opoqo";
    Hat[32].HatName="Orc Cap";
    Hat[32].HatDefense=7;
    //33-Spooky Cap
    Hat[33].HatID=33;
    Hat[33].HatString="jijij";
    Hat[33].HatName="Spooky Cap";
    Hat[33].HatDefense=3;
    //34-Fur Hood
    Hat[34].HatID=34;
    Hat[34].HatString="#####";
    Hat[34].HatName="Fur Hood";
    Hat[34].HatDefense=4;
    //35-Religion hat v1
    Hat[35].HatID=35;
    Hat[35].HatString="Z=Z=Z";
    Hat[35].HatName="Religion hat v1";
    Hat[35].HatDefense=1;
    //36-Religion hat v2
    Hat[36].HatID=36;
    Hat[36].HatString="U=U=U";
    Hat[36].HatName="Religion hat v2";
    Hat[36].HatDefense=1;
    //37-Religion hat v3
    Hat[37].HatID=37;
    Hat[37].HatString="A=A=A";
    Hat[37].HatName="Religion hat v3";
    Hat[37].HatDefense=1;
    //38-Religion hat v4
    Hat[38].HatID=38;
    Hat[38].HatString="B=B=B";
    Hat[38].HatName="Religion hat v4";
    Hat[38].HatDefense=1;
    //39-Religion hat v5
    Hat[39].HatID=39;
    Hat[39].HatString="G=G=G";
    Hat[39].HatName="Religion hat v5";
    Hat[39].HatDefense=1;
    //40-Religion hat v5
    Hat[40].HatID=40;
    Hat[40].HatString="_-=-_";
    Hat[40].HatName="Samurai Hat";
    Hat[40].HatDefense=15;




//==========================================================================================================
//===============================================END OF CLASSES=============================================
//==========================================================================================================




     bool GameEnd=false;

     bool UnableToMove;

    bool Moved;
    
    bool VillageOption=false;
    bool DefaultOptionRunning=false;
    
    bool OptionRunning=false;
    bool VillageBuildingsOptionRunning=false;
    bool VillageMilitaryOptionRunning=false;
    bool VillageTradeOptionRunning=false;
    bool VillageStatsOptionRunning=false;
    
    
    
    
    int VillageBuildingsOption;
    int VillageMilitaryOption;
    int VillageTradeOption;
    int VillageStatsOption;
    
    int number;
    
    
    
    
    bool MovementOptionOn=false;
    
    

//TERR.V layers[Y AXIS][X AXIS]


     char layers[6][21] {};

     char LastTile=',';

     char movement;
    char NextTile;


     int ymin=0;

     int xmin=0;

     int ymax=5;

     int xmax=19;

    int option;
    int interactionoption;


    int VillageBuildingsResidentalOption;
    int VillageBuildingsCommerceOption;
    int VillageBuildingsIndustryOption;
    int VillageBuildingsMiscOption;
    
    bool VillageBuildingsResidentalOptionRunning=false;
    bool VillageBuildingsCommerceOptionRunning=false;
    bool VillageBuildingsIndustryOptionRunning=false;
    bool VillageBuildingsMiscOptionRunning=false;
    


    int CityOption;
int DefaultOption;
    std::string TerrainName;
    
    srand(time(NULL));
    int randomnum1;
    
//                ----MISC----   

std::string InfoContinueVariable;
    
//                ----RACE VARIABLES----


int InfoNumberOfRaces=18;
ClassRaces Race[InfoNumberOfRaces];
//RACE-HUMAN
        Race[0].NativeBiome=','; 
        Race[0].RaceName="Human";
        Race[0].RaceHealth=100;
        Race[0].RaceAttackMultiplier=1;
        Race[0].RaceDefenseMultiplier=1;
        
        Race[0].RaceDescription="Humans are the most adaptable and ambitious people among the common races. They have widely varying tastes, morals, and customs in the many different lands where they have settled. When they settle, though, they stay: they build cities to last for the ages, and great kingdoms that can persist for long centuries.";
        //Population
         Race[0].RaceReproductionMultiplier=1;
        //Appearance
        Race[0].RaceFaceMiddle="|. .|";
        Race[0].RaceFaceDown="\\_=_/";
        //Race Full Names
            //Race First Names
            Race[0].RaceFirstName[0]="Hubertus"; Race[0].RaceFirstName[1]="Guntar";
            Race[0].RaceFirstName[2]="Urbanus"; Race[0].RaceFirstName[3]="Ravinger"; Race[0].RaceFirstName[4]="Eriq";
            Race[0].RaceFirstName[5]="Salim"; Race[0].RaceFirstName[6]="Adan"; Race[0].RaceFirstName[7]="Micah";
            Race[0].RaceFirstName[8]="Alessio"; Race[0].RaceFirstName[9]="Mehmet"; Race[0].RaceFirstName[10]="Raynell";
            Race[0].RaceFirstName[11]="Zavier"; Race[0].RaceFirstName[12]="Holden"; Race[0].RaceFirstName[13]="Camden";
            Race[0].RaceFirstName[14]="Matija"; Race[0].RaceFirstName[15]="Carola"; Race[0].RaceFirstName[16]="Stefanie";
            Race[0].RaceFirstName[17]="Radomila"; Race[0].RaceFirstName[18]="Gia"; Race[0].RaceFirstName[19]="Miracle";

            //Race Last Names
            Race[0].RaceLastName[0]="Smith"; Race[0].RaceLastName[1]="Crompton";
            Race[0].RaceLastName[2]="Ramsey"; Race[0].RaceLastName[3]="Tyndall"; Race[0].RaceLastName[4]="Shearman";
            Race[0].RaceLastName[5]="Kimberly"; Race[0].RaceLastName[6]="Nutlee"; Race[0].RaceLastName[7]="Stanley";
            Race[0].RaceLastName[8]="Dayton"; Race[0].RaceLastName[9]="Helton"; Race[0].RaceLastName[10]="Perry";
            Race[0].RaceLastName[11]="Mabbott"; Race[0].RaceLastName[12]="Beverly"; Race[0].RaceLastName[13]="Watt";
            Race[0].RaceLastName[14]="Bourne"; Race[0].RaceLastName[15]="Kendal"; Race[0].RaceLastName[16]="Branson";
            Race[0].RaceLastName[17]="Lancaster"; Race[0].RaceLastName[18]="Gojkovic"; Race[0].RaceLastName[19]="Al Hakan";




           
        
//RACE-DWARF
        Race[1].NativeBiome='X';
        Race[1].RaceName="Dwarf";
        Race[1].RaceHealth=90;
        Race[1].RaceAttackMultiplier=0.8;
        Race[1].RaceDefenseMultiplier=1.3;
        //Population      
        Race[1].RaceReproductionMultiplier=1;
        //Appearance
        Race[1].RaceFaceMiddle="|. .|";
        Race[1].RaceFaceDown="\\-~-/";

        Race[1].RaceDescription="Bold and hardy, dwarves are known as skilled warriors, miners, and workers of stone and metal. Though they stand well under 5 feet tall, dwarves are so broad and compact that they can weigh as much as a human standing nearly two feet taller. Their courage and endurance are also easily a match for any of the larger folk.";
        //Race full names
            //Race First Names
            Race[1].RaceFirstName[0]="Brukrirlum"; Race[1].RaceFirstName[1]="Bhakkonlir";
            Race[1].RaceFirstName[2]="Dargoic"; Race[1].RaceFirstName[3]="Weranaem"; Race[1].RaceFirstName[4]="Narhuki";
            Race[1].RaceFirstName[5]="Lomunli"; Race[1].RaceFirstName[6]="Brodgred"; Race[1].RaceFirstName[7]="Thrazmean";
            Race[1].RaceFirstName[8]="Khouldrumlir"; Race[1].RaceFirstName[9]="Okok"; Race[1].RaceFirstName[10]="Kuvrus";
            Race[1].RaceFirstName[11]="Durirsin"; Race[1].RaceFirstName[12]="Skargren"; Race[1].RaceFirstName[13]="Gildreag";
            Race[1].RaceFirstName[14]="Fondroun"; Race[1].RaceFirstName[15]="Lukhougrett"; Race[1].RaceFirstName[16]="Dwostaerika";
            Race[1].RaceFirstName[17]="Thrasgrunelyn"; Race[1].RaceFirstName[18]="Thronounelyn"; Race[1].RaceFirstName[19]="Skallagrim";

            //Race Last Names
            Race[1].RaceLastName[0]="Nightbane"; Race[1].RaceLastName[1]="Oakenfoot";
            Race[1].RaceLastName[2]="Bronzemane"; Race[1].RaceLastName[3]="Iceshaper"; Race[1].RaceLastName[4]="Goldenbrand";
            Race[1].RaceLastName[5]="Flaskthane"; Race[1].RaceLastName[6]="Icehand"; Race[1].RaceLastName[7]="Greatrock";
            Race[1].RaceLastName[8]="Snowmaster"; Race[1].RaceLastName[9]="Platebrew"; Race[1].RaceLastName[10]="Treasurepike";
            Race[1].RaceLastName[11]="Drakesunder"; Race[1].RaceLastName[12]="Coppersunder"; Race[1].RaceLastName[13]="Darkgrip";
            Race[1].RaceLastName[14]="Giantbeard"; Race[1].RaceLastName[15]="Warflayer"; Race[1].RaceLastName[16]="Bonebreaker";
            Race[1].RaceLastName[17]="Wyverngut"; Race[1].RaceLastName[18]="Brewbender"; Race[1].RaceLastName[19]="Deepbeard";

//RACE-ELF
        Race[2].NativeBiome='D';
        Race[2].RaceName="Elf";
        Race[2].RaceHealth=100;
        Race[2].RaceAttackMultiplier=1;
        Race[2].RaceDefenseMultiplier=1;

         Race[2].RaceDescription="Elves are a magical people of otherworldly grace, living in the world but not entirely part of it. They live in places of ethereal beauty, in the midst of ancient forests.  Elves love nature and magic, art and artistry, music and poetry, and the good things of the world.";
        //Population
        
        Race[2].RaceReproductionMultiplier=1;
        //Appearance
        Race[2].RaceFaceMiddle="<. .>";
        Race[2].RaceFaceDown="\\_=_/";
        //Race full names
            //Race First Name
            Race[2].RaceFirstName[0]="Folwin"; Race[2].RaceFirstName[1]="Aymer";
            Race[2].RaceFirstName[2]="Othorion"; Race[2].RaceFirstName[3]="Jassin"; Race[2].RaceFirstName[4]="Erlan";
            Race[2].RaceFirstName[5]="Mhaenal"; Race[2].RaceFirstName[6]="Ailluin"; Race[2].RaceFirstName[7]="Zeno";
            Race[2].RaceFirstName[8]="Jorildyn"; Race[2].RaceFirstName[9]="Elandorr"; Race[2].RaceFirstName[10]="Evindal";
            Race[2].RaceFirstName[11]="Zaos"; Race[2].RaceFirstName[12]="Pelleas"; Race[2].RaceFirstName[13]="Kivessin";
            Race[2].RaceFirstName[14]="Othorion"; Race[2].RaceFirstName[15]="Yrneha"; Race[2].RaceFirstName[16]="Lyndis";
            Race[2].RaceFirstName[17]="Maylin"; Race[2].RaceFirstName[18]="Tiriana"; Race[2].RaceFirstName[19]="Radelia";

            //Race Last Name
            Race[2].RaceLastName[0]="Zinrora"; Race[2].RaceLastName[1]="Daehana";
            Race[2].RaceLastName[2]="Qinxisys"; Race[2].RaceLastName[3]="Heledan"; Race[2].RaceLastName[4]="Genbalar";
            Race[2].RaceLastName[5]="Gilthana"; Race[2].RaceLastName[6]="Loraharice"; Race[2].RaceLastName[7]="Ravatumal";
            Race[2].RaceLastName[8]="Urira"; Race[2].RaceLastName[9]="Yinmoira"; Race[2].RaceLastName[10]="Magwraek";
            Race[2].RaceLastName[11]="Iarthana"; Race[2].RaceLastName[12]="Iarvaris"; Race[2].RaceLastName[13]="Fasalor";
            Race[2].RaceLastName[14]="Elwarin"; Race[2].RaceLastName[15]="Waesneiros"; Race[2].RaceLastName[16]="Aebanise";
            Race[2].RaceLastName[17]="Quisys"; Race[2].RaceLastName[18]="Carfir"; Race[2].RaceLastName[19]="Robella";

//RACE-ANTMAN
        Race[3].NativeBiome='x';
        Race[3].RaceName="Antman";
        Race[3].RaceHealth=100;
        Race[3].RaceAttackMultiplier=1;
        Race[3].RaceDefenseMultiplier=1;
        //Population
        
        Race[3].RaceReproductionMultiplier=1;
        //Appearance
        Race[3].RaceFaceMiddle="(. .)";
        Race[3].RaceFaceDown=" {\"} ";
        //Race full names
            //Race First Names
            Race[3].RaceFirstName[0]="Agroecomyrmex"; Race[3].RaceFirstName[1]="Ankylomyrma";
            Race[3].RaceFirstName[2]="Stigmatomma"; Race[3].RaceFirstName[3]="Xymmer"; Race[3].RaceFirstName[4]="Paraneuretus";
            Race[3].RaceFirstName[5]="Brownimecia"; Race[3].RaceFirstName[6]="Axinidris"; Race[3].RaceFirstName[7]="Chronoxenus";
            Race[3].RaceFirstName[8]="Doleromyrma"; Race[3].RaceFirstName[9]="Ecphorella"; Race[3].RaceFirstName[10]="Axinidris";
            Race[3].RaceFirstName[11]="Bothriomyrmex"; Race[3].RaceFirstName[12]="Chronoxenus"; Race[3].RaceFirstName[13]="Dolichoderus";
            Race[3].RaceFirstName[14]="Ecphorella"; Race[3].RaceFirstName[15]="Froggattella"; Race[3].RaceFirstName[16]="Leptomyrmex";
            Race[3].RaceFirstName[17]="Liometopum"; Race[3].RaceFirstName[18]="Nebothriomyrmex"; Race[3].RaceFirstName[19]="Papyrius";

            //Race Last Names
            Race[3].RaceLastName[0]="Red"; Race[3].RaceLastName[1]="Orange";
            Race[3].RaceLastName[2]="Yellow"; Race[3].RaceLastName[3]="Green"; Race[3].RaceLastName[4]="Blue";
            Race[3].RaceLastName[5]="Pink"; Race[3].RaceLastName[6]="Purple"; Race[3].RaceLastName[7]="Brown";
            Race[3].RaceLastName[8]="Black"; Race[3].RaceLastName[9]="White"; Race[3].RaceLastName[10]="Gray";
            Race[3].RaceLastName[11]="Olive"; Race[3].RaceLastName[12]="Maroon"; Race[3].RaceLastName[13]="Violet";
            Race[3].RaceLastName[14]="Magenta"; Race[3].RaceLastName[15]="Cream"; Race[3].RaceLastName[16]="Teal";
            Race[3].RaceLastName[17]="Coral"; Race[3].RaceLastName[18]="Peach"; Race[3].RaceLastName[19]="Cyan";


//RACE-GOBLIN
        Race[4].NativeBiome=',';
        Race[4].RaceName="Goblin";
        Race[4].RaceHealth=100;
        Race[4].RaceAttackMultiplier=1;
        Race[4].RaceDefenseMultiplier=1;
        //Population
        
        Race[4].RaceReproductionMultiplier=1;
        //Appearance
        Race[4].RaceFaceMiddle="(, ,)";
        Race[4].RaceFaceDown=" \\\"/ ";
        //Race full names
            //Race First Names
            Race[4].RaceFirstName[0]="Gniets"; Race[4].RaceFirstName[1]="Ois";
            Race[4].RaceFirstName[2]="Acs"; Race[4].RaceFirstName[3]="Eags"; Race[4].RaceFirstName[4]="Cearsogs";
            Race[4].RaceFirstName[5]="Glomtiacs"; Race[4].RaceFirstName[6]="Gluitykz"; Race[4].RaceFirstName[7]="Lutvect";
            Race[4].RaceFirstName[8]="Orzots"; Race[4].RaceFirstName[9]="Glulb"; Race[4].RaceFirstName[10]="Kleak";
            Race[4].RaceFirstName[11]="Urd"; Race[4].RaceFirstName[12]="Zreg"; Race[4].RaceFirstName[13]="Buirt";
            Race[4].RaceFirstName[14]="Oiznusz"; Race[4].RaceFirstName[15]="Popiolti"; Race[4].RaceFirstName[16]="Guh";
            Race[4].RaceFirstName[17]="Prert"; Race[4].RaceFirstName[18]="Fruftea"; Race[4].RaceFirstName[19]="Swifleathia";

            //Race Last Name
            Race[4].RaceLastName[0]="Manflame"; Race[4].RaceLastName[1]="Shiftbeam";
            Race[4].RaceLastName[2]="Grandburst"; Race[4].RaceLastName[3]="Peddlecollar"; Race[4].RaceLastName[4]="Dampbub";
            Race[4].RaceLastName[5]="Boltclamp"; Race[4].RaceLastName[6]="Cogspark"; Race[4].RaceLastName[7]="Peddlelock";
            Race[4].RaceLastName[8]="Cutsnap"; Race[4].RaceLastName[9]="Gigaslice"; Race[4].RaceLastName[10]="Briskdrive";
            Race[4].RaceLastName[11]="Pickdigger"; Race[4].RaceLastName[12]="Loosepocket"; Race[4].RaceLastName[13]="Saltyblade";
            Race[4].RaceLastName[14]="Wildfight"; Race[4].RaceLastName[15]="Leafdrive"; Race[4].RaceLastName[16]="Foamfuse";
            Race[4].RaceLastName[17]="Strongbottom"; Race[4].RaceLastName[18]="Acidwrench"; Race[4].RaceLastName[19]="Maddoc";

//RACE-ORC
        Race[5].NativeBiome=',';
        Race[5].RaceName="Orc";
        Race[5].RaceHealth=100;
        Race[5].RaceAttackMultiplier=1;
        Race[5].RaceDefenseMultiplier=1;
        //Population
        
        Race[5].RaceReproductionMultiplier=1;
        //Appearance
        Race[5].RaceFaceMiddle="|, ,|";
        Race[5].RaceFaceDown="|\\=/|";
        //Race full names
            //Race First Names
            Race[5].RaceFirstName[0]="Bakhbash"; Race[5].RaceFirstName[1]="Botbash";
            Race[5].RaceFirstName[2]="Snagmmok"; Race[5].RaceFirstName[3]="Mulron"; Race[5].RaceFirstName[4]="Bazok";
            Race[5].RaceFirstName[5]="Bolonk"; Race[5].RaceFirstName[6]="Mazoh"; Race[5].RaceFirstName[7]="Motfutto";
            Race[5].RaceFirstName[8]="Makhorn"; Race[5].RaceFirstName[9]="Grakgulub"; Race[5].RaceFirstName[10]="Duskul";
            Race[5].RaceFirstName[11]="Grombob"; Race[5].RaceFirstName[12]="Gurmar"; Race[5].RaceFirstName[13]="Ushrul";
            Race[5].RaceFirstName[14]="Olurnag"; Race[5].RaceFirstName[15]="Gratfim"; Race[5].RaceFirstName[16]="Shufak";
            Race[5].RaceFirstName[17]="Mornrzug"; Race[5].RaceFirstName[18]="Yatoga"; Race[5].RaceFirstName[19]="Volturash";

            //Race Last Names
            Race[5].RaceLastName[0]="Baddush"; Race[5].RaceLastName[1]="Skalfim";
            Race[5].RaceLastName[2]="Kharlug"; Race[5].RaceLastName[3]="Dragdulg"; Race[5].RaceLastName[4]="Shubhamph";
            Race[5].RaceLastName[5]="Gurazor"; Race[5].RaceLastName[6]="Shagdum"; Race[5].RaceLastName[7]="Yargrzuf";
            Race[5].RaceLastName[8]="Ghorrol"; Race[5].RaceLastName[9]="Grakgulub'ulad"; Race[5].RaceLastName[10]="Ghasgdulg";
            Race[5].RaceLastName[11]="Durgmakh"; Race[5].RaceLastName[12]="Gholrku"; Race[5].RaceLastName[13]="Agunar";
            Race[5].RaceLastName[14]="Maroham"; Race[5].RaceLastName[15]="Bordu"; Race[5].RaceLastName[16]="Yagagul";
            Race[5].RaceLastName[17]="Gatufish"; Race[5].RaceLastName[18]="Orurz"; Race[5].RaceLastName[19]="Bagograk";

        



//RACE-LIZARDMAN

//Race[].NativeBiome='';
        Race[6].RaceName="Lizardman";
        Race[6].RaceHealth=100;
        Race[6].RaceAttackMultiplier=1;
        Race[6].RaceDefenseMultiplier=1;
        //Population
        
        Race[6].RaceReproductionMultiplier=1;
        //Appearance
        Race[6].RaceFaceMiddle=":.\".:";
        Race[6].RaceFaceDown=" \"=\" ";
        //Race full names
            //Race First Names
            Race[6].RaceFirstName[0]="Ruk"; Race[6].RaceFirstName[1]="Chak";
            Race[6].RaceFirstName[2]="Vosz"; Race[6].RaceFirstName[3]="Uumusz"; Race[6].RaceFirstName[4]="Oushuz";
            Race[6].RaceFirstName[5]="Rozzo"; Race[6].RaceFirstName[6]="Iccuknoxl"; Race[6].RaceFirstName[7]="Occuukxax";
            Race[6].RaceFirstName[8]="Chakakkuz"; Race[6].RaceFirstName[9]="Brurzikok"; Race[6].RaceFirstName[10]="Brisk";
            Race[6].RaceFirstName[11]="Qrot"; Race[6].RaceFirstName[12]="Trox"; Race[6].RaceFirstName[13]="Qamzax";
            Race[6].RaceFirstName[14]="Jashrik"; Race[6].RaceFirstName[15]="Kici"; Race[6].RaceFirstName[16]="Arachosk";
            Race[6].RaceFirstName[17]="Dizedrex"; Race[6].RaceFirstName[18]="Itirux"; Race[6].RaceFirstName[19]="Daenax";
        
            //Race Last Names
            Race[6].RaceLastName[0]="Anguimorpha"; Race[6].RaceLastName[1]="Gekkota";
            Race[6].RaceLastName[2]="Iguania"; Race[6].RaceLastName[3]="Lacertoidea"; Race[6].RaceLastName[4]="Scincomorpha";
            Race[6].RaceLastName[5]="Agama"; Race[6].RaceLastName[6]="Anole"; Race[6].RaceLastName[7]="Armadillo";
            Race[6].RaceLastName[8]="Australian"; Race[6].RaceLastName[9]="Basilisk"; Race[6].RaceLastName[10]="Blue'Belly";
            Race[6].RaceLastName[11]="Blue"; Race[6].RaceLastName[12]="Caiman"; Race[6].RaceLastName[13]="Panther'Chameleon";
            Race[6].RaceLastName[14]="Prehensile-tailed'Skink"; Race[6].RaceLastName[15]="Red'Tegu"; Race[6].RaceLastName[16]="Rhinoceros'Iguana";
            Race[6].RaceLastName[17]="Sailfin'Dragon"; Race[6].RaceLastName[18]="Savannah'Monitor"; Race[6].RaceLastName[19]="Shingleback'Skink";
        

//CYCLOPS
//Race[].NativeBiome='';
        Race[7].RaceName="Cyclops";
        Race[7].RaceHealth=100;
        Race[7].RaceAttackMultiplier=1;
        Race[7].RaceDefenseMultiplier=1;
        //Population
        
        Race[7].RaceReproductionMultiplier=1;
        //Appearance
        Race[7].RaceFaceMiddle="/ O \\";
        Race[7].RaceFaceDown="\\_\"_/";
        //Race full names
        Race[7].RaceFirstName[0]="Yadeteges"; Race[7].RaceFirstName[1]="Homantenes";
        Race[7].RaceFirstName[2]="Typhen"; Race[7].RaceFirstName[3]="Hirmeloten"; Race[7].RaceFirstName[4]="Ylchimendrer";
        Race[7].RaceFirstName[5]="Karmitos"; Race[7].RaceFirstName[6]="Thylratomaion"; Race[7].RaceFirstName[7]="Tindrartor";
        Race[7].RaceFirstName[8]="Yten"; Race[7].RaceFirstName[9]="Xoesras"; Race[7].RaceFirstName[10]="Selres";
        Race[7].RaceFirstName[11]="Saren"; Race[7].RaceFirstName[12]="Kosrin"; Race[7].RaceFirstName[13]="Xyklantas";
        Race[7].RaceFirstName[14]="Rokliron"; Race[7].RaceFirstName[15]="Enge"; Race[7].RaceFirstName[16]="Baka";
        Race[7].RaceFirstName[17]="Pryla"; Race[7].RaceFirstName[18]="Killasa"; Race[7].RaceFirstName[19]="Giglea";
        

        Race[7].RaceLastName[0]="Saphugas"; Race[7].RaceLastName[1]="Orthos";
        Race[7].RaceLastName[2]="Omropos"; Race[7].RaceLastName[3]="Cophen"; Race[7].RaceLastName[4]="Thuzethis";
        Race[7].RaceLastName[5]="Dynkys"; Race[7].RaceLastName[6]="Sphurnoktas"; Race[7].RaceLastName[7]="Chagmudos";
        Race[7].RaceLastName[8]="Yntes"; Race[7].RaceLastName[9]="Prutionthos"; Race[7].RaceLastName[10]="Larthinthis";
        Race[7].RaceLastName[11]="Ulichios"; Race[7].RaceLastName[12]="Ergas"; Race[7].RaceLastName[13]="Kuzeios";
        Race[7].RaceLastName[14]="Saphas"; Race[7].RaceLastName[15]="Ganthikias"; Race[7].RaceLastName[16]="Thokos";
        Race[7].RaceLastName[17]="Tythmulis"; Race[7].RaceLastName[18]="Tagmaktas"; Race[7].RaceLastName[19]="Stathripos";
        



//MINOTAUR
//Race[].NativeBiome='';
        Race[8].RaceName="Minotaur";
        Race[8].RaceHealth=100;
        Race[8].RaceAttackMultiplier=1;
        Race[8].RaceDefenseMultiplier=1;
        //Population
        
        Race[8].RaceReproductionMultiplier=1;
        //Appearance
        Race[8].RaceFaceMiddle="|, ,|";
        Race[8].RaceFaceDown="\\>=</";
        //Race full names
        Race[8].RaceFirstName[0]="Emta"; Race[8].RaceFirstName[1]="Erater";
        Race[8].RaceFirstName[2]="Nootris"; Race[8].RaceFirstName[3]="Kiakane"; Race[8].RaceFirstName[4]="Teetra";
        Race[8].RaceFirstName[5]="Codkun"; Race[8].RaceFirstName[6]="Koofuran"; Race[8].RaceFirstName[7]="Barrapak";
        Race[8].RaceFirstName[8]="Tedak"; Race[8].RaceFirstName[9]="Rakfajar"; Race[8].RaceFirstName[10]="Uovanan";
        Race[8].RaceFirstName[11]="Rasdera"; Race[8].RaceFirstName[12]="Lookane"; Race[8].RaceFirstName[13]="Duolo";
        Race[8].RaceFirstName[14]="Tinadera"; Race[8].RaceFirstName[15]="Kitra"; Race[8].RaceFirstName[16]="Seesdra";
        Race[8].RaceFirstName[17]="Rinatra"; Race[8].RaceFirstName[18]="Kimi"; Race[8].RaceFirstName[19]="Fasmi";
        

        Race[8].RaceLastName[0]="Fisthoof"; Race[8].RaceLastName[1]="Toughroar";
        Race[8].RaceLastName[2]="Goblinskull"; Race[8].RaceLastName[3]="Wolfhunter"; Race[8].RaceLastName[4]="Sharphoof";
        Race[8].RaceLastName[5]="Fearlessleader"; Race[8].RaceLastName[6]="Braveskin"; Race[8].RaceLastName[7]="Stoutmind";
        Race[8].RaceLastName[8]="Nimblebody"; Race[8].RaceLastName[9]="Glorywarrior"; Race[8].RaceLastName[10]="Honorslash";
        Race[8].RaceLastName[11]="Orcslayer"; Race[8].RaceLastName[12]="Jaggedbane"; Race[8].RaceLastName[13]="Steadywarrior";
        Race[8].RaceLastName[14]="Bearroar"; Race[8].RaceLastName[15]="Keenhand"; Race[8].RaceLastName[16]="Ruggedstep";
        Race[8].RaceLastName[17]="Greatbody"; Race[8].RaceLastName[18]="Greatfist"; Race[8].RaceLastName[19]="Rockskin";
        

//SKELETON
Race[9].NativeBiome=',';
        Race[9].RaceName="Skeleton";
        Race[9].RaceHealth=100;
        Race[9].RaceAttackMultiplier=1;
        Race[9].RaceDefenseMultiplier=1;
        //Population
        
        Race[9].RaceReproductionMultiplier=1;
        //Appearance
        Race[9].RaceFaceMiddle="|x x|";
        Race[9].RaceFaceDown="\\_x_/";
        //Race full names
        Race[9].RaceFirstName[0]="Mortpheus"; Race[9].RaceFirstName[1]="Mykill'C.";
        Race[9].RaceFirstName[2]="Pelvis'Presley"; Race[9].RaceFirstName[3]="Hell 'n Boneham"; Race[9].RaceFirstName[4]="Grim";
        Race[9].RaceFirstName[5]="Katniss"; Race[9].RaceFirstName[6]="Richard"; Race[9].RaceFirstName[7]="Bone";
        Race[9].RaceFirstName[8]="Tomb"; Race[9].RaceFirstName[9]="Kill"; Race[9].RaceFirstName[10]="Killin";
        Race[9].RaceFirstName[11]="Michael"; Race[9].RaceFirstName[12]="Mike"; Race[9].RaceFirstName[13]="Tony";
        Race[9].RaceFirstName[14]="Billy Bone"; Race[9].RaceFirstName[15]="Felicity"; Race[9].RaceFirstName[16]="Killa";
        Race[9].RaceFirstName[17]="Obi-Wana"; Race[9].RaceFirstName[18]="Poppins"; Race[9].RaceFirstName[19]="Malice";
        

        Race[9].RaceLastName[0]="Everdead"; Race[9].RaceLastName[1]="Beckonskull";
        Race[9].RaceLastName[2]="Skeletor"; Race[9].RaceLastName[3]="Carcass"; Race[9].RaceLastName[4]="Hanks";
        Race[9].RaceLastName[5]="Gates"; Race[9].RaceLastName[6]="Zoolander"; Race[9].RaceLastName[7]="Firth";
        Race[9].RaceLastName[8]="Jordan"; Race[9].RaceLastName[9]="Tyson"; Race[9].RaceLastName[10]="Femur";
        Race[9].RaceLastName[11]="Bonetana"; Race[9].RaceLastName[12]="Meyers"; Race[9].RaceLastName[13]="Sternum";
        Race[9].RaceLastName[14]="Tibia"; Race[9].RaceLastName[15]="Kebony"; Race[9].RaceLastName[16]="Zeta-Bones";
        Race[9].RaceLastName[17]="Rib"; Race[9].RaceLastName[18]="Marrow"; Race[9].RaceLastName[19]="Humerus";



//MERFOLK
Race[10].NativeBiome=',';
        Race[10].RaceName="Merfolk";
        Race[10].RaceHealth=100;
        Race[10].RaceAttackMultiplier=1;
        Race[10].RaceDefenseMultiplier=1;
        //Population
        
        Race[10].RaceReproductionMultiplier=1;
        //Appearance
        Race[10].RaceFaceMiddle=";. .;";
        Race[10].RaceFaceDown="\\_o_/";
        //Race full names
        Race[10].RaceFirstName[0]="Gekle"; Race[10].RaceFirstName[1]="Kroklal";
        Race[10].RaceFirstName[2]="Trazor"; Race[10].RaceFirstName[3]="Krasho"; Race[10].RaceFirstName[4]="Orkallion";
        Race[10].RaceFirstName[5]="Sharkemoth"; Race[10].RaceFirstName[6]="Eelaconda"; Race[10].RaceFirstName[7]="Sagno";
        Race[10].RaceFirstName[8]="Lashud"; Race[10].RaceFirstName[9]="Chunduwr"; Race[10].RaceFirstName[10]="Krorid";
        Race[10].RaceFirstName[11]="Sharkodil"; Race[10].RaceFirstName[12]="Sharksnake"; Race[10].RaceFirstName[13]="Turtledile";
        Race[10].RaceFirstName[14]="Kascam"; Race[10].RaceFirstName[15]="Dolphiranha"; Race[10].RaceFirstName[16]="Sharktopus";
        Race[10].RaceFirstName[17]="Lobstorka"; Race[10].RaceFirstName[18]="Glullad"; Race[10].RaceFirstName[19]="Trezym";


        Race[10].RaceLastName[0]="Anchovy"; Race[10].RaceLastName[7]="Barracuda";
        Race[10].RaceLastName[1]="Bullhead"; Race[10].RaceLastName[8]="Carp"; Race[10].RaceLastName[14]="Eel";
        Race[10].RaceLastName[2]="Flounder"; Race[10].RaceLastName[9]="Herring"; Race[10].RaceLastName[15]="Puffer";
        Race[10].RaceLastName[3]="Shark"; Race[10].RaceLastName[10]="Crow"; Race[10].RaceLastName[16]="Sturgeon";
        Race[10].RaceLastName[4]="Sunfish"; Race[10].RaceLastName[11]="Tarpon"; Race[10].RaceLastName[17]="Whale";
        Race[10].RaceLastName[5]="Tuna"; Race[10].RaceLastName[12]="Dolphin"; Race[10].RaceLastName[18]="Grouper";
        Race[10].RaceLastName[6]="Butterflyfish"; Race[10].RaceLastName[13]="Blackchin"; Race[10].RaceLastName[19]="Snipefish";
        
//AQUACTIC ELF
Race[11].NativeBiome=',';
        Race[11].RaceName="Aquatic Elf";
        Race[11].RaceHealth=100;
        Race[11].RaceAttackMultiplier=1;
        Race[11].RaceDefenseMultiplier=1;
        //Population
        
        Race[11].RaceReproductionMultiplier=1;
        //Appearance
        Race[11].RaceFaceMiddle="<. .>";
        Race[11].RaceFaceDown="\\_o_/";
     //Race full names
            //Race First Name
            Race[11].RaceFirstName[0]="Folwin"; Race[11].RaceFirstName[1]="Aymer";
            Race[11].RaceFirstName[2]="Othorion"; Race[11].RaceFirstName[3]="Jassin"; Race[11].RaceFirstName[4]="Erlan";
            Race[11].RaceFirstName[5]="Mhaenal"; Race[11].RaceFirstName[6]="Ailluin"; Race[11].RaceFirstName[7]="Zeno";
            Race[11].RaceFirstName[8]="Jorildyn"; Race[11].RaceFirstName[9]="Elandorr"; Race[11].RaceFirstName[10]="Evindal";
            Race[11].RaceFirstName[11]="Zaos"; Race[11].RaceFirstName[12]="Pelleas"; Race[11].RaceFirstName[13]="Kivessin";
            Race[11].RaceFirstName[14]="Othorion"; Race[11].RaceFirstName[15]="Yrneha"; Race[11].RaceFirstName[16]="Lyndis";
            Race[11].RaceFirstName[17]="Maylin"; Race[11].RaceFirstName[18]="Tiriana"; Race[11].RaceFirstName[19]="Radelia";

            //Race Last Name
            Race[11].RaceLastName[0]="Zinrora"; Race[11].RaceLastName[1]="Daehana";
            Race[11].RaceLastName[2]="Qinxisys"; Race[11].RaceLastName[3]="Heledan"; Race[11].RaceLastName[4]="Genbalar";
            Race[11].RaceLastName[5]="Gilthana"; Race[11].RaceLastName[6]="Loraharice"; Race[11].RaceLastName[7]="Ravatumal";
            Race[11].RaceLastName[8]="Urira"; Race[11].RaceLastName[9]="Yinmoira"; Race[11].RaceLastName[10]="Magwraek";
            Race[11].RaceLastName[11]="Iarthana"; Race[11].RaceLastName[12]="Iarvaris"; Race[11].RaceLastName[13]="Fasalor";
            Race[11].RaceLastName[14]="Elwarin"; Race[11].RaceLastName[15]="Waesneiros"; Race[11].RaceLastName[16]="Aebanise";
            Race[11].RaceLastName[17]="Quisys"; Race[11].RaceLastName[18]="Carfir"; Race[11].RaceLastName[19]="Robella";



        
//DARK ELF
Race[12].NativeBiome=',';
        Race[12].RaceName="Dark Elf";
        Race[12].RaceHealth=100;
        Race[12].RaceAttackMultiplier=1;
        Race[12].RaceDefenseMultiplier=1;
        //Population
        
        Race[12].RaceReproductionMultiplier=1;
        //Appearance
        Race[12].RaceFaceMiddle="<, ,>";
        Race[12].RaceFaceDown="\\_=_/";
        //Race full names
            //Race First Name
            Race[12].RaceFirstName[0]="Folwin"; Race[12].RaceFirstName[1]="Aymer";
            Race[12].RaceFirstName[2]="Othorion"; Race[12].RaceFirstName[3]="Jassin"; Race[12].RaceFirstName[4]="Erlan";
            Race[12].RaceFirstName[5]="Mhaenal"; Race[12].RaceFirstName[6]="Ailluin"; Race[12].RaceFirstName[7]="Zeno";
            Race[12].RaceFirstName[8]="Jorildyn"; Race[12].RaceFirstName[9]="Elandorr"; Race[12].RaceFirstName[10]="Evindal";
            Race[12].RaceFirstName[11]="Zaos"; Race[12].RaceFirstName[12]="Pelleas"; Race[12].RaceFirstName[13]="Kivessin";
            Race[12].RaceFirstName[14]="Othorion"; Race[12].RaceFirstName[15]="Yrneha"; Race[12].RaceFirstName[16]="Lyndis";
            Race[12].RaceFirstName[17]="Maylin"; Race[12].RaceFirstName[18]="Tiriana"; Race[12].RaceFirstName[19]="Radelia";

            //Race Last Name
            Race[12].RaceLastName[0]="Zinrora"; Race[12].RaceLastName[1]="Daehana";
            Race[12].RaceLastName[2]="Qinxisys"; Race[12].RaceLastName[3]="Heledan"; Race[12].RaceLastName[4]="Genbalar";
            Race[12].RaceLastName[5]="Gilthana"; Race[12].RaceLastName[6]="Loraharice"; Race[12].RaceLastName[7]="Ravatumal";
            Race[12].RaceLastName[8]="Urira"; Race[12].RaceLastName[9]="Yinmoira"; Race[12].RaceLastName[10]="Magwraek";
            Race[12].RaceLastName[11]="Iarthana"; Race[12].RaceLastName[12]="Iarvaris"; Race[12].RaceLastName[13]="Fasalor";
            Race[12].RaceLastName[14]="Elwarin"; Race[12].RaceLastName[15]="Waesneiros"; Race[12].RaceLastName[16]="Aebanise";
            Race[12].RaceLastName[17]="Quisys"; Race[12].RaceLastName[18]="Carfir"; Race[12].RaceLastName[19]="Robella";

//KOBOLD
Race[13].NativeBiome=',';
        Race[13].RaceName="Kobold";
        Race[13].RaceHealth=100;
        Race[13].RaceAttackMultiplier=1;
        Race[13].RaceDefenseMultiplier=1;
        //Population
        
        Race[13].RaceReproductionMultiplier=1;
        //Appearance
        Race[13].RaceFaceMiddle="{, ,}";
        Race[13].RaceFaceDown="/_=_\\";
        //Race full names
        Race[13].RaceFirstName[0]="Vuss"; Race[13].RaceFirstName[1]="Mok";
        Race[13].RaceFirstName[2]="Tud"; Race[13].RaceFirstName[3]="Satt"; Race[13].RaceFirstName[4]="Snitla";
        Race[13].RaceFirstName[5]="Snatla"; Race[13].RaceFirstName[6]="Gurbo"; Race[13].RaceFirstName[7]="Rokdi";
        Race[13].RaceFirstName[8]="Reka"; Race[13].RaceFirstName[9]="Olla"; Race[13].RaceFirstName[10]="Hirn";
        Race[13].RaceFirstName[11]="Dags"; Race[13].RaceFirstName[12]="Snom"; Race[13].RaceFirstName[13]="Selbe";
        Race[13].RaceFirstName[14]="Egne"; Race[13].RaceFirstName[15]="Votra"; Race[13].RaceFirstName[16]="Zulpa";
        Race[13].RaceFirstName[17]="Dopla"; Race[13].RaceFirstName[18]="Harpi"; Race[13].RaceFirstName[19]="Rirba";
        

        //Race Last Names
            Race[13].RaceLastName[0]="Red"; Race[13].RaceLastName[1]="Orange";
            Race[13].RaceLastName[2]="Yellow"; Race[13].RaceLastName[3]="Green"; Race[13].RaceLastName[4]="Blue";
            Race[13].RaceLastName[5]="Pink"; Race[13].RaceLastName[6]="Purple"; Race[13].RaceLastName[7]="Brown";
            Race[13].RaceLastName[8]="Black"; Race[13].RaceLastName[9]="White"; Race[13].RaceLastName[10]="Gray";
            Race[13].RaceLastName[11]="Olive"; Race[13].RaceLastName[12]="Maroon"; Race[13].RaceLastName[13]="Violet";
            Race[13].RaceLastName[14]="Magenta"; Race[13].RaceLastName[15]="Cream"; Race[13].RaceLastName[16]="Teal";
            Race[13].RaceLastName[17]="Coral"; Race[13].RaceLastName[18]="Peach"; Race[13].RaceLastName[19]="Cyan";


//SPIDERMAN
Race[14].NativeBiome=',';
        Race[14].RaceName="Spiderman";
        Race[14].RaceHealth=100;
        Race[14].RaceAttackMultiplier=1;
        Race[14].RaceDefenseMultiplier=1;
        //Population
        
        Race[14].RaceReproductionMultiplier=1;
        //Appearance
        Race[14].RaceFaceMiddle="(:.:)";
        Race[14].RaceFaceDown="\\|=|/";
        //Race full names
        Race[14].RaceFirstName[0]="Krekuriq"; Race[14].RaceFirstName[1]="Acuzoq";
        Race[14].RaceFirstName[2]="Irrax"; Race[14].RaceFirstName[3]="Xachekeeb"; Race[14].RaceFirstName[4]="Eqa";
        Race[14].RaceFirstName[5]="Akricir"; Race[14].RaceFirstName[6]="Kravut"; Race[14].RaceFirstName[7]="Nazsod";
        Race[14].RaceFirstName[8]="Cekris"; Race[14].RaceFirstName[9]="Eeq'tot"; Race[14].RaceFirstName[10]="Iqox";
        Race[14].RaceFirstName[11]="Szikarroq"; Race[14].RaceFirstName[12]="Ciazorouq"; Race[14].RaceFirstName[13]="Qrotark'iq";
        Race[14].RaceFirstName[14]="Rishish'ta"; Race[14].RaceFirstName[15]="Chelluk'zah"; Race[14].RaceFirstName[16]="Sheruth";
        Race[14].RaceFirstName[17]="Ishror"; Race[14].RaceFirstName[18]="Zivhi"; Race[14].RaceFirstName[19]="Sheico";
        



        Race[14].RaceLastName[0]="Ricinulei"; Race[14].RaceLastName[1]="Opiliones";
        Race[14].RaceLastName[2]="Solifugae"; Race[14].RaceLastName[3]="Acariformes"; Race[14].RaceLastName[4]="Phalangiotarbi";
        Race[14].RaceLastName[5]="Haptopoda"; Race[14].RaceLastName[6]="Araneae"; Race[14].RaceLastName[7]="Ganthela";
        Race[14].RaceLastName[8]="Heptathela"; Race[14].RaceLastName[9]="Liphistius"; Race[14].RaceLastName[10]="Qiongthela";
        Race[14].RaceLastName[11]="Ryuthela"; Race[14].RaceLastName[12]="Sinothela"; Race[14].RaceLastName[13]="Songthela";
        Race[14].RaceLastName[14]="Vinathela"; Race[14].RaceLastName[15]="Australis"; Race[14].RaceLastName[16]="Bristowei";
        Race[14].RaceLastName[17]="Motobu"; Race[14].RaceLastName[18]="Nishihirai"; Race[14].RaceLastName[19]="Ornatus";

        

//MINECRAFT
Race[15].NativeBiome=',';
        Race[15].RaceName="Minecraft";
        Race[15].RaceHealth=100;
        Race[15].RaceAttackMultiplier=1;
        Race[15].RaceDefenseMultiplier=1;
        //Population
        
        Race[15].RaceReproductionMultiplier=1;
        //Appearance
        Race[15].RaceFaceMiddle="|. .|";
        Race[15].RaceFaceDown="|_=_|";
        //Race full names
        Race[15].RaceFirstName[0]="Steve"; Race[15].RaceFirstName[1]="Alex";
        Race[15].RaceFirstName[2]="Notch"; Race[15].RaceFirstName[3]="Jeb"; Race[15].RaceFirstName[4]="Kappische";
        Race[15].RaceFirstName[5]="Junkboy"; Race[15].RaceFirstName[6]="JahKob"; Race[15].RaceFirstName[7]="Carnalizer";
        Race[15].RaceFirstName[8]="xXMMGXx"; Race[15].RaceFirstName[9]="xXABGXx"; Race[15].RaceFirstName[10]="hideous_";
        Race[15].RaceFirstName[11]="91maan90"; Race[15].RaceFirstName[12]="Dinnerbone"; Race[15].RaceFirstName[13]="Herobrine";
        Race[15].RaceFirstName[14]="Sophie123"; Race[15].RaceFirstName[15]="yo_mama11"; Race[15].RaceFirstName[16]="Mikaelajrdn24";
        Race[15].RaceFirstName[17]="LaraCroft_a"; Race[15].RaceFirstName[18]="WownyaGG"; Race[15].RaceFirstName[19]="MinecraftChick";


        Race[15].RaceLastName[0]="Java"; Race[15].RaceLastName[1]="Bedrock";
        Race[15].RaceLastName[2]="Pre-classic"; Race[15].RaceLastName[3]="Classic"; Race[15].RaceLastName[4]="Indev";
        Race[15].RaceLastName[5]="Infdev"; Race[15].RaceLastName[6]="Alpha"; Race[15].RaceLastName[7]="Beta";
        Race[15].RaceLastName[8]="Official"; Race[15].RaceLastName[9]="Pocket"; Race[15].RaceLastName[10]="Minecraft";
        Race[15].RaceLastName[11]="McBlock"; Race[15].RaceLastName[12]="McBlockFace"; Race[15].RaceLastName[13]="Blocky";
        Race[15].RaceLastName[14]="DirtBlock"; Race[15].RaceLastName[15]="StoneBlock"; Race[15].RaceLastName[16]="DiamondBlock";
        Race[15].RaceLastName[17]="Creeperman"; Race[15].RaceLastName[18]="Enderman"; Race[15].RaceLastName[19]="Lapis";

//TROGLODYTE
Race[16].NativeBiome=',';
        Race[16].RaceName="Troglodyte";
        Race[16].RaceHealth=100;
        Race[16].RaceAttackMultiplier=1;
        Race[16].RaceDefenseMultiplier=1;
        //Population
        
        Race[16].RaceReproductionMultiplier=1;
        //Appearance
        Race[16].RaceFaceMiddle="/, ,\\";
        Race[16].RaceFaceDown="\\_Y_/";
        //Race full names
        Race[16].RaceFirstName[0]="Thost"; Race[16].RaceFirstName[1]="Skran'taort";
        Race[16].RaceFirstName[2]="Sall"; Race[16].RaceFirstName[3]="Zasall"; Race[16].RaceFirstName[4]="Gluz'lert";
        Race[16].RaceFirstName[5]="K'hoszalk"; Race[16].RaceFirstName[6]="Hor'kosk"; Race[16].RaceFirstName[7]="Hezerm";
        Race[16].RaceFirstName[8]="Hur'zelk"; Race[16].RaceFirstName[9]="L'pontok"; Race[16].RaceFirstName[10]="K'mertilk";
        Race[16].RaceFirstName[11]="Z'thirzar"; Race[16].RaceFirstName[12]="Glizaak"; Race[16].RaceFirstName[13]="Glukt";
        Race[16].RaceFirstName[14]="Mett"; Race[16].RaceFirstName[15]="Sor"; Race[16].RaceFirstName[16]="Kikt";
        Race[16].RaceFirstName[17]="Ziss"; Race[16].RaceFirstName[18]="Puss"; Race[16].RaceFirstName[19]="Krirt";
       
        Race[16].RaceLastName[0]="Red"; Race[16].RaceLastName[1]="Orange";
        Race[16].RaceLastName[2]="Yellow"; Race[16].RaceLastName[3]="Green"; Race[16].RaceLastName[4]="Blue";
        Race[16].RaceLastName[5]="Pink"; Race[16].RaceLastName[6]="Purple"; Race[16].RaceLastName[7]="Brown";
        Race[16].RaceLastName[8]="Black"; Race[16].RaceLastName[9]="White"; Race[16].RaceLastName[10]="Gray";
        Race[16].RaceLastName[11]="Olive"; Race[16].RaceLastName[12]="Maroon"; Race[16].RaceLastName[13]="Violet";
        Race[16].RaceLastName[14]="Magenta"; Race[16].RaceLastName[15]="Cream"; Race[16].RaceLastName[16]="Teal";
        Race[16].RaceLastName[17]="Coral"; Race[16].RaceLastName[18]="Peach"; Race[16].RaceLastName[19]="Cyan";
    

        
//MOSQUITOMAN

Race[17].NativeBiome=',';
        Race[17].RaceName="Mosquitoman";
        Race[17].RaceHealth=100;
        Race[17].RaceAttackMultiplier=1;
        Race[17].RaceDefenseMultiplier=1;
        //Population
        
        Race[17].RaceReproductionMultiplier=1;
        //Appearance
        Race[17].RaceFaceMiddle="( # )";
        Race[17].RaceFaceDown="\\_>_/";
        //Race full names
        Race[17].RaceFirstName[0]="p'Eh"; Race[17].RaceFirstName[1]="g'Oros'kon";
        Race[17].RaceFirstName[2]="r'Ren-bhelihn"; Race[17].RaceFirstName[3]="b'Deb-kebohn"; Race[17].RaceFirstName[4]="g'Louhn";
        Race[17].RaceFirstName[5]="g'Rirob'khas"; Race[17].RaceFirstName[6]="r'Dunohn'kan"; Race[17].RaceFirstName[7]="c'Deen";
        Race[17].RaceFirstName[8]="b'Oup"; Race[17].RaceFirstName[9]="d'Ub-bhahkan"; Race[17].RaceFirstName[10]="d'Rien";
        Race[17].RaceFirstName[11]="r'Os'p'Os"; Race[17].RaceFirstName[12]="r'Ohp'd'Ohp"; Race[17].RaceFirstName[13]="p'Neen";
        Race[17].RaceFirstName[14]="c'Dab"; Race[17].RaceFirstName[15]="d'Oop'g'Oop"; Race[17].RaceFirstName[16]="r'Long";
        Race[17].RaceFirstName[17]="d'Ruh"; Race[17].RaceFirstName[18]="n'Rish"; Race[17].RaceFirstName[19]="p'Is'b'Is";

        Race[17].RaceLastName[0]="Red"; Race[17].RaceLastName[1]="Orange";
        Race[17].RaceLastName[2]="Yellow"; Race[17].RaceLastName[3]="Green"; Race[17].RaceLastName[4]="Blue";
        Race[17].RaceLastName[5]="Pink"; Race[17].RaceLastName[6]="Purple"; Race[17].RaceLastName[7]="Brown";
        Race[17].RaceLastName[8]="Black"; Race[17].RaceLastName[9]="White"; Race[17].RaceLastName[10]="Gray";
        Race[17].RaceLastName[11]="Olive"; Race[17].RaceLastName[12]="Maroon"; Race[17].RaceLastName[13]="Violet";
        Race[17].RaceLastName[14]="Magenta"; Race[17].RaceLastName[15]="Cream"; Race[17].RaceLastName[16]="Teal";
        Race[17].RaceLastName[17]="Coral"; Race[17].RaceLastName[18]="Peach"; Race[17].RaceLastName[19]="Cyan";
    

//            ----AIVILLAGE MISC----












VillageInfo PlayerVillage;

//player.avatar creation

     PlayerCharacter player;
        player.gold = 0;
        player.wood = 0;
        player.stone = 0;
        player.food = 0;
        player.water = 0;
        
        

     //do {

         // std::cout << "Please enter an ASCII avatar:";

        player.avatar='q';
        
        
   // }
   // while(player.avatar== 0);

//============================PLAYER RACE PICKER===============
    std::cout << "==Races==\n";
    for(int i=0;i<18;i++){
        std::cout << i<<": "<<Race[i].RaceName<<"\n";
        std::cout << Hair[0].HairString<<"\t"<<"race health: "<<Race[i].RaceHealth<<"\n";
        std::cout << Race[i].RaceFaceMiddle<<"\n";
        std::cout << Race[i].RaceFaceDown<<"\n";


    }
    std::cout <<"\n"<< "Select your race: ";
    std::cin >> player.PlayerRace;

//starting xpos and ypos

     player.xpos=0;

     player.ypos=0;











//===============TILE TERRAIN GENERATION=================


     for(int i=0; i<=ymax; i++) {


          for(int a=0; a<=xmax; a++) {

               layers[i][a]=',';
            randomnum1=rand() % 20 + 1;
           // if(randomnum1==2) {
               // layers[i][a]='o';
           // }

            //if(randomnum1==3||randomnum1==9) {
            //    layers[i][a]='C';
            
            
            //}
            if(randomnum1==4){
                layers[i][a]='C';
            }
            if(randomnum1==5){
                layers[i][a]='C';
            }
            if(randomnum1==6){
                layers[i][a]='C';
            }
             if(randomnum1==7){
                layers[i][a]='C';
            }
             if(randomnum1==8){
                layers[i][a]='+';
            }
             
        }


        
    }



/*===============TILE SPECIFICATIINS=====================
**PLAINS**
name
    -ores-
clay 0-80 20k-200k
copper 0-40 10k-100k
iron 0-20 2k-50k
gold 0-10 1k-10k
jewels 0-8 500-5k

     -Nutrients-
    waterchance 50-80
    AnimalChance 10-30
    PredatorChance 0-3
    
WoodAmount 5k-50k
StoneAmount 2k-20k

population multiplier 1.04
animal population multiplier 1.10


**Dense Forest**
-ores-
clay 0-40 10k-100k
copper 0-30 5k-50k
iron 0-15 2k-20k
gold 0-8 500-5k
jewels 0-3 100-1k

-Nutrients-
Waterchance 70-90
AnimalChance 50-100
Predatorchance 0-5

woodamount 300k-3m
stoneamount 5k-50k

population multiplier 1.01
animal population multiplier 1.30
**SPARSE FOREST**
-ores-
clay 0-50
copper 0-40
iron 0-20
gold 0-15
jewels 0-5

-nutrients-
Waterchance 60-80
Animalchance 40-80
Predatorchance 0-3
150k-1m
woodamount=
*/
//===================TILE NATION=========================
//Nation library, NumberOfNations and nation ids thru tilenations[id]
/*NOTABLE VARIABLES
TileNations[]
NumberOfTileNations



*/
std::string Kingdoms[]{
"Oubreosan","Serbia","Hotroystein",
"Pachoule", "Qothor",
"Qoscistan", "Floywana", "Chechnya",
"Breavania", "Aspington", "Owhain",
"Heolum", "Gaerene",
"Hiven", "Pruinid", "Senogary",
"Ixogary", "Osuleba",
"Coneian", "Mani",
"Sueb", "Manopolis", 

};
std::string TileNations[11];
int NumberOfTileNations;
int TileNationCounter=0;
int TileNationRandomNumber;
NumberOfTileNations=rand()%10+1;
bool SameTileNationDetection;
int rifhe=0;
while(TileNationCounter<=NumberOfTileNations){
    //for(int i=0;i<=NumberOfTileNations;i++){

        TileNationRandomNumber=rand()%11+1;
        //SAME NATION CHECKER
        for(int i=0;i<=NumberOfTileNations;i++){

            if (TileNations[i]==Kingdoms[TileNationRandomNumber]){
           // std::cout<<"SAME NATION DETECTED";
            SameTileNationDetection=true;
           break;
            }
            else{
            //std::cout<<"lesgo";
            SameTileNationDetection=false;
            }
        }
        if(SameTileNationDetection==false){
        
        
        
    TileNations[TileNationCounter]=Kingdoms[TileNationRandomNumber];
    
    //std::cout << "\n"<<TileNations[TileNationCounter] << "-FREE NATION\n";
    TileNationCounter+=1;
   
    }
    else{
    
    
    
    }
}
std::cout <<"\n";
for(int i=0;i<=NumberOfTileNations;i++){
std::cout <<i<<"="<< TileNations[i]<< "\n";
}
//=======================================================








//====================TILE STATS GENERATOR===============
//NATION,NATIONETHNICGROUPS,VILLAGES

int NumberOfCities=0;
CityInfo City[120];

int NumberOfAIVillages=0;
AIVillages AIVillage[600];
bool AIVillageToBeBuilt132=false;





int TileGeneratorXPos=0;
int TileGeneratorYPos=0;
char TileGeneratorBiomeChar;
std::string TerrainFullNameList[]{
"Plains","Hills","Mountain","Sparse forest",
"Dense forest","Lake"
};


IndividualTile Tile[120];
for(int i=0;i<120;i++){
TileGeneratorBiomeChar=layers[TileGeneratorYPos][TileGeneratorXPos];
TileGeneratorXPos++;

//VILLAGE CREATOR
int AIVillageRandom132=rand()%3;
int StartOfAIVillagesForThatTile=i*5;


if (TileGeneratorXPos==20){
            TileGeneratorXPos =0;
            TileGeneratorYPos +=1;
            }
           

  int TileNationRandom132=rand()%(NumberOfTileNations+1);

//TILE STATS GENERATOR=============AIVILLAGE GENERATOR===============

for(int a=0;a<=5;a++){
            AIVillage[StartOfAIVillagesForThatTile+a].AIVillageOwnerRace=rand()%(InfoNumberOfRaces);
            AIVillage[StartOfAIVillagesForThatTile+a].AIVillagePopulation=rand()%1000+200;
}
switch(TileGeneratorBiomeChar){


            case ',':
                Tile[i].TileBiome="Plains";
                break;
            case 'T':
                Tile[i].TileBiome="Dense forest";
                break;
            case 'x':
                Tile[i].TileBiome="Hills";
                break;
            case 'X':
                Tile[i].TileBiome="Mountains";
                break;
           case 'o':
           case 'O':
                    Tile[i].TileBiome = "Village";
            break;
//            ---------CITY ON TILE---------

            case 'C':
            //CITY OWNERID AND ETHNICGROUP GIVER
             Tile[i].TileBiome=TerrainFullNameList[rand()%6];
           City[i].CityTileNumber=i;
             
            City[i].CityOwner=TileNations[TileNationRandom132];
         std::cout << City[i].CityTileNumber << '\n';
            std::cout << NumberOfCities<<'\n';
         City[i].CityOwnerID=TileNationRandom132;
        
      std::cout << City[i].CityOwner << ": " << City[i].CityOwnerID << "\n";
          City[i].CityPopulationEthnicGroups[TileNationRandom132]=rand()%500+2000;
      
           std::cout << City[i].CityPopulationEthnicGroups[TileNationRandom132]<<"\n";
        
        
        
            
            NumberOfCities +=1;
      
            break;
            case '+':
            Tile[i].TileBiome="Lake";
            break;
            case 't':
            Tile[i].TileBiome="Sparse Forest";
            break;
}
            
         Tile[i].TileNumber=i;
        AIVillageToBeBuilt132=false;
        
}



     LastTile=layers[0][0];


     layers[0][0]=player.avatar;

//AIVILLAGE NPC ELDER GENERATOR
NPCs Npc[1000];
int NpcElderGeneratorCurrentNumber=0;
int NpcElderGeneratorCurrentRaceNumber;
for(int b=0;b<120;b++){
    for(int i=0;i<5;i++){
        AIVillage[NpcElderGeneratorCurrentNumber+i].AIVillageElderNPCNumber=NpcElderGeneratorCurrentNumber+i;
        NpcElderGeneratorCurrentRaceNumber=AIVillage[NpcElderGeneratorCurrentNumber+i].AIVillageOwnerRace;
        Npc[NpcElderGeneratorCurrentNumber+i].NPCRace=NpcElderGeneratorCurrentRaceNumber;
        Npc[NpcElderGeneratorCurrentNumber+i].NPCFirstName=Race[NpcElderGeneratorCurrentRaceNumber].RaceFirstName[rand()%20];
        Npc[NpcElderGeneratorCurrentNumber+i].NPCLastName=Race[NpcElderGeneratorCurrentRaceNumber].RaceLastName[rand()%20];
        Npc[NpcElderGeneratorCurrentNumber+i].NPCHairString=Hair[rand()%10].HairString;
        Npc[NpcElderGeneratorCurrentNumber+i].NPCFaceMiddle=Race[NpcElderGeneratorCurrentRaceNumber].RaceFaceMiddle;
        Npc[NpcElderGeneratorCurrentNumber+i].NPCFaceDown=Race[NpcElderGeneratorCurrentRaceNumber].RaceFaceDown;


        //Player
        if (player.PlayerRace==Npc[NpcElderGeneratorCurrentNumber+i].NPCRace){
            Npc[NpcElderGeneratorCurrentNumber+i].NPCRelationToPlayer=20;
        }
        else{
            Npc[NpcElderGeneratorCurrentNumber+i].NPCRelationToPlayer=0;

        }
        





        
    }
NpcElderGeneratorCurrentNumber+=5;
}
    //OPTIONSRUNNING
    bool OptionInteractionCheckForSurroundingVillagesBool;
    int OptionInteractionCheckForSurroundingVillagesInt;

    bool OptionInteractionCheckForSurroundingVillagesFirstVillageBool;
    int OptionInteractionCheckForSurroundingVillagesFirstVillageint;

    int OptionInteractionCheckForSurroundingVillagesFirstVillageRecruitint;


    int StandingTileNumber;

    //MAPS
    std::string MapGangSafeHouse[6];
         MapGangSafeHouse[0]="/------------------\\";
                                        MapGangSafeHouse[1]="|..OO.O.....H..H..H|";
                                        MapGangSafeHouse[2]="|O.OO.......H..H..H|";
                                        MapGangSafeHouse[3]="|----..............D";
                                        MapGangSafeHouse[4]="|Z.O..........s....|";
                                        MapGangSafeHouse[5]="\\------------------/";

    while(GameEnd==false) {

        
            std::cout<<"\n";
           
          for(int i=0; i<=ymax; i++) {

             

               std::cout << layers[i] << '\n';

             
        }
        









      





//IF A OPTION IS ALREADY OPEN

StandingTileNumber=(player.ypos*20)+player.xpos;
std::cout << ((player.ypos*20)+player.xpos);
        if(OptionRunning==false){
        
            std::cout << "--Bejos Fortress--\n"<<std::endl;
            std::cout << "Currently in " << Tile[StandingTileNumber].TileBiome << " biome\n";
         if(LastTile=='c'||LastTile=='C'){
                for(int i=0;i<=NumberOfCities;i++){
                    if(StandingTileNumber==City[i].CityTileNumber){
                    std::cout << "These lands belong to the "<<City[i].CityOwner<<"\n";
                    break;
                    }
                    else{
                    }
                }
                    
            }
        
        
        std::cout << "Select an action:\n1-Movement\n";

        std::cout << "2-Interact\n";

        std::cin>>option;
         }
        else{


        }









        switch(option) {
        case 1:
            OptionRunning=true;
//MOVEMENT START
            std::cout << "  n  \n  ^  \nw<+>e\n  s  \n1-Cancel\n";
            std::cout << "Enter where you want to go:"<< std::endl;

            
              std::cin >> movement;

              

              switch(movement) {
//NORTH MOVE
              case 'n':

              case 'N':

                   if(player.ypos== ymin) {

                        UnableToMove=true;

                      
                }

                   else {
                    UnableToMove=false;

                        layers[player.ypos][player.xpos]=LastTile;

                        player.ypos -= 1;
                    NextTile=layers[player.ypos][player.xpos];


                      
                }

                   break;

//SOUTH MOVE
              case 's':

              case 'S':

                   if(player.ypos==ymax) {

                       

                        UnableToMove=true;


                      
                }

                   else {
                    UnableToMove=false;
                        layers[player.ypos][player.xpos]=LastTile;

                        player.ypos +=1;
                    NextTile=layers[player.ypos][player.xpos];


                      
                }

                   break;

               case 'q':

                    exit(0);

                    break;
//EAST MOVE
               case 'e':

               case 'E':

                    if(player.xpos== xmax) {

                        UnableToMove=true;

                       
                }

                    else {
                    UnableToMove=false;
                        layers[player.ypos][player.xpos]=LastTile;

                        player.xpos += 1;
                    NextTile=layers[player.ypos][player.xpos];


                        
                }

                   break;
//WEST MOVE
               case 'w':

               case 'W':

                   if(player.xpos== xmin) {

                        UnableToMove=true;

                       
                }

                   else {
                    UnableToMove=false;
                        layers[player.ypos][player.xpos]=LastTile;

                        player.xpos -= 1;
                    NextTile=layers[player.ypos][player.xpos];


                       
                }

                   break;

             case '1':
                OptionRunning=false;
            }
            //SWITCH MOVEMENT END




            // LastTile=NextTile;
            //IF BLOCKED;
              if(layers[player.ypos][player.xpos]!=player.avatar) {

                   LastTile=layers[player.ypos][player.xpos];

                 
            }

              //LastTile=layers[player.ypos][player.xpos];

              layers[player.ypos][player.xpos]=player.avatar;

              if(UnableToMove==true) {

                   std::cout << "BLOCKED"<<std::endl;

                
            }


             
            break;








        case 2: //INTERACTION*
            OptionRunning=true;
            
            
            switch(LastTile) {
            //STANDING TILE IS A PLAYERS VILLAGE
            case 'o':
            case 'O':
            if(VillageBuildingsOptionRunning==true){
            
            
            }
            
            else{
             std::cout << "\n-OPTIONS-\n1-Buildings\n2-Military\n3-Trade\n4-Stats\n5-Disband\n6-Cancel\n"<<std::endl;
                
                std::cin >> interactionoption;
            }
               
                switch(interactionoption) {
                    




                case 1: //BUILDINGS**
                    VillageBuildingsOptionRunning=true;
                   
             std::cout << "1-Residental\n2-Commerce\n3-Industry\n4-Misc\n5-Cancel\n";
                  
             std::cin >> VillageBuildingsOption;
            
                switch(VillageBuildingsOption){ //RESIDENTAL
                    case 1:
                        std::cout << "\n-Residental Buildings-\n";
            std::cout << "1-Dirt huts- 1 wood(+3 OCP, -5 HAP)\n";
            std::cout << "2-Wood huts- 5 wood(+5 OCP, 0 HAP)\n";
            std::cout << "3-Wood cabins- 25 wood(+10 OCP, +10 HAP)\n";
            std::cout << "4-Stone huts- 25 wood 25 stone(+3 OCP, +1 HAP)\n";
            std::cout << "5-Stone cabins- 75 wood 50 stone(+10 OCP, +15 HAP)\n";
            std::cout << "6-Stone Mansions- 150 wood 200 stone (+50 OCP, +80 HAP)\n";
            std::cout << "7-CANCEL\n";
            
            
                std::cin >> VillageBuildingsResidentalOption;
                switch(VillageBuildingsResidentalOption){
            
            
            
            
                case 1: //DIRT HUTS
            
                    std::cout<< "\nHow many dirt huts do you wish to build: ";
                std::cin >> number;
                if(number>0){
                if(player.wood >= (1*number)){
            PlayerVillage.NumberOfDirtHuts += number;
            player.wood -= number;
            std::cout << "Building success";
            }
            else{
            std::cout << "\nNot enough MATERIALS\n";
            }
            }
            else{
            std::cout << "\nPlease insert a correct number\n";
            }
            break;
            
            
            
               case 2: //WOOD HUTS
            
                    std::cout<< "\nHow many wood huts do you wish to build: ";
                std::cin >> number;
                if(number>0){
                if(player.wood >= (5*number)){
            PlayerVillage.NumberOfWoodHuts+= number;
            player.wood -= (5*number);
            }
            else{
            std::cout << "\nNot enough MATERIALS\n";
            }
            }
            else{
            std::cout << "\nPlease insert a correct number\n";
            }
            break;
            
            
            case 3: //WOOD CABINS
            std::cout<< "\nHow many wood cabins do you wish to build: ";
                std::cin >> number;
                if(number>0){
                if(player.wood >= (25*number)){
            PlayerVillage.NumberOfWoodCabins += number;
            player.wood -= (25*number);
            }
            else{
            std::cout << "\nNot enough MATERIALS\n";
            }
            }
            else{
            std::cout << "\nPlease insert a correct number\n";
            }
            break;
            
            
            
            
            case 4: //STONE HUTS
            std::cout<< "\nHow many stone huts do you wish to build: ";
                std::cin >> number;
                if(number>0){
                if((player.wood >= (25*number)) && (player.stone>= (25*number))){
            PlayerVillage.NumberOfStoneHuts += number;
            player.wood -= (25*number);
            player.stone -= (25*number);
            }
            else{
            std::cout << "\nNot enough MATERIALS\n";
            }
            }
            else{
            std::cout << "\nPlease insert a correct number\n";
            }
            break;
            
            
            
            case 5: //STONE CABINS
             std::cout<< "\nHow many stone cabins do you wish to build: ";
                std::cin >> number;
                if(number>0){
                if((player.wood >= (75*number)) && (player.stone>= (50*number))){
            PlayerVillage.NumberOfStoneCabins += number;
            player.wood -= (75*number);
            player.stone -= (50*number);
            }
            else{
            std::cout << "\nNot enough MATERIALS\n";
            }
            }
            else{
            std::cout << "\nPlease insert a correct number\n";
            }
            
            
            
            break;
            
         
            case 6: //STONE MANSIONS
              std::cout<< "\nHow many stone mansions do you wish to build: ";
                std::cin >> number;
                if(number>0){
                if((player.wood >= (150*number)) && (player.stone>= (200*number))){
            PlayerVillage.NumberOfStoneMansions += number;
            player.wood -= (150*number);
            player.stone -= (200*number);
            }
            else{
            std::cout << "\nNot enough MATERIALS\n";
            }
            }
            else{
            std::cout << "\nPlease insert a correct number\n";
            }
           
            
            break;
            
           
            case 7: //CANCEL
            
            default:
            std::cout <<"Invalid Argument";
            break;
            
            
            
            
            
            
            
            }
            break; //END OF CASE 1/RESIDENTAL
            
            case 2:
            std::cout << "-COMMERCE-\n";
            std::cout << "1-Marketplace- 25 wood()\n";
            std::cout << "2-Warehouses\n";
            std::cout << "3-Inn\n";
            std::cout << "4-Jeweler\n";
            std::cout << "5-Pottery\n";
            std::cout << "6-Carpenter\n";
            std::cout << "7-\n";
            std::cout << "";
            
            
            
            break; //END OF CASE 2/COMMERCE
            case 3:
            std::cout << "\n-INDUSTRY-\n";
            std::cout << "1-Farm- 1 wood(+10 food)\n";
            std::cout << "2-Mill\n";
            std::cout << "3-Orchard- 5 wood(+5 food, +3 wood)\n";
            std::cout << "4-Stone Mine\n";
            std::cout << "5-Copper Mine\n";
            std::cout << "6-Iron Mine\n";
            std::cout << "7-Gold Mine\n";
            std::cout << "8-Jewel Mine\n";
            std::cout << "9-Woodcutter\n";
            std::cout << "10-Lumbermill\n";
            std::cout << "11-Cotton Farm\n";
            std::cout << "12-Loom\n";
            std::cout << "13-Tailor\n";
            std::cout << "14-Well\n";
            std::cout << "15-Aqueduct\n";
            std::cout << "16-Forge\n";
            
            break;
            case 4:
            std::cout << "-MISC-";
            std::cout << "1-Prison";
            std::cout << "2-Execution Stage";
            std::cout << "3-Town Hall";
            std::cout << "4-Concetration Camp";
            std::cout << "5-Arena";
            std::cout << "6-";
            
                    
                    break;

                case 5:
            VillageBuildingsOptionRunning=false;
            break;
}

break;


                case 2: //MILITARY**
            VillageBuildingsOptionRunning=true;
                    std::cout << "\n-MILITARY-\n1-Buildings\n2-Recruit\n3-Army\n4-Stats\n5-Cancel";


                    break;



                case 3: //TRADE**
            VillageBuildingsOptionRunning=true;
                    std::cout << "\n-TRADE-\n";


                    break;



                case 4: //STATS**
            VillageBuildingsOptionRunning=true;
                    std::cout<<"\n-STATS-\n";
            
                    break;
            case 5: //DISBAND**
            
            std::cout<<"\n-DISBAND-\n";
            break;

                case 6: //CANCEL**
            OptionRunning=false;
                    break;

                default:
            
            break;



                }

                break;








            case'C':

                    std::cout<<"-OPTIONS-\n1-Roam\n2-Shop\n3-Inn\n4-Arena\n5-Stats\n6-Cancel\n";
                    std::cout<<City[StandingTileNumber].CityPopulationEthnicGroups[City[StandingTileNumber].CityOwnerID];
                       /* switch(CityOption){
                        case 4:
                      for(int b=0;b<=NumberOfCities;b++){
                                if (City[b].CityTileNumber==StandingTileNumber){
                                    
                                    for(int i=0;i<=NumberOfTileNations;i++){
                                      std::cout << TileNations[i]<<": "<<City[b].CityPopulationEthnicGroups[i]<<"\n";
            
                                    }
                                
                                }
                                
                               else{
                               
            break;
            }
                        }
                    
                
            
            
            }
            */
            
            
            break;
            
            
            
            case ',':
            case 'X':
            case 'T':
            case 'x':
            case 't':
           // std::cout << AIVillage[StandingTileNumber].Population<<Tile[StandingTileNumber].TileHasVillage;
            
               if( DefaultOptionRunning==true){
            
            }
            else{
            std::cout<<"\n-INTERACTION-\n";
            std::cout << "1-Roam\n";
            std::cout << "2-Camp\n";
            std::cout << "3-Army\n";
            std::cout << "4-Inventory\n";
            std::cout << "5-Create a village\n";
            std::cout << "6-Check the surrounding villages\n";
            std::cout << "7-CANCEL\n";
            std::cin >> DefaultOption;
            }
                
                switch(DefaultOption){
            
            
            case 1:
            std::cout << "\n-ROAM-\n";
            std::cout << "1- Hunt\n";
            std::cout << "2- Search for water\n";
            std::cout << "3- Get Wood\n";
            std::cout << "4- Get Stone\n";
            std::cout << "5-Send population to harvest";
            std::cout << "5- Cancel\n";
            break; //END OF CASE1/ROAM
            
            
            
            
            
            
            
            
            
            case 2:
            std::cout<< "";
            
            
            
            
            
            
            break;
            case 6: //2-Interaction >> 6-Check for surrounding villages
            OptionInteractionCheckForSurroundingVillagesBool=true;
            while(OptionInteractionCheckForSurroundingVillagesBool==true){

                std::cout<<"\n-Interaction>>Check the surrounding villages-\n";
                for(int i=0;i<5;i++){
                    
                    std::cout<<"Village owned by the "<<Race[AIVillage[(StandingTileNumber*5)+i].AIVillageOwnerRace].RaceName<<" race\n";
                    //std::cout << "Village population: "<<AIVillage[(StandingTileNumber*5)+i].AIVillagePopulation<<" "<<Race[AIVillage[(StandingTileNumber*5)+i].AIVillageOwnerRace].RaceName<<"'s\n";
                    std::cout << "\tVillage relationship: "<<AIVillage[(StandingTileNumber*5)+i].AIVillageRelationToPlayer<<"\n";
                    //VILLAG ELDER
                    std::cout << "Village elder: "<<"\n";
                    std::cout << Npc[AIVillage[(StandingTileNumber*5)+i].AIVillageElderNPCNumber].NPCHairString<<"\t Name:"<<Npc[AIVillage[AIVillage[(StandingTileNumber*5)+i].AIVillageElderNPCNumber].AIVillageElderNPCNumber].NPCFirstName<<" "<<Npc[(StandingTileNumber*5)+i].NPCLastName<<"\n";
                    std::cout << Npc[AIVillage[(StandingTileNumber*5)+i].AIVillageElderNPCNumber].NPCFaceMiddle<<"\t"<<"Elder relationship: "<<Npc[AIVillage[(StandingTileNumber*5)+i].AIVillageElderNPCNumber].NPCRelationToPlayer<<"\n";
                    std::cout << Npc[AIVillage[(StandingTileNumber*5)+i].AIVillageElderNPCNumber].NPCFaceDown<<"\n";
                    std::cout << "\n\n";

                }
                std::cout<<"1-Enter first village"<<"("<<Race[AIVillage[(StandingTileNumber*5)+0].AIVillageOwnerRace].RaceName<<")"<<"\n";
                std::cout<<"2-Enter second village"<<"("<<Race[AIVillage[(StandingTileNumber*5)+1].AIVillageOwnerRace].RaceName<<")"<<"\n";
                std::cout<<"3-Enter third village"<<"("<<Race[AIVillage[(StandingTileNumber*5)+2].AIVillageOwnerRace].RaceName<<")"<<"\n";
                std::cout<<"4-Enter fourth village"<<"("<<Race[AIVillage[(StandingTileNumber*5)+3].AIVillageOwnerRace].RaceName<<")"<<"\n";
                std::cout<<"5-Enter fifth village"<<"("<<Race[AIVillage[(StandingTileNumber*5)+4].AIVillageOwnerRace].RaceName<<")"<<"\n";
                std::cout<<"0-CANCEL"<<"\n";
                std::cout<<"Enter an option: ";
                std::cin >> OptionInteractionCheckForSurroundingVillagesInt;

                    switch (OptionInteractionCheckForSurroundingVillagesInt){
                        case 0: //2 >> 6-Check for surrounding villages >> 0-CANCEL
                            OptionInteractionCheckForSurroundingVillagesBool=false;
                        break;
                        case 1: //2 >> 6-Check for surrounding villages >> 1-Enter first village
                        OptionInteractionCheckForSurroundingVillagesFirstVillageBool=true;
                        while(OptionInteractionCheckForSurroundingVillagesFirstVillageBool==true){

                            std::cout<<"\n-...>>...villages>>...first village-\n";
                            std::cout<<"1-Recruit "<<Race[AIVillage[(StandingTileNumber*5)+0].AIVillageOwnerRace].RaceName<<"'s\n";
                            std::cout<<"2-Talk to\n";
                            std::cout<<"3-Trade\n";
                            std::cout<<"4-Land management\n";
                            std::cout<<"5-Crime\n";
                            std::cout<<"6-Attack\n";
                            std::cout<<"7-Gangs\n";
                            std::cout<<"8-Misc\n";
                            std::cout<<"0-CANCEL\n";
                            std::cout<<"Enter an option: ";
                            std::cin>>OptionInteractionCheckForSurroundingVillagesFirstVillageint;
                                switch(OptionInteractionCheckForSurroundingVillagesFirstVillageint){
                                    case 0: ////2 >> 6 >> 1-Enter first village >> 0-CANCEL
                                        OptionInteractionCheckForSurroundingVillagesFirstVillageBool=false;
                                    break;
                                    case 1://2 >> 6 >> 1-Enter first village >> 1-Recruit
                                        std::cout<<"\n-...>>...>>...first v.>>Recruit-\n";
                                        std::cout<<"-RECRUIT-\n";
                                        std::cout<<Race[AIVillage[(StandingTileNumber*5)+0].AIVillageOwnerRace].RaceName<<"'s"<<" available for hire: "<<"ADD_VALUE_HERE\n";
                                        std::cout<<"One recruit costs 5 gold\n";
                                        std::cout<<"How much recruits do you want: ";
                                        std::cin>>OptionInteractionCheckForSurroundingVillagesFirstVillageRecruitint;
                                    break;
                                    case 2://2 >> 6 >> 1-Enter first village >> 2-Talk to
                                        std::cout<<"\n-...>>...>>...first v.>>Talk to-\n";
                                        std::cout<<"-TALK TO-\n";
                                        std::cout<<"1-Village elder("<<Npc[AIVillage[AIVillage[(StandingTileNumber*5)+0].AIVillageElderNPCNumber].AIVillageElderNPCNumber].NPCFirstName<<" "<<Npc[(StandingTileNumber*5)+0].NPCLastName<<")\n";
                                        std::cout<<"2-Random villager\n";
                                        std::cout<<"0-CANCEL\n";
                                    break;
                                    case 3://2 >> 6 >> 1-Enter first village >> 3-Trade
                                        std::cout<<"\n-...>>...>>...first v.>>Trade-\n";
                                        std::cout<<"-TRADE-\n";
                                    break;
                                    case 4://2 >> 6 >> 1-Enter first village >> 4-Land management
                                        std::cout<<"\n-...>>...>>...first v.>>Land management-\n";
                                        std::cout<<"-LAND MANAGEMENT-\n";
                                        std::cout<<"1-Buy land\n";
                                        std::cout<<"2-Sell land\n";
                                        std::cout<<"3-Manage your lands\n";
                                        std::cout<<"0-CANCEL\n";
                                    break;
                                    case 5://2 >> 6 >> 1-Enter first village >> 5-Crime
                                        std::cout<<"\n-...>>...>>...first v.>>Crime-\n";
                                        std::cout<<"-CRIME-\n";
                                        std::cout<<"1-Scavenge a local farm\n";
                                        std::cout<<"2-Rob a hut\n";
                                        std::cout<<"3-Burn a hut\n";
                                        std::cout<<"4-Mug a villager\n";
                                        std::cout<<"5-Kidnap a villager\n";
                                        std::cout<<"6-Kill a villager\n";
                                        std::cout<<"0-CANCEL\n";
                                    break;
                                    case 6://2 >> 6 >> 1-Enter first village >> 6-Attack
                                        std::cout<<"\n-...>>...>>...first v.>>Attack-\n";
                                        std::cout<<"-ATTACK-\n";
                                        std::cout<<"1-Start the offensive\n";
                                        std::cout<<"2-Siege\n";
                                        std::cout<<"3-Encircle\n";
                                        std::cout<<"4-Surrender\n";
                                        std::cout<<"0-CANCEL\n";
                                    break;
                                    case 7://2 >> 6 >> 1-Enter first village >> 7-Gangs
                                        std::cout<<"\n-...>>...>>...first v.>>Attack-\n";
                                        std::cout<<"-GANGS-\n";
                                        std::cout<<"1-Town gangs info\n";
                                        if(player.GangJoinedBool==false){
                                            std::cout<<"2-Join a gang\n";
                                            std::cout<<"3-Start a gang\n";

                                        }
                                        else{
                                            
                                            std::cout<<"2-Go to your safehouse\n";
                                            std::cout<<"3-View your turfs\n";
                                            std::cout<<"4-Give product to gang\n";
                                            std::cout<<"5-Talk to\n";
                                            if(player.GangRank>2){
                                                std::cout<<"6-Attack turf\n";
                                                

                                            }
                                            if(player.GangRank>4){
                                                std::cout<<"7-Gang inventory\n";


                                            }
                                            if(player.GangRank==6){
                                                std::cout<<"8-Disband gang\n";


                                            }
                                            
                                            


                                        }
                                        
                                        
                                        std::cout<<"0-CANCEL\n";
                                        

                                        //FunctionRoam(MapGangSafeHouse[6],6,20,3,20);
                                    break;
                                    case 8://2 >> 6 >> 1-Enter first village >> 8-Misc
                                        std::cout<<"\n-...>>...>>...first v.>>Misc-\n";
                                        std::cout<<"-MISC-\n";
                                        break;




                            
                                }
                            
                        }
                        break;
                         case 2: //2-Interaction >> 6-Check for surrounding villages >> 2-Enter second village
                            

                        break;
                         case 3: //2-Interaction >> 6-Check for surrounding villages >> 3-Enter third village

                        break;
                         case 4: //2-Interaction >> 6-Check for surrounding villages >> 4-Enter fourth village

                        break;
                         case 5: //2-Interaction >> 6-Check for surrounding villages >> 5-Enter fifth village

                        break;
                        default:
                        break;
                    }

            }
            
            break;
            case 7:
            DefaultOptionRunning=false;
            OptionRunning=false;
            break;
            }
            
            
            
            
            
                break;
           
            default:
                std::cout<<"bruh";
                break;
            }
            break;
//MOVEMENT END
        }
    }

}


/*======================LIBRARY OF ENTITIES==============

Freedom town
std::cout<<"Enter any key to continue";
            std::cin>>InfoContinueVariable;


-RACES
RACE CLASS IS ONE CLASS WHERE ClassRaces[0]=human
...[2]=Elf ....

every race has a RaceHumanFirstName[] + RaceHumanLastName[]



AIVillages have 
-Name
-aivillageGeneral number from array
-aivillage Elder number from array
-RaceOwnerID -0, -7
-an int array that has npc number of arrays that are from
that village
-Population :number of peasents without the army

*maybe some buildings
--------

*
Village Elders and generals thru AIVillageElder[] and
AIVillageGeneral[] where [] represents village number**

Every NPC derives from class NPCNumber[]
NPC[0-20]
Generals have
-Name and Surname

-AIVillageNumber
-Agresivity scale
-Recruitement cap
-Strategy type
-Race Dislikement
-Character
-



NPCs have
//NPC PRIMARY STATS
    int NPCNumberID
    str NPCFirstName
    str NPCLastName
    int NPCRace
    int NPCAge
    int NPCGender
    str NPCTitle
//APPEARENCE
    *int NPCHairModelNumber -- NEED TO MAKE A STRING HAIR GENERATOR
        //Basic(STARTER)
        0-.....
        1-,,,,,                j---j
        2-wwwww                |. .|
        3-WWWWW                \_=_/
        4-.,.,.
        5-kkKKK
        6-KKKkk
        7-fffff
        8-77777
        9-TTTTT
        ----------
        //Armor T1
        10- /---\ -Leather cap
            Def-15
        11- oO0Oo -Leather Hood 0. .0
            Def-10
        12- /=|=\ -Leather Helmet |.|.|
            Def-20
        13- /=I=\ -Reinforced Leather Helmet |.I.|
            Def-25
        //Armor T2
        14- /:::\ -Padded Leather Cap
            Def-22
        15- /:|:\ -Padded Leather Helmet |.|.|
            Def-27
        16- /:I:\ -Reinforced Leather Helmet |.I.|
            Def-32
        //Armor T3
        17- i---i -Metal Cap
            Def-30
        18- 00000 -Metal Coif 0.0.0
            Def-35
        19- i=|=i -Metal Helmet |.|.|
            Def-40
        20- i=I=i -Reinforced Metal Helmet |.I.|
            Def-45
        //Armor T4
        21- v-v-v -Gold cap
            Def-35
        22- v=|=v -Gold Helmet
            Def-42
        23- v=I=v -Reinforced Gold Helmet
            Def-47
        24- v/V\v -Gold Prince Crown
            Def-20
        25- V/V\V -Gold King Crown
            Def-40
        //Armor T5
        26-
        27-
        28-
        29-
        30-
        //Misc
        31- _===_ -Farmers Hat
            Def-2
        32- /-o-\ -Miners Hat
            Def-30
        33- ==*== -Ushanka
            Def-3
        34- _-_-_ -Rancher Hat
            Def-2
        35- xX:Xx -Flower Hat v1
            Def-0
        36- xXVXx -Flower Hat v2
            Def-0
        37- xXYXx -Flower Hat v3
            Def-0
        38- ===== -Band
            Def-1
        39- <\|/> -Savage Cap
            Def-5
        40- _-==> -Forester Cap
            Def-2
        41- db_db -Tribal Cap
        42- opoqo -orc cap
        43- jijij -Spooky Cap
        44- ##### -Fur Hood #. .#
        45- Z=Z=Z -Religion hat v1
        46- U=U=U -Religion hat v2
        47- A=A=A -Religion hat v3
        48- B=B=B -Religion hat v4
        49- G=G=G -Religion Hat V5
        50- _-=-_ -Samurai Hat
        
        51 items
        
    *std::string NPCHairModel
    *int NPCSkinColour
    *int NPCHeight
    *int NPCWidth
    *int NPCScars[]
    *int MissingLimbs[]
    
    
-Hostility- rebelness 

TO DO CONTINUE LIST:
RACE NAMES AND LASTNAMES LISTS
Hats
*/ 

//=================CLASS RACEFULLNAMES=====================

/*==================START OF ITEM IDs======================
1-meat
2-water
3-wood
4-stone
5-copper
6-iron
7-goldOre
8-jewels
9-dirt
10-clay
11-brick
12-



arrows
wheat
bread

*/


/*
        //if(Moved==true) {
            switch(LastTile) {
            case ',':
                TerrainName="Plains";
                break;
            case 'T':
                TerrainName="Dense forest";
                break;
            case 'x':
                TerrainName="Hills";
                break;
            case 'X':
                TerrainName="Mountains";
                break;
            case 'o':
            case 'O':
                    TerrainName = "Village";
            break;
            case 'C':
                TerrainName="City";
            break;
            case '+':
            TerrainName="Lake";
            break;
            case 't':
            TerrainName="Sparse Forest";
            break;

            }
        */

//***dodaj imena na biomes : chechnya dense forest


//========================RACES==========================

//std::cout <<"\n";

    /*
IDEJE
svaki nation ima race
nacije imaju svoje generale koji multiplajuju attack ili def takodje imaju terrain boost itd
cuatom avatars za generale




MAX 20 ETHNICGROUPS ON MAP
*/
/*
==PLAINS== ,
1-Rhinocerus
2-Ostrich
3-Kangaroo
4-rabbit
5-Bison
6-Lion
7-Praire dog
8-Lemur
9-Tiger
10-Cheetah





==RECEEDING FOREST== t
1-elk
2-deer
3-Wild Turkey
4-bear
5-Praire dog
6-rabbit
7-skunk
8-Bison
9-Fox
10-Wolf





==DENSE FOREST== T
1-boar
2-Skunk
3-Lynx
4-Monkey
5-fox
6-deer
7-bear
8-rabbit
9-Wolf
10-Racoon


===MOUNTAIN===
1-Bear
2-Wolf
3-Moose
4-Lynx
5-Rabbit
6-Gorilla
7-Goat
8-Lion
9-deer
10-Hamster






create village
are you sure,name village,


maybe meth lab/esque something



---BASIC TERRAIN TYPES/biomes---
X-mountain      
x-hills
T-dense tree
t-receeding tree
d-dessert
,-plains
?-unknown
J-dense jungle
j-receeding jungle
w-wetlands
+-water


D-dungeon
g-goblin camp
$-shop/marketplace
b-bandit outpost


#




        perma death
        gla

        different types of forests
territories
colors output
entering a village gives another map
manufactory hide, tanner, items and trading
month cycle
ability to get dirt for tier 1 houses dirthut
TERRITORIES DONT WANT TO GIVE MINING LISCENCES

ROAM FORAGE OPTION OPENS ANOTHER MAP
FORAGE BERRIES OR FIND WOOD,STONE

PREKO CLASS ANIMALS IDEMO ZIVOTINJE DA DODAJEMO
 int RandomNumberGenerator10(){
    //random int generator

int Light_Attack_Function(int attack, int dex, int vsdex){

//chance=dex-dexvs min 20% max 100%
}
int Heavy_Attack_Function(int attack, int dex, int vsdex){

//chance=(dex-vsdex)/3
}

int AnimalCombat(int Attack, int AnimalHealth, PlayerCharacter player){
int CombatOption;
while(player.health>0 || AnimalHealth>0){
std::cout << "\n-COMBAT-\n";
std::cout << "1-Light attack\n";
std::cout << "2-Heavy attack\n";
std::cout << "3-Consumables\n";
std::cout << "4-Flee\n";
std::cin << CombatOption;
switch(CombatOption);
    case 1:
    //LIGHT_ATTACK_FUNCTION
    break;
    case 2:
    //HEAVY_ATTACK_FUNCTION
    break;
    case 3:
    //CONSUMABLES_FUNCTION
    break;
    case 4:
    //FLEE_FUNCTION
    break;
}//WHILE LOOP END


}//ANIMALCOMBAT END


int AnimalCombatPicker(int Num, char Tile){
    switch(Tile)
        case ',': //PLAINS
            switch(Num){
            case 1: // Rhinocerus
            std::string AnimalName= "Rhinocerus";
            int Attack=25;
            int Health=200;
            
            bool AcceptCombat;
            std::cout << "Do you wish to attack " << AnimalName;
            std::cin << AcceptCombat;
            
            if(AcceptCombat==false){
                
            }
            else{//COMBAT
                
            
            }
            
            
            break;
            }
            
            
            
            
            
    break;
    case 'x': //HILLS
        switch(Num){
        
        }
        break;
        
        
        
        
        
        
        
        
        
    case 'X': //MOUNTAINS
        switch(Num){
        
        }
       break;
    
    
    
    
    case 't': //RECEEDING FOREST
        switch(Num){
    
        }
        break;
        
        
        
        
        
        
    case 'T': //DENSE FOREST
        switch(Num){
        
        }
        break;




}

______________1______________
tile has
-biome
-AnimalEncounterchance
-copper,iron,gold,jewel mine building efficency
-also amount of those things
-
-ammount of wood
-amount of stone
-ability to grow trees
-farm output
-PredatorAnimalsattackchance
-
waterfindchance

-population
-ethnic groups
-religion
-Territory occupancy
-

maybe-
-rain chance
-storm chance
-max amount of buildings
-




_________________2________________
animalname
animalhealth
animalattack
animaldefense

dex
str
constitution;

poison attack

bool stun
double deathchance

meat
exp
hide
special loot
======================WORLD RACES========================
0-HUMAN
1-DWARF
2-ELF
3-ANTMAN
4-GOBLIN
5-ORC
6-LIZARDMAN
7-CYCLOPS
8-MINOTAUR
9-GHOUL
10-MERFOLK
11-AQUATIC ELF
12-DARK ELF
13-KOBOLD
14-SPIDERMAN
15-MINECRAFT STEVE
16-VAMPIRE
17-MOSQUITOMAN

----
ALLIES(0,1,2,11)
AXIS(4,5,13,12)
Neutral Good(6,10,15)
Neutral Neutral(3,15,14)
Neutral Evil(7,9,16,17)
----
Plains","-0,9,16,17
Hills"x"-3,4,8
Mountains"X"-1,5,7,13
spar forest"t"-6,15
dens Forest "T"-2,12,14
lake"+"-10,11
----
int Hostility
0-Extremely Peaceful
Always flees in combat, never attacks other villages

1-Somewhat peaceful
2-Normal
3-somewhat Hostile
4-Extremely Hostile
----
0-HUMAN
nativebiome=plains
         Health=100
         Attack=1
.....    Defense=1
|. .|    ExpGain=1
\_=_/    AllyNations:Human,Elf,Dwarf


RaceFaceMiddle="|. .|";
RaceFaceDown="\_=_/"";

1-DWARF
nativebiome=mountain

.....    Health=90
|. .|    Attack=0.8
\-~-/    Defense=1.3
    
Race[0].RaceFaceMiddle="<. .>";
Race[0].RaceFaceDown="\\_=_/";
2-ELF
nativebiome=dense forest

.....    Health=100
<. .>    Attack=1.2
\_=_/    Defense=0.8


3-ANTMAN
nativebiome=Hills
+Can Recruit Alot Of Ants-race leader is a ant queen

.....    Health=60
(. .)    Attack=1.1
 {"}    Defense=1.1


4-GOBLIN
nativebiome=hills
+Can recruit lots of goblins


.....   Health=50
(, ,)    Attack=0.5
 \"/    Defense=0.5


5-ORC
nativebiome=mountains
+Hard Hitting,lots of health
-Low population=less recruits,species low in reproduction

.....    Health=200
|, ,|    Attack=1.7
|\=/|    Defense=1


6-LIZARDMAN
nativebiome=Sparse Forest

 ...    Health=100
:.".:    Attack=1
 "="     Defense=1


7-CYCLOPS 
NativeBiome=mountain
.....    Health:400
/ O \    Attack:3
\_"_/    Defense:2


//Appearance
        Race[2].RaceFaceMiddle="( # )";
        Race[2].RaceFaceDown="\\_>_/";



8-MINOTAUR
nativebiome=hills
.....    
|, ,|    Health=150
\>=</    Attack=1.5
        Defense=1.2
9-GHOUL
NativeBikme=Plains

.....    Health=50
|x x|    Attack=0.2
\_"_/    Defense=0.2




10-MERFOLK
NativeBiome-Lake

 ... 
;. .;    Health=100
\_o_/    Attack=1
        Defense=1

11-Aquactic Elf
lake
.....    Health 90
<. .>    Attack=1.2
\_o_/    Defense=0.8


12-Dark Elf
Biome=dense forest
RaceReproductionRate
.....
<, ,>    Health=90
\_=_/    Attack=1.2
        Defense=0.8

13-Kobold

Biome=Mountain
.....
{, ,}    Health=80
/_=_\    Attack=0.8
        Defense=1.3

14-Spiderman
Dense Forest

.....    Health=70
(:.:)    Attack=2
\|=|/    Defense=0.7


15-Minecraft Steve
biome=sparse forest

.....    Health=200
|. .|    Attack=1.5
|_=_|    Defense=1.5

16-Troglodyte
plains
.....    Health=100
/, ,\    Attack=2
\_Y_/    Defense=0.8


17-Mosquitoman
biome=plains

 ...     Health=20
( # )    Attack=0.4
\_>_/    Defense=0.4






EveryVillage will have a random npc as an elder
*/