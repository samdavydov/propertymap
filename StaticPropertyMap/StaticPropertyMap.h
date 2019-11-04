#pragma once

#include <QObject>

class StaticPropertyMap : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(int count READ count WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(int fps   READ fps   WRITE setFps   NOTIFY fpsChanged)
    Q_PROPERTY(double x_0 READ pos_X0 WRITE setPos_X0 NOTIFY pos_X0Changed)
    Q_PROPERTY(double y_0 READ pos_Y0 WRITE setPos_Y0 NOTIFY pos_Y0Changed)
    Q_PROPERTY(double r_0 READ pos_R0 WRITE setPos_R0 NOTIFY pos_R0Changed)
    Q_PROPERTY(double x_1 READ pos_X1 WRITE setPos_X1 NOTIFY pos_X1Changed)
    Q_PROPERTY(double y_1 READ pos_Y1 WRITE setPos_Y1 NOTIFY pos_Y1Changed)
    Q_PROPERTY(double r_1 READ pos_R1 WRITE setPos_R1 NOTIFY pos_R1Changed)
    Q_PROPERTY(double x_2 READ pos_X2 WRITE setPos_X2 NOTIFY pos_X2Changed)
    Q_PROPERTY(double y_2 READ pos_Y2 WRITE setPos_Y2 NOTIFY pos_Y2Changed)
    Q_PROPERTY(double r_2 READ pos_R2 WRITE setPos_R2 NOTIFY pos_R2Changed)
    Q_PROPERTY(double x_3 READ pos_X3 WRITE setPos_X3 NOTIFY pos_X3Changed)
    Q_PROPERTY(double y_3 READ pos_Y3 WRITE setPos_Y3 NOTIFY pos_Y3Changed)
    Q_PROPERTY(double r_3 READ pos_R3 WRITE setPos_R3 NOTIFY pos_R3Changed)
    Q_PROPERTY(double x_4 READ pos_X4 WRITE setPos_X4 NOTIFY pos_X4Changed)
    Q_PROPERTY(double y_4 READ pos_Y4 WRITE setPos_Y4 NOTIFY pos_Y4Changed)
    Q_PROPERTY(double r_4 READ pos_R4 WRITE setPos_R4 NOTIFY pos_R4Changed)
    Q_PROPERTY(double x_5 READ pos_X5 WRITE setPos_X5 NOTIFY pos_X5Changed)
    Q_PROPERTY(double y_5 READ pos_Y5 WRITE setPos_Y5 NOTIFY pos_Y5Changed)
    Q_PROPERTY(double r_5 READ pos_R5 WRITE setPos_R5 NOTIFY pos_R5Changed)
    Q_PROPERTY(double x_6 READ pos_X6 WRITE setPos_X6 NOTIFY pos_X6Changed)
    Q_PROPERTY(double y_6 READ pos_Y6 WRITE setPos_Y6 NOTIFY pos_Y6Changed)
    Q_PROPERTY(double r_6 READ pos_R6 WRITE setPos_R6 NOTIFY pos_R6Changed)
    Q_PROPERTY(double x_7 READ pos_X7 WRITE setPos_X7 NOTIFY pos_X7Changed)
    Q_PROPERTY(double y_7 READ pos_Y7 WRITE setPos_Y7 NOTIFY pos_Y7Changed)
    Q_PROPERTY(double r_7 READ pos_R7 WRITE setPos_R7 NOTIFY pos_R7Changed)
    Q_PROPERTY(double x_8 READ pos_X8 WRITE setPos_X8 NOTIFY pos_X8Changed)
    Q_PROPERTY(double y_8 READ pos_Y8 WRITE setPos_Y8 NOTIFY pos_Y8Changed)
    Q_PROPERTY(double r_8 READ pos_R8 WRITE setPos_R8 NOTIFY pos_R8Changed)
    Q_PROPERTY(double x_9 READ pos_X9 WRITE setPos_X9 NOTIFY pos_X9Changed)
    Q_PROPERTY(double y_9 READ pos_Y9 WRITE setPos_Y9 NOTIFY pos_Y9Changed)
    Q_PROPERTY(double r_9 READ pos_R9 WRITE setPos_R9 NOTIFY pos_R9Changed)
    Q_PROPERTY(double x_10 READ pos_X10 WRITE setPos_X10 NOTIFY pos_X10Changed)
    Q_PROPERTY(double y_10 READ pos_Y10 WRITE setPos_Y10 NOTIFY pos_Y10Changed)
    Q_PROPERTY(double r_10 READ pos_R10 WRITE setPos_R10 NOTIFY pos_R10Changed)
    Q_PROPERTY(double x_11 READ pos_X11 WRITE setPos_X11 NOTIFY pos_X11Changed)
    Q_PROPERTY(double y_11 READ pos_Y11 WRITE setPos_Y11 NOTIFY pos_Y11Changed)
    Q_PROPERTY(double r_11 READ pos_R11 WRITE setPos_R11 NOTIFY pos_R11Changed)
    Q_PROPERTY(double x_12 READ pos_X12 WRITE setPos_X12 NOTIFY pos_X12Changed)
    Q_PROPERTY(double y_12 READ pos_Y12 WRITE setPos_Y12 NOTIFY pos_Y12Changed)
    Q_PROPERTY(double r_12 READ pos_R12 WRITE setPos_R12 NOTIFY pos_R12Changed)
    Q_PROPERTY(double x_13 READ pos_X13 WRITE setPos_X13 NOTIFY pos_X13Changed)
    Q_PROPERTY(double y_13 READ pos_Y13 WRITE setPos_Y13 NOTIFY pos_Y13Changed)
    Q_PROPERTY(double r_13 READ pos_R13 WRITE setPos_R13 NOTIFY pos_R13Changed)
    Q_PROPERTY(double x_14 READ pos_X14 WRITE setPos_X14 NOTIFY pos_X14Changed)
    Q_PROPERTY(double y_14 READ pos_Y14 WRITE setPos_Y14 NOTIFY pos_Y14Changed)
    Q_PROPERTY(double r_14 READ pos_R14 WRITE setPos_R14 NOTIFY pos_R14Changed)
    Q_PROPERTY(double x_15 READ pos_X15 WRITE setPos_X15 NOTIFY pos_X15Changed)
    Q_PROPERTY(double y_15 READ pos_Y15 WRITE setPos_Y15 NOTIFY pos_Y15Changed)
    Q_PROPERTY(double r_15 READ pos_R15 WRITE setPos_R15 NOTIFY pos_R15Changed)
    Q_PROPERTY(double x_16 READ pos_X16 WRITE setPos_X16 NOTIFY pos_X16Changed)
    Q_PROPERTY(double y_16 READ pos_Y16 WRITE setPos_Y16 NOTIFY pos_Y16Changed)
    Q_PROPERTY(double r_16 READ pos_R16 WRITE setPos_R16 NOTIFY pos_R16Changed)
    Q_PROPERTY(double x_17 READ pos_X17 WRITE setPos_X17 NOTIFY pos_X17Changed)
    Q_PROPERTY(double y_17 READ pos_Y17 WRITE setPos_Y17 NOTIFY pos_Y17Changed)
    Q_PROPERTY(double r_17 READ pos_R17 WRITE setPos_R17 NOTIFY pos_R17Changed)
    Q_PROPERTY(double x_18 READ pos_X18 WRITE setPos_X18 NOTIFY pos_X18Changed)
    Q_PROPERTY(double y_18 READ pos_Y18 WRITE setPos_Y18 NOTIFY pos_Y18Changed)
    Q_PROPERTY(double r_18 READ pos_R18 WRITE setPos_R18 NOTIFY pos_R18Changed)
    Q_PROPERTY(double x_19 READ pos_X19 WRITE setPos_X19 NOTIFY pos_X19Changed)
    Q_PROPERTY(double y_19 READ pos_Y19 WRITE setPos_Y19 NOTIFY pos_Y19Changed)
    Q_PROPERTY(double r_19 READ pos_R19 WRITE setPos_R19 NOTIFY pos_R19Changed)
    Q_PROPERTY(double x_20 READ pos_X20 WRITE setPos_X20 NOTIFY pos_X20Changed)
    Q_PROPERTY(double y_20 READ pos_Y20 WRITE setPos_Y20 NOTIFY pos_Y20Changed)
    Q_PROPERTY(double r_20 READ pos_R20 WRITE setPos_R20 NOTIFY pos_R20Changed)
    Q_PROPERTY(double x_21 READ pos_X21 WRITE setPos_X21 NOTIFY pos_X21Changed)
    Q_PROPERTY(double y_21 READ pos_Y21 WRITE setPos_Y21 NOTIFY pos_Y21Changed)
    Q_PROPERTY(double r_21 READ pos_R21 WRITE setPos_R21 NOTIFY pos_R21Changed)
    Q_PROPERTY(double x_22 READ pos_X22 WRITE setPos_X22 NOTIFY pos_X22Changed)
    Q_PROPERTY(double y_22 READ pos_Y22 WRITE setPos_Y22 NOTIFY pos_Y22Changed)
    Q_PROPERTY(double r_22 READ pos_R22 WRITE setPos_R22 NOTIFY pos_R22Changed)
    Q_PROPERTY(double x_23 READ pos_X23 WRITE setPos_X23 NOTIFY pos_X23Changed)
    Q_PROPERTY(double y_23 READ pos_Y23 WRITE setPos_Y23 NOTIFY pos_Y23Changed)
    Q_PROPERTY(double r_23 READ pos_R23 WRITE setPos_R23 NOTIFY pos_R23Changed)
    Q_PROPERTY(double x_24 READ pos_X24 WRITE setPos_X24 NOTIFY pos_X24Changed)
    Q_PROPERTY(double y_24 READ pos_Y24 WRITE setPos_Y24 NOTIFY pos_Y24Changed)
    Q_PROPERTY(double r_24 READ pos_R24 WRITE setPos_R24 NOTIFY pos_R24Changed)
    Q_PROPERTY(double x_25 READ pos_X25 WRITE setPos_X25 NOTIFY pos_X25Changed)
    Q_PROPERTY(double y_25 READ pos_Y25 WRITE setPos_Y25 NOTIFY pos_Y25Changed)
    Q_PROPERTY(double r_25 READ pos_R25 WRITE setPos_R25 NOTIFY pos_R25Changed)
    Q_PROPERTY(double x_26 READ pos_X26 WRITE setPos_X26 NOTIFY pos_X26Changed)
    Q_PROPERTY(double y_26 READ pos_Y26 WRITE setPos_Y26 NOTIFY pos_Y26Changed)
    Q_PROPERTY(double r_26 READ pos_R26 WRITE setPos_R26 NOTIFY pos_R26Changed)
    Q_PROPERTY(double x_27 READ pos_X27 WRITE setPos_X27 NOTIFY pos_X27Changed)
    Q_PROPERTY(double y_27 READ pos_Y27 WRITE setPos_Y27 NOTIFY pos_Y27Changed)
    Q_PROPERTY(double r_27 READ pos_R27 WRITE setPos_R27 NOTIFY pos_R27Changed)
    Q_PROPERTY(double x_28 READ pos_X28 WRITE setPos_X28 NOTIFY pos_X28Changed)
    Q_PROPERTY(double y_28 READ pos_Y28 WRITE setPos_Y28 NOTIFY pos_Y28Changed)
    Q_PROPERTY(double r_28 READ pos_R28 WRITE setPos_R28 NOTIFY pos_R28Changed)
    Q_PROPERTY(double x_29 READ pos_X29 WRITE setPos_X29 NOTIFY pos_X29Changed)
    Q_PROPERTY(double y_29 READ pos_Y29 WRITE setPos_Y29 NOTIFY pos_Y29Changed)
    Q_PROPERTY(double r_29 READ pos_R29 WRITE setPos_R29 NOTIFY pos_R29Changed)
    Q_PROPERTY(double x_30 READ pos_X30 WRITE setPos_X30 NOTIFY pos_X30Changed)
    Q_PROPERTY(double y_30 READ pos_Y30 WRITE setPos_Y30 NOTIFY pos_Y30Changed)
    Q_PROPERTY(double r_30 READ pos_R30 WRITE setPos_R30 NOTIFY pos_R30Changed)
    Q_PROPERTY(double x_31 READ pos_X31 WRITE setPos_X31 NOTIFY pos_X31Changed)
    Q_PROPERTY(double y_31 READ pos_Y31 WRITE setPos_Y31 NOTIFY pos_Y31Changed)
    Q_PROPERTY(double r_31 READ pos_R31 WRITE setPos_R31 NOTIFY pos_R31Changed)
    Q_PROPERTY(double x_32 READ pos_X32 WRITE setPos_X32 NOTIFY pos_X32Changed)
    Q_PROPERTY(double y_32 READ pos_Y32 WRITE setPos_Y32 NOTIFY pos_Y32Changed)
    Q_PROPERTY(double r_32 READ pos_R32 WRITE setPos_R32 NOTIFY pos_R32Changed)
    Q_PROPERTY(double x_33 READ pos_X33 WRITE setPos_X33 NOTIFY pos_X33Changed)
    Q_PROPERTY(double y_33 READ pos_Y33 WRITE setPos_Y33 NOTIFY pos_Y33Changed)
    Q_PROPERTY(double r_33 READ pos_R33 WRITE setPos_R33 NOTIFY pos_R33Changed)
    Q_PROPERTY(double x_34 READ pos_X34 WRITE setPos_X34 NOTIFY pos_X34Changed)
    Q_PROPERTY(double y_34 READ pos_Y34 WRITE setPos_Y34 NOTIFY pos_Y34Changed)
    Q_PROPERTY(double r_34 READ pos_R34 WRITE setPos_R34 NOTIFY pos_R34Changed)
    Q_PROPERTY(double x_35 READ pos_X35 WRITE setPos_X35 NOTIFY pos_X35Changed)
    Q_PROPERTY(double y_35 READ pos_Y35 WRITE setPos_Y35 NOTIFY pos_Y35Changed)
    Q_PROPERTY(double r_35 READ pos_R35 WRITE setPos_R35 NOTIFY pos_R35Changed)
    Q_PROPERTY(double x_36 READ pos_X36 WRITE setPos_X36 NOTIFY pos_X36Changed)
    Q_PROPERTY(double y_36 READ pos_Y36 WRITE setPos_Y36 NOTIFY pos_Y36Changed)
    Q_PROPERTY(double r_36 READ pos_R36 WRITE setPos_R36 NOTIFY pos_R36Changed)
    Q_PROPERTY(double x_37 READ pos_X37 WRITE setPos_X37 NOTIFY pos_X37Changed)
    Q_PROPERTY(double y_37 READ pos_Y37 WRITE setPos_Y37 NOTIFY pos_Y37Changed)
    Q_PROPERTY(double r_37 READ pos_R37 WRITE setPos_R37 NOTIFY pos_R37Changed)
    Q_PROPERTY(double x_38 READ pos_X38 WRITE setPos_X38 NOTIFY pos_X38Changed)
    Q_PROPERTY(double y_38 READ pos_Y38 WRITE setPos_Y38 NOTIFY pos_Y38Changed)
    Q_PROPERTY(double r_38 READ pos_R38 WRITE setPos_R38 NOTIFY pos_R38Changed)
    Q_PROPERTY(double x_39 READ pos_X39 WRITE setPos_X39 NOTIFY pos_X39Changed)
    Q_PROPERTY(double y_39 READ pos_Y39 WRITE setPos_Y39 NOTIFY pos_Y39Changed)
    Q_PROPERTY(double r_39 READ pos_R39 WRITE setPos_R39 NOTIFY pos_R39Changed)
    Q_PROPERTY(double x_40 READ pos_X40 WRITE setPos_X40 NOTIFY pos_X40Changed)
    Q_PROPERTY(double y_40 READ pos_Y40 WRITE setPos_Y40 NOTIFY pos_Y40Changed)
    Q_PROPERTY(double r_40 READ pos_R40 WRITE setPos_R40 NOTIFY pos_R40Changed)
    Q_PROPERTY(double x_41 READ pos_X41 WRITE setPos_X41 NOTIFY pos_X41Changed)
    Q_PROPERTY(double y_41 READ pos_Y41 WRITE setPos_Y41 NOTIFY pos_Y41Changed)
    Q_PROPERTY(double r_41 READ pos_R41 WRITE setPos_R41 NOTIFY pos_R41Changed)
    Q_PROPERTY(double x_42 READ pos_X42 WRITE setPos_X42 NOTIFY pos_X42Changed)
    Q_PROPERTY(double y_42 READ pos_Y42 WRITE setPos_Y42 NOTIFY pos_Y42Changed)
    Q_PROPERTY(double r_42 READ pos_R42 WRITE setPos_R42 NOTIFY pos_R42Changed)
    Q_PROPERTY(double x_43 READ pos_X43 WRITE setPos_X43 NOTIFY pos_X43Changed)
    Q_PROPERTY(double y_43 READ pos_Y43 WRITE setPos_Y43 NOTIFY pos_Y43Changed)
    Q_PROPERTY(double r_43 READ pos_R43 WRITE setPos_R43 NOTIFY pos_R43Changed)
    Q_PROPERTY(double x_44 READ pos_X44 WRITE setPos_X44 NOTIFY pos_X44Changed)
    Q_PROPERTY(double y_44 READ pos_Y44 WRITE setPos_Y44 NOTIFY pos_Y44Changed)
    Q_PROPERTY(double r_44 READ pos_R44 WRITE setPos_R44 NOTIFY pos_R44Changed)
    Q_PROPERTY(double x_45 READ pos_X45 WRITE setPos_X45 NOTIFY pos_X45Changed)
    Q_PROPERTY(double y_45 READ pos_Y45 WRITE setPos_Y45 NOTIFY pos_Y45Changed)
    Q_PROPERTY(double r_45 READ pos_R45 WRITE setPos_R45 NOTIFY pos_R45Changed)
    Q_PROPERTY(double x_46 READ pos_X46 WRITE setPos_X46 NOTIFY pos_X46Changed)
    Q_PROPERTY(double y_46 READ pos_Y46 WRITE setPos_Y46 NOTIFY pos_Y46Changed)
    Q_PROPERTY(double r_46 READ pos_R46 WRITE setPos_R46 NOTIFY pos_R46Changed)
    Q_PROPERTY(double x_47 READ pos_X47 WRITE setPos_X47 NOTIFY pos_X47Changed)
    Q_PROPERTY(double y_47 READ pos_Y47 WRITE setPos_Y47 NOTIFY pos_Y47Changed)
    Q_PROPERTY(double r_47 READ pos_R47 WRITE setPos_R47 NOTIFY pos_R47Changed)
    Q_PROPERTY(double x_48 READ pos_X48 WRITE setPos_X48 NOTIFY pos_X48Changed)
    Q_PROPERTY(double y_48 READ pos_Y48 WRITE setPos_Y48 NOTIFY pos_Y48Changed)
    Q_PROPERTY(double r_48 READ pos_R48 WRITE setPos_R48 NOTIFY pos_R48Changed)
    Q_PROPERTY(double x_49 READ pos_X49 WRITE setPos_X49 NOTIFY pos_X49Changed)
    Q_PROPERTY(double y_49 READ pos_Y49 WRITE setPos_Y49 NOTIFY pos_Y49Changed)
    Q_PROPERTY(double r_49 READ pos_R49 WRITE setPos_R49 NOTIFY pos_R49Changed)
    Q_PROPERTY(double x_50 READ pos_X50 WRITE setPos_X50 NOTIFY pos_X50Changed)
    Q_PROPERTY(double y_50 READ pos_Y50 WRITE setPos_Y50 NOTIFY pos_Y50Changed)
    Q_PROPERTY(double r_50 READ pos_R50 WRITE setPos_R50 NOTIFY pos_R50Changed)
    Q_PROPERTY(double x_51 READ pos_X51 WRITE setPos_X51 NOTIFY pos_X51Changed)
    Q_PROPERTY(double y_51 READ pos_Y51 WRITE setPos_Y51 NOTIFY pos_Y51Changed)
    Q_PROPERTY(double r_51 READ pos_R51 WRITE setPos_R51 NOTIFY pos_R51Changed)
    Q_PROPERTY(double x_52 READ pos_X52 WRITE setPos_X52 NOTIFY pos_X52Changed)
    Q_PROPERTY(double y_52 READ pos_Y52 WRITE setPos_Y52 NOTIFY pos_Y52Changed)
    Q_PROPERTY(double r_52 READ pos_R52 WRITE setPos_R52 NOTIFY pos_R52Changed)
    Q_PROPERTY(double x_53 READ pos_X53 WRITE setPos_X53 NOTIFY pos_X53Changed)
    Q_PROPERTY(double y_53 READ pos_Y53 WRITE setPos_Y53 NOTIFY pos_Y53Changed)
    Q_PROPERTY(double r_53 READ pos_R53 WRITE setPos_R53 NOTIFY pos_R53Changed)
    Q_PROPERTY(double x_54 READ pos_X54 WRITE setPos_X54 NOTIFY pos_X54Changed)
    Q_PROPERTY(double y_54 READ pos_Y54 WRITE setPos_Y54 NOTIFY pos_Y54Changed)
    Q_PROPERTY(double r_54 READ pos_R54 WRITE setPos_R54 NOTIFY pos_R54Changed)
    Q_PROPERTY(double x_55 READ pos_X55 WRITE setPos_X55 NOTIFY pos_X55Changed)
    Q_PROPERTY(double y_55 READ pos_Y55 WRITE setPos_Y55 NOTIFY pos_Y55Changed)
    Q_PROPERTY(double r_55 READ pos_R55 WRITE setPos_R55 NOTIFY pos_R55Changed)
    Q_PROPERTY(double x_56 READ pos_X56 WRITE setPos_X56 NOTIFY pos_X56Changed)
    Q_PROPERTY(double y_56 READ pos_Y56 WRITE setPos_Y56 NOTIFY pos_Y56Changed)
    Q_PROPERTY(double r_56 READ pos_R56 WRITE setPos_R56 NOTIFY pos_R56Changed)
    Q_PROPERTY(double x_57 READ pos_X57 WRITE setPos_X57 NOTIFY pos_X57Changed)
    Q_PROPERTY(double y_57 READ pos_Y57 WRITE setPos_Y57 NOTIFY pos_Y57Changed)
    Q_PROPERTY(double r_57 READ pos_R57 WRITE setPos_R57 NOTIFY pos_R57Changed)
    Q_PROPERTY(double x_58 READ pos_X58 WRITE setPos_X58 NOTIFY pos_X58Changed)
    Q_PROPERTY(double y_58 READ pos_Y58 WRITE setPos_Y58 NOTIFY pos_Y58Changed)
    Q_PROPERTY(double r_58 READ pos_R58 WRITE setPos_R58 NOTIFY pos_R58Changed)
    Q_PROPERTY(double x_59 READ pos_X59 WRITE setPos_X59 NOTIFY pos_X59Changed)
    Q_PROPERTY(double y_59 READ pos_Y59 WRITE setPos_Y59 NOTIFY pos_Y59Changed)
    Q_PROPERTY(double r_59 READ pos_R59 WRITE setPos_R59 NOTIFY pos_R59Changed)
    Q_PROPERTY(double x_60 READ pos_X60 WRITE setPos_X60 NOTIFY pos_X60Changed)
    Q_PROPERTY(double y_60 READ pos_Y60 WRITE setPos_Y60 NOTIFY pos_Y60Changed)
    Q_PROPERTY(double r_60 READ pos_R60 WRITE setPos_R60 NOTIFY pos_R60Changed)
    Q_PROPERTY(double x_61 READ pos_X61 WRITE setPos_X61 NOTIFY pos_X61Changed)
    Q_PROPERTY(double y_61 READ pos_Y61 WRITE setPos_Y61 NOTIFY pos_Y61Changed)
    Q_PROPERTY(double r_61 READ pos_R61 WRITE setPos_R61 NOTIFY pos_R61Changed)
    Q_PROPERTY(double x_62 READ pos_X62 WRITE setPos_X62 NOTIFY pos_X62Changed)
    Q_PROPERTY(double y_62 READ pos_Y62 WRITE setPos_Y62 NOTIFY pos_Y62Changed)
    Q_PROPERTY(double r_62 READ pos_R62 WRITE setPos_R62 NOTIFY pos_R62Changed)
    Q_PROPERTY(double x_63 READ pos_X63 WRITE setPos_X63 NOTIFY pos_X63Changed)
    Q_PROPERTY(double y_63 READ pos_Y63 WRITE setPos_Y63 NOTIFY pos_Y63Changed)
    Q_PROPERTY(double r_63 READ pos_R63 WRITE setPos_R63 NOTIFY pos_R63Changed)
    Q_PROPERTY(double x_64 READ pos_X64 WRITE setPos_X64 NOTIFY pos_X64Changed)
    Q_PROPERTY(double y_64 READ pos_Y64 WRITE setPos_Y64 NOTIFY pos_Y64Changed)
    Q_PROPERTY(double r_64 READ pos_R64 WRITE setPos_R64 NOTIFY pos_R64Changed)
    Q_PROPERTY(double x_65 READ pos_X65 WRITE setPos_X65 NOTIFY pos_X65Changed)
    Q_PROPERTY(double y_65 READ pos_Y65 WRITE setPos_Y65 NOTIFY pos_Y65Changed)
    Q_PROPERTY(double r_65 READ pos_R65 WRITE setPos_R65 NOTIFY pos_R65Changed)
    Q_PROPERTY(double x_66 READ pos_X66 WRITE setPos_X66 NOTIFY pos_X66Changed)
    Q_PROPERTY(double y_66 READ pos_Y66 WRITE setPos_Y66 NOTIFY pos_Y66Changed)
    Q_PROPERTY(double r_66 READ pos_R66 WRITE setPos_R66 NOTIFY pos_R66Changed)
    Q_PROPERTY(double x_67 READ pos_X67 WRITE setPos_X67 NOTIFY pos_X67Changed)
    Q_PROPERTY(double y_67 READ pos_Y67 WRITE setPos_Y67 NOTIFY pos_Y67Changed)
    Q_PROPERTY(double r_67 READ pos_R67 WRITE setPos_R67 NOTIFY pos_R67Changed)
    Q_PROPERTY(double x_68 READ pos_X68 WRITE setPos_X68 NOTIFY pos_X68Changed)
    Q_PROPERTY(double y_68 READ pos_Y68 WRITE setPos_Y68 NOTIFY pos_Y68Changed)
    Q_PROPERTY(double r_68 READ pos_R68 WRITE setPos_R68 NOTIFY pos_R68Changed)
    Q_PROPERTY(double x_69 READ pos_X69 WRITE setPos_X69 NOTIFY pos_X69Changed)
    Q_PROPERTY(double y_69 READ pos_Y69 WRITE setPos_Y69 NOTIFY pos_Y69Changed)
    Q_PROPERTY(double r_69 READ pos_R69 WRITE setPos_R69 NOTIFY pos_R69Changed)
    Q_PROPERTY(double x_70 READ pos_X70 WRITE setPos_X70 NOTIFY pos_X70Changed)
    Q_PROPERTY(double y_70 READ pos_Y70 WRITE setPos_Y70 NOTIFY pos_Y70Changed)
    Q_PROPERTY(double r_70 READ pos_R70 WRITE setPos_R70 NOTIFY pos_R70Changed)
    Q_PROPERTY(double x_71 READ pos_X71 WRITE setPos_X71 NOTIFY pos_X71Changed)
    Q_PROPERTY(double y_71 READ pos_Y71 WRITE setPos_Y71 NOTIFY pos_Y71Changed)
    Q_PROPERTY(double r_71 READ pos_R71 WRITE setPos_R71 NOTIFY pos_R71Changed)
    Q_PROPERTY(double x_72 READ pos_X72 WRITE setPos_X72 NOTIFY pos_X72Changed)
    Q_PROPERTY(double y_72 READ pos_Y72 WRITE setPos_Y72 NOTIFY pos_Y72Changed)
    Q_PROPERTY(double r_72 READ pos_R72 WRITE setPos_R72 NOTIFY pos_R72Changed)
    Q_PROPERTY(double x_73 READ pos_X73 WRITE setPos_X73 NOTIFY pos_X73Changed)
    Q_PROPERTY(double y_73 READ pos_Y73 WRITE setPos_Y73 NOTIFY pos_Y73Changed)
    Q_PROPERTY(double r_73 READ pos_R73 WRITE setPos_R73 NOTIFY pos_R73Changed)
    Q_PROPERTY(double x_74 READ pos_X74 WRITE setPos_X74 NOTIFY pos_X74Changed)
    Q_PROPERTY(double y_74 READ pos_Y74 WRITE setPos_Y74 NOTIFY pos_Y74Changed)
    Q_PROPERTY(double r_74 READ pos_R74 WRITE setPos_R74 NOTIFY pos_R74Changed)
    Q_PROPERTY(double x_75 READ pos_X75 WRITE setPos_X75 NOTIFY pos_X75Changed)
    Q_PROPERTY(double y_75 READ pos_Y75 WRITE setPos_Y75 NOTIFY pos_Y75Changed)
    Q_PROPERTY(double r_75 READ pos_R75 WRITE setPos_R75 NOTIFY pos_R75Changed)
    Q_PROPERTY(double x_76 READ pos_X76 WRITE setPos_X76 NOTIFY pos_X76Changed)
    Q_PROPERTY(double y_76 READ pos_Y76 WRITE setPos_Y76 NOTIFY pos_Y76Changed)
    Q_PROPERTY(double r_76 READ pos_R76 WRITE setPos_R76 NOTIFY pos_R76Changed)
    Q_PROPERTY(double x_77 READ pos_X77 WRITE setPos_X77 NOTIFY pos_X77Changed)
    Q_PROPERTY(double y_77 READ pos_Y77 WRITE setPos_Y77 NOTIFY pos_Y77Changed)
    Q_PROPERTY(double r_77 READ pos_R77 WRITE setPos_R77 NOTIFY pos_R77Changed)
    Q_PROPERTY(double x_78 READ pos_X78 WRITE setPos_X78 NOTIFY pos_X78Changed)
    Q_PROPERTY(double y_78 READ pos_Y78 WRITE setPos_Y78 NOTIFY pos_Y78Changed)
    Q_PROPERTY(double r_78 READ pos_R78 WRITE setPos_R78 NOTIFY pos_R78Changed)
    Q_PROPERTY(double x_79 READ pos_X79 WRITE setPos_X79 NOTIFY pos_X79Changed)
    Q_PROPERTY(double y_79 READ pos_Y79 WRITE setPos_Y79 NOTIFY pos_Y79Changed)
    Q_PROPERTY(double r_79 READ pos_R79 WRITE setPos_R79 NOTIFY pos_R79Changed)
    Q_PROPERTY(double x_80 READ pos_X80 WRITE setPos_X80 NOTIFY pos_X80Changed)
    Q_PROPERTY(double y_80 READ pos_Y80 WRITE setPos_Y80 NOTIFY pos_Y80Changed)
    Q_PROPERTY(double r_80 READ pos_R80 WRITE setPos_R80 NOTIFY pos_R80Changed)
    Q_PROPERTY(double x_81 READ pos_X81 WRITE setPos_X81 NOTIFY pos_X81Changed)
    Q_PROPERTY(double y_81 READ pos_Y81 WRITE setPos_Y81 NOTIFY pos_Y81Changed)
    Q_PROPERTY(double r_81 READ pos_R81 WRITE setPos_R81 NOTIFY pos_R81Changed)
    Q_PROPERTY(double x_82 READ pos_X82 WRITE setPos_X82 NOTIFY pos_X82Changed)
    Q_PROPERTY(double y_82 READ pos_Y82 WRITE setPos_Y82 NOTIFY pos_Y82Changed)
    Q_PROPERTY(double r_82 READ pos_R82 WRITE setPos_R82 NOTIFY pos_R82Changed)
    Q_PROPERTY(double x_83 READ pos_X83 WRITE setPos_X83 NOTIFY pos_X83Changed)
    Q_PROPERTY(double y_83 READ pos_Y83 WRITE setPos_Y83 NOTIFY pos_Y83Changed)
    Q_PROPERTY(double r_83 READ pos_R83 WRITE setPos_R83 NOTIFY pos_R83Changed)
    Q_PROPERTY(double x_84 READ pos_X84 WRITE setPos_X84 NOTIFY pos_X84Changed)
    Q_PROPERTY(double y_84 READ pos_Y84 WRITE setPos_Y84 NOTIFY pos_Y84Changed)
    Q_PROPERTY(double r_84 READ pos_R84 WRITE setPos_R84 NOTIFY pos_R84Changed)
    Q_PROPERTY(double x_85 READ pos_X85 WRITE setPos_X85 NOTIFY pos_X85Changed)
    Q_PROPERTY(double y_85 READ pos_Y85 WRITE setPos_Y85 NOTIFY pos_Y85Changed)
    Q_PROPERTY(double r_85 READ pos_R85 WRITE setPos_R85 NOTIFY pos_R85Changed)
    Q_PROPERTY(double x_86 READ pos_X86 WRITE setPos_X86 NOTIFY pos_X86Changed)
    Q_PROPERTY(double y_86 READ pos_Y86 WRITE setPos_Y86 NOTIFY pos_Y86Changed)
    Q_PROPERTY(double r_86 READ pos_R86 WRITE setPos_R86 NOTIFY pos_R86Changed)
    Q_PROPERTY(double x_87 READ pos_X87 WRITE setPos_X87 NOTIFY pos_X87Changed)
    Q_PROPERTY(double y_87 READ pos_Y87 WRITE setPos_Y87 NOTIFY pos_Y87Changed)
    Q_PROPERTY(double r_87 READ pos_R87 WRITE setPos_R87 NOTIFY pos_R87Changed)
    Q_PROPERTY(double x_88 READ pos_X88 WRITE setPos_X88 NOTIFY pos_X88Changed)
    Q_PROPERTY(double y_88 READ pos_Y88 WRITE setPos_Y88 NOTIFY pos_Y88Changed)
    Q_PROPERTY(double r_88 READ pos_R88 WRITE setPos_R88 NOTIFY pos_R88Changed)
    Q_PROPERTY(double x_89 READ pos_X89 WRITE setPos_X89 NOTIFY pos_X89Changed)
    Q_PROPERTY(double y_89 READ pos_Y89 WRITE setPos_Y89 NOTIFY pos_Y89Changed)
    Q_PROPERTY(double r_89 READ pos_R89 WRITE setPos_R89 NOTIFY pos_R89Changed)
    Q_PROPERTY(double x_90 READ pos_X90 WRITE setPos_X90 NOTIFY pos_X90Changed)
    Q_PROPERTY(double y_90 READ pos_Y90 WRITE setPos_Y90 NOTIFY pos_Y90Changed)
    Q_PROPERTY(double r_90 READ pos_R90 WRITE setPos_R90 NOTIFY pos_R90Changed)
    Q_PROPERTY(double x_91 READ pos_X91 WRITE setPos_X91 NOTIFY pos_X91Changed)
    Q_PROPERTY(double y_91 READ pos_Y91 WRITE setPos_Y91 NOTIFY pos_Y91Changed)
    Q_PROPERTY(double r_91 READ pos_R91 WRITE setPos_R91 NOTIFY pos_R91Changed)
    Q_PROPERTY(double x_92 READ pos_X92 WRITE setPos_X92 NOTIFY pos_X92Changed)
    Q_PROPERTY(double y_92 READ pos_Y92 WRITE setPos_Y92 NOTIFY pos_Y92Changed)
    Q_PROPERTY(double r_92 READ pos_R92 WRITE setPos_R92 NOTIFY pos_R92Changed)
    Q_PROPERTY(double x_93 READ pos_X93 WRITE setPos_X93 NOTIFY pos_X93Changed)
    Q_PROPERTY(double y_93 READ pos_Y93 WRITE setPos_Y93 NOTIFY pos_Y93Changed)
    Q_PROPERTY(double r_93 READ pos_R93 WRITE setPos_R93 NOTIFY pos_R93Changed)
    Q_PROPERTY(double x_94 READ pos_X94 WRITE setPos_X94 NOTIFY pos_X94Changed)
    Q_PROPERTY(double y_94 READ pos_Y94 WRITE setPos_Y94 NOTIFY pos_Y94Changed)
    Q_PROPERTY(double r_94 READ pos_R94 WRITE setPos_R94 NOTIFY pos_R94Changed)
    Q_PROPERTY(double x_95 READ pos_X95 WRITE setPos_X95 NOTIFY pos_X95Changed)
    Q_PROPERTY(double y_95 READ pos_Y95 WRITE setPos_Y95 NOTIFY pos_Y95Changed)
    Q_PROPERTY(double r_95 READ pos_R95 WRITE setPos_R95 NOTIFY pos_R95Changed)
    Q_PROPERTY(double x_96 READ pos_X96 WRITE setPos_X96 NOTIFY pos_X96Changed)
    Q_PROPERTY(double y_96 READ pos_Y96 WRITE setPos_Y96 NOTIFY pos_Y96Changed)
    Q_PROPERTY(double r_96 READ pos_R96 WRITE setPos_R96 NOTIFY pos_R96Changed)
    Q_PROPERTY(double x_97 READ pos_X97 WRITE setPos_X97 NOTIFY pos_X97Changed)
    Q_PROPERTY(double y_97 READ pos_Y97 WRITE setPos_Y97 NOTIFY pos_Y97Changed)
    Q_PROPERTY(double r_97 READ pos_R97 WRITE setPos_R97 NOTIFY pos_R97Changed)
    Q_PROPERTY(double x_98 READ pos_X98 WRITE setPos_X98 NOTIFY pos_X98Changed)
    Q_PROPERTY(double y_98 READ pos_Y98 WRITE setPos_Y98 NOTIFY pos_Y98Changed)
    Q_PROPERTY(double r_98 READ pos_R98 WRITE setPos_R98 NOTIFY pos_R98Changed)
    Q_PROPERTY(double x_99 READ pos_X99 WRITE setPos_X99 NOTIFY pos_X99Changed)
    Q_PROPERTY(double y_99 READ pos_Y99 WRITE setPos_Y99 NOTIFY pos_Y99Changed)
    Q_PROPERTY(double r_99 READ pos_R99 WRITE setPos_R99 NOTIFY pos_R99Changed)
    Q_PROPERTY(double x_100 READ pos_X100 WRITE setPos_X100 NOTIFY pos_X100Changed)
    Q_PROPERTY(double y_100 READ pos_Y100 WRITE setPos_Y100 NOTIFY pos_Y100Changed)
    Q_PROPERTY(double r_100 READ pos_R100 WRITE setPos_R100 NOTIFY pos_R100Changed)
    Q_PROPERTY(double x_101 READ pos_X101 WRITE setPos_X101 NOTIFY pos_X101Changed)
    Q_PROPERTY(double y_101 READ pos_Y101 WRITE setPos_Y101 NOTIFY pos_Y101Changed)
    Q_PROPERTY(double r_101 READ pos_R101 WRITE setPos_R101 NOTIFY pos_R101Changed)
    Q_PROPERTY(double x_102 READ pos_X102 WRITE setPos_X102 NOTIFY pos_X102Changed)
    Q_PROPERTY(double y_102 READ pos_Y102 WRITE setPos_Y102 NOTIFY pos_Y102Changed)
    Q_PROPERTY(double r_102 READ pos_R102 WRITE setPos_R102 NOTIFY pos_R102Changed)
    Q_PROPERTY(double x_103 READ pos_X103 WRITE setPos_X103 NOTIFY pos_X103Changed)
    Q_PROPERTY(double y_103 READ pos_Y103 WRITE setPos_Y103 NOTIFY pos_Y103Changed)
    Q_PROPERTY(double r_103 READ pos_R103 WRITE setPos_R103 NOTIFY pos_R103Changed)
    Q_PROPERTY(double x_104 READ pos_X104 WRITE setPos_X104 NOTIFY pos_X104Changed)
    Q_PROPERTY(double y_104 READ pos_Y104 WRITE setPos_Y104 NOTIFY pos_Y104Changed)
    Q_PROPERTY(double r_104 READ pos_R104 WRITE setPos_R104 NOTIFY pos_R104Changed)
    Q_PROPERTY(double x_105 READ pos_X105 WRITE setPos_X105 NOTIFY pos_X105Changed)
    Q_PROPERTY(double y_105 READ pos_Y105 WRITE setPos_Y105 NOTIFY pos_Y105Changed)
    Q_PROPERTY(double r_105 READ pos_R105 WRITE setPos_R105 NOTIFY pos_R105Changed)
    Q_PROPERTY(double x_106 READ pos_X106 WRITE setPos_X106 NOTIFY pos_X106Changed)
    Q_PROPERTY(double y_106 READ pos_Y106 WRITE setPos_Y106 NOTIFY pos_Y106Changed)
    Q_PROPERTY(double r_106 READ pos_R106 WRITE setPos_R106 NOTIFY pos_R106Changed)
    Q_PROPERTY(double x_107 READ pos_X107 WRITE setPos_X107 NOTIFY pos_X107Changed)
    Q_PROPERTY(double y_107 READ pos_Y107 WRITE setPos_Y107 NOTIFY pos_Y107Changed)
    Q_PROPERTY(double r_107 READ pos_R107 WRITE setPos_R107 NOTIFY pos_R107Changed)
    Q_PROPERTY(double x_108 READ pos_X108 WRITE setPos_X108 NOTIFY pos_X108Changed)
    Q_PROPERTY(double y_108 READ pos_Y108 WRITE setPos_Y108 NOTIFY pos_Y108Changed)
    Q_PROPERTY(double r_108 READ pos_R108 WRITE setPos_R108 NOTIFY pos_R108Changed)
    Q_PROPERTY(double x_109 READ pos_X109 WRITE setPos_X109 NOTIFY pos_X109Changed)
    Q_PROPERTY(double y_109 READ pos_Y109 WRITE setPos_Y109 NOTIFY pos_Y109Changed)
    Q_PROPERTY(double r_109 READ pos_R109 WRITE setPos_R109 NOTIFY pos_R109Changed)
    Q_PROPERTY(double x_110 READ pos_X110 WRITE setPos_X110 NOTIFY pos_X110Changed)
    Q_PROPERTY(double y_110 READ pos_Y110 WRITE setPos_Y110 NOTIFY pos_Y110Changed)
    Q_PROPERTY(double r_110 READ pos_R110 WRITE setPos_R110 NOTIFY pos_R110Changed)
    Q_PROPERTY(double x_111 READ pos_X111 WRITE setPos_X111 NOTIFY pos_X111Changed)
    Q_PROPERTY(double y_111 READ pos_Y111 WRITE setPos_Y111 NOTIFY pos_Y111Changed)
    Q_PROPERTY(double r_111 READ pos_R111 WRITE setPos_R111 NOTIFY pos_R111Changed)
    Q_PROPERTY(double x_112 READ pos_X112 WRITE setPos_X112 NOTIFY pos_X112Changed)
    Q_PROPERTY(double y_112 READ pos_Y112 WRITE setPos_Y112 NOTIFY pos_Y112Changed)
    Q_PROPERTY(double r_112 READ pos_R112 WRITE setPos_R112 NOTIFY pos_R112Changed)
    Q_PROPERTY(double x_113 READ pos_X113 WRITE setPos_X113 NOTIFY pos_X113Changed)
    Q_PROPERTY(double y_113 READ pos_Y113 WRITE setPos_Y113 NOTIFY pos_Y113Changed)
    Q_PROPERTY(double r_113 READ pos_R113 WRITE setPos_R113 NOTIFY pos_R113Changed)
    Q_PROPERTY(double x_114 READ pos_X114 WRITE setPos_X114 NOTIFY pos_X114Changed)
    Q_PROPERTY(double y_114 READ pos_Y114 WRITE setPos_Y114 NOTIFY pos_Y114Changed)
    Q_PROPERTY(double r_114 READ pos_R114 WRITE setPos_R114 NOTIFY pos_R114Changed)
    Q_PROPERTY(double x_115 READ pos_X115 WRITE setPos_X115 NOTIFY pos_X115Changed)
    Q_PROPERTY(double y_115 READ pos_Y115 WRITE setPos_Y115 NOTIFY pos_Y115Changed)
    Q_PROPERTY(double r_115 READ pos_R115 WRITE setPos_R115 NOTIFY pos_R115Changed)
    Q_PROPERTY(double x_116 READ pos_X116 WRITE setPos_X116 NOTIFY pos_X116Changed)
    Q_PROPERTY(double y_116 READ pos_Y116 WRITE setPos_Y116 NOTIFY pos_Y116Changed)
    Q_PROPERTY(double r_116 READ pos_R116 WRITE setPos_R116 NOTIFY pos_R116Changed)
    Q_PROPERTY(double x_117 READ pos_X117 WRITE setPos_X117 NOTIFY pos_X117Changed)
    Q_PROPERTY(double y_117 READ pos_Y117 WRITE setPos_Y117 NOTIFY pos_Y117Changed)
    Q_PROPERTY(double r_117 READ pos_R117 WRITE setPos_R117 NOTIFY pos_R117Changed)
    Q_PROPERTY(double x_118 READ pos_X118 WRITE setPos_X118 NOTIFY pos_X118Changed)
    Q_PROPERTY(double y_118 READ pos_Y118 WRITE setPos_Y118 NOTIFY pos_Y118Changed)
    Q_PROPERTY(double r_118 READ pos_R118 WRITE setPos_R118 NOTIFY pos_R118Changed)
    Q_PROPERTY(double x_119 READ pos_X119 WRITE setPos_X119 NOTIFY pos_X119Changed)
    Q_PROPERTY(double y_119 READ pos_Y119 WRITE setPos_Y119 NOTIFY pos_Y119Changed)
    Q_PROPERTY(double r_119 READ pos_R119 WRITE setPos_R119 NOTIFY pos_R119Changed)
    Q_PROPERTY(double x_120 READ pos_X120 WRITE setPos_X120 NOTIFY pos_X120Changed)
    Q_PROPERTY(double y_120 READ pos_Y120 WRITE setPos_Y120 NOTIFY pos_Y120Changed)
    Q_PROPERTY(double r_120 READ pos_R120 WRITE setPos_R120 NOTIFY pos_R120Changed)
    Q_PROPERTY(double x_121 READ pos_X121 WRITE setPos_X121 NOTIFY pos_X121Changed)
    Q_PROPERTY(double y_121 READ pos_Y121 WRITE setPos_Y121 NOTIFY pos_Y121Changed)
    Q_PROPERTY(double r_121 READ pos_R121 WRITE setPos_R121 NOTIFY pos_R121Changed)
    Q_PROPERTY(double x_122 READ pos_X122 WRITE setPos_X122 NOTIFY pos_X122Changed)
    Q_PROPERTY(double y_122 READ pos_Y122 WRITE setPos_Y122 NOTIFY pos_Y122Changed)
    Q_PROPERTY(double r_122 READ pos_R122 WRITE setPos_R122 NOTIFY pos_R122Changed)
    Q_PROPERTY(double x_123 READ pos_X123 WRITE setPos_X123 NOTIFY pos_X123Changed)
    Q_PROPERTY(double y_123 READ pos_Y123 WRITE setPos_Y123 NOTIFY pos_Y123Changed)
    Q_PROPERTY(double r_123 READ pos_R123 WRITE setPos_R123 NOTIFY pos_R123Changed)
    Q_PROPERTY(double x_124 READ pos_X124 WRITE setPos_X124 NOTIFY pos_X124Changed)
    Q_PROPERTY(double y_124 READ pos_Y124 WRITE setPos_Y124 NOTIFY pos_Y124Changed)
    Q_PROPERTY(double r_124 READ pos_R124 WRITE setPos_R124 NOTIFY pos_R124Changed)
    Q_PROPERTY(double x_125 READ pos_X125 WRITE setPos_X125 NOTIFY pos_X125Changed)
    Q_PROPERTY(double y_125 READ pos_Y125 WRITE setPos_Y125 NOTIFY pos_Y125Changed)
    Q_PROPERTY(double r_125 READ pos_R125 WRITE setPos_R125 NOTIFY pos_R125Changed)
    Q_PROPERTY(double x_126 READ pos_X126 WRITE setPos_X126 NOTIFY pos_X126Changed)
    Q_PROPERTY(double y_126 READ pos_Y126 WRITE setPos_Y126 NOTIFY pos_Y126Changed)
    Q_PROPERTY(double r_126 READ pos_R126 WRITE setPos_R126 NOTIFY pos_R126Changed)
    Q_PROPERTY(double x_127 READ pos_X127 WRITE setPos_X127 NOTIFY pos_X127Changed)
    Q_PROPERTY(double y_127 READ pos_Y127 WRITE setPos_Y127 NOTIFY pos_Y127Changed)
    Q_PROPERTY(double r_127 READ pos_R127 WRITE setPos_R127 NOTIFY pos_R127Changed)
    Q_PROPERTY(double x_128 READ pos_X128 WRITE setPos_X128 NOTIFY pos_X128Changed)
    Q_PROPERTY(double y_128 READ pos_Y128 WRITE setPos_Y128 NOTIFY pos_Y128Changed)
    Q_PROPERTY(double r_128 READ pos_R128 WRITE setPos_R128 NOTIFY pos_R128Changed)
    Q_PROPERTY(double x_129 READ pos_X129 WRITE setPos_X129 NOTIFY pos_X129Changed)
    Q_PROPERTY(double y_129 READ pos_Y129 WRITE setPos_Y129 NOTIFY pos_Y129Changed)
    Q_PROPERTY(double r_129 READ pos_R129 WRITE setPos_R129 NOTIFY pos_R129Changed)
    Q_PROPERTY(double x_130 READ pos_X130 WRITE setPos_X130 NOTIFY pos_X130Changed)
    Q_PROPERTY(double y_130 READ pos_Y130 WRITE setPos_Y130 NOTIFY pos_Y130Changed)
    Q_PROPERTY(double r_130 READ pos_R130 WRITE setPos_R130 NOTIFY pos_R130Changed)
    Q_PROPERTY(double x_131 READ pos_X131 WRITE setPos_X131 NOTIFY pos_X131Changed)
    Q_PROPERTY(double y_131 READ pos_Y131 WRITE setPos_Y131 NOTIFY pos_Y131Changed)
    Q_PROPERTY(double r_131 READ pos_R131 WRITE setPos_R131 NOTIFY pos_R131Changed)
    Q_PROPERTY(double x_132 READ pos_X132 WRITE setPos_X132 NOTIFY pos_X132Changed)
    Q_PROPERTY(double y_132 READ pos_Y132 WRITE setPos_Y132 NOTIFY pos_Y132Changed)
    Q_PROPERTY(double r_132 READ pos_R132 WRITE setPos_R132 NOTIFY pos_R132Changed)
    Q_PROPERTY(double x_133 READ pos_X133 WRITE setPos_X133 NOTIFY pos_X133Changed)
    Q_PROPERTY(double y_133 READ pos_Y133 WRITE setPos_Y133 NOTIFY pos_Y133Changed)
    Q_PROPERTY(double r_133 READ pos_R133 WRITE setPos_R133 NOTIFY pos_R133Changed)
    Q_PROPERTY(double x_134 READ pos_X134 WRITE setPos_X134 NOTIFY pos_X134Changed)
    Q_PROPERTY(double y_134 READ pos_Y134 WRITE setPos_Y134 NOTIFY pos_Y134Changed)
    Q_PROPERTY(double r_134 READ pos_R134 WRITE setPos_R134 NOTIFY pos_R134Changed)
    Q_PROPERTY(double x_135 READ pos_X135 WRITE setPos_X135 NOTIFY pos_X135Changed)
    Q_PROPERTY(double y_135 READ pos_Y135 WRITE setPos_Y135 NOTIFY pos_Y135Changed)
    Q_PROPERTY(double r_135 READ pos_R135 WRITE setPos_R135 NOTIFY pos_R135Changed)
    Q_PROPERTY(double x_136 READ pos_X136 WRITE setPos_X136 NOTIFY pos_X136Changed)
    Q_PROPERTY(double y_136 READ pos_Y136 WRITE setPos_Y136 NOTIFY pos_Y136Changed)
    Q_PROPERTY(double r_136 READ pos_R136 WRITE setPos_R136 NOTIFY pos_R136Changed)
    Q_PROPERTY(double x_137 READ pos_X137 WRITE setPos_X137 NOTIFY pos_X137Changed)
    Q_PROPERTY(double y_137 READ pos_Y137 WRITE setPos_Y137 NOTIFY pos_Y137Changed)
    Q_PROPERTY(double r_137 READ pos_R137 WRITE setPos_R137 NOTIFY pos_R137Changed)
    Q_PROPERTY(double x_138 READ pos_X138 WRITE setPos_X138 NOTIFY pos_X138Changed)
    Q_PROPERTY(double y_138 READ pos_Y138 WRITE setPos_Y138 NOTIFY pos_Y138Changed)
    Q_PROPERTY(double r_138 READ pos_R138 WRITE setPos_R138 NOTIFY pos_R138Changed)
    Q_PROPERTY(double x_139 READ pos_X139 WRITE setPos_X139 NOTIFY pos_X139Changed)
    Q_PROPERTY(double y_139 READ pos_Y139 WRITE setPos_Y139 NOTIFY pos_Y139Changed)
    Q_PROPERTY(double r_139 READ pos_R139 WRITE setPos_R139 NOTIFY pos_R139Changed)
    Q_PROPERTY(double x_140 READ pos_X140 WRITE setPos_X140 NOTIFY pos_X140Changed)
    Q_PROPERTY(double y_140 READ pos_Y140 WRITE setPos_Y140 NOTIFY pos_Y140Changed)
    Q_PROPERTY(double r_140 READ pos_R140 WRITE setPos_R140 NOTIFY pos_R140Changed)
    Q_PROPERTY(double x_141 READ pos_X141 WRITE setPos_X141 NOTIFY pos_X141Changed)
    Q_PROPERTY(double y_141 READ pos_Y141 WRITE setPos_Y141 NOTIFY pos_Y141Changed)
    Q_PROPERTY(double r_141 READ pos_R141 WRITE setPos_R141 NOTIFY pos_R141Changed)
    Q_PROPERTY(double x_142 READ pos_X142 WRITE setPos_X142 NOTIFY pos_X142Changed)
    Q_PROPERTY(double y_142 READ pos_Y142 WRITE setPos_Y142 NOTIFY pos_Y142Changed)
    Q_PROPERTY(double r_142 READ pos_R142 WRITE setPos_R142 NOTIFY pos_R142Changed)
    Q_PROPERTY(double x_143 READ pos_X143 WRITE setPos_X143 NOTIFY pos_X143Changed)
    Q_PROPERTY(double y_143 READ pos_Y143 WRITE setPos_Y143 NOTIFY pos_Y143Changed)
    Q_PROPERTY(double r_143 READ pos_R143 WRITE setPos_R143 NOTIFY pos_R143Changed)
    Q_PROPERTY(double x_144 READ pos_X144 WRITE setPos_X144 NOTIFY pos_X144Changed)
    Q_PROPERTY(double y_144 READ pos_Y144 WRITE setPos_Y144 NOTIFY pos_Y144Changed)
    Q_PROPERTY(double r_144 READ pos_R144 WRITE setPos_R144 NOTIFY pos_R144Changed)
    Q_PROPERTY(double x_145 READ pos_X145 WRITE setPos_X145 NOTIFY pos_X145Changed)
    Q_PROPERTY(double y_145 READ pos_Y145 WRITE setPos_Y145 NOTIFY pos_Y145Changed)
    Q_PROPERTY(double r_145 READ pos_R145 WRITE setPos_R145 NOTIFY pos_R145Changed)
    Q_PROPERTY(double x_146 READ pos_X146 WRITE setPos_X146 NOTIFY pos_X146Changed)
    Q_PROPERTY(double y_146 READ pos_Y146 WRITE setPos_Y146 NOTIFY pos_Y146Changed)
    Q_PROPERTY(double r_146 READ pos_R146 WRITE setPos_R146 NOTIFY pos_R146Changed)
    Q_PROPERTY(double x_147 READ pos_X147 WRITE setPos_X147 NOTIFY pos_X147Changed)
    Q_PROPERTY(double y_147 READ pos_Y147 WRITE setPos_Y147 NOTIFY pos_Y147Changed)
    Q_PROPERTY(double r_147 READ pos_R147 WRITE setPos_R147 NOTIFY pos_R147Changed)
    Q_PROPERTY(double x_148 READ pos_X148 WRITE setPos_X148 NOTIFY pos_X148Changed)
    Q_PROPERTY(double y_148 READ pos_Y148 WRITE setPos_Y148 NOTIFY pos_Y148Changed)
    Q_PROPERTY(double r_148 READ pos_R148 WRITE setPos_R148 NOTIFY pos_R148Changed)
    Q_PROPERTY(double x_149 READ pos_X149 WRITE setPos_X149 NOTIFY pos_X149Changed)
    Q_PROPERTY(double y_149 READ pos_Y149 WRITE setPos_Y149 NOTIFY pos_Y149Changed)
    Q_PROPERTY(double r_149 READ pos_R149 WRITE setPos_R149 NOTIFY pos_R149Changed)
    Q_PROPERTY(double x_150 READ pos_X150 WRITE setPos_X150 NOTIFY pos_X150Changed)
    Q_PROPERTY(double y_150 READ pos_Y150 WRITE setPos_Y150 NOTIFY pos_Y150Changed)
    Q_PROPERTY(double r_150 READ pos_R150 WRITE setPos_R150 NOTIFY pos_R150Changed)
    Q_PROPERTY(double x_151 READ pos_X151 WRITE setPos_X151 NOTIFY pos_X151Changed)
    Q_PROPERTY(double y_151 READ pos_Y151 WRITE setPos_Y151 NOTIFY pos_Y151Changed)
    Q_PROPERTY(double r_151 READ pos_R151 WRITE setPos_R151 NOTIFY pos_R151Changed)
    Q_PROPERTY(double x_152 READ pos_X152 WRITE setPos_X152 NOTIFY pos_X152Changed)
    Q_PROPERTY(double y_152 READ pos_Y152 WRITE setPos_Y152 NOTIFY pos_Y152Changed)
    Q_PROPERTY(double r_152 READ pos_R152 WRITE setPos_R152 NOTIFY pos_R152Changed)
    Q_PROPERTY(double x_153 READ pos_X153 WRITE setPos_X153 NOTIFY pos_X153Changed)
    Q_PROPERTY(double y_153 READ pos_Y153 WRITE setPos_Y153 NOTIFY pos_Y153Changed)
    Q_PROPERTY(double r_153 READ pos_R153 WRITE setPos_R153 NOTIFY pos_R153Changed)
    Q_PROPERTY(double x_154 READ pos_X154 WRITE setPos_X154 NOTIFY pos_X154Changed)
    Q_PROPERTY(double y_154 READ pos_Y154 WRITE setPos_Y154 NOTIFY pos_Y154Changed)
    Q_PROPERTY(double r_154 READ pos_R154 WRITE setPos_R154 NOTIFY pos_R154Changed)
    Q_PROPERTY(double x_155 READ pos_X155 WRITE setPos_X155 NOTIFY pos_X155Changed)
    Q_PROPERTY(double y_155 READ pos_Y155 WRITE setPos_Y155 NOTIFY pos_Y155Changed)
    Q_PROPERTY(double r_155 READ pos_R155 WRITE setPos_R155 NOTIFY pos_R155Changed)
    Q_PROPERTY(double x_156 READ pos_X156 WRITE setPos_X156 NOTIFY pos_X156Changed)
    Q_PROPERTY(double y_156 READ pos_Y156 WRITE setPos_Y156 NOTIFY pos_Y156Changed)
    Q_PROPERTY(double r_156 READ pos_R156 WRITE setPos_R156 NOTIFY pos_R156Changed)
    Q_PROPERTY(double x_157 READ pos_X157 WRITE setPos_X157 NOTIFY pos_X157Changed)
    Q_PROPERTY(double y_157 READ pos_Y157 WRITE setPos_Y157 NOTIFY pos_Y157Changed)
    Q_PROPERTY(double r_157 READ pos_R157 WRITE setPos_R157 NOTIFY pos_R157Changed)
    Q_PROPERTY(double x_158 READ pos_X158 WRITE setPos_X158 NOTIFY pos_X158Changed)
    Q_PROPERTY(double y_158 READ pos_Y158 WRITE setPos_Y158 NOTIFY pos_Y158Changed)
    Q_PROPERTY(double r_158 READ pos_R158 WRITE setPos_R158 NOTIFY pos_R158Changed)
    Q_PROPERTY(double x_159 READ pos_X159 WRITE setPos_X159 NOTIFY pos_X159Changed)
    Q_PROPERTY(double y_159 READ pos_Y159 WRITE setPos_Y159 NOTIFY pos_Y159Changed)
    Q_PROPERTY(double r_159 READ pos_R159 WRITE setPos_R159 NOTIFY pos_R159Changed)
    Q_PROPERTY(double x_160 READ pos_X160 WRITE setPos_X160 NOTIFY pos_X160Changed)
    Q_PROPERTY(double y_160 READ pos_Y160 WRITE setPos_Y160 NOTIFY pos_Y160Changed)
    Q_PROPERTY(double r_160 READ pos_R160 WRITE setPos_R160 NOTIFY pos_R160Changed)
    Q_PROPERTY(double x_161 READ pos_X161 WRITE setPos_X161 NOTIFY pos_X161Changed)
    Q_PROPERTY(double y_161 READ pos_Y161 WRITE setPos_Y161 NOTIFY pos_Y161Changed)
    Q_PROPERTY(double r_161 READ pos_R161 WRITE setPos_R161 NOTIFY pos_R161Changed)
    Q_PROPERTY(double x_162 READ pos_X162 WRITE setPos_X162 NOTIFY pos_X162Changed)
    Q_PROPERTY(double y_162 READ pos_Y162 WRITE setPos_Y162 NOTIFY pos_Y162Changed)
    Q_PROPERTY(double r_162 READ pos_R162 WRITE setPos_R162 NOTIFY pos_R162Changed)
    Q_PROPERTY(double x_163 READ pos_X163 WRITE setPos_X163 NOTIFY pos_X163Changed)
    Q_PROPERTY(double y_163 READ pos_Y163 WRITE setPos_Y163 NOTIFY pos_Y163Changed)
    Q_PROPERTY(double r_163 READ pos_R163 WRITE setPos_R163 NOTIFY pos_R163Changed)
    Q_PROPERTY(double x_164 READ pos_X164 WRITE setPos_X164 NOTIFY pos_X164Changed)
    Q_PROPERTY(double y_164 READ pos_Y164 WRITE setPos_Y164 NOTIFY pos_Y164Changed)
    Q_PROPERTY(double r_164 READ pos_R164 WRITE setPos_R164 NOTIFY pos_R164Changed)
    Q_PROPERTY(double x_165 READ pos_X165 WRITE setPos_X165 NOTIFY pos_X165Changed)
    Q_PROPERTY(double y_165 READ pos_Y165 WRITE setPos_Y165 NOTIFY pos_Y165Changed)
    Q_PROPERTY(double r_165 READ pos_R165 WRITE setPos_R165 NOTIFY pos_R165Changed)
    Q_PROPERTY(double x_166 READ pos_X166 WRITE setPos_X166 NOTIFY pos_X166Changed)
    Q_PROPERTY(double y_166 READ pos_Y166 WRITE setPos_Y166 NOTIFY pos_Y166Changed)
    Q_PROPERTY(double r_166 READ pos_R166 WRITE setPos_R166 NOTIFY pos_R166Changed)
    Q_PROPERTY(double x_167 READ pos_X167 WRITE setPos_X167 NOTIFY pos_X167Changed)
    Q_PROPERTY(double y_167 READ pos_Y167 WRITE setPos_Y167 NOTIFY pos_Y167Changed)
    Q_PROPERTY(double r_167 READ pos_R167 WRITE setPos_R167 NOTIFY pos_R167Changed)
    Q_PROPERTY(double x_168 READ pos_X168 WRITE setPos_X168 NOTIFY pos_X168Changed)
    Q_PROPERTY(double y_168 READ pos_Y168 WRITE setPos_Y168 NOTIFY pos_Y168Changed)
    Q_PROPERTY(double r_168 READ pos_R168 WRITE setPos_R168 NOTIFY pos_R168Changed)
    Q_PROPERTY(double x_169 READ pos_X169 WRITE setPos_X169 NOTIFY pos_X169Changed)
    Q_PROPERTY(double y_169 READ pos_Y169 WRITE setPos_Y169 NOTIFY pos_Y169Changed)
    Q_PROPERTY(double r_169 READ pos_R169 WRITE setPos_R169 NOTIFY pos_R169Changed)
    Q_PROPERTY(double x_170 READ pos_X170 WRITE setPos_X170 NOTIFY pos_X170Changed)
    Q_PROPERTY(double y_170 READ pos_Y170 WRITE setPos_Y170 NOTIFY pos_Y170Changed)
    Q_PROPERTY(double r_170 READ pos_R170 WRITE setPos_R170 NOTIFY pos_R170Changed)
    Q_PROPERTY(double x_171 READ pos_X171 WRITE setPos_X171 NOTIFY pos_X171Changed)
    Q_PROPERTY(double y_171 READ pos_Y171 WRITE setPos_Y171 NOTIFY pos_Y171Changed)
    Q_PROPERTY(double r_171 READ pos_R171 WRITE setPos_R171 NOTIFY pos_R171Changed)
    Q_PROPERTY(double x_172 READ pos_X172 WRITE setPos_X172 NOTIFY pos_X172Changed)
    Q_PROPERTY(double y_172 READ pos_Y172 WRITE setPos_Y172 NOTIFY pos_Y172Changed)
    Q_PROPERTY(double r_172 READ pos_R172 WRITE setPos_R172 NOTIFY pos_R172Changed)
    Q_PROPERTY(double x_173 READ pos_X173 WRITE setPos_X173 NOTIFY pos_X173Changed)
    Q_PROPERTY(double y_173 READ pos_Y173 WRITE setPos_Y173 NOTIFY pos_Y173Changed)
    Q_PROPERTY(double r_173 READ pos_R173 WRITE setPos_R173 NOTIFY pos_R173Changed)
    Q_PROPERTY(double x_174 READ pos_X174 WRITE setPos_X174 NOTIFY pos_X174Changed)
    Q_PROPERTY(double y_174 READ pos_Y174 WRITE setPos_Y174 NOTIFY pos_Y174Changed)
    Q_PROPERTY(double r_174 READ pos_R174 WRITE setPos_R174 NOTIFY pos_R174Changed)
    Q_PROPERTY(double x_175 READ pos_X175 WRITE setPos_X175 NOTIFY pos_X175Changed)
    Q_PROPERTY(double y_175 READ pos_Y175 WRITE setPos_Y175 NOTIFY pos_Y175Changed)
    Q_PROPERTY(double r_175 READ pos_R175 WRITE setPos_R175 NOTIFY pos_R175Changed)
    Q_PROPERTY(double x_176 READ pos_X176 WRITE setPos_X176 NOTIFY pos_X176Changed)
    Q_PROPERTY(double y_176 READ pos_Y176 WRITE setPos_Y176 NOTIFY pos_Y176Changed)
    Q_PROPERTY(double r_176 READ pos_R176 WRITE setPos_R176 NOTIFY pos_R176Changed)
    Q_PROPERTY(double x_177 READ pos_X177 WRITE setPos_X177 NOTIFY pos_X177Changed)
    Q_PROPERTY(double y_177 READ pos_Y177 WRITE setPos_Y177 NOTIFY pos_Y177Changed)
    Q_PROPERTY(double r_177 READ pos_R177 WRITE setPos_R177 NOTIFY pos_R177Changed)
    Q_PROPERTY(double x_178 READ pos_X178 WRITE setPos_X178 NOTIFY pos_X178Changed)
    Q_PROPERTY(double y_178 READ pos_Y178 WRITE setPos_Y178 NOTIFY pos_Y178Changed)
    Q_PROPERTY(double r_178 READ pos_R178 WRITE setPos_R178 NOTIFY pos_R178Changed)
    Q_PROPERTY(double x_179 READ pos_X179 WRITE setPos_X179 NOTIFY pos_X179Changed)
    Q_PROPERTY(double y_179 READ pos_Y179 WRITE setPos_Y179 NOTIFY pos_Y179Changed)
    Q_PROPERTY(double r_179 READ pos_R179 WRITE setPos_R179 NOTIFY pos_R179Changed)
    Q_PROPERTY(double x_180 READ pos_X180 WRITE setPos_X180 NOTIFY pos_X180Changed)
    Q_PROPERTY(double y_180 READ pos_Y180 WRITE setPos_Y180 NOTIFY pos_Y180Changed)
    Q_PROPERTY(double r_180 READ pos_R180 WRITE setPos_R180 NOTIFY pos_R180Changed)
    Q_PROPERTY(double x_181 READ pos_X181 WRITE setPos_X181 NOTIFY pos_X181Changed)
    Q_PROPERTY(double y_181 READ pos_Y181 WRITE setPos_Y181 NOTIFY pos_Y181Changed)
    Q_PROPERTY(double r_181 READ pos_R181 WRITE setPos_R181 NOTIFY pos_R181Changed)
    Q_PROPERTY(double x_182 READ pos_X182 WRITE setPos_X182 NOTIFY pos_X182Changed)
    Q_PROPERTY(double y_182 READ pos_Y182 WRITE setPos_Y182 NOTIFY pos_Y182Changed)
    Q_PROPERTY(double r_182 READ pos_R182 WRITE setPos_R182 NOTIFY pos_R182Changed)
    Q_PROPERTY(double x_183 READ pos_X183 WRITE setPos_X183 NOTIFY pos_X183Changed)
    Q_PROPERTY(double y_183 READ pos_Y183 WRITE setPos_Y183 NOTIFY pos_Y183Changed)
    Q_PROPERTY(double r_183 READ pos_R183 WRITE setPos_R183 NOTIFY pos_R183Changed)
    Q_PROPERTY(double x_184 READ pos_X184 WRITE setPos_X184 NOTIFY pos_X184Changed)
    Q_PROPERTY(double y_184 READ pos_Y184 WRITE setPos_Y184 NOTIFY pos_Y184Changed)
    Q_PROPERTY(double r_184 READ pos_R184 WRITE setPos_R184 NOTIFY pos_R184Changed)
    Q_PROPERTY(double x_185 READ pos_X185 WRITE setPos_X185 NOTIFY pos_X185Changed)
    Q_PROPERTY(double y_185 READ pos_Y185 WRITE setPos_Y185 NOTIFY pos_Y185Changed)
    Q_PROPERTY(double r_185 READ pos_R185 WRITE setPos_R185 NOTIFY pos_R185Changed)
    Q_PROPERTY(double x_186 READ pos_X186 WRITE setPos_X186 NOTIFY pos_X186Changed)
    Q_PROPERTY(double y_186 READ pos_Y186 WRITE setPos_Y186 NOTIFY pos_Y186Changed)
    Q_PROPERTY(double r_186 READ pos_R186 WRITE setPos_R186 NOTIFY pos_R186Changed)
    Q_PROPERTY(double x_187 READ pos_X187 WRITE setPos_X187 NOTIFY pos_X187Changed)
    Q_PROPERTY(double y_187 READ pos_Y187 WRITE setPos_Y187 NOTIFY pos_Y187Changed)
    Q_PROPERTY(double r_187 READ pos_R187 WRITE setPos_R187 NOTIFY pos_R187Changed)
    Q_PROPERTY(double x_188 READ pos_X188 WRITE setPos_X188 NOTIFY pos_X188Changed)
    Q_PROPERTY(double y_188 READ pos_Y188 WRITE setPos_Y188 NOTIFY pos_Y188Changed)
    Q_PROPERTY(double r_188 READ pos_R188 WRITE setPos_R188 NOTIFY pos_R188Changed)
    Q_PROPERTY(double x_189 READ pos_X189 WRITE setPos_X189 NOTIFY pos_X189Changed)
    Q_PROPERTY(double y_189 READ pos_Y189 WRITE setPos_Y189 NOTIFY pos_Y189Changed)
    Q_PROPERTY(double r_189 READ pos_R189 WRITE setPos_R189 NOTIFY pos_R189Changed)
    Q_PROPERTY(double x_190 READ pos_X190 WRITE setPos_X190 NOTIFY pos_X190Changed)
    Q_PROPERTY(double y_190 READ pos_Y190 WRITE setPos_Y190 NOTIFY pos_Y190Changed)
    Q_PROPERTY(double r_190 READ pos_R190 WRITE setPos_R190 NOTIFY pos_R190Changed)
    Q_PROPERTY(double x_191 READ pos_X191 WRITE setPos_X191 NOTIFY pos_X191Changed)
    Q_PROPERTY(double y_191 READ pos_Y191 WRITE setPos_Y191 NOTIFY pos_Y191Changed)
    Q_PROPERTY(double r_191 READ pos_R191 WRITE setPos_R191 NOTIFY pos_R191Changed)
    Q_PROPERTY(double x_192 READ pos_X192 WRITE setPos_X192 NOTIFY pos_X192Changed)
    Q_PROPERTY(double y_192 READ pos_Y192 WRITE setPos_Y192 NOTIFY pos_Y192Changed)
    Q_PROPERTY(double r_192 READ pos_R192 WRITE setPos_R192 NOTIFY pos_R192Changed)
    Q_PROPERTY(double x_193 READ pos_X193 WRITE setPos_X193 NOTIFY pos_X193Changed)
    Q_PROPERTY(double y_193 READ pos_Y193 WRITE setPos_Y193 NOTIFY pos_Y193Changed)
    Q_PROPERTY(double r_193 READ pos_R193 WRITE setPos_R193 NOTIFY pos_R193Changed)
    Q_PROPERTY(double x_194 READ pos_X194 WRITE setPos_X194 NOTIFY pos_X194Changed)
    Q_PROPERTY(double y_194 READ pos_Y194 WRITE setPos_Y194 NOTIFY pos_Y194Changed)
    Q_PROPERTY(double r_194 READ pos_R194 WRITE setPos_R194 NOTIFY pos_R194Changed)
    Q_PROPERTY(double x_195 READ pos_X195 WRITE setPos_X195 NOTIFY pos_X195Changed)
    Q_PROPERTY(double y_195 READ pos_Y195 WRITE setPos_Y195 NOTIFY pos_Y195Changed)
    Q_PROPERTY(double r_195 READ pos_R195 WRITE setPos_R195 NOTIFY pos_R195Changed)
    Q_PROPERTY(double x_196 READ pos_X196 WRITE setPos_X196 NOTIFY pos_X196Changed)
    Q_PROPERTY(double y_196 READ pos_Y196 WRITE setPos_Y196 NOTIFY pos_Y196Changed)
    Q_PROPERTY(double r_196 READ pos_R196 WRITE setPos_R196 NOTIFY pos_R196Changed)
    Q_PROPERTY(double x_197 READ pos_X197 WRITE setPos_X197 NOTIFY pos_X197Changed)
    Q_PROPERTY(double y_197 READ pos_Y197 WRITE setPos_Y197 NOTIFY pos_Y197Changed)
    Q_PROPERTY(double r_197 READ pos_R197 WRITE setPos_R197 NOTIFY pos_R197Changed)
    Q_PROPERTY(double x_198 READ pos_X198 WRITE setPos_X198 NOTIFY pos_X198Changed)
    Q_PROPERTY(double y_198 READ pos_Y198 WRITE setPos_Y198 NOTIFY pos_Y198Changed)
    Q_PROPERTY(double r_198 READ pos_R198 WRITE setPos_R198 NOTIFY pos_R198Changed)
    Q_PROPERTY(double x_199 READ pos_X199 WRITE setPos_X199 NOTIFY pos_X199Changed)
    Q_PROPERTY(double y_199 READ pos_Y199 WRITE setPos_Y199 NOTIFY pos_Y199Changed)
    Q_PROPERTY(double r_199 READ pos_R199 WRITE setPos_R199 NOTIFY pos_R199Changed)
    Q_PROPERTY(double x_200 READ pos_X200 WRITE setPos_X200 NOTIFY pos_X200Changed)
    Q_PROPERTY(double y_200 READ pos_Y200 WRITE setPos_Y200 NOTIFY pos_Y200Changed)
    Q_PROPERTY(double r_200 READ pos_R200 WRITE setPos_R200 NOTIFY pos_R200Changed)
    Q_PROPERTY(double x_201 READ pos_X201 WRITE setPos_X201 NOTIFY pos_X201Changed)
    Q_PROPERTY(double y_201 READ pos_Y201 WRITE setPos_Y201 NOTIFY pos_Y201Changed)
    Q_PROPERTY(double r_201 READ pos_R201 WRITE setPos_R201 NOTIFY pos_R201Changed)
    Q_PROPERTY(double x_202 READ pos_X202 WRITE setPos_X202 NOTIFY pos_X202Changed)
    Q_PROPERTY(double y_202 READ pos_Y202 WRITE setPos_Y202 NOTIFY pos_Y202Changed)
    Q_PROPERTY(double r_202 READ pos_R202 WRITE setPos_R202 NOTIFY pos_R202Changed)
    Q_PROPERTY(double x_203 READ pos_X203 WRITE setPos_X203 NOTIFY pos_X203Changed)
    Q_PROPERTY(double y_203 READ pos_Y203 WRITE setPos_Y203 NOTIFY pos_Y203Changed)
    Q_PROPERTY(double r_203 READ pos_R203 WRITE setPos_R203 NOTIFY pos_R203Changed)
    Q_PROPERTY(double x_204 READ pos_X204 WRITE setPos_X204 NOTIFY pos_X204Changed)
    Q_PROPERTY(double y_204 READ pos_Y204 WRITE setPos_Y204 NOTIFY pos_Y204Changed)
    Q_PROPERTY(double r_204 READ pos_R204 WRITE setPos_R204 NOTIFY pos_R204Changed)
    Q_PROPERTY(double x_205 READ pos_X205 WRITE setPos_X205 NOTIFY pos_X205Changed)
    Q_PROPERTY(double y_205 READ pos_Y205 WRITE setPos_Y205 NOTIFY pos_Y205Changed)
    Q_PROPERTY(double r_205 READ pos_R205 WRITE setPos_R205 NOTIFY pos_R205Changed)
    Q_PROPERTY(double x_206 READ pos_X206 WRITE setPos_X206 NOTIFY pos_X206Changed)
    Q_PROPERTY(double y_206 READ pos_Y206 WRITE setPos_Y206 NOTIFY pos_Y206Changed)
    Q_PROPERTY(double r_206 READ pos_R206 WRITE setPos_R206 NOTIFY pos_R206Changed)
    Q_PROPERTY(double x_207 READ pos_X207 WRITE setPos_X207 NOTIFY pos_X207Changed)
    Q_PROPERTY(double y_207 READ pos_Y207 WRITE setPos_Y207 NOTIFY pos_Y207Changed)
    Q_PROPERTY(double r_207 READ pos_R207 WRITE setPos_R207 NOTIFY pos_R207Changed)
    Q_PROPERTY(double x_208 READ pos_X208 WRITE setPos_X208 NOTIFY pos_X208Changed)
    Q_PROPERTY(double y_208 READ pos_Y208 WRITE setPos_Y208 NOTIFY pos_Y208Changed)
    Q_PROPERTY(double r_208 READ pos_R208 WRITE setPos_R208 NOTIFY pos_R208Changed)
    Q_PROPERTY(double x_209 READ pos_X209 WRITE setPos_X209 NOTIFY pos_X209Changed)
    Q_PROPERTY(double y_209 READ pos_Y209 WRITE setPos_Y209 NOTIFY pos_Y209Changed)
    Q_PROPERTY(double r_209 READ pos_R209 WRITE setPos_R209 NOTIFY pos_R209Changed)
    Q_PROPERTY(double x_210 READ pos_X210 WRITE setPos_X210 NOTIFY pos_X210Changed)
    Q_PROPERTY(double y_210 READ pos_Y210 WRITE setPos_Y210 NOTIFY pos_Y210Changed)
    Q_PROPERTY(double r_210 READ pos_R210 WRITE setPos_R210 NOTIFY pos_R210Changed)
    Q_PROPERTY(double x_211 READ pos_X211 WRITE setPos_X211 NOTIFY pos_X211Changed)
    Q_PROPERTY(double y_211 READ pos_Y211 WRITE setPos_Y211 NOTIFY pos_Y211Changed)
    Q_PROPERTY(double r_211 READ pos_R211 WRITE setPos_R211 NOTIFY pos_R211Changed)
    Q_PROPERTY(double x_212 READ pos_X212 WRITE setPos_X212 NOTIFY pos_X212Changed)
    Q_PROPERTY(double y_212 READ pos_Y212 WRITE setPos_Y212 NOTIFY pos_Y212Changed)
    Q_PROPERTY(double r_212 READ pos_R212 WRITE setPos_R212 NOTIFY pos_R212Changed)
    Q_PROPERTY(double x_213 READ pos_X213 WRITE setPos_X213 NOTIFY pos_X213Changed)
    Q_PROPERTY(double y_213 READ pos_Y213 WRITE setPos_Y213 NOTIFY pos_Y213Changed)
    Q_PROPERTY(double r_213 READ pos_R213 WRITE setPos_R213 NOTIFY pos_R213Changed)
    Q_PROPERTY(double x_214 READ pos_X214 WRITE setPos_X214 NOTIFY pos_X214Changed)
    Q_PROPERTY(double y_214 READ pos_Y214 WRITE setPos_Y214 NOTIFY pos_Y214Changed)
    Q_PROPERTY(double r_214 READ pos_R214 WRITE setPos_R214 NOTIFY pos_R214Changed)
    Q_PROPERTY(double x_215 READ pos_X215 WRITE setPos_X215 NOTIFY pos_X215Changed)
    Q_PROPERTY(double y_215 READ pos_Y215 WRITE setPos_Y215 NOTIFY pos_Y215Changed)
    Q_PROPERTY(double r_215 READ pos_R215 WRITE setPos_R215 NOTIFY pos_R215Changed)
    Q_PROPERTY(double x_216 READ pos_X216 WRITE setPos_X216 NOTIFY pos_X216Changed)
    Q_PROPERTY(double y_216 READ pos_Y216 WRITE setPos_Y216 NOTIFY pos_Y216Changed)
    Q_PROPERTY(double r_216 READ pos_R216 WRITE setPos_R216 NOTIFY pos_R216Changed)
    Q_PROPERTY(double x_217 READ pos_X217 WRITE setPos_X217 NOTIFY pos_X217Changed)
    Q_PROPERTY(double y_217 READ pos_Y217 WRITE setPos_Y217 NOTIFY pos_Y217Changed)
    Q_PROPERTY(double r_217 READ pos_R217 WRITE setPos_R217 NOTIFY pos_R217Changed)
    Q_PROPERTY(double x_218 READ pos_X218 WRITE setPos_X218 NOTIFY pos_X218Changed)
    Q_PROPERTY(double y_218 READ pos_Y218 WRITE setPos_Y218 NOTIFY pos_Y218Changed)
    Q_PROPERTY(double r_218 READ pos_R218 WRITE setPos_R218 NOTIFY pos_R218Changed)
    Q_PROPERTY(double x_219 READ pos_X219 WRITE setPos_X219 NOTIFY pos_X219Changed)
    Q_PROPERTY(double y_219 READ pos_Y219 WRITE setPos_Y219 NOTIFY pos_Y219Changed)
    Q_PROPERTY(double r_219 READ pos_R219 WRITE setPos_R219 NOTIFY pos_R219Changed)
    Q_PROPERTY(double x_220 READ pos_X220 WRITE setPos_X220 NOTIFY pos_X220Changed)
    Q_PROPERTY(double y_220 READ pos_Y220 WRITE setPos_Y220 NOTIFY pos_Y220Changed)
    Q_PROPERTY(double r_220 READ pos_R220 WRITE setPos_R220 NOTIFY pos_R220Changed)
    Q_PROPERTY(double x_221 READ pos_X221 WRITE setPos_X221 NOTIFY pos_X221Changed)
    Q_PROPERTY(double y_221 READ pos_Y221 WRITE setPos_Y221 NOTIFY pos_Y221Changed)
    Q_PROPERTY(double r_221 READ pos_R221 WRITE setPos_R221 NOTIFY pos_R221Changed)
    Q_PROPERTY(double x_222 READ pos_X222 WRITE setPos_X222 NOTIFY pos_X222Changed)
    Q_PROPERTY(double y_222 READ pos_Y222 WRITE setPos_Y222 NOTIFY pos_Y222Changed)
    Q_PROPERTY(double r_222 READ pos_R222 WRITE setPos_R222 NOTIFY pos_R222Changed)
    Q_PROPERTY(double x_223 READ pos_X223 WRITE setPos_X223 NOTIFY pos_X223Changed)
    Q_PROPERTY(double y_223 READ pos_Y223 WRITE setPos_Y223 NOTIFY pos_Y223Changed)
    Q_PROPERTY(double r_223 READ pos_R223 WRITE setPos_R223 NOTIFY pos_R223Changed)
    Q_PROPERTY(double x_224 READ pos_X224 WRITE setPos_X224 NOTIFY pos_X224Changed)
    Q_PROPERTY(double y_224 READ pos_Y224 WRITE setPos_Y224 NOTIFY pos_Y224Changed)
    Q_PROPERTY(double r_224 READ pos_R224 WRITE setPos_R224 NOTIFY pos_R224Changed)
    Q_PROPERTY(double x_225 READ pos_X225 WRITE setPos_X225 NOTIFY pos_X225Changed)
    Q_PROPERTY(double y_225 READ pos_Y225 WRITE setPos_Y225 NOTIFY pos_Y225Changed)
    Q_PROPERTY(double r_225 READ pos_R225 WRITE setPos_R225 NOTIFY pos_R225Changed)
    Q_PROPERTY(double x_226 READ pos_X226 WRITE setPos_X226 NOTIFY pos_X226Changed)
    Q_PROPERTY(double y_226 READ pos_Y226 WRITE setPos_Y226 NOTIFY pos_Y226Changed)
    Q_PROPERTY(double r_226 READ pos_R226 WRITE setPos_R226 NOTIFY pos_R226Changed)
    Q_PROPERTY(double x_227 READ pos_X227 WRITE setPos_X227 NOTIFY pos_X227Changed)
    Q_PROPERTY(double y_227 READ pos_Y227 WRITE setPos_Y227 NOTIFY pos_Y227Changed)
    Q_PROPERTY(double r_227 READ pos_R227 WRITE setPos_R227 NOTIFY pos_R227Changed)
    Q_PROPERTY(double x_228 READ pos_X228 WRITE setPos_X228 NOTIFY pos_X228Changed)
    Q_PROPERTY(double y_228 READ pos_Y228 WRITE setPos_Y228 NOTIFY pos_Y228Changed)
    Q_PROPERTY(double r_228 READ pos_R228 WRITE setPos_R228 NOTIFY pos_R228Changed)
    Q_PROPERTY(double x_229 READ pos_X229 WRITE setPos_X229 NOTIFY pos_X229Changed)
    Q_PROPERTY(double y_229 READ pos_Y229 WRITE setPos_Y229 NOTIFY pos_Y229Changed)
    Q_PROPERTY(double r_229 READ pos_R229 WRITE setPos_R229 NOTIFY pos_R229Changed)
    Q_PROPERTY(double x_230 READ pos_X230 WRITE setPos_X230 NOTIFY pos_X230Changed)
    Q_PROPERTY(double y_230 READ pos_Y230 WRITE setPos_Y230 NOTIFY pos_Y230Changed)
    Q_PROPERTY(double r_230 READ pos_R230 WRITE setPos_R230 NOTIFY pos_R230Changed)
    Q_PROPERTY(double x_231 READ pos_X231 WRITE setPos_X231 NOTIFY pos_X231Changed)
    Q_PROPERTY(double y_231 READ pos_Y231 WRITE setPos_Y231 NOTIFY pos_Y231Changed)
    Q_PROPERTY(double r_231 READ pos_R231 WRITE setPos_R231 NOTIFY pos_R231Changed)
    Q_PROPERTY(double x_232 READ pos_X232 WRITE setPos_X232 NOTIFY pos_X232Changed)
    Q_PROPERTY(double y_232 READ pos_Y232 WRITE setPos_Y232 NOTIFY pos_Y232Changed)
    Q_PROPERTY(double r_232 READ pos_R232 WRITE setPos_R232 NOTIFY pos_R232Changed)
    Q_PROPERTY(double x_233 READ pos_X233 WRITE setPos_X233 NOTIFY pos_X233Changed)
    Q_PROPERTY(double y_233 READ pos_Y233 WRITE setPos_Y233 NOTIFY pos_Y233Changed)
    Q_PROPERTY(double r_233 READ pos_R233 WRITE setPos_R233 NOTIFY pos_R233Changed)
    Q_PROPERTY(double x_234 READ pos_X234 WRITE setPos_X234 NOTIFY pos_X234Changed)
    Q_PROPERTY(double y_234 READ pos_Y234 WRITE setPos_Y234 NOTIFY pos_Y234Changed)
    Q_PROPERTY(double r_234 READ pos_R234 WRITE setPos_R234 NOTIFY pos_R234Changed)
    Q_PROPERTY(double x_235 READ pos_X235 WRITE setPos_X235 NOTIFY pos_X235Changed)
    Q_PROPERTY(double y_235 READ pos_Y235 WRITE setPos_Y235 NOTIFY pos_Y235Changed)
    Q_PROPERTY(double r_235 READ pos_R235 WRITE setPos_R235 NOTIFY pos_R235Changed)
    Q_PROPERTY(double x_236 READ pos_X236 WRITE setPos_X236 NOTIFY pos_X236Changed)
    Q_PROPERTY(double y_236 READ pos_Y236 WRITE setPos_Y236 NOTIFY pos_Y236Changed)
    Q_PROPERTY(double r_236 READ pos_R236 WRITE setPos_R236 NOTIFY pos_R236Changed)
    Q_PROPERTY(double x_237 READ pos_X237 WRITE setPos_X237 NOTIFY pos_X237Changed)
    Q_PROPERTY(double y_237 READ pos_Y237 WRITE setPos_Y237 NOTIFY pos_Y237Changed)
    Q_PROPERTY(double r_237 READ pos_R237 WRITE setPos_R237 NOTIFY pos_R237Changed)
    Q_PROPERTY(double x_238 READ pos_X238 WRITE setPos_X238 NOTIFY pos_X238Changed)
    Q_PROPERTY(double y_238 READ pos_Y238 WRITE setPos_Y238 NOTIFY pos_Y238Changed)
    Q_PROPERTY(double r_238 READ pos_R238 WRITE setPos_R238 NOTIFY pos_R238Changed)
    Q_PROPERTY(double x_239 READ pos_X239 WRITE setPos_X239 NOTIFY pos_X239Changed)
    Q_PROPERTY(double y_239 READ pos_Y239 WRITE setPos_Y239 NOTIFY pos_Y239Changed)
    Q_PROPERTY(double r_239 READ pos_R239 WRITE setPos_R239 NOTIFY pos_R239Changed)
    Q_PROPERTY(double x_240 READ pos_X240 WRITE setPos_X240 NOTIFY pos_X240Changed)
    Q_PROPERTY(double y_240 READ pos_Y240 WRITE setPos_Y240 NOTIFY pos_Y240Changed)
    Q_PROPERTY(double r_240 READ pos_R240 WRITE setPos_R240 NOTIFY pos_R240Changed)
    Q_PROPERTY(double x_241 READ pos_X241 WRITE setPos_X241 NOTIFY pos_X241Changed)
    Q_PROPERTY(double y_241 READ pos_Y241 WRITE setPos_Y241 NOTIFY pos_Y241Changed)
    Q_PROPERTY(double r_241 READ pos_R241 WRITE setPos_R241 NOTIFY pos_R241Changed)
    Q_PROPERTY(double x_242 READ pos_X242 WRITE setPos_X242 NOTIFY pos_X242Changed)
    Q_PROPERTY(double y_242 READ pos_Y242 WRITE setPos_Y242 NOTIFY pos_Y242Changed)
    Q_PROPERTY(double r_242 READ pos_R242 WRITE setPos_R242 NOTIFY pos_R242Changed)
    Q_PROPERTY(double x_243 READ pos_X243 WRITE setPos_X243 NOTIFY pos_X243Changed)
    Q_PROPERTY(double y_243 READ pos_Y243 WRITE setPos_Y243 NOTIFY pos_Y243Changed)
    Q_PROPERTY(double r_243 READ pos_R243 WRITE setPos_R243 NOTIFY pos_R243Changed)
    Q_PROPERTY(double x_244 READ pos_X244 WRITE setPos_X244 NOTIFY pos_X244Changed)
    Q_PROPERTY(double y_244 READ pos_Y244 WRITE setPos_Y244 NOTIFY pos_Y244Changed)
    Q_PROPERTY(double r_244 READ pos_R244 WRITE setPos_R244 NOTIFY pos_R244Changed)
    Q_PROPERTY(double x_245 READ pos_X245 WRITE setPos_X245 NOTIFY pos_X245Changed)
    Q_PROPERTY(double y_245 READ pos_Y245 WRITE setPos_Y245 NOTIFY pos_Y245Changed)
    Q_PROPERTY(double r_245 READ pos_R245 WRITE setPos_R245 NOTIFY pos_R245Changed)
    Q_PROPERTY(double x_246 READ pos_X246 WRITE setPos_X246 NOTIFY pos_X246Changed)
    Q_PROPERTY(double y_246 READ pos_Y246 WRITE setPos_Y246 NOTIFY pos_Y246Changed)
    Q_PROPERTY(double r_246 READ pos_R246 WRITE setPos_R246 NOTIFY pos_R246Changed)
    Q_PROPERTY(double x_247 READ pos_X247 WRITE setPos_X247 NOTIFY pos_X247Changed)
    Q_PROPERTY(double y_247 READ pos_Y247 WRITE setPos_Y247 NOTIFY pos_Y247Changed)
    Q_PROPERTY(double r_247 READ pos_R247 WRITE setPos_R247 NOTIFY pos_R247Changed)
    Q_PROPERTY(double x_248 READ pos_X248 WRITE setPos_X248 NOTIFY pos_X248Changed)
    Q_PROPERTY(double y_248 READ pos_Y248 WRITE setPos_Y248 NOTIFY pos_Y248Changed)
    Q_PROPERTY(double r_248 READ pos_R248 WRITE setPos_R248 NOTIFY pos_R248Changed)
    Q_PROPERTY(double x_249 READ pos_X249 WRITE setPos_X249 NOTIFY pos_X249Changed)
    Q_PROPERTY(double y_249 READ pos_Y249 WRITE setPos_Y249 NOTIFY pos_Y249Changed)
    Q_PROPERTY(double r_249 READ pos_R249 WRITE setPos_R249 NOTIFY pos_R249Changed)
    Q_PROPERTY(double x_250 READ pos_X250 WRITE setPos_X250 NOTIFY pos_X250Changed)
    Q_PROPERTY(double y_250 READ pos_Y250 WRITE setPos_Y250 NOTIFY pos_Y250Changed)
    Q_PROPERTY(double r_250 READ pos_R250 WRITE setPos_R250 NOTIFY pos_R250Changed)
    Q_PROPERTY(double x_251 READ pos_X251 WRITE setPos_X251 NOTIFY pos_X251Changed)
    Q_PROPERTY(double y_251 READ pos_Y251 WRITE setPos_Y251 NOTIFY pos_Y251Changed)
    Q_PROPERTY(double r_251 READ pos_R251 WRITE setPos_R251 NOTIFY pos_R251Changed)
    Q_PROPERTY(double x_252 READ pos_X252 WRITE setPos_X252 NOTIFY pos_X252Changed)
    Q_PROPERTY(double y_252 READ pos_Y252 WRITE setPos_Y252 NOTIFY pos_Y252Changed)
    Q_PROPERTY(double r_252 READ pos_R252 WRITE setPos_R252 NOTIFY pos_R252Changed)
    Q_PROPERTY(double x_253 READ pos_X253 WRITE setPos_X253 NOTIFY pos_X253Changed)
    Q_PROPERTY(double y_253 READ pos_Y253 WRITE setPos_Y253 NOTIFY pos_Y253Changed)
    Q_PROPERTY(double r_253 READ pos_R253 WRITE setPos_R253 NOTIFY pos_R253Changed)
    Q_PROPERTY(double x_254 READ pos_X254 WRITE setPos_X254 NOTIFY pos_X254Changed)
    Q_PROPERTY(double y_254 READ pos_Y254 WRITE setPos_Y254 NOTIFY pos_Y254Changed)
    Q_PROPERTY(double r_254 READ pos_R254 WRITE setPos_R254 NOTIFY pos_R254Changed)
    Q_PROPERTY(double x_255 READ pos_X255 WRITE setPos_X255 NOTIFY pos_X255Changed)
    Q_PROPERTY(double y_255 READ pos_Y255 WRITE setPos_Y255 NOTIFY pos_Y255Changed)
    Q_PROPERTY(double r_255 READ pos_R255 WRITE setPos_R255 NOTIFY pos_R255Changed)
    Q_PROPERTY(double x_256 READ pos_X256 WRITE setPos_X256 NOTIFY pos_X256Changed)
    Q_PROPERTY(double y_256 READ pos_Y256 WRITE setPos_Y256 NOTIFY pos_Y256Changed)
    Q_PROPERTY(double r_256 READ pos_R256 WRITE setPos_R256 NOTIFY pos_R256Changed)
    Q_PROPERTY(double x_257 READ pos_X257 WRITE setPos_X257 NOTIFY pos_X257Changed)
    Q_PROPERTY(double y_257 READ pos_Y257 WRITE setPos_Y257 NOTIFY pos_Y257Changed)
    Q_PROPERTY(double r_257 READ pos_R257 WRITE setPos_R257 NOTIFY pos_R257Changed)
    Q_PROPERTY(double x_258 READ pos_X258 WRITE setPos_X258 NOTIFY pos_X258Changed)
    Q_PROPERTY(double y_258 READ pos_Y258 WRITE setPos_Y258 NOTIFY pos_Y258Changed)
    Q_PROPERTY(double r_258 READ pos_R258 WRITE setPos_R258 NOTIFY pos_R258Changed)
    Q_PROPERTY(double x_259 READ pos_X259 WRITE setPos_X259 NOTIFY pos_X259Changed)
    Q_PROPERTY(double y_259 READ pos_Y259 WRITE setPos_Y259 NOTIFY pos_Y259Changed)
    Q_PROPERTY(double r_259 READ pos_R259 WRITE setPos_R259 NOTIFY pos_R259Changed)
    Q_PROPERTY(double x_260 READ pos_X260 WRITE setPos_X260 NOTIFY pos_X260Changed)
    Q_PROPERTY(double y_260 READ pos_Y260 WRITE setPos_Y260 NOTIFY pos_Y260Changed)
    Q_PROPERTY(double r_260 READ pos_R260 WRITE setPos_R260 NOTIFY pos_R260Changed)
    Q_PROPERTY(double x_261 READ pos_X261 WRITE setPos_X261 NOTIFY pos_X261Changed)
    Q_PROPERTY(double y_261 READ pos_Y261 WRITE setPos_Y261 NOTIFY pos_Y261Changed)
    Q_PROPERTY(double r_261 READ pos_R261 WRITE setPos_R261 NOTIFY pos_R261Changed)
    Q_PROPERTY(double x_262 READ pos_X262 WRITE setPos_X262 NOTIFY pos_X262Changed)
    Q_PROPERTY(double y_262 READ pos_Y262 WRITE setPos_Y262 NOTIFY pos_Y262Changed)
    Q_PROPERTY(double r_262 READ pos_R262 WRITE setPos_R262 NOTIFY pos_R262Changed)
    Q_PROPERTY(double x_263 READ pos_X263 WRITE setPos_X263 NOTIFY pos_X263Changed)
    Q_PROPERTY(double y_263 READ pos_Y263 WRITE setPos_Y263 NOTIFY pos_Y263Changed)
    Q_PROPERTY(double r_263 READ pos_R263 WRITE setPos_R263 NOTIFY pos_R263Changed)
    Q_PROPERTY(double x_264 READ pos_X264 WRITE setPos_X264 NOTIFY pos_X264Changed)
    Q_PROPERTY(double y_264 READ pos_Y264 WRITE setPos_Y264 NOTIFY pos_Y264Changed)
    Q_PROPERTY(double r_264 READ pos_R264 WRITE setPos_R264 NOTIFY pos_R264Changed)
    Q_PROPERTY(double x_265 READ pos_X265 WRITE setPos_X265 NOTIFY pos_X265Changed)
    Q_PROPERTY(double y_265 READ pos_Y265 WRITE setPos_Y265 NOTIFY pos_Y265Changed)
    Q_PROPERTY(double r_265 READ pos_R265 WRITE setPos_R265 NOTIFY pos_R265Changed)
    Q_PROPERTY(double x_266 READ pos_X266 WRITE setPos_X266 NOTIFY pos_X266Changed)
    Q_PROPERTY(double y_266 READ pos_Y266 WRITE setPos_Y266 NOTIFY pos_Y266Changed)
    Q_PROPERTY(double r_266 READ pos_R266 WRITE setPos_R266 NOTIFY pos_R266Changed)
    Q_PROPERTY(double x_267 READ pos_X267 WRITE setPos_X267 NOTIFY pos_X267Changed)
    Q_PROPERTY(double y_267 READ pos_Y267 WRITE setPos_Y267 NOTIFY pos_Y267Changed)
    Q_PROPERTY(double r_267 READ pos_R267 WRITE setPos_R267 NOTIFY pos_R267Changed)
    Q_PROPERTY(double x_268 READ pos_X268 WRITE setPos_X268 NOTIFY pos_X268Changed)
    Q_PROPERTY(double y_268 READ pos_Y268 WRITE setPos_Y268 NOTIFY pos_Y268Changed)
    Q_PROPERTY(double r_268 READ pos_R268 WRITE setPos_R268 NOTIFY pos_R268Changed)
    Q_PROPERTY(double x_269 READ pos_X269 WRITE setPos_X269 NOTIFY pos_X269Changed)
    Q_PROPERTY(double y_269 READ pos_Y269 WRITE setPos_Y269 NOTIFY pos_Y269Changed)
    Q_PROPERTY(double r_269 READ pos_R269 WRITE setPos_R269 NOTIFY pos_R269Changed)
    Q_PROPERTY(double x_270 READ pos_X270 WRITE setPos_X270 NOTIFY pos_X270Changed)
    Q_PROPERTY(double y_270 READ pos_Y270 WRITE setPos_Y270 NOTIFY pos_Y270Changed)
    Q_PROPERTY(double r_270 READ pos_R270 WRITE setPos_R270 NOTIFY pos_R270Changed)
    Q_PROPERTY(double x_271 READ pos_X271 WRITE setPos_X271 NOTIFY pos_X271Changed)
    Q_PROPERTY(double y_271 READ pos_Y271 WRITE setPos_Y271 NOTIFY pos_Y271Changed)
    Q_PROPERTY(double r_271 READ pos_R271 WRITE setPos_R271 NOTIFY pos_R271Changed)
    Q_PROPERTY(double x_272 READ pos_X272 WRITE setPos_X272 NOTIFY pos_X272Changed)
    Q_PROPERTY(double y_272 READ pos_Y272 WRITE setPos_Y272 NOTIFY pos_Y272Changed)
    Q_PROPERTY(double r_272 READ pos_R272 WRITE setPos_R272 NOTIFY pos_R272Changed)
    Q_PROPERTY(double x_273 READ pos_X273 WRITE setPos_X273 NOTIFY pos_X273Changed)
    Q_PROPERTY(double y_273 READ pos_Y273 WRITE setPos_Y273 NOTIFY pos_Y273Changed)
    Q_PROPERTY(double r_273 READ pos_R273 WRITE setPos_R273 NOTIFY pos_R273Changed)
    Q_PROPERTY(double x_274 READ pos_X274 WRITE setPos_X274 NOTIFY pos_X274Changed)
    Q_PROPERTY(double y_274 READ pos_Y274 WRITE setPos_Y274 NOTIFY pos_Y274Changed)
    Q_PROPERTY(double r_274 READ pos_R274 WRITE setPos_R274 NOTIFY pos_R274Changed)
    Q_PROPERTY(double x_275 READ pos_X275 WRITE setPos_X275 NOTIFY pos_X275Changed)
    Q_PROPERTY(double y_275 READ pos_Y275 WRITE setPos_Y275 NOTIFY pos_Y275Changed)
    Q_PROPERTY(double r_275 READ pos_R275 WRITE setPos_R275 NOTIFY pos_R275Changed)
    Q_PROPERTY(double x_276 READ pos_X276 WRITE setPos_X276 NOTIFY pos_X276Changed)
    Q_PROPERTY(double y_276 READ pos_Y276 WRITE setPos_Y276 NOTIFY pos_Y276Changed)
    Q_PROPERTY(double r_276 READ pos_R276 WRITE setPos_R276 NOTIFY pos_R276Changed)
    Q_PROPERTY(double x_277 READ pos_X277 WRITE setPos_X277 NOTIFY pos_X277Changed)
    Q_PROPERTY(double y_277 READ pos_Y277 WRITE setPos_Y277 NOTIFY pos_Y277Changed)
    Q_PROPERTY(double r_277 READ pos_R277 WRITE setPos_R277 NOTIFY pos_R277Changed)
    Q_PROPERTY(double x_278 READ pos_X278 WRITE setPos_X278 NOTIFY pos_X278Changed)
    Q_PROPERTY(double y_278 READ pos_Y278 WRITE setPos_Y278 NOTIFY pos_Y278Changed)
    Q_PROPERTY(double r_278 READ pos_R278 WRITE setPos_R278 NOTIFY pos_R278Changed)
    Q_PROPERTY(double x_279 READ pos_X279 WRITE setPos_X279 NOTIFY pos_X279Changed)
    Q_PROPERTY(double y_279 READ pos_Y279 WRITE setPos_Y279 NOTIFY pos_Y279Changed)
    Q_PROPERTY(double r_279 READ pos_R279 WRITE setPos_R279 NOTIFY pos_R279Changed)
    Q_PROPERTY(double x_280 READ pos_X280 WRITE setPos_X280 NOTIFY pos_X280Changed)
    Q_PROPERTY(double y_280 READ pos_Y280 WRITE setPos_Y280 NOTIFY pos_Y280Changed)
    Q_PROPERTY(double r_280 READ pos_R280 WRITE setPos_R280 NOTIFY pos_R280Changed)
    Q_PROPERTY(double x_281 READ pos_X281 WRITE setPos_X281 NOTIFY pos_X281Changed)
    Q_PROPERTY(double y_281 READ pos_Y281 WRITE setPos_Y281 NOTIFY pos_Y281Changed)
    Q_PROPERTY(double r_281 READ pos_R281 WRITE setPos_R281 NOTIFY pos_R281Changed)
    Q_PROPERTY(double x_282 READ pos_X282 WRITE setPos_X282 NOTIFY pos_X282Changed)
    Q_PROPERTY(double y_282 READ pos_Y282 WRITE setPos_Y282 NOTIFY pos_Y282Changed)
    Q_PROPERTY(double r_282 READ pos_R282 WRITE setPos_R282 NOTIFY pos_R282Changed)
    Q_PROPERTY(double x_283 READ pos_X283 WRITE setPos_X283 NOTIFY pos_X283Changed)
    Q_PROPERTY(double y_283 READ pos_Y283 WRITE setPos_Y283 NOTIFY pos_Y283Changed)
    Q_PROPERTY(double r_283 READ pos_R283 WRITE setPos_R283 NOTIFY pos_R283Changed)
    Q_PROPERTY(double x_284 READ pos_X284 WRITE setPos_X284 NOTIFY pos_X284Changed)
    Q_PROPERTY(double y_284 READ pos_Y284 WRITE setPos_Y284 NOTIFY pos_Y284Changed)
    Q_PROPERTY(double r_284 READ pos_R284 WRITE setPos_R284 NOTIFY pos_R284Changed)
    Q_PROPERTY(double x_285 READ pos_X285 WRITE setPos_X285 NOTIFY pos_X285Changed)
    Q_PROPERTY(double y_285 READ pos_Y285 WRITE setPos_Y285 NOTIFY pos_Y285Changed)
    Q_PROPERTY(double r_285 READ pos_R285 WRITE setPos_R285 NOTIFY pos_R285Changed)
    Q_PROPERTY(double x_286 READ pos_X286 WRITE setPos_X286 NOTIFY pos_X286Changed)
    Q_PROPERTY(double y_286 READ pos_Y286 WRITE setPos_Y286 NOTIFY pos_Y286Changed)
    Q_PROPERTY(double r_286 READ pos_R286 WRITE setPos_R286 NOTIFY pos_R286Changed)
    Q_PROPERTY(double x_287 READ pos_X287 WRITE setPos_X287 NOTIFY pos_X287Changed)
    Q_PROPERTY(double y_287 READ pos_Y287 WRITE setPos_Y287 NOTIFY pos_Y287Changed)
    Q_PROPERTY(double r_287 READ pos_R287 WRITE setPos_R287 NOTIFY pos_R287Changed)
    Q_PROPERTY(double x_288 READ pos_X288 WRITE setPos_X288 NOTIFY pos_X288Changed)
    Q_PROPERTY(double y_288 READ pos_Y288 WRITE setPos_Y288 NOTIFY pos_Y288Changed)
    Q_PROPERTY(double r_288 READ pos_R288 WRITE setPos_R288 NOTIFY pos_R288Changed)
    Q_PROPERTY(double x_289 READ pos_X289 WRITE setPos_X289 NOTIFY pos_X289Changed)
    Q_PROPERTY(double y_289 READ pos_Y289 WRITE setPos_Y289 NOTIFY pos_Y289Changed)
    Q_PROPERTY(double r_289 READ pos_R289 WRITE setPos_R289 NOTIFY pos_R289Changed)
    Q_PROPERTY(double x_290 READ pos_X290 WRITE setPos_X290 NOTIFY pos_X290Changed)
    Q_PROPERTY(double y_290 READ pos_Y290 WRITE setPos_Y290 NOTIFY pos_Y290Changed)
    Q_PROPERTY(double r_290 READ pos_R290 WRITE setPos_R290 NOTIFY pos_R290Changed)
    Q_PROPERTY(double x_291 READ pos_X291 WRITE setPos_X291 NOTIFY pos_X291Changed)
    Q_PROPERTY(double y_291 READ pos_Y291 WRITE setPos_Y291 NOTIFY pos_Y291Changed)
    Q_PROPERTY(double r_291 READ pos_R291 WRITE setPos_R291 NOTIFY pos_R291Changed)
    Q_PROPERTY(double x_292 READ pos_X292 WRITE setPos_X292 NOTIFY pos_X292Changed)
    Q_PROPERTY(double y_292 READ pos_Y292 WRITE setPos_Y292 NOTIFY pos_Y292Changed)
    Q_PROPERTY(double r_292 READ pos_R292 WRITE setPos_R292 NOTIFY pos_R292Changed)
    Q_PROPERTY(double x_293 READ pos_X293 WRITE setPos_X293 NOTIFY pos_X293Changed)
    Q_PROPERTY(double y_293 READ pos_Y293 WRITE setPos_Y293 NOTIFY pos_Y293Changed)
    Q_PROPERTY(double r_293 READ pos_R293 WRITE setPos_R293 NOTIFY pos_R293Changed)
    Q_PROPERTY(double x_294 READ pos_X294 WRITE setPos_X294 NOTIFY pos_X294Changed)
    Q_PROPERTY(double y_294 READ pos_Y294 WRITE setPos_Y294 NOTIFY pos_Y294Changed)
    Q_PROPERTY(double r_294 READ pos_R294 WRITE setPos_R294 NOTIFY pos_R294Changed)
    Q_PROPERTY(double x_295 READ pos_X295 WRITE setPos_X295 NOTIFY pos_X295Changed)
    Q_PROPERTY(double y_295 READ pos_Y295 WRITE setPos_Y295 NOTIFY pos_Y295Changed)
    Q_PROPERTY(double r_295 READ pos_R295 WRITE setPos_R295 NOTIFY pos_R295Changed)
    Q_PROPERTY(double x_296 READ pos_X296 WRITE setPos_X296 NOTIFY pos_X296Changed)
    Q_PROPERTY(double y_296 READ pos_Y296 WRITE setPos_Y296 NOTIFY pos_Y296Changed)
    Q_PROPERTY(double r_296 READ pos_R296 WRITE setPos_R296 NOTIFY pos_R296Changed)
    Q_PROPERTY(double x_297 READ pos_X297 WRITE setPos_X297 NOTIFY pos_X297Changed)
    Q_PROPERTY(double y_297 READ pos_Y297 WRITE setPos_Y297 NOTIFY pos_Y297Changed)
    Q_PROPERTY(double r_297 READ pos_R297 WRITE setPos_R297 NOTIFY pos_R297Changed)
    Q_PROPERTY(double x_298 READ pos_X298 WRITE setPos_X298 NOTIFY pos_X298Changed)
    Q_PROPERTY(double y_298 READ pos_Y298 WRITE setPos_Y298 NOTIFY pos_Y298Changed)
    Q_PROPERTY(double r_298 READ pos_R298 WRITE setPos_R298 NOTIFY pos_R298Changed)
    Q_PROPERTY(double x_299 READ pos_X299 WRITE setPos_X299 NOTIFY pos_X299Changed)
    Q_PROPERTY(double y_299 READ pos_Y299 WRITE setPos_Y299 NOTIFY pos_Y299Changed)
    Q_PROPERTY(double r_299 READ pos_R299 WRITE setPos_R299 NOTIFY pos_R299Changed)
    Q_PROPERTY(double x_300 READ pos_X300 WRITE setPos_X300 NOTIFY pos_X300Changed)
    Q_PROPERTY(double y_300 READ pos_Y300 WRITE setPos_Y300 NOTIFY pos_Y300Changed)
    Q_PROPERTY(double r_300 READ pos_R300 WRITE setPos_R300 NOTIFY pos_R300Changed)
    Q_PROPERTY(double x_301 READ pos_X301 WRITE setPos_X301 NOTIFY pos_X301Changed)
    Q_PROPERTY(double y_301 READ pos_Y301 WRITE setPos_Y301 NOTIFY pos_Y301Changed)
    Q_PROPERTY(double r_301 READ pos_R301 WRITE setPos_R301 NOTIFY pos_R301Changed)
    Q_PROPERTY(double x_302 READ pos_X302 WRITE setPos_X302 NOTIFY pos_X302Changed)
    Q_PROPERTY(double y_302 READ pos_Y302 WRITE setPos_Y302 NOTIFY pos_Y302Changed)
    Q_PROPERTY(double r_302 READ pos_R302 WRITE setPos_R302 NOTIFY pos_R302Changed)
    Q_PROPERTY(double x_303 READ pos_X303 WRITE setPos_X303 NOTIFY pos_X303Changed)
    Q_PROPERTY(double y_303 READ pos_Y303 WRITE setPos_Y303 NOTIFY pos_Y303Changed)
    Q_PROPERTY(double r_303 READ pos_R303 WRITE setPos_R303 NOTIFY pos_R303Changed)
    Q_PROPERTY(double x_304 READ pos_X304 WRITE setPos_X304 NOTIFY pos_X304Changed)
    Q_PROPERTY(double y_304 READ pos_Y304 WRITE setPos_Y304 NOTIFY pos_Y304Changed)
    Q_PROPERTY(double r_304 READ pos_R304 WRITE setPos_R304 NOTIFY pos_R304Changed)
    Q_PROPERTY(double x_305 READ pos_X305 WRITE setPos_X305 NOTIFY pos_X305Changed)
    Q_PROPERTY(double y_305 READ pos_Y305 WRITE setPos_Y305 NOTIFY pos_Y305Changed)
    Q_PROPERTY(double r_305 READ pos_R305 WRITE setPos_R305 NOTIFY pos_R305Changed)
    Q_PROPERTY(double x_306 READ pos_X306 WRITE setPos_X306 NOTIFY pos_X306Changed)
    Q_PROPERTY(double y_306 READ pos_Y306 WRITE setPos_Y306 NOTIFY pos_Y306Changed)
    Q_PROPERTY(double r_306 READ pos_R306 WRITE setPos_R306 NOTIFY pos_R306Changed)
    Q_PROPERTY(double x_307 READ pos_X307 WRITE setPos_X307 NOTIFY pos_X307Changed)
    Q_PROPERTY(double y_307 READ pos_Y307 WRITE setPos_Y307 NOTIFY pos_Y307Changed)
    Q_PROPERTY(double r_307 READ pos_R307 WRITE setPos_R307 NOTIFY pos_R307Changed)
    Q_PROPERTY(double x_308 READ pos_X308 WRITE setPos_X308 NOTIFY pos_X308Changed)
    Q_PROPERTY(double y_308 READ pos_Y308 WRITE setPos_Y308 NOTIFY pos_Y308Changed)
    Q_PROPERTY(double r_308 READ pos_R308 WRITE setPos_R308 NOTIFY pos_R308Changed)
    Q_PROPERTY(double x_309 READ pos_X309 WRITE setPos_X309 NOTIFY pos_X309Changed)
    Q_PROPERTY(double y_309 READ pos_Y309 WRITE setPos_Y309 NOTIFY pos_Y309Changed)
    Q_PROPERTY(double r_309 READ pos_R309 WRITE setPos_R309 NOTIFY pos_R309Changed)
    Q_PROPERTY(double x_310 READ pos_X310 WRITE setPos_X310 NOTIFY pos_X310Changed)
    Q_PROPERTY(double y_310 READ pos_Y310 WRITE setPos_Y310 NOTIFY pos_Y310Changed)
    Q_PROPERTY(double r_310 READ pos_R310 WRITE setPos_R310 NOTIFY pos_R310Changed)
    Q_PROPERTY(double x_311 READ pos_X311 WRITE setPos_X311 NOTIFY pos_X311Changed)
    Q_PROPERTY(double y_311 READ pos_Y311 WRITE setPos_Y311 NOTIFY pos_Y311Changed)
    Q_PROPERTY(double r_311 READ pos_R311 WRITE setPos_R311 NOTIFY pos_R311Changed)
    Q_PROPERTY(double x_312 READ pos_X312 WRITE setPos_X312 NOTIFY pos_X312Changed)
    Q_PROPERTY(double y_312 READ pos_Y312 WRITE setPos_Y312 NOTIFY pos_Y312Changed)
    Q_PROPERTY(double r_312 READ pos_R312 WRITE setPos_R312 NOTIFY pos_R312Changed)
    Q_PROPERTY(double x_313 READ pos_X313 WRITE setPos_X313 NOTIFY pos_X313Changed)
    Q_PROPERTY(double y_313 READ pos_Y313 WRITE setPos_Y313 NOTIFY pos_Y313Changed)
    Q_PROPERTY(double r_313 READ pos_R313 WRITE setPos_R313 NOTIFY pos_R313Changed)
    Q_PROPERTY(double x_314 READ pos_X314 WRITE setPos_X314 NOTIFY pos_X314Changed)
    Q_PROPERTY(double y_314 READ pos_Y314 WRITE setPos_Y314 NOTIFY pos_Y314Changed)
    Q_PROPERTY(double r_314 READ pos_R314 WRITE setPos_R314 NOTIFY pos_R314Changed)
    Q_PROPERTY(double x_315 READ pos_X315 WRITE setPos_X315 NOTIFY pos_X315Changed)
    Q_PROPERTY(double y_315 READ pos_Y315 WRITE setPos_Y315 NOTIFY pos_Y315Changed)
    Q_PROPERTY(double r_315 READ pos_R315 WRITE setPos_R315 NOTIFY pos_R315Changed)
    Q_PROPERTY(double x_316 READ pos_X316 WRITE setPos_X316 NOTIFY pos_X316Changed)
    Q_PROPERTY(double y_316 READ pos_Y316 WRITE setPos_Y316 NOTIFY pos_Y316Changed)
    Q_PROPERTY(double r_316 READ pos_R316 WRITE setPos_R316 NOTIFY pos_R316Changed)
    Q_PROPERTY(double x_317 READ pos_X317 WRITE setPos_X317 NOTIFY pos_X317Changed)
    Q_PROPERTY(double y_317 READ pos_Y317 WRITE setPos_Y317 NOTIFY pos_Y317Changed)
    Q_PROPERTY(double r_317 READ pos_R317 WRITE setPos_R317 NOTIFY pos_R317Changed)
    Q_PROPERTY(double x_318 READ pos_X318 WRITE setPos_X318 NOTIFY pos_X318Changed)
    Q_PROPERTY(double y_318 READ pos_Y318 WRITE setPos_Y318 NOTIFY pos_Y318Changed)
    Q_PROPERTY(double r_318 READ pos_R318 WRITE setPos_R318 NOTIFY pos_R318Changed)
    Q_PROPERTY(double x_319 READ pos_X319 WRITE setPos_X319 NOTIFY pos_X319Changed)
    Q_PROPERTY(double y_319 READ pos_Y319 WRITE setPos_Y319 NOTIFY pos_Y319Changed)
    Q_PROPERTY(double r_319 READ pos_R319 WRITE setPos_R319 NOTIFY pos_R319Changed)
    Q_PROPERTY(double x_320 READ pos_X320 WRITE setPos_X320 NOTIFY pos_X320Changed)
    Q_PROPERTY(double y_320 READ pos_Y320 WRITE setPos_Y320 NOTIFY pos_Y320Changed)
    Q_PROPERTY(double r_320 READ pos_R320 WRITE setPos_R320 NOTIFY pos_R320Changed)
    Q_PROPERTY(double x_321 READ pos_X321 WRITE setPos_X321 NOTIFY pos_X321Changed)
    Q_PROPERTY(double y_321 READ pos_Y321 WRITE setPos_Y321 NOTIFY pos_Y321Changed)
    Q_PROPERTY(double r_321 READ pos_R321 WRITE setPos_R321 NOTIFY pos_R321Changed)
    Q_PROPERTY(double x_322 READ pos_X322 WRITE setPos_X322 NOTIFY pos_X322Changed)
    Q_PROPERTY(double y_322 READ pos_Y322 WRITE setPos_Y322 NOTIFY pos_Y322Changed)
    Q_PROPERTY(double r_322 READ pos_R322 WRITE setPos_R322 NOTIFY pos_R322Changed)
    Q_PROPERTY(double x_323 READ pos_X323 WRITE setPos_X323 NOTIFY pos_X323Changed)
    Q_PROPERTY(double y_323 READ pos_Y323 WRITE setPos_Y323 NOTIFY pos_Y323Changed)
    Q_PROPERTY(double r_323 READ pos_R323 WRITE setPos_R323 NOTIFY pos_R323Changed)
    Q_PROPERTY(double x_324 READ pos_X324 WRITE setPos_X324 NOTIFY pos_X324Changed)
    Q_PROPERTY(double y_324 READ pos_Y324 WRITE setPos_Y324 NOTIFY pos_Y324Changed)
    Q_PROPERTY(double r_324 READ pos_R324 WRITE setPos_R324 NOTIFY pos_R324Changed)
    Q_PROPERTY(double x_325 READ pos_X325 WRITE setPos_X325 NOTIFY pos_X325Changed)
    Q_PROPERTY(double y_325 READ pos_Y325 WRITE setPos_Y325 NOTIFY pos_Y325Changed)
    Q_PROPERTY(double r_325 READ pos_R325 WRITE setPos_R325 NOTIFY pos_R325Changed)
    Q_PROPERTY(double x_326 READ pos_X326 WRITE setPos_X326 NOTIFY pos_X326Changed)
    Q_PROPERTY(double y_326 READ pos_Y326 WRITE setPos_Y326 NOTIFY pos_Y326Changed)
    Q_PROPERTY(double r_326 READ pos_R326 WRITE setPos_R326 NOTIFY pos_R326Changed)
    Q_PROPERTY(double x_327 READ pos_X327 WRITE setPos_X327 NOTIFY pos_X327Changed)
    Q_PROPERTY(double y_327 READ pos_Y327 WRITE setPos_Y327 NOTIFY pos_Y327Changed)
    Q_PROPERTY(double r_327 READ pos_R327 WRITE setPos_R327 NOTIFY pos_R327Changed)
    Q_PROPERTY(double x_328 READ pos_X328 WRITE setPos_X328 NOTIFY pos_X328Changed)
    Q_PROPERTY(double y_328 READ pos_Y328 WRITE setPos_Y328 NOTIFY pos_Y328Changed)
    Q_PROPERTY(double r_328 READ pos_R328 WRITE setPos_R328 NOTIFY pos_R328Changed)
    Q_PROPERTY(double x_329 READ pos_X329 WRITE setPos_X329 NOTIFY pos_X329Changed)
    Q_PROPERTY(double y_329 READ pos_Y329 WRITE setPos_Y329 NOTIFY pos_Y329Changed)
    Q_PROPERTY(double r_329 READ pos_R329 WRITE setPos_R329 NOTIFY pos_R329Changed)
    Q_PROPERTY(double x_330 READ pos_X330 WRITE setPos_X330 NOTIFY pos_X330Changed)
    Q_PROPERTY(double y_330 READ pos_Y330 WRITE setPos_Y330 NOTIFY pos_Y330Changed)
    Q_PROPERTY(double r_330 READ pos_R330 WRITE setPos_R330 NOTIFY pos_R330Changed)
    Q_PROPERTY(double x_331 READ pos_X331 WRITE setPos_X331 NOTIFY pos_X331Changed)
    Q_PROPERTY(double y_331 READ pos_Y331 WRITE setPos_Y331 NOTIFY pos_Y331Changed)
    Q_PROPERTY(double r_331 READ pos_R331 WRITE setPos_R331 NOTIFY pos_R331Changed)
    Q_PROPERTY(double x_332 READ pos_X332 WRITE setPos_X332 NOTIFY pos_X332Changed)
    Q_PROPERTY(double y_332 READ pos_Y332 WRITE setPos_Y332 NOTIFY pos_Y332Changed)
    Q_PROPERTY(double r_332 READ pos_R332 WRITE setPos_R332 NOTIFY pos_R332Changed)
    Q_PROPERTY(double x_333 READ pos_X333 WRITE setPos_X333 NOTIFY pos_X333Changed)
    Q_PROPERTY(double y_333 READ pos_Y333 WRITE setPos_Y333 NOTIFY pos_Y333Changed)
    Q_PROPERTY(double r_333 READ pos_R333 WRITE setPos_R333 NOTIFY pos_R333Changed)
    Q_PROPERTY(double x_334 READ pos_X334 WRITE setPos_X334 NOTIFY pos_X334Changed)
    Q_PROPERTY(double y_334 READ pos_Y334 WRITE setPos_Y334 NOTIFY pos_Y334Changed)
    Q_PROPERTY(double r_334 READ pos_R334 WRITE setPos_R334 NOTIFY pos_R334Changed)
    Q_PROPERTY(double x_335 READ pos_X335 WRITE setPos_X335 NOTIFY pos_X335Changed)
    Q_PROPERTY(double y_335 READ pos_Y335 WRITE setPos_Y335 NOTIFY pos_Y335Changed)
    Q_PROPERTY(double r_335 READ pos_R335 WRITE setPos_R335 NOTIFY pos_R335Changed)
    Q_PROPERTY(double x_336 READ pos_X336 WRITE setPos_X336 NOTIFY pos_X336Changed)
    Q_PROPERTY(double y_336 READ pos_Y336 WRITE setPos_Y336 NOTIFY pos_Y336Changed)
    Q_PROPERTY(double r_336 READ pos_R336 WRITE setPos_R336 NOTIFY pos_R336Changed)
    Q_PROPERTY(double x_337 READ pos_X337 WRITE setPos_X337 NOTIFY pos_X337Changed)
    Q_PROPERTY(double y_337 READ pos_Y337 WRITE setPos_Y337 NOTIFY pos_Y337Changed)
    Q_PROPERTY(double r_337 READ pos_R337 WRITE setPos_R337 NOTIFY pos_R337Changed)
    Q_PROPERTY(double x_338 READ pos_X338 WRITE setPos_X338 NOTIFY pos_X338Changed)
    Q_PROPERTY(double y_338 READ pos_Y338 WRITE setPos_Y338 NOTIFY pos_Y338Changed)
    Q_PROPERTY(double r_338 READ pos_R338 WRITE setPos_R338 NOTIFY pos_R338Changed)
    Q_PROPERTY(double x_339 READ pos_X339 WRITE setPos_X339 NOTIFY pos_X339Changed)
    Q_PROPERTY(double y_339 READ pos_Y339 WRITE setPos_Y339 NOTIFY pos_Y339Changed)
    Q_PROPERTY(double r_339 READ pos_R339 WRITE setPos_R339 NOTIFY pos_R339Changed)
    Q_PROPERTY(double x_340 READ pos_X340 WRITE setPos_X340 NOTIFY pos_X340Changed)
    Q_PROPERTY(double y_340 READ pos_Y340 WRITE setPos_Y340 NOTIFY pos_Y340Changed)
    Q_PROPERTY(double r_340 READ pos_R340 WRITE setPos_R340 NOTIFY pos_R340Changed)
    Q_PROPERTY(double x_341 READ pos_X341 WRITE setPos_X341 NOTIFY pos_X341Changed)
    Q_PROPERTY(double y_341 READ pos_Y341 WRITE setPos_Y341 NOTIFY pos_Y341Changed)
    Q_PROPERTY(double r_341 READ pos_R341 WRITE setPos_R341 NOTIFY pos_R341Changed)
    Q_PROPERTY(double x_342 READ pos_X342 WRITE setPos_X342 NOTIFY pos_X342Changed)
    Q_PROPERTY(double y_342 READ pos_Y342 WRITE setPos_Y342 NOTIFY pos_Y342Changed)
    Q_PROPERTY(double r_342 READ pos_R342 WRITE setPos_R342 NOTIFY pos_R342Changed)
    Q_PROPERTY(double x_343 READ pos_X343 WRITE setPos_X343 NOTIFY pos_X343Changed)
    Q_PROPERTY(double y_343 READ pos_Y343 WRITE setPos_Y343 NOTIFY pos_Y343Changed)
    Q_PROPERTY(double r_343 READ pos_R343 WRITE setPos_R343 NOTIFY pos_R343Changed)
    Q_PROPERTY(double x_344 READ pos_X344 WRITE setPos_X344 NOTIFY pos_X344Changed)
    Q_PROPERTY(double y_344 READ pos_Y344 WRITE setPos_Y344 NOTIFY pos_Y344Changed)
    Q_PROPERTY(double r_344 READ pos_R344 WRITE setPos_R344 NOTIFY pos_R344Changed)
    Q_PROPERTY(double x_345 READ pos_X345 WRITE setPos_X345 NOTIFY pos_X345Changed)
    Q_PROPERTY(double y_345 READ pos_Y345 WRITE setPos_Y345 NOTIFY pos_Y345Changed)
    Q_PROPERTY(double r_345 READ pos_R345 WRITE setPos_R345 NOTIFY pos_R345Changed)
    Q_PROPERTY(double x_346 READ pos_X346 WRITE setPos_X346 NOTIFY pos_X346Changed)
    Q_PROPERTY(double y_346 READ pos_Y346 WRITE setPos_Y346 NOTIFY pos_Y346Changed)
    Q_PROPERTY(double r_346 READ pos_R346 WRITE setPos_R346 NOTIFY pos_R346Changed)
    Q_PROPERTY(double x_347 READ pos_X347 WRITE setPos_X347 NOTIFY pos_X347Changed)
    Q_PROPERTY(double y_347 READ pos_Y347 WRITE setPos_Y347 NOTIFY pos_Y347Changed)
    Q_PROPERTY(double r_347 READ pos_R347 WRITE setPos_R347 NOTIFY pos_R347Changed)
    Q_PROPERTY(double x_348 READ pos_X348 WRITE setPos_X348 NOTIFY pos_X348Changed)
    Q_PROPERTY(double y_348 READ pos_Y348 WRITE setPos_Y348 NOTIFY pos_Y348Changed)
    Q_PROPERTY(double r_348 READ pos_R348 WRITE setPos_R348 NOTIFY pos_R348Changed)
    Q_PROPERTY(double x_349 READ pos_X349 WRITE setPos_X349 NOTIFY pos_X349Changed)
    Q_PROPERTY(double y_349 READ pos_Y349 WRITE setPos_Y349 NOTIFY pos_Y349Changed)
    Q_PROPERTY(double r_349 READ pos_R349 WRITE setPos_R349 NOTIFY pos_R349Changed)
    Q_PROPERTY(double x_350 READ pos_X350 WRITE setPos_X350 NOTIFY pos_X350Changed)
    Q_PROPERTY(double y_350 READ pos_Y350 WRITE setPos_Y350 NOTIFY pos_Y350Changed)
    Q_PROPERTY(double r_350 READ pos_R350 WRITE setPos_R350 NOTIFY pos_R350Changed)
    Q_PROPERTY(double x_351 READ pos_X351 WRITE setPos_X351 NOTIFY pos_X351Changed)
    Q_PROPERTY(double y_351 READ pos_Y351 WRITE setPos_Y351 NOTIFY pos_Y351Changed)
    Q_PROPERTY(double r_351 READ pos_R351 WRITE setPos_R351 NOTIFY pos_R351Changed)
    Q_PROPERTY(double x_352 READ pos_X352 WRITE setPos_X352 NOTIFY pos_X352Changed)
    Q_PROPERTY(double y_352 READ pos_Y352 WRITE setPos_Y352 NOTIFY pos_Y352Changed)
    Q_PROPERTY(double r_352 READ pos_R352 WRITE setPos_R352 NOTIFY pos_R352Changed)
    Q_PROPERTY(double x_353 READ pos_X353 WRITE setPos_X353 NOTIFY pos_X353Changed)
    Q_PROPERTY(double y_353 READ pos_Y353 WRITE setPos_Y353 NOTIFY pos_Y353Changed)
    Q_PROPERTY(double r_353 READ pos_R353 WRITE setPos_R353 NOTIFY pos_R353Changed)
    Q_PROPERTY(double x_354 READ pos_X354 WRITE setPos_X354 NOTIFY pos_X354Changed)
    Q_PROPERTY(double y_354 READ pos_Y354 WRITE setPos_Y354 NOTIFY pos_Y354Changed)
    Q_PROPERTY(double r_354 READ pos_R354 WRITE setPos_R354 NOTIFY pos_R354Changed)
    Q_PROPERTY(double x_355 READ pos_X355 WRITE setPos_X355 NOTIFY pos_X355Changed)
    Q_PROPERTY(double y_355 READ pos_Y355 WRITE setPos_Y355 NOTIFY pos_Y355Changed)
    Q_PROPERTY(double r_355 READ pos_R355 WRITE setPos_R355 NOTIFY pos_R355Changed)
    Q_PROPERTY(double x_356 READ pos_X356 WRITE setPos_X356 NOTIFY pos_X356Changed)
    Q_PROPERTY(double y_356 READ pos_Y356 WRITE setPos_Y356 NOTIFY pos_Y356Changed)
    Q_PROPERTY(double r_356 READ pos_R356 WRITE setPos_R356 NOTIFY pos_R356Changed)
    Q_PROPERTY(double x_357 READ pos_X357 WRITE setPos_X357 NOTIFY pos_X357Changed)
    Q_PROPERTY(double y_357 READ pos_Y357 WRITE setPos_Y357 NOTIFY pos_Y357Changed)
    Q_PROPERTY(double r_357 READ pos_R357 WRITE setPos_R357 NOTIFY pos_R357Changed)
    Q_PROPERTY(double x_358 READ pos_X358 WRITE setPos_X358 NOTIFY pos_X358Changed)
    Q_PROPERTY(double y_358 READ pos_Y358 WRITE setPos_Y358 NOTIFY pos_Y358Changed)
    Q_PROPERTY(double r_358 READ pos_R358 WRITE setPos_R358 NOTIFY pos_R358Changed)
    Q_PROPERTY(double x_359 READ pos_X359 WRITE setPos_X359 NOTIFY pos_X359Changed)
    Q_PROPERTY(double y_359 READ pos_Y359 WRITE setPos_Y359 NOTIFY pos_Y359Changed)
    Q_PROPERTY(double r_359 READ pos_R359 WRITE setPos_R359 NOTIFY pos_R359Changed)
    Q_PROPERTY(double x_360 READ pos_X360 WRITE setPos_X360 NOTIFY pos_X360Changed)
    Q_PROPERTY(double y_360 READ pos_Y360 WRITE setPos_Y360 NOTIFY pos_Y360Changed)
    Q_PROPERTY(double r_360 READ pos_R360 WRITE setPos_R360 NOTIFY pos_R360Changed)
    Q_PROPERTY(double x_361 READ pos_X361 WRITE setPos_X361 NOTIFY pos_X361Changed)
    Q_PROPERTY(double y_361 READ pos_Y361 WRITE setPos_Y361 NOTIFY pos_Y361Changed)
    Q_PROPERTY(double r_361 READ pos_R361 WRITE setPos_R361 NOTIFY pos_R361Changed)
    Q_PROPERTY(double x_362 READ pos_X362 WRITE setPos_X362 NOTIFY pos_X362Changed)
    Q_PROPERTY(double y_362 READ pos_Y362 WRITE setPos_Y362 NOTIFY pos_Y362Changed)
    Q_PROPERTY(double r_362 READ pos_R362 WRITE setPos_R362 NOTIFY pos_R362Changed)
    Q_PROPERTY(double x_363 READ pos_X363 WRITE setPos_X363 NOTIFY pos_X363Changed)
    Q_PROPERTY(double y_363 READ pos_Y363 WRITE setPos_Y363 NOTIFY pos_Y363Changed)
    Q_PROPERTY(double r_363 READ pos_R363 WRITE setPos_R363 NOTIFY pos_R363Changed)
    Q_PROPERTY(double x_364 READ pos_X364 WRITE setPos_X364 NOTIFY pos_X364Changed)
    Q_PROPERTY(double y_364 READ pos_Y364 WRITE setPos_Y364 NOTIFY pos_Y364Changed)
    Q_PROPERTY(double r_364 READ pos_R364 WRITE setPos_R364 NOTIFY pos_R364Changed)
    Q_PROPERTY(double x_365 READ pos_X365 WRITE setPos_X365 NOTIFY pos_X365Changed)
    Q_PROPERTY(double y_365 READ pos_Y365 WRITE setPos_Y365 NOTIFY pos_Y365Changed)
    Q_PROPERTY(double r_365 READ pos_R365 WRITE setPos_R365 NOTIFY pos_R365Changed)
    Q_PROPERTY(double x_366 READ pos_X366 WRITE setPos_X366 NOTIFY pos_X366Changed)
    Q_PROPERTY(double y_366 READ pos_Y366 WRITE setPos_Y366 NOTIFY pos_Y366Changed)
    Q_PROPERTY(double r_366 READ pos_R366 WRITE setPos_R366 NOTIFY pos_R366Changed)
    Q_PROPERTY(double x_367 READ pos_X367 WRITE setPos_X367 NOTIFY pos_X367Changed)
    Q_PROPERTY(double y_367 READ pos_Y367 WRITE setPos_Y367 NOTIFY pos_Y367Changed)
    Q_PROPERTY(double r_367 READ pos_R367 WRITE setPos_R367 NOTIFY pos_R367Changed)
    Q_PROPERTY(double x_368 READ pos_X368 WRITE setPos_X368 NOTIFY pos_X368Changed)
    Q_PROPERTY(double y_368 READ pos_Y368 WRITE setPos_Y368 NOTIFY pos_Y368Changed)
    Q_PROPERTY(double r_368 READ pos_R368 WRITE setPos_R368 NOTIFY pos_R368Changed)
    Q_PROPERTY(double x_369 READ pos_X369 WRITE setPos_X369 NOTIFY pos_X369Changed)
    Q_PROPERTY(double y_369 READ pos_Y369 WRITE setPos_Y369 NOTIFY pos_Y369Changed)
    Q_PROPERTY(double r_369 READ pos_R369 WRITE setPos_R369 NOTIFY pos_R369Changed)
    Q_PROPERTY(double x_370 READ pos_X370 WRITE setPos_X370 NOTIFY pos_X370Changed)
    Q_PROPERTY(double y_370 READ pos_Y370 WRITE setPos_Y370 NOTIFY pos_Y370Changed)
    Q_PROPERTY(double r_370 READ pos_R370 WRITE setPos_R370 NOTIFY pos_R370Changed)
    Q_PROPERTY(double x_371 READ pos_X371 WRITE setPos_X371 NOTIFY pos_X371Changed)
    Q_PROPERTY(double y_371 READ pos_Y371 WRITE setPos_Y371 NOTIFY pos_Y371Changed)
    Q_PROPERTY(double r_371 READ pos_R371 WRITE setPos_R371 NOTIFY pos_R371Changed)
    Q_PROPERTY(double x_372 READ pos_X372 WRITE setPos_X372 NOTIFY pos_X372Changed)
    Q_PROPERTY(double y_372 READ pos_Y372 WRITE setPos_Y372 NOTIFY pos_Y372Changed)
    Q_PROPERTY(double r_372 READ pos_R372 WRITE setPos_R372 NOTIFY pos_R372Changed)
    Q_PROPERTY(double x_373 READ pos_X373 WRITE setPos_X373 NOTIFY pos_X373Changed)
    Q_PROPERTY(double y_373 READ pos_Y373 WRITE setPos_Y373 NOTIFY pos_Y373Changed)
    Q_PROPERTY(double r_373 READ pos_R373 WRITE setPos_R373 NOTIFY pos_R373Changed)
    Q_PROPERTY(double x_374 READ pos_X374 WRITE setPos_X374 NOTIFY pos_X374Changed)
    Q_PROPERTY(double y_374 READ pos_Y374 WRITE setPos_Y374 NOTIFY pos_Y374Changed)
    Q_PROPERTY(double r_374 READ pos_R374 WRITE setPos_R374 NOTIFY pos_R374Changed)
    Q_PROPERTY(double x_375 READ pos_X375 WRITE setPos_X375 NOTIFY pos_X375Changed)
    Q_PROPERTY(double y_375 READ pos_Y375 WRITE setPos_Y375 NOTIFY pos_Y375Changed)
    Q_PROPERTY(double r_375 READ pos_R375 WRITE setPos_R375 NOTIFY pos_R375Changed)
    Q_PROPERTY(double x_376 READ pos_X376 WRITE setPos_X376 NOTIFY pos_X376Changed)
    Q_PROPERTY(double y_376 READ pos_Y376 WRITE setPos_Y376 NOTIFY pos_Y376Changed)
    Q_PROPERTY(double r_376 READ pos_R376 WRITE setPos_R376 NOTIFY pos_R376Changed)
    Q_PROPERTY(double x_377 READ pos_X377 WRITE setPos_X377 NOTIFY pos_X377Changed)
    Q_PROPERTY(double y_377 READ pos_Y377 WRITE setPos_Y377 NOTIFY pos_Y377Changed)
    Q_PROPERTY(double r_377 READ pos_R377 WRITE setPos_R377 NOTIFY pos_R377Changed)
    Q_PROPERTY(double x_378 READ pos_X378 WRITE setPos_X378 NOTIFY pos_X378Changed)
    Q_PROPERTY(double y_378 READ pos_Y378 WRITE setPos_Y378 NOTIFY pos_Y378Changed)
    Q_PROPERTY(double r_378 READ pos_R378 WRITE setPos_R378 NOTIFY pos_R378Changed)
    Q_PROPERTY(double x_379 READ pos_X379 WRITE setPos_X379 NOTIFY pos_X379Changed)
    Q_PROPERTY(double y_379 READ pos_Y379 WRITE setPos_Y379 NOTIFY pos_Y379Changed)
    Q_PROPERTY(double r_379 READ pos_R379 WRITE setPos_R379 NOTIFY pos_R379Changed)
    Q_PROPERTY(double x_380 READ pos_X380 WRITE setPos_X380 NOTIFY pos_X380Changed)
    Q_PROPERTY(double y_380 READ pos_Y380 WRITE setPos_Y380 NOTIFY pos_Y380Changed)
    Q_PROPERTY(double r_380 READ pos_R380 WRITE setPos_R380 NOTIFY pos_R380Changed)
    Q_PROPERTY(double x_381 READ pos_X381 WRITE setPos_X381 NOTIFY pos_X381Changed)
    Q_PROPERTY(double y_381 READ pos_Y381 WRITE setPos_Y381 NOTIFY pos_Y381Changed)
    Q_PROPERTY(double r_381 READ pos_R381 WRITE setPos_R381 NOTIFY pos_R381Changed)
    Q_PROPERTY(double x_382 READ pos_X382 WRITE setPos_X382 NOTIFY pos_X382Changed)
    Q_PROPERTY(double y_382 READ pos_Y382 WRITE setPos_Y382 NOTIFY pos_Y382Changed)
    Q_PROPERTY(double r_382 READ pos_R382 WRITE setPos_R382 NOTIFY pos_R382Changed)
    Q_PROPERTY(double x_383 READ pos_X383 WRITE setPos_X383 NOTIFY pos_X383Changed)
    Q_PROPERTY(double y_383 READ pos_Y383 WRITE setPos_Y383 NOTIFY pos_Y383Changed)
    Q_PROPERTY(double r_383 READ pos_R383 WRITE setPos_R383 NOTIFY pos_R383Changed)
    Q_PROPERTY(double x_384 READ pos_X384 WRITE setPos_X384 NOTIFY pos_X384Changed)
    Q_PROPERTY(double y_384 READ pos_Y384 WRITE setPos_Y384 NOTIFY pos_Y384Changed)
    Q_PROPERTY(double r_384 READ pos_R384 WRITE setPos_R384 NOTIFY pos_R384Changed)
    Q_PROPERTY(double x_385 READ pos_X385 WRITE setPos_X385 NOTIFY pos_X385Changed)
    Q_PROPERTY(double y_385 READ pos_Y385 WRITE setPos_Y385 NOTIFY pos_Y385Changed)
    Q_PROPERTY(double r_385 READ pos_R385 WRITE setPos_R385 NOTIFY pos_R385Changed)
    Q_PROPERTY(double x_386 READ pos_X386 WRITE setPos_X386 NOTIFY pos_X386Changed)
    Q_PROPERTY(double y_386 READ pos_Y386 WRITE setPos_Y386 NOTIFY pos_Y386Changed)
    Q_PROPERTY(double r_386 READ pos_R386 WRITE setPos_R386 NOTIFY pos_R386Changed)
    Q_PROPERTY(double x_387 READ pos_X387 WRITE setPos_X387 NOTIFY pos_X387Changed)
    Q_PROPERTY(double y_387 READ pos_Y387 WRITE setPos_Y387 NOTIFY pos_Y387Changed)
    Q_PROPERTY(double r_387 READ pos_R387 WRITE setPos_R387 NOTIFY pos_R387Changed)
    Q_PROPERTY(double x_388 READ pos_X388 WRITE setPos_X388 NOTIFY pos_X388Changed)
    Q_PROPERTY(double y_388 READ pos_Y388 WRITE setPos_Y388 NOTIFY pos_Y388Changed)
    Q_PROPERTY(double r_388 READ pos_R388 WRITE setPos_R388 NOTIFY pos_R388Changed)
    Q_PROPERTY(double x_389 READ pos_X389 WRITE setPos_X389 NOTIFY pos_X389Changed)
    Q_PROPERTY(double y_389 READ pos_Y389 WRITE setPos_Y389 NOTIFY pos_Y389Changed)
    Q_PROPERTY(double r_389 READ pos_R389 WRITE setPos_R389 NOTIFY pos_R389Changed)
    Q_PROPERTY(double x_390 READ pos_X390 WRITE setPos_X390 NOTIFY pos_X390Changed)
    Q_PROPERTY(double y_390 READ pos_Y390 WRITE setPos_Y390 NOTIFY pos_Y390Changed)
    Q_PROPERTY(double r_390 READ pos_R390 WRITE setPos_R390 NOTIFY pos_R390Changed)
    Q_PROPERTY(double x_391 READ pos_X391 WRITE setPos_X391 NOTIFY pos_X391Changed)
    Q_PROPERTY(double y_391 READ pos_Y391 WRITE setPos_Y391 NOTIFY pos_Y391Changed)
    Q_PROPERTY(double r_391 READ pos_R391 WRITE setPos_R391 NOTIFY pos_R391Changed)
    Q_PROPERTY(double x_392 READ pos_X392 WRITE setPos_X392 NOTIFY pos_X392Changed)
    Q_PROPERTY(double y_392 READ pos_Y392 WRITE setPos_Y392 NOTIFY pos_Y392Changed)
    Q_PROPERTY(double r_392 READ pos_R392 WRITE setPos_R392 NOTIFY pos_R392Changed)
    Q_PROPERTY(double x_393 READ pos_X393 WRITE setPos_X393 NOTIFY pos_X393Changed)
    Q_PROPERTY(double y_393 READ pos_Y393 WRITE setPos_Y393 NOTIFY pos_Y393Changed)
    Q_PROPERTY(double r_393 READ pos_R393 WRITE setPos_R393 NOTIFY pos_R393Changed)
    Q_PROPERTY(double x_394 READ pos_X394 WRITE setPos_X394 NOTIFY pos_X394Changed)
    Q_PROPERTY(double y_394 READ pos_Y394 WRITE setPos_Y394 NOTIFY pos_Y394Changed)
    Q_PROPERTY(double r_394 READ pos_R394 WRITE setPos_R394 NOTIFY pos_R394Changed)
    Q_PROPERTY(double x_395 READ pos_X395 WRITE setPos_X395 NOTIFY pos_X395Changed)
    Q_PROPERTY(double y_395 READ pos_Y395 WRITE setPos_Y395 NOTIFY pos_Y395Changed)
    Q_PROPERTY(double r_395 READ pos_R395 WRITE setPos_R395 NOTIFY pos_R395Changed)
    Q_PROPERTY(double x_396 READ pos_X396 WRITE setPos_X396 NOTIFY pos_X396Changed)
    Q_PROPERTY(double y_396 READ pos_Y396 WRITE setPos_Y396 NOTIFY pos_Y396Changed)
    Q_PROPERTY(double r_396 READ pos_R396 WRITE setPos_R396 NOTIFY pos_R396Changed)
    Q_PROPERTY(double x_397 READ pos_X397 WRITE setPos_X397 NOTIFY pos_X397Changed)
    Q_PROPERTY(double y_397 READ pos_Y397 WRITE setPos_Y397 NOTIFY pos_Y397Changed)
    Q_PROPERTY(double r_397 READ pos_R397 WRITE setPos_R397 NOTIFY pos_R397Changed)
    Q_PROPERTY(double x_398 READ pos_X398 WRITE setPos_X398 NOTIFY pos_X398Changed)
    Q_PROPERTY(double y_398 READ pos_Y398 WRITE setPos_Y398 NOTIFY pos_Y398Changed)
    Q_PROPERTY(double r_398 READ pos_R398 WRITE setPos_R398 NOTIFY pos_R398Changed)
    Q_PROPERTY(double x_399 READ pos_X399 WRITE setPos_X399 NOTIFY pos_X399Changed)
    Q_PROPERTY(double y_399 READ pos_Y399 WRITE setPos_Y399 NOTIFY pos_Y399Changed)
    Q_PROPERTY(double r_399 READ pos_R399 WRITE setPos_R399 NOTIFY pos_R399Changed)
    Q_PROPERTY(double x_400 READ pos_X400 WRITE setPos_X400 NOTIFY pos_X400Changed)
    Q_PROPERTY(double y_400 READ pos_Y400 WRITE setPos_Y400 NOTIFY pos_Y400Changed)
    Q_PROPERTY(double r_400 READ pos_R400 WRITE setPos_R400 NOTIFY pos_R400Changed)
    Q_PROPERTY(double x_401 READ pos_X401 WRITE setPos_X401 NOTIFY pos_X401Changed)
    Q_PROPERTY(double y_401 READ pos_Y401 WRITE setPos_Y401 NOTIFY pos_Y401Changed)
    Q_PROPERTY(double r_401 READ pos_R401 WRITE setPos_R401 NOTIFY pos_R401Changed)
    Q_PROPERTY(double x_402 READ pos_X402 WRITE setPos_X402 NOTIFY pos_X402Changed)
    Q_PROPERTY(double y_402 READ pos_Y402 WRITE setPos_Y402 NOTIFY pos_Y402Changed)
    Q_PROPERTY(double r_402 READ pos_R402 WRITE setPos_R402 NOTIFY pos_R402Changed)
    Q_PROPERTY(double x_403 READ pos_X403 WRITE setPos_X403 NOTIFY pos_X403Changed)
    Q_PROPERTY(double y_403 READ pos_Y403 WRITE setPos_Y403 NOTIFY pos_Y403Changed)
    Q_PROPERTY(double r_403 READ pos_R403 WRITE setPos_R403 NOTIFY pos_R403Changed)
    Q_PROPERTY(double x_404 READ pos_X404 WRITE setPos_X404 NOTIFY pos_X404Changed)
    Q_PROPERTY(double y_404 READ pos_Y404 WRITE setPos_Y404 NOTIFY pos_Y404Changed)
    Q_PROPERTY(double r_404 READ pos_R404 WRITE setPos_R404 NOTIFY pos_R404Changed)
    Q_PROPERTY(double x_405 READ pos_X405 WRITE setPos_X405 NOTIFY pos_X405Changed)
    Q_PROPERTY(double y_405 READ pos_Y405 WRITE setPos_Y405 NOTIFY pos_Y405Changed)
    Q_PROPERTY(double r_405 READ pos_R405 WRITE setPos_R405 NOTIFY pos_R405Changed)
    Q_PROPERTY(double x_406 READ pos_X406 WRITE setPos_X406 NOTIFY pos_X406Changed)
    Q_PROPERTY(double y_406 READ pos_Y406 WRITE setPos_Y406 NOTIFY pos_Y406Changed)
    Q_PROPERTY(double r_406 READ pos_R406 WRITE setPos_R406 NOTIFY pos_R406Changed)
    Q_PROPERTY(double x_407 READ pos_X407 WRITE setPos_X407 NOTIFY pos_X407Changed)
    Q_PROPERTY(double y_407 READ pos_Y407 WRITE setPos_Y407 NOTIFY pos_Y407Changed)
    Q_PROPERTY(double r_407 READ pos_R407 WRITE setPos_R407 NOTIFY pos_R407Changed)
    Q_PROPERTY(double x_408 READ pos_X408 WRITE setPos_X408 NOTIFY pos_X408Changed)
    Q_PROPERTY(double y_408 READ pos_Y408 WRITE setPos_Y408 NOTIFY pos_Y408Changed)
    Q_PROPERTY(double r_408 READ pos_R408 WRITE setPos_R408 NOTIFY pos_R408Changed)
    Q_PROPERTY(double x_409 READ pos_X409 WRITE setPos_X409 NOTIFY pos_X409Changed)
    Q_PROPERTY(double y_409 READ pos_Y409 WRITE setPos_Y409 NOTIFY pos_Y409Changed)
    Q_PROPERTY(double r_409 READ pos_R409 WRITE setPos_R409 NOTIFY pos_R409Changed)
    Q_PROPERTY(double x_410 READ pos_X410 WRITE setPos_X410 NOTIFY pos_X410Changed)
    Q_PROPERTY(double y_410 READ pos_Y410 WRITE setPos_Y410 NOTIFY pos_Y410Changed)
    Q_PROPERTY(double r_410 READ pos_R410 WRITE setPos_R410 NOTIFY pos_R410Changed)
    Q_PROPERTY(double x_411 READ pos_X411 WRITE setPos_X411 NOTIFY pos_X411Changed)
    Q_PROPERTY(double y_411 READ pos_Y411 WRITE setPos_Y411 NOTIFY pos_Y411Changed)
    Q_PROPERTY(double r_411 READ pos_R411 WRITE setPos_R411 NOTIFY pos_R411Changed)
    Q_PROPERTY(double x_412 READ pos_X412 WRITE setPos_X412 NOTIFY pos_X412Changed)
    Q_PROPERTY(double y_412 READ pos_Y412 WRITE setPos_Y412 NOTIFY pos_Y412Changed)
    Q_PROPERTY(double r_412 READ pos_R412 WRITE setPos_R412 NOTIFY pos_R412Changed)
    Q_PROPERTY(double x_413 READ pos_X413 WRITE setPos_X413 NOTIFY pos_X413Changed)
    Q_PROPERTY(double y_413 READ pos_Y413 WRITE setPos_Y413 NOTIFY pos_Y413Changed)
    Q_PROPERTY(double r_413 READ pos_R413 WRITE setPos_R413 NOTIFY pos_R413Changed)
    Q_PROPERTY(double x_414 READ pos_X414 WRITE setPos_X414 NOTIFY pos_X414Changed)
    Q_PROPERTY(double y_414 READ pos_Y414 WRITE setPos_Y414 NOTIFY pos_Y414Changed)
    Q_PROPERTY(double r_414 READ pos_R414 WRITE setPos_R414 NOTIFY pos_R414Changed)
    Q_PROPERTY(double x_415 READ pos_X415 WRITE setPos_X415 NOTIFY pos_X415Changed)
    Q_PROPERTY(double y_415 READ pos_Y415 WRITE setPos_Y415 NOTIFY pos_Y415Changed)
    Q_PROPERTY(double r_415 READ pos_R415 WRITE setPos_R415 NOTIFY pos_R415Changed)
    Q_PROPERTY(double x_416 READ pos_X416 WRITE setPos_X416 NOTIFY pos_X416Changed)
    Q_PROPERTY(double y_416 READ pos_Y416 WRITE setPos_Y416 NOTIFY pos_Y416Changed)
    Q_PROPERTY(double r_416 READ pos_R416 WRITE setPos_R416 NOTIFY pos_R416Changed)
    Q_PROPERTY(double x_417 READ pos_X417 WRITE setPos_X417 NOTIFY pos_X417Changed)
    Q_PROPERTY(double y_417 READ pos_Y417 WRITE setPos_Y417 NOTIFY pos_Y417Changed)
    Q_PROPERTY(double r_417 READ pos_R417 WRITE setPos_R417 NOTIFY pos_R417Changed)
    Q_PROPERTY(double x_418 READ pos_X418 WRITE setPos_X418 NOTIFY pos_X418Changed)
    Q_PROPERTY(double y_418 READ pos_Y418 WRITE setPos_Y418 NOTIFY pos_Y418Changed)
    Q_PROPERTY(double r_418 READ pos_R418 WRITE setPos_R418 NOTIFY pos_R418Changed)
    Q_PROPERTY(double x_419 READ pos_X419 WRITE setPos_X419 NOTIFY pos_X419Changed)
    Q_PROPERTY(double y_419 READ pos_Y419 WRITE setPos_Y419 NOTIFY pos_Y419Changed)
    Q_PROPERTY(double r_419 READ pos_R419 WRITE setPos_R419 NOTIFY pos_R419Changed)
    Q_PROPERTY(double x_420 READ pos_X420 WRITE setPos_X420 NOTIFY pos_X420Changed)
    Q_PROPERTY(double y_420 READ pos_Y420 WRITE setPos_Y420 NOTIFY pos_Y420Changed)
    Q_PROPERTY(double r_420 READ pos_R420 WRITE setPos_R420 NOTIFY pos_R420Changed)
    Q_PROPERTY(double x_421 READ pos_X421 WRITE setPos_X421 NOTIFY pos_X421Changed)
    Q_PROPERTY(double y_421 READ pos_Y421 WRITE setPos_Y421 NOTIFY pos_Y421Changed)
    Q_PROPERTY(double r_421 READ pos_R421 WRITE setPos_R421 NOTIFY pos_R421Changed)
    Q_PROPERTY(double x_422 READ pos_X422 WRITE setPos_X422 NOTIFY pos_X422Changed)
    Q_PROPERTY(double y_422 READ pos_Y422 WRITE setPos_Y422 NOTIFY pos_Y422Changed)
    Q_PROPERTY(double r_422 READ pos_R422 WRITE setPos_R422 NOTIFY pos_R422Changed)
    Q_PROPERTY(double x_423 READ pos_X423 WRITE setPos_X423 NOTIFY pos_X423Changed)
    Q_PROPERTY(double y_423 READ pos_Y423 WRITE setPos_Y423 NOTIFY pos_Y423Changed)
    Q_PROPERTY(double r_423 READ pos_R423 WRITE setPos_R423 NOTIFY pos_R423Changed)
    Q_PROPERTY(double x_424 READ pos_X424 WRITE setPos_X424 NOTIFY pos_X424Changed)
    Q_PROPERTY(double y_424 READ pos_Y424 WRITE setPos_Y424 NOTIFY pos_Y424Changed)
    Q_PROPERTY(double r_424 READ pos_R424 WRITE setPos_R424 NOTIFY pos_R424Changed)
    Q_PROPERTY(double x_425 READ pos_X425 WRITE setPos_X425 NOTIFY pos_X425Changed)
    Q_PROPERTY(double y_425 READ pos_Y425 WRITE setPos_Y425 NOTIFY pos_Y425Changed)
    Q_PROPERTY(double r_425 READ pos_R425 WRITE setPos_R425 NOTIFY pos_R425Changed)
    Q_PROPERTY(double x_426 READ pos_X426 WRITE setPos_X426 NOTIFY pos_X426Changed)
    Q_PROPERTY(double y_426 READ pos_Y426 WRITE setPos_Y426 NOTIFY pos_Y426Changed)
    Q_PROPERTY(double r_426 READ pos_R426 WRITE setPos_R426 NOTIFY pos_R426Changed)
    Q_PROPERTY(double x_427 READ pos_X427 WRITE setPos_X427 NOTIFY pos_X427Changed)
    Q_PROPERTY(double y_427 READ pos_Y427 WRITE setPos_Y427 NOTIFY pos_Y427Changed)
    Q_PROPERTY(double r_427 READ pos_R427 WRITE setPos_R427 NOTIFY pos_R427Changed)
    Q_PROPERTY(double x_428 READ pos_X428 WRITE setPos_X428 NOTIFY pos_X428Changed)
    Q_PROPERTY(double y_428 READ pos_Y428 WRITE setPos_Y428 NOTIFY pos_Y428Changed)
    Q_PROPERTY(double r_428 READ pos_R428 WRITE setPos_R428 NOTIFY pos_R428Changed)
    Q_PROPERTY(double x_429 READ pos_X429 WRITE setPos_X429 NOTIFY pos_X429Changed)
    Q_PROPERTY(double y_429 READ pos_Y429 WRITE setPos_Y429 NOTIFY pos_Y429Changed)
    Q_PROPERTY(double r_429 READ pos_R429 WRITE setPos_R429 NOTIFY pos_R429Changed)
    Q_PROPERTY(double x_430 READ pos_X430 WRITE setPos_X430 NOTIFY pos_X430Changed)
    Q_PROPERTY(double y_430 READ pos_Y430 WRITE setPos_Y430 NOTIFY pos_Y430Changed)
    Q_PROPERTY(double r_430 READ pos_R430 WRITE setPos_R430 NOTIFY pos_R430Changed)
    Q_PROPERTY(double x_431 READ pos_X431 WRITE setPos_X431 NOTIFY pos_X431Changed)
    Q_PROPERTY(double y_431 READ pos_Y431 WRITE setPos_Y431 NOTIFY pos_Y431Changed)
    Q_PROPERTY(double r_431 READ pos_R431 WRITE setPos_R431 NOTIFY pos_R431Changed)
    Q_PROPERTY(double x_432 READ pos_X432 WRITE setPos_X432 NOTIFY pos_X432Changed)
    Q_PROPERTY(double y_432 READ pos_Y432 WRITE setPos_Y432 NOTIFY pos_Y432Changed)
    Q_PROPERTY(double r_432 READ pos_R432 WRITE setPos_R432 NOTIFY pos_R432Changed)
    Q_PROPERTY(double x_433 READ pos_X433 WRITE setPos_X433 NOTIFY pos_X433Changed)
    Q_PROPERTY(double y_433 READ pos_Y433 WRITE setPos_Y433 NOTIFY pos_Y433Changed)
    Q_PROPERTY(double r_433 READ pos_R433 WRITE setPos_R433 NOTIFY pos_R433Changed)
    Q_PROPERTY(double x_434 READ pos_X434 WRITE setPos_X434 NOTIFY pos_X434Changed)
    Q_PROPERTY(double y_434 READ pos_Y434 WRITE setPos_Y434 NOTIFY pos_Y434Changed)
    Q_PROPERTY(double r_434 READ pos_R434 WRITE setPos_R434 NOTIFY pos_R434Changed)
    Q_PROPERTY(double x_435 READ pos_X435 WRITE setPos_X435 NOTIFY pos_X435Changed)
    Q_PROPERTY(double y_435 READ pos_Y435 WRITE setPos_Y435 NOTIFY pos_Y435Changed)
    Q_PROPERTY(double r_435 READ pos_R435 WRITE setPos_R435 NOTIFY pos_R435Changed)
    Q_PROPERTY(double x_436 READ pos_X436 WRITE setPos_X436 NOTIFY pos_X436Changed)
    Q_PROPERTY(double y_436 READ pos_Y436 WRITE setPos_Y436 NOTIFY pos_Y436Changed)
    Q_PROPERTY(double r_436 READ pos_R436 WRITE setPos_R436 NOTIFY pos_R436Changed)
    Q_PROPERTY(double x_437 READ pos_X437 WRITE setPos_X437 NOTIFY pos_X437Changed)
    Q_PROPERTY(double y_437 READ pos_Y437 WRITE setPos_Y437 NOTIFY pos_Y437Changed)
    Q_PROPERTY(double r_437 READ pos_R437 WRITE setPos_R437 NOTIFY pos_R437Changed)
    Q_PROPERTY(double x_438 READ pos_X438 WRITE setPos_X438 NOTIFY pos_X438Changed)
    Q_PROPERTY(double y_438 READ pos_Y438 WRITE setPos_Y438 NOTIFY pos_Y438Changed)
    Q_PROPERTY(double r_438 READ pos_R438 WRITE setPos_R438 NOTIFY pos_R438Changed)
    Q_PROPERTY(double x_439 READ pos_X439 WRITE setPos_X439 NOTIFY pos_X439Changed)
    Q_PROPERTY(double y_439 READ pos_Y439 WRITE setPos_Y439 NOTIFY pos_Y439Changed)
    Q_PROPERTY(double r_439 READ pos_R439 WRITE setPos_R439 NOTIFY pos_R439Changed)
    Q_PROPERTY(double x_440 READ pos_X440 WRITE setPos_X440 NOTIFY pos_X440Changed)
    Q_PROPERTY(double y_440 READ pos_Y440 WRITE setPos_Y440 NOTIFY pos_Y440Changed)
    Q_PROPERTY(double r_440 READ pos_R440 WRITE setPos_R440 NOTIFY pos_R440Changed)
    Q_PROPERTY(double x_441 READ pos_X441 WRITE setPos_X441 NOTIFY pos_X441Changed)
    Q_PROPERTY(double y_441 READ pos_Y441 WRITE setPos_Y441 NOTIFY pos_Y441Changed)
    Q_PROPERTY(double r_441 READ pos_R441 WRITE setPos_R441 NOTIFY pos_R441Changed)
    Q_PROPERTY(double x_442 READ pos_X442 WRITE setPos_X442 NOTIFY pos_X442Changed)
    Q_PROPERTY(double y_442 READ pos_Y442 WRITE setPos_Y442 NOTIFY pos_Y442Changed)
    Q_PROPERTY(double r_442 READ pos_R442 WRITE setPos_R442 NOTIFY pos_R442Changed)
    Q_PROPERTY(double x_443 READ pos_X443 WRITE setPos_X443 NOTIFY pos_X443Changed)
    Q_PROPERTY(double y_443 READ pos_Y443 WRITE setPos_Y443 NOTIFY pos_Y443Changed)
    Q_PROPERTY(double r_443 READ pos_R443 WRITE setPos_R443 NOTIFY pos_R443Changed)
    Q_PROPERTY(double x_444 READ pos_X444 WRITE setPos_X444 NOTIFY pos_X444Changed)
    Q_PROPERTY(double y_444 READ pos_Y444 WRITE setPos_Y444 NOTIFY pos_Y444Changed)
    Q_PROPERTY(double r_444 READ pos_R444 WRITE setPos_R444 NOTIFY pos_R444Changed)
    Q_PROPERTY(double x_445 READ pos_X445 WRITE setPos_X445 NOTIFY pos_X445Changed)
    Q_PROPERTY(double y_445 READ pos_Y445 WRITE setPos_Y445 NOTIFY pos_Y445Changed)
    Q_PROPERTY(double r_445 READ pos_R445 WRITE setPos_R445 NOTIFY pos_R445Changed)
    Q_PROPERTY(double x_446 READ pos_X446 WRITE setPos_X446 NOTIFY pos_X446Changed)
    Q_PROPERTY(double y_446 READ pos_Y446 WRITE setPos_Y446 NOTIFY pos_Y446Changed)
    Q_PROPERTY(double r_446 READ pos_R446 WRITE setPos_R446 NOTIFY pos_R446Changed)
    Q_PROPERTY(double x_447 READ pos_X447 WRITE setPos_X447 NOTIFY pos_X447Changed)
    Q_PROPERTY(double y_447 READ pos_Y447 WRITE setPos_Y447 NOTIFY pos_Y447Changed)
    Q_PROPERTY(double r_447 READ pos_R447 WRITE setPos_R447 NOTIFY pos_R447Changed)
    Q_PROPERTY(double x_448 READ pos_X448 WRITE setPos_X448 NOTIFY pos_X448Changed)
    Q_PROPERTY(double y_448 READ pos_Y448 WRITE setPos_Y448 NOTIFY pos_Y448Changed)
    Q_PROPERTY(double r_448 READ pos_R448 WRITE setPos_R448 NOTIFY pos_R448Changed)
    Q_PROPERTY(double x_449 READ pos_X449 WRITE setPos_X449 NOTIFY pos_X449Changed)
    Q_PROPERTY(double y_449 READ pos_Y449 WRITE setPos_Y449 NOTIFY pos_Y449Changed)
    Q_PROPERTY(double r_449 READ pos_R449 WRITE setPos_R449 NOTIFY pos_R449Changed)
    Q_PROPERTY(double x_450 READ pos_X450 WRITE setPos_X450 NOTIFY pos_X450Changed)
    Q_PROPERTY(double y_450 READ pos_Y450 WRITE setPos_Y450 NOTIFY pos_Y450Changed)
    Q_PROPERTY(double r_450 READ pos_R450 WRITE setPos_R450 NOTIFY pos_R450Changed)
    Q_PROPERTY(double x_451 READ pos_X451 WRITE setPos_X451 NOTIFY pos_X451Changed)
    Q_PROPERTY(double y_451 READ pos_Y451 WRITE setPos_Y451 NOTIFY pos_Y451Changed)
    Q_PROPERTY(double r_451 READ pos_R451 WRITE setPos_R451 NOTIFY pos_R451Changed)
    Q_PROPERTY(double x_452 READ pos_X452 WRITE setPos_X452 NOTIFY pos_X452Changed)
    Q_PROPERTY(double y_452 READ pos_Y452 WRITE setPos_Y452 NOTIFY pos_Y452Changed)
    Q_PROPERTY(double r_452 READ pos_R452 WRITE setPos_R452 NOTIFY pos_R452Changed)
    Q_PROPERTY(double x_453 READ pos_X453 WRITE setPos_X453 NOTIFY pos_X453Changed)
    Q_PROPERTY(double y_453 READ pos_Y453 WRITE setPos_Y453 NOTIFY pos_Y453Changed)
    Q_PROPERTY(double r_453 READ pos_R453 WRITE setPos_R453 NOTIFY pos_R453Changed)
    Q_PROPERTY(double x_454 READ pos_X454 WRITE setPos_X454 NOTIFY pos_X454Changed)
    Q_PROPERTY(double y_454 READ pos_Y454 WRITE setPos_Y454 NOTIFY pos_Y454Changed)
    Q_PROPERTY(double r_454 READ pos_R454 WRITE setPos_R454 NOTIFY pos_R454Changed)
    Q_PROPERTY(double x_455 READ pos_X455 WRITE setPos_X455 NOTIFY pos_X455Changed)
    Q_PROPERTY(double y_455 READ pos_Y455 WRITE setPos_Y455 NOTIFY pos_Y455Changed)
    Q_PROPERTY(double r_455 READ pos_R455 WRITE setPos_R455 NOTIFY pos_R455Changed)
    Q_PROPERTY(double x_456 READ pos_X456 WRITE setPos_X456 NOTIFY pos_X456Changed)
    Q_PROPERTY(double y_456 READ pos_Y456 WRITE setPos_Y456 NOTIFY pos_Y456Changed)
    Q_PROPERTY(double r_456 READ pos_R456 WRITE setPos_R456 NOTIFY pos_R456Changed)
    Q_PROPERTY(double x_457 READ pos_X457 WRITE setPos_X457 NOTIFY pos_X457Changed)
    Q_PROPERTY(double y_457 READ pos_Y457 WRITE setPos_Y457 NOTIFY pos_Y457Changed)
    Q_PROPERTY(double r_457 READ pos_R457 WRITE setPos_R457 NOTIFY pos_R457Changed)
    Q_PROPERTY(double x_458 READ pos_X458 WRITE setPos_X458 NOTIFY pos_X458Changed)
    Q_PROPERTY(double y_458 READ pos_Y458 WRITE setPos_Y458 NOTIFY pos_Y458Changed)
    Q_PROPERTY(double r_458 READ pos_R458 WRITE setPos_R458 NOTIFY pos_R458Changed)
    Q_PROPERTY(double x_459 READ pos_X459 WRITE setPos_X459 NOTIFY pos_X459Changed)
    Q_PROPERTY(double y_459 READ pos_Y459 WRITE setPos_Y459 NOTIFY pos_Y459Changed)
    Q_PROPERTY(double r_459 READ pos_R459 WRITE setPos_R459 NOTIFY pos_R459Changed)
    Q_PROPERTY(double x_460 READ pos_X460 WRITE setPos_X460 NOTIFY pos_X460Changed)
    Q_PROPERTY(double y_460 READ pos_Y460 WRITE setPos_Y460 NOTIFY pos_Y460Changed)
    Q_PROPERTY(double r_460 READ pos_R460 WRITE setPos_R460 NOTIFY pos_R460Changed)
    Q_PROPERTY(double x_461 READ pos_X461 WRITE setPos_X461 NOTIFY pos_X461Changed)
    Q_PROPERTY(double y_461 READ pos_Y461 WRITE setPos_Y461 NOTIFY pos_Y461Changed)
    Q_PROPERTY(double r_461 READ pos_R461 WRITE setPos_R461 NOTIFY pos_R461Changed)
    Q_PROPERTY(double x_462 READ pos_X462 WRITE setPos_X462 NOTIFY pos_X462Changed)
    Q_PROPERTY(double y_462 READ pos_Y462 WRITE setPos_Y462 NOTIFY pos_Y462Changed)
    Q_PROPERTY(double r_462 READ pos_R462 WRITE setPos_R462 NOTIFY pos_R462Changed)
    Q_PROPERTY(double x_463 READ pos_X463 WRITE setPos_X463 NOTIFY pos_X463Changed)
    Q_PROPERTY(double y_463 READ pos_Y463 WRITE setPos_Y463 NOTIFY pos_Y463Changed)
    Q_PROPERTY(double r_463 READ pos_R463 WRITE setPos_R463 NOTIFY pos_R463Changed)
    Q_PROPERTY(double x_464 READ pos_X464 WRITE setPos_X464 NOTIFY pos_X464Changed)
    Q_PROPERTY(double y_464 READ pos_Y464 WRITE setPos_Y464 NOTIFY pos_Y464Changed)
    Q_PROPERTY(double r_464 READ pos_R464 WRITE setPos_R464 NOTIFY pos_R464Changed)
    Q_PROPERTY(double x_465 READ pos_X465 WRITE setPos_X465 NOTIFY pos_X465Changed)
    Q_PROPERTY(double y_465 READ pos_Y465 WRITE setPos_Y465 NOTIFY pos_Y465Changed)
    Q_PROPERTY(double r_465 READ pos_R465 WRITE setPos_R465 NOTIFY pos_R465Changed)
    Q_PROPERTY(double x_466 READ pos_X466 WRITE setPos_X466 NOTIFY pos_X466Changed)
    Q_PROPERTY(double y_466 READ pos_Y466 WRITE setPos_Y466 NOTIFY pos_Y466Changed)
    Q_PROPERTY(double r_466 READ pos_R466 WRITE setPos_R466 NOTIFY pos_R466Changed)
    Q_PROPERTY(double x_467 READ pos_X467 WRITE setPos_X467 NOTIFY pos_X467Changed)
    Q_PROPERTY(double y_467 READ pos_Y467 WRITE setPos_Y467 NOTIFY pos_Y467Changed)
    Q_PROPERTY(double r_467 READ pos_R467 WRITE setPos_R467 NOTIFY pos_R467Changed)
    Q_PROPERTY(double x_468 READ pos_X468 WRITE setPos_X468 NOTIFY pos_X468Changed)
    Q_PROPERTY(double y_468 READ pos_Y468 WRITE setPos_Y468 NOTIFY pos_Y468Changed)
    Q_PROPERTY(double r_468 READ pos_R468 WRITE setPos_R468 NOTIFY pos_R468Changed)
    Q_PROPERTY(double x_469 READ pos_X469 WRITE setPos_X469 NOTIFY pos_X469Changed)
    Q_PROPERTY(double y_469 READ pos_Y469 WRITE setPos_Y469 NOTIFY pos_Y469Changed)
    Q_PROPERTY(double r_469 READ pos_R469 WRITE setPos_R469 NOTIFY pos_R469Changed)
    Q_PROPERTY(double x_470 READ pos_X470 WRITE setPos_X470 NOTIFY pos_X470Changed)
    Q_PROPERTY(double y_470 READ pos_Y470 WRITE setPos_Y470 NOTIFY pos_Y470Changed)
    Q_PROPERTY(double r_470 READ pos_R470 WRITE setPos_R470 NOTIFY pos_R470Changed)
    Q_PROPERTY(double x_471 READ pos_X471 WRITE setPos_X471 NOTIFY pos_X471Changed)
    Q_PROPERTY(double y_471 READ pos_Y471 WRITE setPos_Y471 NOTIFY pos_Y471Changed)
    Q_PROPERTY(double r_471 READ pos_R471 WRITE setPos_R471 NOTIFY pos_R471Changed)
    Q_PROPERTY(double x_472 READ pos_X472 WRITE setPos_X472 NOTIFY pos_X472Changed)
    Q_PROPERTY(double y_472 READ pos_Y472 WRITE setPos_Y472 NOTIFY pos_Y472Changed)
    Q_PROPERTY(double r_472 READ pos_R472 WRITE setPos_R472 NOTIFY pos_R472Changed)
    Q_PROPERTY(double x_473 READ pos_X473 WRITE setPos_X473 NOTIFY pos_X473Changed)
    Q_PROPERTY(double y_473 READ pos_Y473 WRITE setPos_Y473 NOTIFY pos_Y473Changed)
    Q_PROPERTY(double r_473 READ pos_R473 WRITE setPos_R473 NOTIFY pos_R473Changed)
    Q_PROPERTY(double x_474 READ pos_X474 WRITE setPos_X474 NOTIFY pos_X474Changed)
    Q_PROPERTY(double y_474 READ pos_Y474 WRITE setPos_Y474 NOTIFY pos_Y474Changed)
    Q_PROPERTY(double r_474 READ pos_R474 WRITE setPos_R474 NOTIFY pos_R474Changed)
    Q_PROPERTY(double x_475 READ pos_X475 WRITE setPos_X475 NOTIFY pos_X475Changed)
    Q_PROPERTY(double y_475 READ pos_Y475 WRITE setPos_Y475 NOTIFY pos_Y475Changed)
    Q_PROPERTY(double r_475 READ pos_R475 WRITE setPos_R475 NOTIFY pos_R475Changed)
    Q_PROPERTY(double x_476 READ pos_X476 WRITE setPos_X476 NOTIFY pos_X476Changed)
    Q_PROPERTY(double y_476 READ pos_Y476 WRITE setPos_Y476 NOTIFY pos_Y476Changed)
    Q_PROPERTY(double r_476 READ pos_R476 WRITE setPos_R476 NOTIFY pos_R476Changed)
    Q_PROPERTY(double x_477 READ pos_X477 WRITE setPos_X477 NOTIFY pos_X477Changed)
    Q_PROPERTY(double y_477 READ pos_Y477 WRITE setPos_Y477 NOTIFY pos_Y477Changed)
    Q_PROPERTY(double r_477 READ pos_R477 WRITE setPos_R477 NOTIFY pos_R477Changed)
    Q_PROPERTY(double x_478 READ pos_X478 WRITE setPos_X478 NOTIFY pos_X478Changed)
    Q_PROPERTY(double y_478 READ pos_Y478 WRITE setPos_Y478 NOTIFY pos_Y478Changed)
    Q_PROPERTY(double r_478 READ pos_R478 WRITE setPos_R478 NOTIFY pos_R478Changed)
    Q_PROPERTY(double x_479 READ pos_X479 WRITE setPos_X479 NOTIFY pos_X479Changed)
    Q_PROPERTY(double y_479 READ pos_Y479 WRITE setPos_Y479 NOTIFY pos_Y479Changed)
    Q_PROPERTY(double r_479 READ pos_R479 WRITE setPos_R479 NOTIFY pos_R479Changed)
    Q_PROPERTY(double x_480 READ pos_X480 WRITE setPos_X480 NOTIFY pos_X480Changed)
    Q_PROPERTY(double y_480 READ pos_Y480 WRITE setPos_Y480 NOTIFY pos_Y480Changed)
    Q_PROPERTY(double r_480 READ pos_R480 WRITE setPos_R480 NOTIFY pos_R480Changed)
    Q_PROPERTY(double x_481 READ pos_X481 WRITE setPos_X481 NOTIFY pos_X481Changed)
    Q_PROPERTY(double y_481 READ pos_Y481 WRITE setPos_Y481 NOTIFY pos_Y481Changed)
    Q_PROPERTY(double r_481 READ pos_R481 WRITE setPos_R481 NOTIFY pos_R481Changed)
    Q_PROPERTY(double x_482 READ pos_X482 WRITE setPos_X482 NOTIFY pos_X482Changed)
    Q_PROPERTY(double y_482 READ pos_Y482 WRITE setPos_Y482 NOTIFY pos_Y482Changed)
    Q_PROPERTY(double r_482 READ pos_R482 WRITE setPos_R482 NOTIFY pos_R482Changed)
    Q_PROPERTY(double x_483 READ pos_X483 WRITE setPos_X483 NOTIFY pos_X483Changed)
    Q_PROPERTY(double y_483 READ pos_Y483 WRITE setPos_Y483 NOTIFY pos_Y483Changed)
    Q_PROPERTY(double r_483 READ pos_R483 WRITE setPos_R483 NOTIFY pos_R483Changed)
    Q_PROPERTY(double x_484 READ pos_X484 WRITE setPos_X484 NOTIFY pos_X484Changed)
    Q_PROPERTY(double y_484 READ pos_Y484 WRITE setPos_Y484 NOTIFY pos_Y484Changed)
    Q_PROPERTY(double r_484 READ pos_R484 WRITE setPos_R484 NOTIFY pos_R484Changed)
    Q_PROPERTY(double x_485 READ pos_X485 WRITE setPos_X485 NOTIFY pos_X485Changed)
    Q_PROPERTY(double y_485 READ pos_Y485 WRITE setPos_Y485 NOTIFY pos_Y485Changed)
    Q_PROPERTY(double r_485 READ pos_R485 WRITE setPos_R485 NOTIFY pos_R485Changed)
    Q_PROPERTY(double x_486 READ pos_X486 WRITE setPos_X486 NOTIFY pos_X486Changed)
    Q_PROPERTY(double y_486 READ pos_Y486 WRITE setPos_Y486 NOTIFY pos_Y486Changed)
    Q_PROPERTY(double r_486 READ pos_R486 WRITE setPos_R486 NOTIFY pos_R486Changed)
    Q_PROPERTY(double x_487 READ pos_X487 WRITE setPos_X487 NOTIFY pos_X487Changed)
    Q_PROPERTY(double y_487 READ pos_Y487 WRITE setPos_Y487 NOTIFY pos_Y487Changed)
    Q_PROPERTY(double r_487 READ pos_R487 WRITE setPos_R487 NOTIFY pos_R487Changed)
    Q_PROPERTY(double x_488 READ pos_X488 WRITE setPos_X488 NOTIFY pos_X488Changed)
    Q_PROPERTY(double y_488 READ pos_Y488 WRITE setPos_Y488 NOTIFY pos_Y488Changed)
    Q_PROPERTY(double r_488 READ pos_R488 WRITE setPos_R488 NOTIFY pos_R488Changed)
    Q_PROPERTY(double x_489 READ pos_X489 WRITE setPos_X489 NOTIFY pos_X489Changed)
    Q_PROPERTY(double y_489 READ pos_Y489 WRITE setPos_Y489 NOTIFY pos_Y489Changed)
    Q_PROPERTY(double r_489 READ pos_R489 WRITE setPos_R489 NOTIFY pos_R489Changed)
    Q_PROPERTY(double x_490 READ pos_X490 WRITE setPos_X490 NOTIFY pos_X490Changed)
    Q_PROPERTY(double y_490 READ pos_Y490 WRITE setPos_Y490 NOTIFY pos_Y490Changed)
    Q_PROPERTY(double r_490 READ pos_R490 WRITE setPos_R490 NOTIFY pos_R490Changed)
    Q_PROPERTY(double x_491 READ pos_X491 WRITE setPos_X491 NOTIFY pos_X491Changed)
    Q_PROPERTY(double y_491 READ pos_Y491 WRITE setPos_Y491 NOTIFY pos_Y491Changed)
    Q_PROPERTY(double r_491 READ pos_R491 WRITE setPos_R491 NOTIFY pos_R491Changed)
    Q_PROPERTY(double x_492 READ pos_X492 WRITE setPos_X492 NOTIFY pos_X492Changed)
    Q_PROPERTY(double y_492 READ pos_Y492 WRITE setPos_Y492 NOTIFY pos_Y492Changed)
    Q_PROPERTY(double r_492 READ pos_R492 WRITE setPos_R492 NOTIFY pos_R492Changed)
    Q_PROPERTY(double x_493 READ pos_X493 WRITE setPos_X493 NOTIFY pos_X493Changed)
    Q_PROPERTY(double y_493 READ pos_Y493 WRITE setPos_Y493 NOTIFY pos_Y493Changed)
    Q_PROPERTY(double r_493 READ pos_R493 WRITE setPos_R493 NOTIFY pos_R493Changed)
    Q_PROPERTY(double x_494 READ pos_X494 WRITE setPos_X494 NOTIFY pos_X494Changed)
    Q_PROPERTY(double y_494 READ pos_Y494 WRITE setPos_Y494 NOTIFY pos_Y494Changed)
    Q_PROPERTY(double r_494 READ pos_R494 WRITE setPos_R494 NOTIFY pos_R494Changed)
    Q_PROPERTY(double x_495 READ pos_X495 WRITE setPos_X495 NOTIFY pos_X495Changed)
    Q_PROPERTY(double y_495 READ pos_Y495 WRITE setPos_Y495 NOTIFY pos_Y495Changed)
    Q_PROPERTY(double r_495 READ pos_R495 WRITE setPos_R495 NOTIFY pos_R495Changed)
    Q_PROPERTY(double x_496 READ pos_X496 WRITE setPos_X496 NOTIFY pos_X496Changed)
    Q_PROPERTY(double y_496 READ pos_Y496 WRITE setPos_Y496 NOTIFY pos_Y496Changed)
    Q_PROPERTY(double r_496 READ pos_R496 WRITE setPos_R496 NOTIFY pos_R496Changed)
    Q_PROPERTY(double x_497 READ pos_X497 WRITE setPos_X497 NOTIFY pos_X497Changed)
    Q_PROPERTY(double y_497 READ pos_Y497 WRITE setPos_Y497 NOTIFY pos_Y497Changed)
    Q_PROPERTY(double r_497 READ pos_R497 WRITE setPos_R497 NOTIFY pos_R497Changed)
    Q_PROPERTY(double x_498 READ pos_X498 WRITE setPos_X498 NOTIFY pos_X498Changed)
    Q_PROPERTY(double y_498 READ pos_Y498 WRITE setPos_Y498 NOTIFY pos_Y498Changed)
    Q_PROPERTY(double r_498 READ pos_R498 WRITE setPos_R498 NOTIFY pos_R498Changed)
    Q_PROPERTY(double x_499 READ pos_X499 WRITE setPos_X499 NOTIFY pos_X499Changed)
    Q_PROPERTY(double y_499 READ pos_Y499 WRITE setPos_Y499 NOTIFY pos_Y499Changed)
    Q_PROPERTY(double r_499 READ pos_R499 WRITE setPos_R499 NOTIFY pos_R499Changed)
    Q_PROPERTY(double x_500 READ pos_X500 WRITE setPos_X500 NOTIFY pos_X500Changed)
    Q_PROPERTY(double y_500 READ pos_Y500 WRITE setPos_Y500 NOTIFY pos_Y500Changed)
    Q_PROPERTY(double r_500 READ pos_R500 WRITE setPos_R500 NOTIFY pos_R500Changed)
    Q_PROPERTY(double x_501 READ pos_X501 WRITE setPos_X501 NOTIFY pos_X501Changed)
    Q_PROPERTY(double y_501 READ pos_Y501 WRITE setPos_Y501 NOTIFY pos_Y501Changed)
    Q_PROPERTY(double r_501 READ pos_R501 WRITE setPos_R501 NOTIFY pos_R501Changed)
    Q_PROPERTY(double x_502 READ pos_X502 WRITE setPos_X502 NOTIFY pos_X502Changed)
    Q_PROPERTY(double y_502 READ pos_Y502 WRITE setPos_Y502 NOTIFY pos_Y502Changed)
    Q_PROPERTY(double r_502 READ pos_R502 WRITE setPos_R502 NOTIFY pos_R502Changed)
    Q_PROPERTY(double x_503 READ pos_X503 WRITE setPos_X503 NOTIFY pos_X503Changed)
    Q_PROPERTY(double y_503 READ pos_Y503 WRITE setPos_Y503 NOTIFY pos_Y503Changed)
    Q_PROPERTY(double r_503 READ pos_R503 WRITE setPos_R503 NOTIFY pos_R503Changed)
    Q_PROPERTY(double x_504 READ pos_X504 WRITE setPos_X504 NOTIFY pos_X504Changed)
    Q_PROPERTY(double y_504 READ pos_Y504 WRITE setPos_Y504 NOTIFY pos_Y504Changed)
    Q_PROPERTY(double r_504 READ pos_R504 WRITE setPos_R504 NOTIFY pos_R504Changed)
    Q_PROPERTY(double x_505 READ pos_X505 WRITE setPos_X505 NOTIFY pos_X505Changed)
    Q_PROPERTY(double y_505 READ pos_Y505 WRITE setPos_Y505 NOTIFY pos_Y505Changed)
    Q_PROPERTY(double r_505 READ pos_R505 WRITE setPos_R505 NOTIFY pos_R505Changed)
    Q_PROPERTY(double x_506 READ pos_X506 WRITE setPos_X506 NOTIFY pos_X506Changed)
    Q_PROPERTY(double y_506 READ pos_Y506 WRITE setPos_Y506 NOTIFY pos_Y506Changed)
    Q_PROPERTY(double r_506 READ pos_R506 WRITE setPos_R506 NOTIFY pos_R506Changed)
    Q_PROPERTY(double x_507 READ pos_X507 WRITE setPos_X507 NOTIFY pos_X507Changed)
    Q_PROPERTY(double y_507 READ pos_Y507 WRITE setPos_Y507 NOTIFY pos_Y507Changed)
    Q_PROPERTY(double r_507 READ pos_R507 WRITE setPos_R507 NOTIFY pos_R507Changed)
    Q_PROPERTY(double x_508 READ pos_X508 WRITE setPos_X508 NOTIFY pos_X508Changed)
    Q_PROPERTY(double y_508 READ pos_Y508 WRITE setPos_Y508 NOTIFY pos_Y508Changed)
    Q_PROPERTY(double r_508 READ pos_R508 WRITE setPos_R508 NOTIFY pos_R508Changed)
    Q_PROPERTY(double x_509 READ pos_X509 WRITE setPos_X509 NOTIFY pos_X509Changed)
    Q_PROPERTY(double y_509 READ pos_Y509 WRITE setPos_Y509 NOTIFY pos_Y509Changed)
    Q_PROPERTY(double r_509 READ pos_R509 WRITE setPos_R509 NOTIFY pos_R509Changed)
    Q_PROPERTY(double x_510 READ pos_X510 WRITE setPos_X510 NOTIFY pos_X510Changed)
    Q_PROPERTY(double y_510 READ pos_Y510 WRITE setPos_Y510 NOTIFY pos_Y510Changed)
    Q_PROPERTY(double r_510 READ pos_R510 WRITE setPos_R510 NOTIFY pos_R510Changed)
    Q_PROPERTY(double x_511 READ pos_X511 WRITE setPos_X511 NOTIFY pos_X511Changed)
    Q_PROPERTY(double y_511 READ pos_Y511 WRITE setPos_Y511 NOTIFY pos_Y511Changed)
    Q_PROPERTY(double r_511 READ pos_R511 WRITE setPos_R511 NOTIFY pos_R511Changed)
    Q_PROPERTY(double x_512 READ pos_X512 WRITE setPos_X512 NOTIFY pos_X512Changed)
    Q_PROPERTY(double y_512 READ pos_Y512 WRITE setPos_Y512 NOTIFY pos_Y512Changed)
    Q_PROPERTY(double r_512 READ pos_R512 WRITE setPos_R512 NOTIFY pos_R512Changed)
    Q_PROPERTY(double x_513 READ pos_X513 WRITE setPos_X513 NOTIFY pos_X513Changed)
    Q_PROPERTY(double y_513 READ pos_Y513 WRITE setPos_Y513 NOTIFY pos_Y513Changed)
    Q_PROPERTY(double r_513 READ pos_R513 WRITE setPos_R513 NOTIFY pos_R513Changed)
    Q_PROPERTY(double x_514 READ pos_X514 WRITE setPos_X514 NOTIFY pos_X514Changed)
    Q_PROPERTY(double y_514 READ pos_Y514 WRITE setPos_Y514 NOTIFY pos_Y514Changed)
    Q_PROPERTY(double r_514 READ pos_R514 WRITE setPos_R514 NOTIFY pos_R514Changed)
    Q_PROPERTY(double x_515 READ pos_X515 WRITE setPos_X515 NOTIFY pos_X515Changed)
    Q_PROPERTY(double y_515 READ pos_Y515 WRITE setPos_Y515 NOTIFY pos_Y515Changed)
    Q_PROPERTY(double r_515 READ pos_R515 WRITE setPos_R515 NOTIFY pos_R515Changed)
    Q_PROPERTY(double x_516 READ pos_X516 WRITE setPos_X516 NOTIFY pos_X516Changed)
    Q_PROPERTY(double y_516 READ pos_Y516 WRITE setPos_Y516 NOTIFY pos_Y516Changed)
    Q_PROPERTY(double r_516 READ pos_R516 WRITE setPos_R516 NOTIFY pos_R516Changed)
    Q_PROPERTY(double x_517 READ pos_X517 WRITE setPos_X517 NOTIFY pos_X517Changed)
    Q_PROPERTY(double y_517 READ pos_Y517 WRITE setPos_Y517 NOTIFY pos_Y517Changed)
    Q_PROPERTY(double r_517 READ pos_R517 WRITE setPos_R517 NOTIFY pos_R517Changed)
    Q_PROPERTY(double x_518 READ pos_X518 WRITE setPos_X518 NOTIFY pos_X518Changed)
    Q_PROPERTY(double y_518 READ pos_Y518 WRITE setPos_Y518 NOTIFY pos_Y518Changed)
    Q_PROPERTY(double r_518 READ pos_R518 WRITE setPos_R518 NOTIFY pos_R518Changed)
    Q_PROPERTY(double x_519 READ pos_X519 WRITE setPos_X519 NOTIFY pos_X519Changed)
    Q_PROPERTY(double y_519 READ pos_Y519 WRITE setPos_Y519 NOTIFY pos_Y519Changed)
    Q_PROPERTY(double r_519 READ pos_R519 WRITE setPos_R519 NOTIFY pos_R519Changed)
    Q_PROPERTY(double x_520 READ pos_X520 WRITE setPos_X520 NOTIFY pos_X520Changed)
    Q_PROPERTY(double y_520 READ pos_Y520 WRITE setPos_Y520 NOTIFY pos_Y520Changed)
    Q_PROPERTY(double r_520 READ pos_R520 WRITE setPos_R520 NOTIFY pos_R520Changed)
    Q_PROPERTY(double x_521 READ pos_X521 WRITE setPos_X521 NOTIFY pos_X521Changed)
    Q_PROPERTY(double y_521 READ pos_Y521 WRITE setPos_Y521 NOTIFY pos_Y521Changed)
    Q_PROPERTY(double r_521 READ pos_R521 WRITE setPos_R521 NOTIFY pos_R521Changed)
    Q_PROPERTY(double x_522 READ pos_X522 WRITE setPos_X522 NOTIFY pos_X522Changed)
    Q_PROPERTY(double y_522 READ pos_Y522 WRITE setPos_Y522 NOTIFY pos_Y522Changed)
    Q_PROPERTY(double r_522 READ pos_R522 WRITE setPos_R522 NOTIFY pos_R522Changed)
    Q_PROPERTY(double x_523 READ pos_X523 WRITE setPos_X523 NOTIFY pos_X523Changed)
    Q_PROPERTY(double y_523 READ pos_Y523 WRITE setPos_Y523 NOTIFY pos_Y523Changed)
    Q_PROPERTY(double r_523 READ pos_R523 WRITE setPos_R523 NOTIFY pos_R523Changed)
    Q_PROPERTY(double x_524 READ pos_X524 WRITE setPos_X524 NOTIFY pos_X524Changed)
    Q_PROPERTY(double y_524 READ pos_Y524 WRITE setPos_Y524 NOTIFY pos_Y524Changed)
    Q_PROPERTY(double r_524 READ pos_R524 WRITE setPos_R524 NOTIFY pos_R524Changed)
    Q_PROPERTY(double x_525 READ pos_X525 WRITE setPos_X525 NOTIFY pos_X525Changed)
    Q_PROPERTY(double y_525 READ pos_Y525 WRITE setPos_Y525 NOTIFY pos_Y525Changed)
    Q_PROPERTY(double r_525 READ pos_R525 WRITE setPos_R525 NOTIFY pos_R525Changed)
    Q_PROPERTY(double x_526 READ pos_X526 WRITE setPos_X526 NOTIFY pos_X526Changed)
    Q_PROPERTY(double y_526 READ pos_Y526 WRITE setPos_Y526 NOTIFY pos_Y526Changed)
    Q_PROPERTY(double r_526 READ pos_R526 WRITE setPos_R526 NOTIFY pos_R526Changed)
    Q_PROPERTY(double x_527 READ pos_X527 WRITE setPos_X527 NOTIFY pos_X527Changed)
    Q_PROPERTY(double y_527 READ pos_Y527 WRITE setPos_Y527 NOTIFY pos_Y527Changed)
    Q_PROPERTY(double r_527 READ pos_R527 WRITE setPos_R527 NOTIFY pos_R527Changed)
    Q_PROPERTY(double x_528 READ pos_X528 WRITE setPos_X528 NOTIFY pos_X528Changed)
    Q_PROPERTY(double y_528 READ pos_Y528 WRITE setPos_Y528 NOTIFY pos_Y528Changed)
    Q_PROPERTY(double r_528 READ pos_R528 WRITE setPos_R528 NOTIFY pos_R528Changed)
    Q_PROPERTY(double x_529 READ pos_X529 WRITE setPos_X529 NOTIFY pos_X529Changed)
    Q_PROPERTY(double y_529 READ pos_Y529 WRITE setPos_Y529 NOTIFY pos_Y529Changed)
    Q_PROPERTY(double r_529 READ pos_R529 WRITE setPos_R529 NOTIFY pos_R529Changed)
    Q_PROPERTY(double x_530 READ pos_X530 WRITE setPos_X530 NOTIFY pos_X530Changed)
    Q_PROPERTY(double y_530 READ pos_Y530 WRITE setPos_Y530 NOTIFY pos_Y530Changed)
    Q_PROPERTY(double r_530 READ pos_R530 WRITE setPos_R530 NOTIFY pos_R530Changed)
    Q_PROPERTY(double x_531 READ pos_X531 WRITE setPos_X531 NOTIFY pos_X531Changed)
    Q_PROPERTY(double y_531 READ pos_Y531 WRITE setPos_Y531 NOTIFY pos_Y531Changed)
    Q_PROPERTY(double r_531 READ pos_R531 WRITE setPos_R531 NOTIFY pos_R531Changed)
    Q_PROPERTY(double x_532 READ pos_X532 WRITE setPos_X532 NOTIFY pos_X532Changed)
    Q_PROPERTY(double y_532 READ pos_Y532 WRITE setPos_Y532 NOTIFY pos_Y532Changed)
    Q_PROPERTY(double r_532 READ pos_R532 WRITE setPos_R532 NOTIFY pos_R532Changed)
    Q_PROPERTY(double x_533 READ pos_X533 WRITE setPos_X533 NOTIFY pos_X533Changed)
    Q_PROPERTY(double y_533 READ pos_Y533 WRITE setPos_Y533 NOTIFY pos_Y533Changed)
    Q_PROPERTY(double r_533 READ pos_R533 WRITE setPos_R533 NOTIFY pos_R533Changed)
    Q_PROPERTY(double x_534 READ pos_X534 WRITE setPos_X534 NOTIFY pos_X534Changed)
    Q_PROPERTY(double y_534 READ pos_Y534 WRITE setPos_Y534 NOTIFY pos_Y534Changed)
    Q_PROPERTY(double r_534 READ pos_R534 WRITE setPos_R534 NOTIFY pos_R534Changed)
    Q_PROPERTY(double x_535 READ pos_X535 WRITE setPos_X535 NOTIFY pos_X535Changed)
    Q_PROPERTY(double y_535 READ pos_Y535 WRITE setPos_Y535 NOTIFY pos_Y535Changed)
    Q_PROPERTY(double r_535 READ pos_R535 WRITE setPos_R535 NOTIFY pos_R535Changed)
    Q_PROPERTY(double x_536 READ pos_X536 WRITE setPos_X536 NOTIFY pos_X536Changed)
    Q_PROPERTY(double y_536 READ pos_Y536 WRITE setPos_Y536 NOTIFY pos_Y536Changed)
    Q_PROPERTY(double r_536 READ pos_R536 WRITE setPos_R536 NOTIFY pos_R536Changed)
    Q_PROPERTY(double x_537 READ pos_X537 WRITE setPos_X537 NOTIFY pos_X537Changed)
    Q_PROPERTY(double y_537 READ pos_Y537 WRITE setPos_Y537 NOTIFY pos_Y537Changed)
    Q_PROPERTY(double r_537 READ pos_R537 WRITE setPos_R537 NOTIFY pos_R537Changed)
    Q_PROPERTY(double x_538 READ pos_X538 WRITE setPos_X538 NOTIFY pos_X538Changed)
    Q_PROPERTY(double y_538 READ pos_Y538 WRITE setPos_Y538 NOTIFY pos_Y538Changed)
    Q_PROPERTY(double r_538 READ pos_R538 WRITE setPos_R538 NOTIFY pos_R538Changed)
    Q_PROPERTY(double x_539 READ pos_X539 WRITE setPos_X539 NOTIFY pos_X539Changed)
    Q_PROPERTY(double y_539 READ pos_Y539 WRITE setPos_Y539 NOTIFY pos_Y539Changed)
    Q_PROPERTY(double r_539 READ pos_R539 WRITE setPos_R539 NOTIFY pos_R539Changed)
    Q_PROPERTY(double x_540 READ pos_X540 WRITE setPos_X540 NOTIFY pos_X540Changed)
    Q_PROPERTY(double y_540 READ pos_Y540 WRITE setPos_Y540 NOTIFY pos_Y540Changed)
    Q_PROPERTY(double r_540 READ pos_R540 WRITE setPos_R540 NOTIFY pos_R540Changed)
    Q_PROPERTY(double x_541 READ pos_X541 WRITE setPos_X541 NOTIFY pos_X541Changed)
    Q_PROPERTY(double y_541 READ pos_Y541 WRITE setPos_Y541 NOTIFY pos_Y541Changed)
    Q_PROPERTY(double r_541 READ pos_R541 WRITE setPos_R541 NOTIFY pos_R541Changed)
    Q_PROPERTY(double x_542 READ pos_X542 WRITE setPos_X542 NOTIFY pos_X542Changed)
    Q_PROPERTY(double y_542 READ pos_Y542 WRITE setPos_Y542 NOTIFY pos_Y542Changed)
    Q_PROPERTY(double r_542 READ pos_R542 WRITE setPos_R542 NOTIFY pos_R542Changed)
    Q_PROPERTY(double x_543 READ pos_X543 WRITE setPos_X543 NOTIFY pos_X543Changed)
    Q_PROPERTY(double y_543 READ pos_Y543 WRITE setPos_Y543 NOTIFY pos_Y543Changed)
    Q_PROPERTY(double r_543 READ pos_R543 WRITE setPos_R543 NOTIFY pos_R543Changed)
    Q_PROPERTY(double x_544 READ pos_X544 WRITE setPos_X544 NOTIFY pos_X544Changed)
    Q_PROPERTY(double y_544 READ pos_Y544 WRITE setPos_Y544 NOTIFY pos_Y544Changed)
    Q_PROPERTY(double r_544 READ pos_R544 WRITE setPos_R544 NOTIFY pos_R544Changed)
    Q_PROPERTY(double x_545 READ pos_X545 WRITE setPos_X545 NOTIFY pos_X545Changed)
    Q_PROPERTY(double y_545 READ pos_Y545 WRITE setPos_Y545 NOTIFY pos_Y545Changed)
    Q_PROPERTY(double r_545 READ pos_R545 WRITE setPos_R545 NOTIFY pos_R545Changed)
    Q_PROPERTY(double x_546 READ pos_X546 WRITE setPos_X546 NOTIFY pos_X546Changed)
    Q_PROPERTY(double y_546 READ pos_Y546 WRITE setPos_Y546 NOTIFY pos_Y546Changed)
    Q_PROPERTY(double r_546 READ pos_R546 WRITE setPos_R546 NOTIFY pos_R546Changed)
    Q_PROPERTY(double x_547 READ pos_X547 WRITE setPos_X547 NOTIFY pos_X547Changed)
    Q_PROPERTY(double y_547 READ pos_Y547 WRITE setPos_Y547 NOTIFY pos_Y547Changed)
    Q_PROPERTY(double r_547 READ pos_R547 WRITE setPos_R547 NOTIFY pos_R547Changed)
    Q_PROPERTY(double x_548 READ pos_X548 WRITE setPos_X548 NOTIFY pos_X548Changed)
    Q_PROPERTY(double y_548 READ pos_Y548 WRITE setPos_Y548 NOTIFY pos_Y548Changed)
    Q_PROPERTY(double r_548 READ pos_R548 WRITE setPos_R548 NOTIFY pos_R548Changed)
    Q_PROPERTY(double x_549 READ pos_X549 WRITE setPos_X549 NOTIFY pos_X549Changed)
    Q_PROPERTY(double y_549 READ pos_Y549 WRITE setPos_Y549 NOTIFY pos_Y549Changed)
    Q_PROPERTY(double r_549 READ pos_R549 WRITE setPos_R549 NOTIFY pos_R549Changed)
    Q_PROPERTY(double x_550 READ pos_X550 WRITE setPos_X550 NOTIFY pos_X550Changed)
    Q_PROPERTY(double y_550 READ pos_Y550 WRITE setPos_Y550 NOTIFY pos_Y550Changed)
    Q_PROPERTY(double r_550 READ pos_R550 WRITE setPos_R550 NOTIFY pos_R550Changed)
    Q_PROPERTY(double x_551 READ pos_X551 WRITE setPos_X551 NOTIFY pos_X551Changed)
    Q_PROPERTY(double y_551 READ pos_Y551 WRITE setPos_Y551 NOTIFY pos_Y551Changed)
    Q_PROPERTY(double r_551 READ pos_R551 WRITE setPos_R551 NOTIFY pos_R551Changed)
    Q_PROPERTY(double x_552 READ pos_X552 WRITE setPos_X552 NOTIFY pos_X552Changed)
    Q_PROPERTY(double y_552 READ pos_Y552 WRITE setPos_Y552 NOTIFY pos_Y552Changed)
    Q_PROPERTY(double r_552 READ pos_R552 WRITE setPos_R552 NOTIFY pos_R552Changed)
    Q_PROPERTY(double x_553 READ pos_X553 WRITE setPos_X553 NOTIFY pos_X553Changed)
    Q_PROPERTY(double y_553 READ pos_Y553 WRITE setPos_Y553 NOTIFY pos_Y553Changed)
    Q_PROPERTY(double r_553 READ pos_R553 WRITE setPos_R553 NOTIFY pos_R553Changed)
    Q_PROPERTY(double x_554 READ pos_X554 WRITE setPos_X554 NOTIFY pos_X554Changed)
    Q_PROPERTY(double y_554 READ pos_Y554 WRITE setPos_Y554 NOTIFY pos_Y554Changed)
    Q_PROPERTY(double r_554 READ pos_R554 WRITE setPos_R554 NOTIFY pos_R554Changed)
    Q_PROPERTY(double x_555 READ pos_X555 WRITE setPos_X555 NOTIFY pos_X555Changed)
    Q_PROPERTY(double y_555 READ pos_Y555 WRITE setPos_Y555 NOTIFY pos_Y555Changed)
    Q_PROPERTY(double r_555 READ pos_R555 WRITE setPos_R555 NOTIFY pos_R555Changed)
    Q_PROPERTY(double x_556 READ pos_X556 WRITE setPos_X556 NOTIFY pos_X556Changed)
    Q_PROPERTY(double y_556 READ pos_Y556 WRITE setPos_Y556 NOTIFY pos_Y556Changed)
    Q_PROPERTY(double r_556 READ pos_R556 WRITE setPos_R556 NOTIFY pos_R556Changed)
    Q_PROPERTY(double x_557 READ pos_X557 WRITE setPos_X557 NOTIFY pos_X557Changed)
    Q_PROPERTY(double y_557 READ pos_Y557 WRITE setPos_Y557 NOTIFY pos_Y557Changed)
    Q_PROPERTY(double r_557 READ pos_R557 WRITE setPos_R557 NOTIFY pos_R557Changed)
    Q_PROPERTY(double x_558 READ pos_X558 WRITE setPos_X558 NOTIFY pos_X558Changed)
    Q_PROPERTY(double y_558 READ pos_Y558 WRITE setPos_Y558 NOTIFY pos_Y558Changed)
    Q_PROPERTY(double r_558 READ pos_R558 WRITE setPos_R558 NOTIFY pos_R558Changed)
    Q_PROPERTY(double x_559 READ pos_X559 WRITE setPos_X559 NOTIFY pos_X559Changed)
    Q_PROPERTY(double y_559 READ pos_Y559 WRITE setPos_Y559 NOTIFY pos_Y559Changed)
    Q_PROPERTY(double r_559 READ pos_R559 WRITE setPos_R559 NOTIFY pos_R559Changed)
    Q_PROPERTY(double x_560 READ pos_X560 WRITE setPos_X560 NOTIFY pos_X560Changed)
    Q_PROPERTY(double y_560 READ pos_Y560 WRITE setPos_Y560 NOTIFY pos_Y560Changed)
    Q_PROPERTY(double r_560 READ pos_R560 WRITE setPos_R560 NOTIFY pos_R560Changed)
    Q_PROPERTY(double x_561 READ pos_X561 WRITE setPos_X561 NOTIFY pos_X561Changed)
    Q_PROPERTY(double y_561 READ pos_Y561 WRITE setPos_Y561 NOTIFY pos_Y561Changed)
    Q_PROPERTY(double r_561 READ pos_R561 WRITE setPos_R561 NOTIFY pos_R561Changed)
    Q_PROPERTY(double x_562 READ pos_X562 WRITE setPos_X562 NOTIFY pos_X562Changed)
    Q_PROPERTY(double y_562 READ pos_Y562 WRITE setPos_Y562 NOTIFY pos_Y562Changed)
    Q_PROPERTY(double r_562 READ pos_R562 WRITE setPos_R562 NOTIFY pos_R562Changed)
    Q_PROPERTY(double x_563 READ pos_X563 WRITE setPos_X563 NOTIFY pos_X563Changed)
    Q_PROPERTY(double y_563 READ pos_Y563 WRITE setPos_Y563 NOTIFY pos_Y563Changed)
    Q_PROPERTY(double r_563 READ pos_R563 WRITE setPos_R563 NOTIFY pos_R563Changed)
    Q_PROPERTY(double x_564 READ pos_X564 WRITE setPos_X564 NOTIFY pos_X564Changed)
    Q_PROPERTY(double y_564 READ pos_Y564 WRITE setPos_Y564 NOTIFY pos_Y564Changed)
    Q_PROPERTY(double r_564 READ pos_R564 WRITE setPos_R564 NOTIFY pos_R564Changed)
    Q_PROPERTY(double x_565 READ pos_X565 WRITE setPos_X565 NOTIFY pos_X565Changed)
    Q_PROPERTY(double y_565 READ pos_Y565 WRITE setPos_Y565 NOTIFY pos_Y565Changed)
    Q_PROPERTY(double r_565 READ pos_R565 WRITE setPos_R565 NOTIFY pos_R565Changed)
    Q_PROPERTY(double x_566 READ pos_X566 WRITE setPos_X566 NOTIFY pos_X566Changed)
    Q_PROPERTY(double y_566 READ pos_Y566 WRITE setPos_Y566 NOTIFY pos_Y566Changed)
    Q_PROPERTY(double r_566 READ pos_R566 WRITE setPos_R566 NOTIFY pos_R566Changed)
    Q_PROPERTY(double x_567 READ pos_X567 WRITE setPos_X567 NOTIFY pos_X567Changed)
    Q_PROPERTY(double y_567 READ pos_Y567 WRITE setPos_Y567 NOTIFY pos_Y567Changed)
    Q_PROPERTY(double r_567 READ pos_R567 WRITE setPos_R567 NOTIFY pos_R567Changed)
    Q_PROPERTY(double x_568 READ pos_X568 WRITE setPos_X568 NOTIFY pos_X568Changed)
    Q_PROPERTY(double y_568 READ pos_Y568 WRITE setPos_Y568 NOTIFY pos_Y568Changed)
    Q_PROPERTY(double r_568 READ pos_R568 WRITE setPos_R568 NOTIFY pos_R568Changed)
    Q_PROPERTY(double x_569 READ pos_X569 WRITE setPos_X569 NOTIFY pos_X569Changed)
    Q_PROPERTY(double y_569 READ pos_Y569 WRITE setPos_Y569 NOTIFY pos_Y569Changed)
    Q_PROPERTY(double r_569 READ pos_R569 WRITE setPos_R569 NOTIFY pos_R569Changed)
    Q_PROPERTY(double x_570 READ pos_X570 WRITE setPos_X570 NOTIFY pos_X570Changed)
    Q_PROPERTY(double y_570 READ pos_Y570 WRITE setPos_Y570 NOTIFY pos_Y570Changed)
    Q_PROPERTY(double r_570 READ pos_R570 WRITE setPos_R570 NOTIFY pos_R570Changed)
    Q_PROPERTY(double x_571 READ pos_X571 WRITE setPos_X571 NOTIFY pos_X571Changed)
    Q_PROPERTY(double y_571 READ pos_Y571 WRITE setPos_Y571 NOTIFY pos_Y571Changed)
    Q_PROPERTY(double r_571 READ pos_R571 WRITE setPos_R571 NOTIFY pos_R571Changed)
    Q_PROPERTY(double x_572 READ pos_X572 WRITE setPos_X572 NOTIFY pos_X572Changed)
    Q_PROPERTY(double y_572 READ pos_Y572 WRITE setPos_Y572 NOTIFY pos_Y572Changed)
    Q_PROPERTY(double r_572 READ pos_R572 WRITE setPos_R572 NOTIFY pos_R572Changed)
    Q_PROPERTY(double x_573 READ pos_X573 WRITE setPos_X573 NOTIFY pos_X573Changed)
    Q_PROPERTY(double y_573 READ pos_Y573 WRITE setPos_Y573 NOTIFY pos_Y573Changed)
    Q_PROPERTY(double r_573 READ pos_R573 WRITE setPos_R573 NOTIFY pos_R573Changed)
    Q_PROPERTY(double x_574 READ pos_X574 WRITE setPos_X574 NOTIFY pos_X574Changed)
    Q_PROPERTY(double y_574 READ pos_Y574 WRITE setPos_Y574 NOTIFY pos_Y574Changed)
    Q_PROPERTY(double r_574 READ pos_R574 WRITE setPos_R574 NOTIFY pos_R574Changed)
    Q_PROPERTY(double x_575 READ pos_X575 WRITE setPos_X575 NOTIFY pos_X575Changed)
    Q_PROPERTY(double y_575 READ pos_Y575 WRITE setPos_Y575 NOTIFY pos_Y575Changed)
    Q_PROPERTY(double r_575 READ pos_R575 WRITE setPos_R575 NOTIFY pos_R575Changed)
    Q_PROPERTY(double x_576 READ pos_X576 WRITE setPos_X576 NOTIFY pos_X576Changed)
    Q_PROPERTY(double y_576 READ pos_Y576 WRITE setPos_Y576 NOTIFY pos_Y576Changed)
    Q_PROPERTY(double r_576 READ pos_R576 WRITE setPos_R576 NOTIFY pos_R576Changed)
    Q_PROPERTY(double x_577 READ pos_X577 WRITE setPos_X577 NOTIFY pos_X577Changed)
    Q_PROPERTY(double y_577 READ pos_Y577 WRITE setPos_Y577 NOTIFY pos_Y577Changed)
    Q_PROPERTY(double r_577 READ pos_R577 WRITE setPos_R577 NOTIFY pos_R577Changed)
    Q_PROPERTY(double x_578 READ pos_X578 WRITE setPos_X578 NOTIFY pos_X578Changed)
    Q_PROPERTY(double y_578 READ pos_Y578 WRITE setPos_Y578 NOTIFY pos_Y578Changed)
    Q_PROPERTY(double r_578 READ pos_R578 WRITE setPos_R578 NOTIFY pos_R578Changed)
    Q_PROPERTY(double x_579 READ pos_X579 WRITE setPos_X579 NOTIFY pos_X579Changed)
    Q_PROPERTY(double y_579 READ pos_Y579 WRITE setPos_Y579 NOTIFY pos_Y579Changed)
    Q_PROPERTY(double r_579 READ pos_R579 WRITE setPos_R579 NOTIFY pos_R579Changed)
    Q_PROPERTY(double x_580 READ pos_X580 WRITE setPos_X580 NOTIFY pos_X580Changed)
    Q_PROPERTY(double y_580 READ pos_Y580 WRITE setPos_Y580 NOTIFY pos_Y580Changed)
    Q_PROPERTY(double r_580 READ pos_R580 WRITE setPos_R580 NOTIFY pos_R580Changed)
    Q_PROPERTY(double x_581 READ pos_X581 WRITE setPos_X581 NOTIFY pos_X581Changed)
    Q_PROPERTY(double y_581 READ pos_Y581 WRITE setPos_Y581 NOTIFY pos_Y581Changed)
    Q_PROPERTY(double r_581 READ pos_R581 WRITE setPos_R581 NOTIFY pos_R581Changed)
    Q_PROPERTY(double x_582 READ pos_X582 WRITE setPos_X582 NOTIFY pos_X582Changed)
    Q_PROPERTY(double y_582 READ pos_Y582 WRITE setPos_Y582 NOTIFY pos_Y582Changed)
    Q_PROPERTY(double r_582 READ pos_R582 WRITE setPos_R582 NOTIFY pos_R582Changed)
    Q_PROPERTY(double x_583 READ pos_X583 WRITE setPos_X583 NOTIFY pos_X583Changed)
    Q_PROPERTY(double y_583 READ pos_Y583 WRITE setPos_Y583 NOTIFY pos_Y583Changed)
    Q_PROPERTY(double r_583 READ pos_R583 WRITE setPos_R583 NOTIFY pos_R583Changed)
    Q_PROPERTY(double x_584 READ pos_X584 WRITE setPos_X584 NOTIFY pos_X584Changed)
    Q_PROPERTY(double y_584 READ pos_Y584 WRITE setPos_Y584 NOTIFY pos_Y584Changed)
    Q_PROPERTY(double r_584 READ pos_R584 WRITE setPos_R584 NOTIFY pos_R584Changed)
    Q_PROPERTY(double x_585 READ pos_X585 WRITE setPos_X585 NOTIFY pos_X585Changed)
    Q_PROPERTY(double y_585 READ pos_Y585 WRITE setPos_Y585 NOTIFY pos_Y585Changed)
    Q_PROPERTY(double r_585 READ pos_R585 WRITE setPos_R585 NOTIFY pos_R585Changed)
    Q_PROPERTY(double x_586 READ pos_X586 WRITE setPos_X586 NOTIFY pos_X586Changed)
    Q_PROPERTY(double y_586 READ pos_Y586 WRITE setPos_Y586 NOTIFY pos_Y586Changed)
    Q_PROPERTY(double r_586 READ pos_R586 WRITE setPos_R586 NOTIFY pos_R586Changed)
    Q_PROPERTY(double x_587 READ pos_X587 WRITE setPos_X587 NOTIFY pos_X587Changed)
    Q_PROPERTY(double y_587 READ pos_Y587 WRITE setPos_Y587 NOTIFY pos_Y587Changed)
    Q_PROPERTY(double r_587 READ pos_R587 WRITE setPos_R587 NOTIFY pos_R587Changed)
    Q_PROPERTY(double x_588 READ pos_X588 WRITE setPos_X588 NOTIFY pos_X588Changed)
    Q_PROPERTY(double y_588 READ pos_Y588 WRITE setPos_Y588 NOTIFY pos_Y588Changed)
    Q_PROPERTY(double r_588 READ pos_R588 WRITE setPos_R588 NOTIFY pos_R588Changed)
    Q_PROPERTY(double x_589 READ pos_X589 WRITE setPos_X589 NOTIFY pos_X589Changed)
    Q_PROPERTY(double y_589 READ pos_Y589 WRITE setPos_Y589 NOTIFY pos_Y589Changed)
    Q_PROPERTY(double r_589 READ pos_R589 WRITE setPos_R589 NOTIFY pos_R589Changed)
    Q_PROPERTY(double x_590 READ pos_X590 WRITE setPos_X590 NOTIFY pos_X590Changed)
    Q_PROPERTY(double y_590 READ pos_Y590 WRITE setPos_Y590 NOTIFY pos_Y590Changed)
    Q_PROPERTY(double r_590 READ pos_R590 WRITE setPos_R590 NOTIFY pos_R590Changed)
    Q_PROPERTY(double x_591 READ pos_X591 WRITE setPos_X591 NOTIFY pos_X591Changed)
    Q_PROPERTY(double y_591 READ pos_Y591 WRITE setPos_Y591 NOTIFY pos_Y591Changed)
    Q_PROPERTY(double r_591 READ pos_R591 WRITE setPos_R591 NOTIFY pos_R591Changed)
    Q_PROPERTY(double x_592 READ pos_X592 WRITE setPos_X592 NOTIFY pos_X592Changed)
    Q_PROPERTY(double y_592 READ pos_Y592 WRITE setPos_Y592 NOTIFY pos_Y592Changed)
    Q_PROPERTY(double r_592 READ pos_R592 WRITE setPos_R592 NOTIFY pos_R592Changed)
    Q_PROPERTY(double x_593 READ pos_X593 WRITE setPos_X593 NOTIFY pos_X593Changed)
    Q_PROPERTY(double y_593 READ pos_Y593 WRITE setPos_Y593 NOTIFY pos_Y593Changed)
    Q_PROPERTY(double r_593 READ pos_R593 WRITE setPos_R593 NOTIFY pos_R593Changed)
    Q_PROPERTY(double x_594 READ pos_X594 WRITE setPos_X594 NOTIFY pos_X594Changed)
    Q_PROPERTY(double y_594 READ pos_Y594 WRITE setPos_Y594 NOTIFY pos_Y594Changed)
    Q_PROPERTY(double r_594 READ pos_R594 WRITE setPos_R594 NOTIFY pos_R594Changed)
    Q_PROPERTY(double x_595 READ pos_X595 WRITE setPos_X595 NOTIFY pos_X595Changed)
    Q_PROPERTY(double y_595 READ pos_Y595 WRITE setPos_Y595 NOTIFY pos_Y595Changed)
    Q_PROPERTY(double r_595 READ pos_R595 WRITE setPos_R595 NOTIFY pos_R595Changed)
    Q_PROPERTY(double x_596 READ pos_X596 WRITE setPos_X596 NOTIFY pos_X596Changed)
    Q_PROPERTY(double y_596 READ pos_Y596 WRITE setPos_Y596 NOTIFY pos_Y596Changed)
    Q_PROPERTY(double r_596 READ pos_R596 WRITE setPos_R596 NOTIFY pos_R596Changed)
    Q_PROPERTY(double x_597 READ pos_X597 WRITE setPos_X597 NOTIFY pos_X597Changed)
    Q_PROPERTY(double y_597 READ pos_Y597 WRITE setPos_Y597 NOTIFY pos_Y597Changed)
    Q_PROPERTY(double r_597 READ pos_R597 WRITE setPos_R597 NOTIFY pos_R597Changed)
    Q_PROPERTY(double x_598 READ pos_X598 WRITE setPos_X598 NOTIFY pos_X598Changed)
    Q_PROPERTY(double y_598 READ pos_Y598 WRITE setPos_Y598 NOTIFY pos_Y598Changed)
    Q_PROPERTY(double r_598 READ pos_R598 WRITE setPos_R598 NOTIFY pos_R598Changed)
    Q_PROPERTY(double x_599 READ pos_X599 WRITE setPos_X599 NOTIFY pos_X599Changed)
    Q_PROPERTY(double y_599 READ pos_Y599 WRITE setPos_Y599 NOTIFY pos_Y599Changed)
    Q_PROPERTY(double r_599 READ pos_R599 WRITE setPos_R599 NOTIFY pos_R599Changed)
    Q_PROPERTY(double x_600 READ pos_X600 WRITE setPos_X600 NOTIFY pos_X600Changed)
    Q_PROPERTY(double y_600 READ pos_Y600 WRITE setPos_Y600 NOTIFY pos_Y600Changed)
    Q_PROPERTY(double r_600 READ pos_R600 WRITE setPos_R600 NOTIFY pos_R600Changed)
    Q_PROPERTY(double x_601 READ pos_X601 WRITE setPos_X601 NOTIFY pos_X601Changed)
    Q_PROPERTY(double y_601 READ pos_Y601 WRITE setPos_Y601 NOTIFY pos_Y601Changed)
    Q_PROPERTY(double r_601 READ pos_R601 WRITE setPos_R601 NOTIFY pos_R601Changed)
    Q_PROPERTY(double x_602 READ pos_X602 WRITE setPos_X602 NOTIFY pos_X602Changed)
    Q_PROPERTY(double y_602 READ pos_Y602 WRITE setPos_Y602 NOTIFY pos_Y602Changed)
    Q_PROPERTY(double r_602 READ pos_R602 WRITE setPos_R602 NOTIFY pos_R602Changed)
    Q_PROPERTY(double x_603 READ pos_X603 WRITE setPos_X603 NOTIFY pos_X603Changed)
    Q_PROPERTY(double y_603 READ pos_Y603 WRITE setPos_Y603 NOTIFY pos_Y603Changed)
    Q_PROPERTY(double r_603 READ pos_R603 WRITE setPos_R603 NOTIFY pos_R603Changed)
    Q_PROPERTY(double x_604 READ pos_X604 WRITE setPos_X604 NOTIFY pos_X604Changed)
    Q_PROPERTY(double y_604 READ pos_Y604 WRITE setPos_Y604 NOTIFY pos_Y604Changed)
    Q_PROPERTY(double r_604 READ pos_R604 WRITE setPos_R604 NOTIFY pos_R604Changed)
    Q_PROPERTY(double x_605 READ pos_X605 WRITE setPos_X605 NOTIFY pos_X605Changed)
    Q_PROPERTY(double y_605 READ pos_Y605 WRITE setPos_Y605 NOTIFY pos_Y605Changed)
    Q_PROPERTY(double r_605 READ pos_R605 WRITE setPos_R605 NOTIFY pos_R605Changed)
    Q_PROPERTY(double x_606 READ pos_X606 WRITE setPos_X606 NOTIFY pos_X606Changed)
    Q_PROPERTY(double y_606 READ pos_Y606 WRITE setPos_Y606 NOTIFY pos_Y606Changed)
    Q_PROPERTY(double r_606 READ pos_R606 WRITE setPos_R606 NOTIFY pos_R606Changed)
    Q_PROPERTY(double x_607 READ pos_X607 WRITE setPos_X607 NOTIFY pos_X607Changed)
    Q_PROPERTY(double y_607 READ pos_Y607 WRITE setPos_Y607 NOTIFY pos_Y607Changed)
    Q_PROPERTY(double r_607 READ pos_R607 WRITE setPos_R607 NOTIFY pos_R607Changed)
    Q_PROPERTY(double x_608 READ pos_X608 WRITE setPos_X608 NOTIFY pos_X608Changed)
    Q_PROPERTY(double y_608 READ pos_Y608 WRITE setPos_Y608 NOTIFY pos_Y608Changed)
    Q_PROPERTY(double r_608 READ pos_R608 WRITE setPos_R608 NOTIFY pos_R608Changed)
    Q_PROPERTY(double x_609 READ pos_X609 WRITE setPos_X609 NOTIFY pos_X609Changed)
    Q_PROPERTY(double y_609 READ pos_Y609 WRITE setPos_Y609 NOTIFY pos_Y609Changed)
    Q_PROPERTY(double r_609 READ pos_R609 WRITE setPos_R609 NOTIFY pos_R609Changed)
    Q_PROPERTY(double x_610 READ pos_X610 WRITE setPos_X610 NOTIFY pos_X610Changed)
    Q_PROPERTY(double y_610 READ pos_Y610 WRITE setPos_Y610 NOTIFY pos_Y610Changed)
    Q_PROPERTY(double r_610 READ pos_R610 WRITE setPos_R610 NOTIFY pos_R610Changed)
    Q_PROPERTY(double x_611 READ pos_X611 WRITE setPos_X611 NOTIFY pos_X611Changed)
    Q_PROPERTY(double y_611 READ pos_Y611 WRITE setPos_Y611 NOTIFY pos_Y611Changed)
    Q_PROPERTY(double r_611 READ pos_R611 WRITE setPos_R611 NOTIFY pos_R611Changed)
    Q_PROPERTY(double x_612 READ pos_X612 WRITE setPos_X612 NOTIFY pos_X612Changed)
    Q_PROPERTY(double y_612 READ pos_Y612 WRITE setPos_Y612 NOTIFY pos_Y612Changed)
    Q_PROPERTY(double r_612 READ pos_R612 WRITE setPos_R612 NOTIFY pos_R612Changed)
    Q_PROPERTY(double x_613 READ pos_X613 WRITE setPos_X613 NOTIFY pos_X613Changed)
    Q_PROPERTY(double y_613 READ pos_Y613 WRITE setPos_Y613 NOTIFY pos_Y613Changed)
    Q_PROPERTY(double r_613 READ pos_R613 WRITE setPos_R613 NOTIFY pos_R613Changed)
    Q_PROPERTY(double x_614 READ pos_X614 WRITE setPos_X614 NOTIFY pos_X614Changed)
    Q_PROPERTY(double y_614 READ pos_Y614 WRITE setPos_Y614 NOTIFY pos_Y614Changed)
    Q_PROPERTY(double r_614 READ pos_R614 WRITE setPos_R614 NOTIFY pos_R614Changed)
    Q_PROPERTY(double x_615 READ pos_X615 WRITE setPos_X615 NOTIFY pos_X615Changed)
    Q_PROPERTY(double y_615 READ pos_Y615 WRITE setPos_Y615 NOTIFY pos_Y615Changed)
    Q_PROPERTY(double r_615 READ pos_R615 WRITE setPos_R615 NOTIFY pos_R615Changed)
    Q_PROPERTY(double x_616 READ pos_X616 WRITE setPos_X616 NOTIFY pos_X616Changed)
    Q_PROPERTY(double y_616 READ pos_Y616 WRITE setPos_Y616 NOTIFY pos_Y616Changed)
    Q_PROPERTY(double r_616 READ pos_R616 WRITE setPos_R616 NOTIFY pos_R616Changed)
    Q_PROPERTY(double x_617 READ pos_X617 WRITE setPos_X617 NOTIFY pos_X617Changed)
    Q_PROPERTY(double y_617 READ pos_Y617 WRITE setPos_Y617 NOTIFY pos_Y617Changed)
    Q_PROPERTY(double r_617 READ pos_R617 WRITE setPos_R617 NOTIFY pos_R617Changed)
    Q_PROPERTY(double x_618 READ pos_X618 WRITE setPos_X618 NOTIFY pos_X618Changed)
    Q_PROPERTY(double y_618 READ pos_Y618 WRITE setPos_Y618 NOTIFY pos_Y618Changed)
    Q_PROPERTY(double r_618 READ pos_R618 WRITE setPos_R618 NOTIFY pos_R618Changed)
    Q_PROPERTY(double x_619 READ pos_X619 WRITE setPos_X619 NOTIFY pos_X619Changed)
    Q_PROPERTY(double y_619 READ pos_Y619 WRITE setPos_Y619 NOTIFY pos_Y619Changed)
    Q_PROPERTY(double r_619 READ pos_R619 WRITE setPos_R619 NOTIFY pos_R619Changed)
    Q_PROPERTY(double x_620 READ pos_X620 WRITE setPos_X620 NOTIFY pos_X620Changed)
    Q_PROPERTY(double y_620 READ pos_Y620 WRITE setPos_Y620 NOTIFY pos_Y620Changed)
    Q_PROPERTY(double r_620 READ pos_R620 WRITE setPos_R620 NOTIFY pos_R620Changed)
    Q_PROPERTY(double x_621 READ pos_X621 WRITE setPos_X621 NOTIFY pos_X621Changed)
    Q_PROPERTY(double y_621 READ pos_Y621 WRITE setPos_Y621 NOTIFY pos_Y621Changed)
    Q_PROPERTY(double r_621 READ pos_R621 WRITE setPos_R621 NOTIFY pos_R621Changed)
    Q_PROPERTY(double x_622 READ pos_X622 WRITE setPos_X622 NOTIFY pos_X622Changed)
    Q_PROPERTY(double y_622 READ pos_Y622 WRITE setPos_Y622 NOTIFY pos_Y622Changed)
    Q_PROPERTY(double r_622 READ pos_R622 WRITE setPos_R622 NOTIFY pos_R622Changed)
    Q_PROPERTY(double x_623 READ pos_X623 WRITE setPos_X623 NOTIFY pos_X623Changed)
    Q_PROPERTY(double y_623 READ pos_Y623 WRITE setPos_Y623 NOTIFY pos_Y623Changed)
    Q_PROPERTY(double r_623 READ pos_R623 WRITE setPos_R623 NOTIFY pos_R623Changed)
    Q_PROPERTY(double x_624 READ pos_X624 WRITE setPos_X624 NOTIFY pos_X624Changed)
    Q_PROPERTY(double y_624 READ pos_Y624 WRITE setPos_Y624 NOTIFY pos_Y624Changed)
    Q_PROPERTY(double r_624 READ pos_R624 WRITE setPos_R624 NOTIFY pos_R624Changed)
    Q_PROPERTY(double x_625 READ pos_X625 WRITE setPos_X625 NOTIFY pos_X625Changed)
    Q_PROPERTY(double y_625 READ pos_Y625 WRITE setPos_Y625 NOTIFY pos_Y625Changed)
    Q_PROPERTY(double r_625 READ pos_R625 WRITE setPos_R625 NOTIFY pos_R625Changed)
    Q_PROPERTY(double x_626 READ pos_X626 WRITE setPos_X626 NOTIFY pos_X626Changed)
    Q_PROPERTY(double y_626 READ pos_Y626 WRITE setPos_Y626 NOTIFY pos_Y626Changed)
    Q_PROPERTY(double r_626 READ pos_R626 WRITE setPos_R626 NOTIFY pos_R626Changed)
    Q_PROPERTY(double x_627 READ pos_X627 WRITE setPos_X627 NOTIFY pos_X627Changed)
    Q_PROPERTY(double y_627 READ pos_Y627 WRITE setPos_Y627 NOTIFY pos_Y627Changed)
    Q_PROPERTY(double r_627 READ pos_R627 WRITE setPos_R627 NOTIFY pos_R627Changed)
    Q_PROPERTY(double x_628 READ pos_X628 WRITE setPos_X628 NOTIFY pos_X628Changed)
    Q_PROPERTY(double y_628 READ pos_Y628 WRITE setPos_Y628 NOTIFY pos_Y628Changed)
    Q_PROPERTY(double r_628 READ pos_R628 WRITE setPos_R628 NOTIFY pos_R628Changed)
    Q_PROPERTY(double x_629 READ pos_X629 WRITE setPos_X629 NOTIFY pos_X629Changed)
    Q_PROPERTY(double y_629 READ pos_Y629 WRITE setPos_Y629 NOTIFY pos_Y629Changed)
    Q_PROPERTY(double r_629 READ pos_R629 WRITE setPos_R629 NOTIFY pos_R629Changed)
    Q_PROPERTY(double x_630 READ pos_X630 WRITE setPos_X630 NOTIFY pos_X630Changed)
    Q_PROPERTY(double y_630 READ pos_Y630 WRITE setPos_Y630 NOTIFY pos_Y630Changed)
    Q_PROPERTY(double r_630 READ pos_R630 WRITE setPos_R630 NOTIFY pos_R630Changed)
    Q_PROPERTY(double x_631 READ pos_X631 WRITE setPos_X631 NOTIFY pos_X631Changed)
    Q_PROPERTY(double y_631 READ pos_Y631 WRITE setPos_Y631 NOTIFY pos_Y631Changed)
    Q_PROPERTY(double r_631 READ pos_R631 WRITE setPos_R631 NOTIFY pos_R631Changed)
    Q_PROPERTY(double x_632 READ pos_X632 WRITE setPos_X632 NOTIFY pos_X632Changed)
    Q_PROPERTY(double y_632 READ pos_Y632 WRITE setPos_Y632 NOTIFY pos_Y632Changed)
    Q_PROPERTY(double r_632 READ pos_R632 WRITE setPos_R632 NOTIFY pos_R632Changed)
    Q_PROPERTY(double x_633 READ pos_X633 WRITE setPos_X633 NOTIFY pos_X633Changed)
    Q_PROPERTY(double y_633 READ pos_Y633 WRITE setPos_Y633 NOTIFY pos_Y633Changed)
    Q_PROPERTY(double r_633 READ pos_R633 WRITE setPos_R633 NOTIFY pos_R633Changed)
    Q_PROPERTY(double x_634 READ pos_X634 WRITE setPos_X634 NOTIFY pos_X634Changed)
    Q_PROPERTY(double y_634 READ pos_Y634 WRITE setPos_Y634 NOTIFY pos_Y634Changed)
    Q_PROPERTY(double r_634 READ pos_R634 WRITE setPos_R634 NOTIFY pos_R634Changed)
    Q_PROPERTY(double x_635 READ pos_X635 WRITE setPos_X635 NOTIFY pos_X635Changed)
    Q_PROPERTY(double y_635 READ pos_Y635 WRITE setPos_Y635 NOTIFY pos_Y635Changed)
    Q_PROPERTY(double r_635 READ pos_R635 WRITE setPos_R635 NOTIFY pos_R635Changed)
    Q_PROPERTY(double x_636 READ pos_X636 WRITE setPos_X636 NOTIFY pos_X636Changed)
    Q_PROPERTY(double y_636 READ pos_Y636 WRITE setPos_Y636 NOTIFY pos_Y636Changed)
    Q_PROPERTY(double r_636 READ pos_R636 WRITE setPos_R636 NOTIFY pos_R636Changed)
    Q_PROPERTY(double x_637 READ pos_X637 WRITE setPos_X637 NOTIFY pos_X637Changed)
    Q_PROPERTY(double y_637 READ pos_Y637 WRITE setPos_Y637 NOTIFY pos_Y637Changed)
    Q_PROPERTY(double r_637 READ pos_R637 WRITE setPos_R637 NOTIFY pos_R637Changed)
    Q_PROPERTY(double x_638 READ pos_X638 WRITE setPos_X638 NOTIFY pos_X638Changed)
    Q_PROPERTY(double y_638 READ pos_Y638 WRITE setPos_Y638 NOTIFY pos_Y638Changed)
    Q_PROPERTY(double r_638 READ pos_R638 WRITE setPos_R638 NOTIFY pos_R638Changed)
    Q_PROPERTY(double x_639 READ pos_X639 WRITE setPos_X639 NOTIFY pos_X639Changed)
    Q_PROPERTY(double y_639 READ pos_Y639 WRITE setPos_Y639 NOTIFY pos_Y639Changed)
    Q_PROPERTY(double r_639 READ pos_R639 WRITE setPos_R639 NOTIFY pos_R639Changed)
    Q_PROPERTY(double x_640 READ pos_X640 WRITE setPos_X640 NOTIFY pos_X640Changed)
    Q_PROPERTY(double y_640 READ pos_Y640 WRITE setPos_Y640 NOTIFY pos_Y640Changed)
    Q_PROPERTY(double r_640 READ pos_R640 WRITE setPos_R640 NOTIFY pos_R640Changed)
    Q_PROPERTY(double x_641 READ pos_X641 WRITE setPos_X641 NOTIFY pos_X641Changed)
    Q_PROPERTY(double y_641 READ pos_Y641 WRITE setPos_Y641 NOTIFY pos_Y641Changed)
    Q_PROPERTY(double r_641 READ pos_R641 WRITE setPos_R641 NOTIFY pos_R641Changed)
    Q_PROPERTY(double x_642 READ pos_X642 WRITE setPos_X642 NOTIFY pos_X642Changed)
    Q_PROPERTY(double y_642 READ pos_Y642 WRITE setPos_Y642 NOTIFY pos_Y642Changed)
    Q_PROPERTY(double r_642 READ pos_R642 WRITE setPos_R642 NOTIFY pos_R642Changed)
    Q_PROPERTY(double x_643 READ pos_X643 WRITE setPos_X643 NOTIFY pos_X643Changed)
    Q_PROPERTY(double y_643 READ pos_Y643 WRITE setPos_Y643 NOTIFY pos_Y643Changed)
    Q_PROPERTY(double r_643 READ pos_R643 WRITE setPos_R643 NOTIFY pos_R643Changed)
    Q_PROPERTY(double x_644 READ pos_X644 WRITE setPos_X644 NOTIFY pos_X644Changed)
    Q_PROPERTY(double y_644 READ pos_Y644 WRITE setPos_Y644 NOTIFY pos_Y644Changed)
    Q_PROPERTY(double r_644 READ pos_R644 WRITE setPos_R644 NOTIFY pos_R644Changed)
    Q_PROPERTY(double x_645 READ pos_X645 WRITE setPos_X645 NOTIFY pos_X645Changed)
    Q_PROPERTY(double y_645 READ pos_Y645 WRITE setPos_Y645 NOTIFY pos_Y645Changed)
    Q_PROPERTY(double r_645 READ pos_R645 WRITE setPos_R645 NOTIFY pos_R645Changed)
    Q_PROPERTY(double x_646 READ pos_X646 WRITE setPos_X646 NOTIFY pos_X646Changed)
    Q_PROPERTY(double y_646 READ pos_Y646 WRITE setPos_Y646 NOTIFY pos_Y646Changed)
    Q_PROPERTY(double r_646 READ pos_R646 WRITE setPos_R646 NOTIFY pos_R646Changed)
    Q_PROPERTY(double x_647 READ pos_X647 WRITE setPos_X647 NOTIFY pos_X647Changed)
    Q_PROPERTY(double y_647 READ pos_Y647 WRITE setPos_Y647 NOTIFY pos_Y647Changed)
    Q_PROPERTY(double r_647 READ pos_R647 WRITE setPos_R647 NOTIFY pos_R647Changed)
    Q_PROPERTY(double x_648 READ pos_X648 WRITE setPos_X648 NOTIFY pos_X648Changed)
    Q_PROPERTY(double y_648 READ pos_Y648 WRITE setPos_Y648 NOTIFY pos_Y648Changed)
    Q_PROPERTY(double r_648 READ pos_R648 WRITE setPos_R648 NOTIFY pos_R648Changed)
    Q_PROPERTY(double x_649 READ pos_X649 WRITE setPos_X649 NOTIFY pos_X649Changed)
    Q_PROPERTY(double y_649 READ pos_Y649 WRITE setPos_Y649 NOTIFY pos_Y649Changed)
    Q_PROPERTY(double r_649 READ pos_R649 WRITE setPos_R649 NOTIFY pos_R649Changed)
    Q_PROPERTY(double x_650 READ pos_X650 WRITE setPos_X650 NOTIFY pos_X650Changed)
    Q_PROPERTY(double y_650 READ pos_Y650 WRITE setPos_Y650 NOTIFY pos_Y650Changed)
    Q_PROPERTY(double r_650 READ pos_R650 WRITE setPos_R650 NOTIFY pos_R650Changed)
    Q_PROPERTY(double x_651 READ pos_X651 WRITE setPos_X651 NOTIFY pos_X651Changed)
    Q_PROPERTY(double y_651 READ pos_Y651 WRITE setPos_Y651 NOTIFY pos_Y651Changed)
    Q_PROPERTY(double r_651 READ pos_R651 WRITE setPos_R651 NOTIFY pos_R651Changed)
    Q_PROPERTY(double x_652 READ pos_X652 WRITE setPos_X652 NOTIFY pos_X652Changed)
    Q_PROPERTY(double y_652 READ pos_Y652 WRITE setPos_Y652 NOTIFY pos_Y652Changed)
    Q_PROPERTY(double r_652 READ pos_R652 WRITE setPos_R652 NOTIFY pos_R652Changed)
    Q_PROPERTY(double x_653 READ pos_X653 WRITE setPos_X653 NOTIFY pos_X653Changed)
    Q_PROPERTY(double y_653 READ pos_Y653 WRITE setPos_Y653 NOTIFY pos_Y653Changed)
    Q_PROPERTY(double r_653 READ pos_R653 WRITE setPos_R653 NOTIFY pos_R653Changed)
    Q_PROPERTY(double x_654 READ pos_X654 WRITE setPos_X654 NOTIFY pos_X654Changed)
    Q_PROPERTY(double y_654 READ pos_Y654 WRITE setPos_Y654 NOTIFY pos_Y654Changed)
    Q_PROPERTY(double r_654 READ pos_R654 WRITE setPos_R654 NOTIFY pos_R654Changed)
    Q_PROPERTY(double x_655 READ pos_X655 WRITE setPos_X655 NOTIFY pos_X655Changed)
    Q_PROPERTY(double y_655 READ pos_Y655 WRITE setPos_Y655 NOTIFY pos_Y655Changed)
    Q_PROPERTY(double r_655 READ pos_R655 WRITE setPos_R655 NOTIFY pos_R655Changed)
    Q_PROPERTY(double x_656 READ pos_X656 WRITE setPos_X656 NOTIFY pos_X656Changed)
    Q_PROPERTY(double y_656 READ pos_Y656 WRITE setPos_Y656 NOTIFY pos_Y656Changed)
    Q_PROPERTY(double r_656 READ pos_R656 WRITE setPos_R656 NOTIFY pos_R656Changed)
    Q_PROPERTY(double x_657 READ pos_X657 WRITE setPos_X657 NOTIFY pos_X657Changed)
    Q_PROPERTY(double y_657 READ pos_Y657 WRITE setPos_Y657 NOTIFY pos_Y657Changed)
    Q_PROPERTY(double r_657 READ pos_R657 WRITE setPos_R657 NOTIFY pos_R657Changed)
    Q_PROPERTY(double x_658 READ pos_X658 WRITE setPos_X658 NOTIFY pos_X658Changed)
    Q_PROPERTY(double y_658 READ pos_Y658 WRITE setPos_Y658 NOTIFY pos_Y658Changed)
    Q_PROPERTY(double r_658 READ pos_R658 WRITE setPos_R658 NOTIFY pos_R658Changed)
    Q_PROPERTY(double x_659 READ pos_X659 WRITE setPos_X659 NOTIFY pos_X659Changed)
    Q_PROPERTY(double y_659 READ pos_Y659 WRITE setPos_Y659 NOTIFY pos_Y659Changed)
    Q_PROPERTY(double r_659 READ pos_R659 WRITE setPos_R659 NOTIFY pos_R659Changed)
    Q_PROPERTY(double x_660 READ pos_X660 WRITE setPos_X660 NOTIFY pos_X660Changed)
    Q_PROPERTY(double y_660 READ pos_Y660 WRITE setPos_Y660 NOTIFY pos_Y660Changed)
    Q_PROPERTY(double r_660 READ pos_R660 WRITE setPos_R660 NOTIFY pos_R660Changed)
    Q_PROPERTY(double x_661 READ pos_X661 WRITE setPos_X661 NOTIFY pos_X661Changed)
    Q_PROPERTY(double y_661 READ pos_Y661 WRITE setPos_Y661 NOTIFY pos_Y661Changed)
    Q_PROPERTY(double r_661 READ pos_R661 WRITE setPos_R661 NOTIFY pos_R661Changed)
    Q_PROPERTY(double x_662 READ pos_X662 WRITE setPos_X662 NOTIFY pos_X662Changed)
    Q_PROPERTY(double y_662 READ pos_Y662 WRITE setPos_Y662 NOTIFY pos_Y662Changed)
    Q_PROPERTY(double r_662 READ pos_R662 WRITE setPos_R662 NOTIFY pos_R662Changed)
    Q_PROPERTY(double x_663 READ pos_X663 WRITE setPos_X663 NOTIFY pos_X663Changed)
    Q_PROPERTY(double y_663 READ pos_Y663 WRITE setPos_Y663 NOTIFY pos_Y663Changed)
    Q_PROPERTY(double r_663 READ pos_R663 WRITE setPos_R663 NOTIFY pos_R663Changed)
    Q_PROPERTY(double x_664 READ pos_X664 WRITE setPos_X664 NOTIFY pos_X664Changed)
    Q_PROPERTY(double y_664 READ pos_Y664 WRITE setPos_Y664 NOTIFY pos_Y664Changed)
    Q_PROPERTY(double r_664 READ pos_R664 WRITE setPos_R664 NOTIFY pos_R664Changed)
    Q_PROPERTY(double x_665 READ pos_X665 WRITE setPos_X665 NOTIFY pos_X665Changed)
    Q_PROPERTY(double y_665 READ pos_Y665 WRITE setPos_Y665 NOTIFY pos_Y665Changed)
    Q_PROPERTY(double r_665 READ pos_R665 WRITE setPos_R665 NOTIFY pos_R665Changed)
    Q_PROPERTY(double x_666 READ pos_X666 WRITE setPos_X666 NOTIFY pos_X666Changed)
    Q_PROPERTY(double y_666 READ pos_Y666 WRITE setPos_Y666 NOTIFY pos_Y666Changed)
    Q_PROPERTY(double r_666 READ pos_R666 WRITE setPos_R666 NOTIFY pos_R666Changed)
    Q_PROPERTY(double x_667 READ pos_X667 WRITE setPos_X667 NOTIFY pos_X667Changed)
    Q_PROPERTY(double y_667 READ pos_Y667 WRITE setPos_Y667 NOTIFY pos_Y667Changed)
    Q_PROPERTY(double r_667 READ pos_R667 WRITE setPos_R667 NOTIFY pos_R667Changed)
    Q_PROPERTY(double x_668 READ pos_X668 WRITE setPos_X668 NOTIFY pos_X668Changed)
    Q_PROPERTY(double y_668 READ pos_Y668 WRITE setPos_Y668 NOTIFY pos_Y668Changed)
    Q_PROPERTY(double r_668 READ pos_R668 WRITE setPos_R668 NOTIFY pos_R668Changed)
    Q_PROPERTY(double x_669 READ pos_X669 WRITE setPos_X669 NOTIFY pos_X669Changed)
    Q_PROPERTY(double y_669 READ pos_Y669 WRITE setPos_Y669 NOTIFY pos_Y669Changed)
    Q_PROPERTY(double r_669 READ pos_R669 WRITE setPos_R669 NOTIFY pos_R669Changed)
    Q_PROPERTY(double x_670 READ pos_X670 WRITE setPos_X670 NOTIFY pos_X670Changed)
    Q_PROPERTY(double y_670 READ pos_Y670 WRITE setPos_Y670 NOTIFY pos_Y670Changed)
    Q_PROPERTY(double r_670 READ pos_R670 WRITE setPos_R670 NOTIFY pos_R670Changed)
    Q_PROPERTY(double x_671 READ pos_X671 WRITE setPos_X671 NOTIFY pos_X671Changed)
    Q_PROPERTY(double y_671 READ pos_Y671 WRITE setPos_Y671 NOTIFY pos_Y671Changed)
    Q_PROPERTY(double r_671 READ pos_R671 WRITE setPos_R671 NOTIFY pos_R671Changed)
    Q_PROPERTY(double x_672 READ pos_X672 WRITE setPos_X672 NOTIFY pos_X672Changed)
    Q_PROPERTY(double y_672 READ pos_Y672 WRITE setPos_Y672 NOTIFY pos_Y672Changed)
    Q_PROPERTY(double r_672 READ pos_R672 WRITE setPos_R672 NOTIFY pos_R672Changed)
    Q_PROPERTY(double x_673 READ pos_X673 WRITE setPos_X673 NOTIFY pos_X673Changed)
    Q_PROPERTY(double y_673 READ pos_Y673 WRITE setPos_Y673 NOTIFY pos_Y673Changed)
    Q_PROPERTY(double r_673 READ pos_R673 WRITE setPos_R673 NOTIFY pos_R673Changed)
    Q_PROPERTY(double x_674 READ pos_X674 WRITE setPos_X674 NOTIFY pos_X674Changed)
    Q_PROPERTY(double y_674 READ pos_Y674 WRITE setPos_Y674 NOTIFY pos_Y674Changed)
    Q_PROPERTY(double r_674 READ pos_R674 WRITE setPos_R674 NOTIFY pos_R674Changed)
    Q_PROPERTY(double x_675 READ pos_X675 WRITE setPos_X675 NOTIFY pos_X675Changed)
    Q_PROPERTY(double y_675 READ pos_Y675 WRITE setPos_Y675 NOTIFY pos_Y675Changed)
    Q_PROPERTY(double r_675 READ pos_R675 WRITE setPos_R675 NOTIFY pos_R675Changed)
    Q_PROPERTY(double x_676 READ pos_X676 WRITE setPos_X676 NOTIFY pos_X676Changed)
    Q_PROPERTY(double y_676 READ pos_Y676 WRITE setPos_Y676 NOTIFY pos_Y676Changed)
    Q_PROPERTY(double r_676 READ pos_R676 WRITE setPos_R676 NOTIFY pos_R676Changed)
    Q_PROPERTY(double x_677 READ pos_X677 WRITE setPos_X677 NOTIFY pos_X677Changed)
    Q_PROPERTY(double y_677 READ pos_Y677 WRITE setPos_Y677 NOTIFY pos_Y677Changed)
    Q_PROPERTY(double r_677 READ pos_R677 WRITE setPos_R677 NOTIFY pos_R677Changed)
    Q_PROPERTY(double x_678 READ pos_X678 WRITE setPos_X678 NOTIFY pos_X678Changed)
    Q_PROPERTY(double y_678 READ pos_Y678 WRITE setPos_Y678 NOTIFY pos_Y678Changed)
    Q_PROPERTY(double r_678 READ pos_R678 WRITE setPos_R678 NOTIFY pos_R678Changed)
    Q_PROPERTY(double x_679 READ pos_X679 WRITE setPos_X679 NOTIFY pos_X679Changed)
    Q_PROPERTY(double y_679 READ pos_Y679 WRITE setPos_Y679 NOTIFY pos_Y679Changed)
    Q_PROPERTY(double r_679 READ pos_R679 WRITE setPos_R679 NOTIFY pos_R679Changed)
    Q_PROPERTY(double x_680 READ pos_X680 WRITE setPos_X680 NOTIFY pos_X680Changed)
    Q_PROPERTY(double y_680 READ pos_Y680 WRITE setPos_Y680 NOTIFY pos_Y680Changed)
    Q_PROPERTY(double r_680 READ pos_R680 WRITE setPos_R680 NOTIFY pos_R680Changed)
    Q_PROPERTY(double x_681 READ pos_X681 WRITE setPos_X681 NOTIFY pos_X681Changed)
    Q_PROPERTY(double y_681 READ pos_Y681 WRITE setPos_Y681 NOTIFY pos_Y681Changed)
    Q_PROPERTY(double r_681 READ pos_R681 WRITE setPos_R681 NOTIFY pos_R681Changed)
    Q_PROPERTY(double x_682 READ pos_X682 WRITE setPos_X682 NOTIFY pos_X682Changed)
    Q_PROPERTY(double y_682 READ pos_Y682 WRITE setPos_Y682 NOTIFY pos_Y682Changed)
    Q_PROPERTY(double r_682 READ pos_R682 WRITE setPos_R682 NOTIFY pos_R682Changed)
    Q_PROPERTY(double x_683 READ pos_X683 WRITE setPos_X683 NOTIFY pos_X683Changed)
    Q_PROPERTY(double y_683 READ pos_Y683 WRITE setPos_Y683 NOTIFY pos_Y683Changed)
    Q_PROPERTY(double r_683 READ pos_R683 WRITE setPos_R683 NOTIFY pos_R683Changed)
    Q_PROPERTY(double x_684 READ pos_X684 WRITE setPos_X684 NOTIFY pos_X684Changed)
    Q_PROPERTY(double y_684 READ pos_Y684 WRITE setPos_Y684 NOTIFY pos_Y684Changed)
    Q_PROPERTY(double r_684 READ pos_R684 WRITE setPos_R684 NOTIFY pos_R684Changed)
    Q_PROPERTY(double x_685 READ pos_X685 WRITE setPos_X685 NOTIFY pos_X685Changed)
    Q_PROPERTY(double y_685 READ pos_Y685 WRITE setPos_Y685 NOTIFY pos_Y685Changed)
    Q_PROPERTY(double r_685 READ pos_R685 WRITE setPos_R685 NOTIFY pos_R685Changed)
    Q_PROPERTY(double x_686 READ pos_X686 WRITE setPos_X686 NOTIFY pos_X686Changed)
    Q_PROPERTY(double y_686 READ pos_Y686 WRITE setPos_Y686 NOTIFY pos_Y686Changed)
    Q_PROPERTY(double r_686 READ pos_R686 WRITE setPos_R686 NOTIFY pos_R686Changed)
    Q_PROPERTY(double x_687 READ pos_X687 WRITE setPos_X687 NOTIFY pos_X687Changed)
    Q_PROPERTY(double y_687 READ pos_Y687 WRITE setPos_Y687 NOTIFY pos_Y687Changed)
    Q_PROPERTY(double r_687 READ pos_R687 WRITE setPos_R687 NOTIFY pos_R687Changed)
    Q_PROPERTY(double x_688 READ pos_X688 WRITE setPos_X688 NOTIFY pos_X688Changed)
    Q_PROPERTY(double y_688 READ pos_Y688 WRITE setPos_Y688 NOTIFY pos_Y688Changed)
    Q_PROPERTY(double r_688 READ pos_R688 WRITE setPos_R688 NOTIFY pos_R688Changed)
    Q_PROPERTY(double x_689 READ pos_X689 WRITE setPos_X689 NOTIFY pos_X689Changed)
    Q_PROPERTY(double y_689 READ pos_Y689 WRITE setPos_Y689 NOTIFY pos_Y689Changed)
    Q_PROPERTY(double r_689 READ pos_R689 WRITE setPos_R689 NOTIFY pos_R689Changed)
    Q_PROPERTY(double x_690 READ pos_X690 WRITE setPos_X690 NOTIFY pos_X690Changed)
    Q_PROPERTY(double y_690 READ pos_Y690 WRITE setPos_Y690 NOTIFY pos_Y690Changed)
    Q_PROPERTY(double r_690 READ pos_R690 WRITE setPos_R690 NOTIFY pos_R690Changed)
    Q_PROPERTY(double x_691 READ pos_X691 WRITE setPos_X691 NOTIFY pos_X691Changed)
    Q_PROPERTY(double y_691 READ pos_Y691 WRITE setPos_Y691 NOTIFY pos_Y691Changed)
    Q_PROPERTY(double r_691 READ pos_R691 WRITE setPos_R691 NOTIFY pos_R691Changed)
    Q_PROPERTY(double x_692 READ pos_X692 WRITE setPos_X692 NOTIFY pos_X692Changed)
    Q_PROPERTY(double y_692 READ pos_Y692 WRITE setPos_Y692 NOTIFY pos_Y692Changed)
    Q_PROPERTY(double r_692 READ pos_R692 WRITE setPos_R692 NOTIFY pos_R692Changed)
    Q_PROPERTY(double x_693 READ pos_X693 WRITE setPos_X693 NOTIFY pos_X693Changed)
    Q_PROPERTY(double y_693 READ pos_Y693 WRITE setPos_Y693 NOTIFY pos_Y693Changed)
    Q_PROPERTY(double r_693 READ pos_R693 WRITE setPos_R693 NOTIFY pos_R693Changed)
    Q_PROPERTY(double x_694 READ pos_X694 WRITE setPos_X694 NOTIFY pos_X694Changed)
    Q_PROPERTY(double y_694 READ pos_Y694 WRITE setPos_Y694 NOTIFY pos_Y694Changed)
    Q_PROPERTY(double r_694 READ pos_R694 WRITE setPos_R694 NOTIFY pos_R694Changed)
    Q_PROPERTY(double x_695 READ pos_X695 WRITE setPos_X695 NOTIFY pos_X695Changed)
    Q_PROPERTY(double y_695 READ pos_Y695 WRITE setPos_Y695 NOTIFY pos_Y695Changed)
    Q_PROPERTY(double r_695 READ pos_R695 WRITE setPos_R695 NOTIFY pos_R695Changed)
    Q_PROPERTY(double x_696 READ pos_X696 WRITE setPos_X696 NOTIFY pos_X696Changed)
    Q_PROPERTY(double y_696 READ pos_Y696 WRITE setPos_Y696 NOTIFY pos_Y696Changed)
    Q_PROPERTY(double r_696 READ pos_R696 WRITE setPos_R696 NOTIFY pos_R696Changed)
    Q_PROPERTY(double x_697 READ pos_X697 WRITE setPos_X697 NOTIFY pos_X697Changed)
    Q_PROPERTY(double y_697 READ pos_Y697 WRITE setPos_Y697 NOTIFY pos_Y697Changed)
    Q_PROPERTY(double r_697 READ pos_R697 WRITE setPos_R697 NOTIFY pos_R697Changed)
    Q_PROPERTY(double x_698 READ pos_X698 WRITE setPos_X698 NOTIFY pos_X698Changed)
    Q_PROPERTY(double y_698 READ pos_Y698 WRITE setPos_Y698 NOTIFY pos_Y698Changed)
    Q_PROPERTY(double r_698 READ pos_R698 WRITE setPos_R698 NOTIFY pos_R698Changed)
    Q_PROPERTY(double x_699 READ pos_X699 WRITE setPos_X699 NOTIFY pos_X699Changed)
    Q_PROPERTY(double y_699 READ pos_Y699 WRITE setPos_Y699 NOTIFY pos_Y699Changed)
    Q_PROPERTY(double r_699 READ pos_R699 WRITE setPos_R699 NOTIFY pos_R699Changed)
    Q_PROPERTY(double x_700 READ pos_X700 WRITE setPos_X700 NOTIFY pos_X700Changed)
    Q_PROPERTY(double y_700 READ pos_Y700 WRITE setPos_Y700 NOTIFY pos_Y700Changed)
    Q_PROPERTY(double r_700 READ pos_R700 WRITE setPos_R700 NOTIFY pos_R700Changed)
    Q_PROPERTY(double x_701 READ pos_X701 WRITE setPos_X701 NOTIFY pos_X701Changed)
    Q_PROPERTY(double y_701 READ pos_Y701 WRITE setPos_Y701 NOTIFY pos_Y701Changed)
    Q_PROPERTY(double r_701 READ pos_R701 WRITE setPos_R701 NOTIFY pos_R701Changed)
    Q_PROPERTY(double x_702 READ pos_X702 WRITE setPos_X702 NOTIFY pos_X702Changed)
    Q_PROPERTY(double y_702 READ pos_Y702 WRITE setPos_Y702 NOTIFY pos_Y702Changed)
    Q_PROPERTY(double r_702 READ pos_R702 WRITE setPos_R702 NOTIFY pos_R702Changed)
    Q_PROPERTY(double x_703 READ pos_X703 WRITE setPos_X703 NOTIFY pos_X703Changed)
    Q_PROPERTY(double y_703 READ pos_Y703 WRITE setPos_Y703 NOTIFY pos_Y703Changed)
    Q_PROPERTY(double r_703 READ pos_R703 WRITE setPos_R703 NOTIFY pos_R703Changed)
    Q_PROPERTY(double x_704 READ pos_X704 WRITE setPos_X704 NOTIFY pos_X704Changed)
    Q_PROPERTY(double y_704 READ pos_Y704 WRITE setPos_Y704 NOTIFY pos_Y704Changed)
    Q_PROPERTY(double r_704 READ pos_R704 WRITE setPos_R704 NOTIFY pos_R704Changed)
    Q_PROPERTY(double x_705 READ pos_X705 WRITE setPos_X705 NOTIFY pos_X705Changed)
    Q_PROPERTY(double y_705 READ pos_Y705 WRITE setPos_Y705 NOTIFY pos_Y705Changed)
    Q_PROPERTY(double r_705 READ pos_R705 WRITE setPos_R705 NOTIFY pos_R705Changed)
    Q_PROPERTY(double x_706 READ pos_X706 WRITE setPos_X706 NOTIFY pos_X706Changed)
    Q_PROPERTY(double y_706 READ pos_Y706 WRITE setPos_Y706 NOTIFY pos_Y706Changed)
    Q_PROPERTY(double r_706 READ pos_R706 WRITE setPos_R706 NOTIFY pos_R706Changed)
    Q_PROPERTY(double x_707 READ pos_X707 WRITE setPos_X707 NOTIFY pos_X707Changed)
    Q_PROPERTY(double y_707 READ pos_Y707 WRITE setPos_Y707 NOTIFY pos_Y707Changed)
    Q_PROPERTY(double r_707 READ pos_R707 WRITE setPos_R707 NOTIFY pos_R707Changed)
    Q_PROPERTY(double x_708 READ pos_X708 WRITE setPos_X708 NOTIFY pos_X708Changed)
    Q_PROPERTY(double y_708 READ pos_Y708 WRITE setPos_Y708 NOTIFY pos_Y708Changed)
    Q_PROPERTY(double r_708 READ pos_R708 WRITE setPos_R708 NOTIFY pos_R708Changed)
    Q_PROPERTY(double x_709 READ pos_X709 WRITE setPos_X709 NOTIFY pos_X709Changed)
    Q_PROPERTY(double y_709 READ pos_Y709 WRITE setPos_Y709 NOTIFY pos_Y709Changed)
    Q_PROPERTY(double r_709 READ pos_R709 WRITE setPos_R709 NOTIFY pos_R709Changed)
    Q_PROPERTY(double x_710 READ pos_X710 WRITE setPos_X710 NOTIFY pos_X710Changed)
    Q_PROPERTY(double y_710 READ pos_Y710 WRITE setPos_Y710 NOTIFY pos_Y710Changed)
    Q_PROPERTY(double r_710 READ pos_R710 WRITE setPos_R710 NOTIFY pos_R710Changed)
    Q_PROPERTY(double x_711 READ pos_X711 WRITE setPos_X711 NOTIFY pos_X711Changed)
    Q_PROPERTY(double y_711 READ pos_Y711 WRITE setPos_Y711 NOTIFY pos_Y711Changed)
    Q_PROPERTY(double r_711 READ pos_R711 WRITE setPos_R711 NOTIFY pos_R711Changed)
    Q_PROPERTY(double x_712 READ pos_X712 WRITE setPos_X712 NOTIFY pos_X712Changed)
    Q_PROPERTY(double y_712 READ pos_Y712 WRITE setPos_Y712 NOTIFY pos_Y712Changed)
    Q_PROPERTY(double r_712 READ pos_R712 WRITE setPos_R712 NOTIFY pos_R712Changed)
    Q_PROPERTY(double x_713 READ pos_X713 WRITE setPos_X713 NOTIFY pos_X713Changed)
    Q_PROPERTY(double y_713 READ pos_Y713 WRITE setPos_Y713 NOTIFY pos_Y713Changed)
    Q_PROPERTY(double r_713 READ pos_R713 WRITE setPos_R713 NOTIFY pos_R713Changed)
    Q_PROPERTY(double x_714 READ pos_X714 WRITE setPos_X714 NOTIFY pos_X714Changed)
    Q_PROPERTY(double y_714 READ pos_Y714 WRITE setPos_Y714 NOTIFY pos_Y714Changed)
    Q_PROPERTY(double r_714 READ pos_R714 WRITE setPos_R714 NOTIFY pos_R714Changed)
    Q_PROPERTY(double x_715 READ pos_X715 WRITE setPos_X715 NOTIFY pos_X715Changed)
    Q_PROPERTY(double y_715 READ pos_Y715 WRITE setPos_Y715 NOTIFY pos_Y715Changed)
    Q_PROPERTY(double r_715 READ pos_R715 WRITE setPos_R715 NOTIFY pos_R715Changed)
    Q_PROPERTY(double x_716 READ pos_X716 WRITE setPos_X716 NOTIFY pos_X716Changed)
    Q_PROPERTY(double y_716 READ pos_Y716 WRITE setPos_Y716 NOTIFY pos_Y716Changed)
    Q_PROPERTY(double r_716 READ pos_R716 WRITE setPos_R716 NOTIFY pos_R716Changed)
    Q_PROPERTY(double x_717 READ pos_X717 WRITE setPos_X717 NOTIFY pos_X717Changed)
    Q_PROPERTY(double y_717 READ pos_Y717 WRITE setPos_Y717 NOTIFY pos_Y717Changed)
    Q_PROPERTY(double r_717 READ pos_R717 WRITE setPos_R717 NOTIFY pos_R717Changed)
    Q_PROPERTY(double x_718 READ pos_X718 WRITE setPos_X718 NOTIFY pos_X718Changed)
    Q_PROPERTY(double y_718 READ pos_Y718 WRITE setPos_Y718 NOTIFY pos_Y718Changed)
    Q_PROPERTY(double r_718 READ pos_R718 WRITE setPos_R718 NOTIFY pos_R718Changed)
    Q_PROPERTY(double x_719 READ pos_X719 WRITE setPos_X719 NOTIFY pos_X719Changed)
    Q_PROPERTY(double y_719 READ pos_Y719 WRITE setPos_Y719 NOTIFY pos_Y719Changed)
    Q_PROPERTY(double r_719 READ pos_R719 WRITE setPos_R719 NOTIFY pos_R719Changed)
    Q_PROPERTY(double x_720 READ pos_X720 WRITE setPos_X720 NOTIFY pos_X720Changed)
    Q_PROPERTY(double y_720 READ pos_Y720 WRITE setPos_Y720 NOTIFY pos_Y720Changed)
    Q_PROPERTY(double r_720 READ pos_R720 WRITE setPos_R720 NOTIFY pos_R720Changed)
    Q_PROPERTY(double x_721 READ pos_X721 WRITE setPos_X721 NOTIFY pos_X721Changed)
    Q_PROPERTY(double y_721 READ pos_Y721 WRITE setPos_Y721 NOTIFY pos_Y721Changed)
    Q_PROPERTY(double r_721 READ pos_R721 WRITE setPos_R721 NOTIFY pos_R721Changed)
    Q_PROPERTY(double x_722 READ pos_X722 WRITE setPos_X722 NOTIFY pos_X722Changed)
    Q_PROPERTY(double y_722 READ pos_Y722 WRITE setPos_Y722 NOTIFY pos_Y722Changed)
    Q_PROPERTY(double r_722 READ pos_R722 WRITE setPos_R722 NOTIFY pos_R722Changed)
    Q_PROPERTY(double x_723 READ pos_X723 WRITE setPos_X723 NOTIFY pos_X723Changed)
    Q_PROPERTY(double y_723 READ pos_Y723 WRITE setPos_Y723 NOTIFY pos_Y723Changed)
    Q_PROPERTY(double r_723 READ pos_R723 WRITE setPos_R723 NOTIFY pos_R723Changed)
    Q_PROPERTY(double x_724 READ pos_X724 WRITE setPos_X724 NOTIFY pos_X724Changed)
    Q_PROPERTY(double y_724 READ pos_Y724 WRITE setPos_Y724 NOTIFY pos_Y724Changed)
    Q_PROPERTY(double r_724 READ pos_R724 WRITE setPos_R724 NOTIFY pos_R724Changed)
    Q_PROPERTY(double x_725 READ pos_X725 WRITE setPos_X725 NOTIFY pos_X725Changed)
    Q_PROPERTY(double y_725 READ pos_Y725 WRITE setPos_Y725 NOTIFY pos_Y725Changed)
    Q_PROPERTY(double r_725 READ pos_R725 WRITE setPos_R725 NOTIFY pos_R725Changed)
    Q_PROPERTY(double x_726 READ pos_X726 WRITE setPos_X726 NOTIFY pos_X726Changed)
    Q_PROPERTY(double y_726 READ pos_Y726 WRITE setPos_Y726 NOTIFY pos_Y726Changed)
    Q_PROPERTY(double r_726 READ pos_R726 WRITE setPos_R726 NOTIFY pos_R726Changed)
    Q_PROPERTY(double x_727 READ pos_X727 WRITE setPos_X727 NOTIFY pos_X727Changed)
    Q_PROPERTY(double y_727 READ pos_Y727 WRITE setPos_Y727 NOTIFY pos_Y727Changed)
    Q_PROPERTY(double r_727 READ pos_R727 WRITE setPos_R727 NOTIFY pos_R727Changed)
    Q_PROPERTY(double x_728 READ pos_X728 WRITE setPos_X728 NOTIFY pos_X728Changed)
    Q_PROPERTY(double y_728 READ pos_Y728 WRITE setPos_Y728 NOTIFY pos_Y728Changed)
    Q_PROPERTY(double r_728 READ pos_R728 WRITE setPos_R728 NOTIFY pos_R728Changed)
    Q_PROPERTY(double x_729 READ pos_X729 WRITE setPos_X729 NOTIFY pos_X729Changed)
    Q_PROPERTY(double y_729 READ pos_Y729 WRITE setPos_Y729 NOTIFY pos_Y729Changed)
    Q_PROPERTY(double r_729 READ pos_R729 WRITE setPos_R729 NOTIFY pos_R729Changed)
    Q_PROPERTY(double x_730 READ pos_X730 WRITE setPos_X730 NOTIFY pos_X730Changed)
    Q_PROPERTY(double y_730 READ pos_Y730 WRITE setPos_Y730 NOTIFY pos_Y730Changed)
    Q_PROPERTY(double r_730 READ pos_R730 WRITE setPos_R730 NOTIFY pos_R730Changed)
    Q_PROPERTY(double x_731 READ pos_X731 WRITE setPos_X731 NOTIFY pos_X731Changed)
    Q_PROPERTY(double y_731 READ pos_Y731 WRITE setPos_Y731 NOTIFY pos_Y731Changed)
    Q_PROPERTY(double r_731 READ pos_R731 WRITE setPos_R731 NOTIFY pos_R731Changed)
    Q_PROPERTY(double x_732 READ pos_X732 WRITE setPos_X732 NOTIFY pos_X732Changed)
    Q_PROPERTY(double y_732 READ pos_Y732 WRITE setPos_Y732 NOTIFY pos_Y732Changed)
    Q_PROPERTY(double r_732 READ pos_R732 WRITE setPos_R732 NOTIFY pos_R732Changed)
    Q_PROPERTY(double x_733 READ pos_X733 WRITE setPos_X733 NOTIFY pos_X733Changed)
    Q_PROPERTY(double y_733 READ pos_Y733 WRITE setPos_Y733 NOTIFY pos_Y733Changed)
    Q_PROPERTY(double r_733 READ pos_R733 WRITE setPos_R733 NOTIFY pos_R733Changed)
    Q_PROPERTY(double x_734 READ pos_X734 WRITE setPos_X734 NOTIFY pos_X734Changed)
    Q_PROPERTY(double y_734 READ pos_Y734 WRITE setPos_Y734 NOTIFY pos_Y734Changed)
    Q_PROPERTY(double r_734 READ pos_R734 WRITE setPos_R734 NOTIFY pos_R734Changed)
    Q_PROPERTY(double x_735 READ pos_X735 WRITE setPos_X735 NOTIFY pos_X735Changed)
    Q_PROPERTY(double y_735 READ pos_Y735 WRITE setPos_Y735 NOTIFY pos_Y735Changed)
    Q_PROPERTY(double r_735 READ pos_R735 WRITE setPos_R735 NOTIFY pos_R735Changed)
    Q_PROPERTY(double x_736 READ pos_X736 WRITE setPos_X736 NOTIFY pos_X736Changed)
    Q_PROPERTY(double y_736 READ pos_Y736 WRITE setPos_Y736 NOTIFY pos_Y736Changed)
    Q_PROPERTY(double r_736 READ pos_R736 WRITE setPos_R736 NOTIFY pos_R736Changed)
    Q_PROPERTY(double x_737 READ pos_X737 WRITE setPos_X737 NOTIFY pos_X737Changed)
    Q_PROPERTY(double y_737 READ pos_Y737 WRITE setPos_Y737 NOTIFY pos_Y737Changed)
    Q_PROPERTY(double r_737 READ pos_R737 WRITE setPos_R737 NOTIFY pos_R737Changed)
    Q_PROPERTY(double x_738 READ pos_X738 WRITE setPos_X738 NOTIFY pos_X738Changed)
    Q_PROPERTY(double y_738 READ pos_Y738 WRITE setPos_Y738 NOTIFY pos_Y738Changed)
    Q_PROPERTY(double r_738 READ pos_R738 WRITE setPos_R738 NOTIFY pos_R738Changed)
    Q_PROPERTY(double x_739 READ pos_X739 WRITE setPos_X739 NOTIFY pos_X739Changed)
    Q_PROPERTY(double y_739 READ pos_Y739 WRITE setPos_Y739 NOTIFY pos_Y739Changed)
    Q_PROPERTY(double r_739 READ pos_R739 WRITE setPos_R739 NOTIFY pos_R739Changed)
    Q_PROPERTY(double x_740 READ pos_X740 WRITE setPos_X740 NOTIFY pos_X740Changed)
    Q_PROPERTY(double y_740 READ pos_Y740 WRITE setPos_Y740 NOTIFY pos_Y740Changed)
    Q_PROPERTY(double r_740 READ pos_R740 WRITE setPos_R740 NOTIFY pos_R740Changed)
    Q_PROPERTY(double x_741 READ pos_X741 WRITE setPos_X741 NOTIFY pos_X741Changed)
    Q_PROPERTY(double y_741 READ pos_Y741 WRITE setPos_Y741 NOTIFY pos_Y741Changed)
    Q_PROPERTY(double r_741 READ pos_R741 WRITE setPos_R741 NOTIFY pos_R741Changed)
    Q_PROPERTY(double x_742 READ pos_X742 WRITE setPos_X742 NOTIFY pos_X742Changed)
    Q_PROPERTY(double y_742 READ pos_Y742 WRITE setPos_Y742 NOTIFY pos_Y742Changed)
    Q_PROPERTY(double r_742 READ pos_R742 WRITE setPos_R742 NOTIFY pos_R742Changed)
    Q_PROPERTY(double x_743 READ pos_X743 WRITE setPos_X743 NOTIFY pos_X743Changed)
    Q_PROPERTY(double y_743 READ pos_Y743 WRITE setPos_Y743 NOTIFY pos_Y743Changed)
    Q_PROPERTY(double r_743 READ pos_R743 WRITE setPos_R743 NOTIFY pos_R743Changed)
    Q_PROPERTY(double x_744 READ pos_X744 WRITE setPos_X744 NOTIFY pos_X744Changed)
    Q_PROPERTY(double y_744 READ pos_Y744 WRITE setPos_Y744 NOTIFY pos_Y744Changed)
    Q_PROPERTY(double r_744 READ pos_R744 WRITE setPos_R744 NOTIFY pos_R744Changed)
    Q_PROPERTY(double x_745 READ pos_X745 WRITE setPos_X745 NOTIFY pos_X745Changed)
    Q_PROPERTY(double y_745 READ pos_Y745 WRITE setPos_Y745 NOTIFY pos_Y745Changed)
    Q_PROPERTY(double r_745 READ pos_R745 WRITE setPos_R745 NOTIFY pos_R745Changed)
    Q_PROPERTY(double x_746 READ pos_X746 WRITE setPos_X746 NOTIFY pos_X746Changed)
    Q_PROPERTY(double y_746 READ pos_Y746 WRITE setPos_Y746 NOTIFY pos_Y746Changed)
    Q_PROPERTY(double r_746 READ pos_R746 WRITE setPos_R746 NOTIFY pos_R746Changed)
    Q_PROPERTY(double x_747 READ pos_X747 WRITE setPos_X747 NOTIFY pos_X747Changed)
    Q_PROPERTY(double y_747 READ pos_Y747 WRITE setPos_Y747 NOTIFY pos_Y747Changed)
    Q_PROPERTY(double r_747 READ pos_R747 WRITE setPos_R747 NOTIFY pos_R747Changed)
    Q_PROPERTY(double x_748 READ pos_X748 WRITE setPos_X748 NOTIFY pos_X748Changed)
    Q_PROPERTY(double y_748 READ pos_Y748 WRITE setPos_Y748 NOTIFY pos_Y748Changed)
    Q_PROPERTY(double r_748 READ pos_R748 WRITE setPos_R748 NOTIFY pos_R748Changed)
    Q_PROPERTY(double x_749 READ pos_X749 WRITE setPos_X749 NOTIFY pos_X749Changed)
    Q_PROPERTY(double y_749 READ pos_Y749 WRITE setPos_Y749 NOTIFY pos_Y749Changed)
    Q_PROPERTY(double r_749 READ pos_R749 WRITE setPos_R749 NOTIFY pos_R749Changed)
    Q_PROPERTY(double x_750 READ pos_X750 WRITE setPos_X750 NOTIFY pos_X750Changed)
    Q_PROPERTY(double y_750 READ pos_Y750 WRITE setPos_Y750 NOTIFY pos_Y750Changed)
    Q_PROPERTY(double r_750 READ pos_R750 WRITE setPos_R750 NOTIFY pos_R750Changed)
    Q_PROPERTY(double x_751 READ pos_X751 WRITE setPos_X751 NOTIFY pos_X751Changed)
    Q_PROPERTY(double y_751 READ pos_Y751 WRITE setPos_Y751 NOTIFY pos_Y751Changed)
    Q_PROPERTY(double r_751 READ pos_R751 WRITE setPos_R751 NOTIFY pos_R751Changed)
    Q_PROPERTY(double x_752 READ pos_X752 WRITE setPos_X752 NOTIFY pos_X752Changed)
    Q_PROPERTY(double y_752 READ pos_Y752 WRITE setPos_Y752 NOTIFY pos_Y752Changed)
    Q_PROPERTY(double r_752 READ pos_R752 WRITE setPos_R752 NOTIFY pos_R752Changed)
    Q_PROPERTY(double x_753 READ pos_X753 WRITE setPos_X753 NOTIFY pos_X753Changed)
    Q_PROPERTY(double y_753 READ pos_Y753 WRITE setPos_Y753 NOTIFY pos_Y753Changed)
    Q_PROPERTY(double r_753 READ pos_R753 WRITE setPos_R753 NOTIFY pos_R753Changed)
    Q_PROPERTY(double x_754 READ pos_X754 WRITE setPos_X754 NOTIFY pos_X754Changed)
    Q_PROPERTY(double y_754 READ pos_Y754 WRITE setPos_Y754 NOTIFY pos_Y754Changed)
    Q_PROPERTY(double r_754 READ pos_R754 WRITE setPos_R754 NOTIFY pos_R754Changed)
    Q_PROPERTY(double x_755 READ pos_X755 WRITE setPos_X755 NOTIFY pos_X755Changed)
    Q_PROPERTY(double y_755 READ pos_Y755 WRITE setPos_Y755 NOTIFY pos_Y755Changed)
    Q_PROPERTY(double r_755 READ pos_R755 WRITE setPos_R755 NOTIFY pos_R755Changed)
    Q_PROPERTY(double x_756 READ pos_X756 WRITE setPos_X756 NOTIFY pos_X756Changed)
    Q_PROPERTY(double y_756 READ pos_Y756 WRITE setPos_Y756 NOTIFY pos_Y756Changed)
    Q_PROPERTY(double r_756 READ pos_R756 WRITE setPos_R756 NOTIFY pos_R756Changed)
    Q_PROPERTY(double x_757 READ pos_X757 WRITE setPos_X757 NOTIFY pos_X757Changed)
    Q_PROPERTY(double y_757 READ pos_Y757 WRITE setPos_Y757 NOTIFY pos_Y757Changed)
    Q_PROPERTY(double r_757 READ pos_R757 WRITE setPos_R757 NOTIFY pos_R757Changed)
    Q_PROPERTY(double x_758 READ pos_X758 WRITE setPos_X758 NOTIFY pos_X758Changed)
    Q_PROPERTY(double y_758 READ pos_Y758 WRITE setPos_Y758 NOTIFY pos_Y758Changed)
    Q_PROPERTY(double r_758 READ pos_R758 WRITE setPos_R758 NOTIFY pos_R758Changed)
    Q_PROPERTY(double x_759 READ pos_X759 WRITE setPos_X759 NOTIFY pos_X759Changed)
    Q_PROPERTY(double y_759 READ pos_Y759 WRITE setPos_Y759 NOTIFY pos_Y759Changed)
    Q_PROPERTY(double r_759 READ pos_R759 WRITE setPos_R759 NOTIFY pos_R759Changed)
    Q_PROPERTY(double x_760 READ pos_X760 WRITE setPos_X760 NOTIFY pos_X760Changed)
    Q_PROPERTY(double y_760 READ pos_Y760 WRITE setPos_Y760 NOTIFY pos_Y760Changed)
    Q_PROPERTY(double r_760 READ pos_R760 WRITE setPos_R760 NOTIFY pos_R760Changed)
    Q_PROPERTY(double x_761 READ pos_X761 WRITE setPos_X761 NOTIFY pos_X761Changed)
    Q_PROPERTY(double y_761 READ pos_Y761 WRITE setPos_Y761 NOTIFY pos_Y761Changed)
    Q_PROPERTY(double r_761 READ pos_R761 WRITE setPos_R761 NOTIFY pos_R761Changed)
    Q_PROPERTY(double x_762 READ pos_X762 WRITE setPos_X762 NOTIFY pos_X762Changed)
    Q_PROPERTY(double y_762 READ pos_Y762 WRITE setPos_Y762 NOTIFY pos_Y762Changed)
    Q_PROPERTY(double r_762 READ pos_R762 WRITE setPos_R762 NOTIFY pos_R762Changed)
    Q_PROPERTY(double x_763 READ pos_X763 WRITE setPos_X763 NOTIFY pos_X763Changed)
    Q_PROPERTY(double y_763 READ pos_Y763 WRITE setPos_Y763 NOTIFY pos_Y763Changed)
    Q_PROPERTY(double r_763 READ pos_R763 WRITE setPos_R763 NOTIFY pos_R763Changed)
    Q_PROPERTY(double x_764 READ pos_X764 WRITE setPos_X764 NOTIFY pos_X764Changed)
    Q_PROPERTY(double y_764 READ pos_Y764 WRITE setPos_Y764 NOTIFY pos_Y764Changed)
    Q_PROPERTY(double r_764 READ pos_R764 WRITE setPos_R764 NOTIFY pos_R764Changed)
    Q_PROPERTY(double x_765 READ pos_X765 WRITE setPos_X765 NOTIFY pos_X765Changed)
    Q_PROPERTY(double y_765 READ pos_Y765 WRITE setPos_Y765 NOTIFY pos_Y765Changed)
    Q_PROPERTY(double r_765 READ pos_R765 WRITE setPos_R765 NOTIFY pos_R765Changed)
    Q_PROPERTY(double x_766 READ pos_X766 WRITE setPos_X766 NOTIFY pos_X766Changed)
    Q_PROPERTY(double y_766 READ pos_Y766 WRITE setPos_Y766 NOTIFY pos_Y766Changed)
    Q_PROPERTY(double r_766 READ pos_R766 WRITE setPos_R766 NOTIFY pos_R766Changed)
    Q_PROPERTY(double x_767 READ pos_X767 WRITE setPos_X767 NOTIFY pos_X767Changed)
    Q_PROPERTY(double y_767 READ pos_Y767 WRITE setPos_Y767 NOTIFY pos_Y767Changed)
    Q_PROPERTY(double r_767 READ pos_R767 WRITE setPos_R767 NOTIFY pos_R767Changed)
    Q_PROPERTY(double x_768 READ pos_X768 WRITE setPos_X768 NOTIFY pos_X768Changed)
    Q_PROPERTY(double y_768 READ pos_Y768 WRITE setPos_Y768 NOTIFY pos_Y768Changed)
    Q_PROPERTY(double r_768 READ pos_R768 WRITE setPos_R768 NOTIFY pos_R768Changed)
    Q_PROPERTY(double x_769 READ pos_X769 WRITE setPos_X769 NOTIFY pos_X769Changed)
    Q_PROPERTY(double y_769 READ pos_Y769 WRITE setPos_Y769 NOTIFY pos_Y769Changed)
    Q_PROPERTY(double r_769 READ pos_R769 WRITE setPos_R769 NOTIFY pos_R769Changed)
    Q_PROPERTY(double x_770 READ pos_X770 WRITE setPos_X770 NOTIFY pos_X770Changed)
    Q_PROPERTY(double y_770 READ pos_Y770 WRITE setPos_Y770 NOTIFY pos_Y770Changed)
    Q_PROPERTY(double r_770 READ pos_R770 WRITE setPos_R770 NOTIFY pos_R770Changed)
    Q_PROPERTY(double x_771 READ pos_X771 WRITE setPos_X771 NOTIFY pos_X771Changed)
    Q_PROPERTY(double y_771 READ pos_Y771 WRITE setPos_Y771 NOTIFY pos_Y771Changed)
    Q_PROPERTY(double r_771 READ pos_R771 WRITE setPos_R771 NOTIFY pos_R771Changed)
    Q_PROPERTY(double x_772 READ pos_X772 WRITE setPos_X772 NOTIFY pos_X772Changed)
    Q_PROPERTY(double y_772 READ pos_Y772 WRITE setPos_Y772 NOTIFY pos_Y772Changed)
    Q_PROPERTY(double r_772 READ pos_R772 WRITE setPos_R772 NOTIFY pos_R772Changed)
    Q_PROPERTY(double x_773 READ pos_X773 WRITE setPos_X773 NOTIFY pos_X773Changed)
    Q_PROPERTY(double y_773 READ pos_Y773 WRITE setPos_Y773 NOTIFY pos_Y773Changed)
    Q_PROPERTY(double r_773 READ pos_R773 WRITE setPos_R773 NOTIFY pos_R773Changed)
    Q_PROPERTY(double x_774 READ pos_X774 WRITE setPos_X774 NOTIFY pos_X774Changed)
    Q_PROPERTY(double y_774 READ pos_Y774 WRITE setPos_Y774 NOTIFY pos_Y774Changed)
    Q_PROPERTY(double r_774 READ pos_R774 WRITE setPos_R774 NOTIFY pos_R774Changed)
    Q_PROPERTY(double x_775 READ pos_X775 WRITE setPos_X775 NOTIFY pos_X775Changed)
    Q_PROPERTY(double y_775 READ pos_Y775 WRITE setPos_Y775 NOTIFY pos_Y775Changed)
    Q_PROPERTY(double r_775 READ pos_R775 WRITE setPos_R775 NOTIFY pos_R775Changed)
    Q_PROPERTY(double x_776 READ pos_X776 WRITE setPos_X776 NOTIFY pos_X776Changed)
    Q_PROPERTY(double y_776 READ pos_Y776 WRITE setPos_Y776 NOTIFY pos_Y776Changed)
    Q_PROPERTY(double r_776 READ pos_R776 WRITE setPos_R776 NOTIFY pos_R776Changed)
    Q_PROPERTY(double x_777 READ pos_X777 WRITE setPos_X777 NOTIFY pos_X777Changed)
    Q_PROPERTY(double y_777 READ pos_Y777 WRITE setPos_Y777 NOTIFY pos_Y777Changed)
    Q_PROPERTY(double r_777 READ pos_R777 WRITE setPos_R777 NOTIFY pos_R777Changed)
    Q_PROPERTY(double x_778 READ pos_X778 WRITE setPos_X778 NOTIFY pos_X778Changed)
    Q_PROPERTY(double y_778 READ pos_Y778 WRITE setPos_Y778 NOTIFY pos_Y778Changed)
    Q_PROPERTY(double r_778 READ pos_R778 WRITE setPos_R778 NOTIFY pos_R778Changed)
    Q_PROPERTY(double x_779 READ pos_X779 WRITE setPos_X779 NOTIFY pos_X779Changed)
    Q_PROPERTY(double y_779 READ pos_Y779 WRITE setPos_Y779 NOTIFY pos_Y779Changed)
    Q_PROPERTY(double r_779 READ pos_R779 WRITE setPos_R779 NOTIFY pos_R779Changed)
    Q_PROPERTY(double x_780 READ pos_X780 WRITE setPos_X780 NOTIFY pos_X780Changed)
    Q_PROPERTY(double y_780 READ pos_Y780 WRITE setPos_Y780 NOTIFY pos_Y780Changed)
    Q_PROPERTY(double r_780 READ pos_R780 WRITE setPos_R780 NOTIFY pos_R780Changed)
    Q_PROPERTY(double x_781 READ pos_X781 WRITE setPos_X781 NOTIFY pos_X781Changed)
    Q_PROPERTY(double y_781 READ pos_Y781 WRITE setPos_Y781 NOTIFY pos_Y781Changed)
    Q_PROPERTY(double r_781 READ pos_R781 WRITE setPos_R781 NOTIFY pos_R781Changed)
    Q_PROPERTY(double x_782 READ pos_X782 WRITE setPos_X782 NOTIFY pos_X782Changed)
    Q_PROPERTY(double y_782 READ pos_Y782 WRITE setPos_Y782 NOTIFY pos_Y782Changed)
    Q_PROPERTY(double r_782 READ pos_R782 WRITE setPos_R782 NOTIFY pos_R782Changed)
    Q_PROPERTY(double x_783 READ pos_X783 WRITE setPos_X783 NOTIFY pos_X783Changed)
    Q_PROPERTY(double y_783 READ pos_Y783 WRITE setPos_Y783 NOTIFY pos_Y783Changed)
    Q_PROPERTY(double r_783 READ pos_R783 WRITE setPos_R783 NOTIFY pos_R783Changed)
    Q_PROPERTY(double x_784 READ pos_X784 WRITE setPos_X784 NOTIFY pos_X784Changed)
    Q_PROPERTY(double y_784 READ pos_Y784 WRITE setPos_Y784 NOTIFY pos_Y784Changed)
    Q_PROPERTY(double r_784 READ pos_R784 WRITE setPos_R784 NOTIFY pos_R784Changed)
    Q_PROPERTY(double x_785 READ pos_X785 WRITE setPos_X785 NOTIFY pos_X785Changed)
    Q_PROPERTY(double y_785 READ pos_Y785 WRITE setPos_Y785 NOTIFY pos_Y785Changed)
    Q_PROPERTY(double r_785 READ pos_R785 WRITE setPos_R785 NOTIFY pos_R785Changed)
    Q_PROPERTY(double x_786 READ pos_X786 WRITE setPos_X786 NOTIFY pos_X786Changed)
    Q_PROPERTY(double y_786 READ pos_Y786 WRITE setPos_Y786 NOTIFY pos_Y786Changed)
    Q_PROPERTY(double r_786 READ pos_R786 WRITE setPos_R786 NOTIFY pos_R786Changed)
    Q_PROPERTY(double x_787 READ pos_X787 WRITE setPos_X787 NOTIFY pos_X787Changed)
    Q_PROPERTY(double y_787 READ pos_Y787 WRITE setPos_Y787 NOTIFY pos_Y787Changed)
    Q_PROPERTY(double r_787 READ pos_R787 WRITE setPos_R787 NOTIFY pos_R787Changed)
    Q_PROPERTY(double x_788 READ pos_X788 WRITE setPos_X788 NOTIFY pos_X788Changed)
    Q_PROPERTY(double y_788 READ pos_Y788 WRITE setPos_Y788 NOTIFY pos_Y788Changed)
    Q_PROPERTY(double r_788 READ pos_R788 WRITE setPos_R788 NOTIFY pos_R788Changed)
    Q_PROPERTY(double x_789 READ pos_X789 WRITE setPos_X789 NOTIFY pos_X789Changed)
    Q_PROPERTY(double y_789 READ pos_Y789 WRITE setPos_Y789 NOTIFY pos_Y789Changed)
    Q_PROPERTY(double r_789 READ pos_R789 WRITE setPos_R789 NOTIFY pos_R789Changed)
    Q_PROPERTY(double x_790 READ pos_X790 WRITE setPos_X790 NOTIFY pos_X790Changed)
    Q_PROPERTY(double y_790 READ pos_Y790 WRITE setPos_Y790 NOTIFY pos_Y790Changed)
    Q_PROPERTY(double r_790 READ pos_R790 WRITE setPos_R790 NOTIFY pos_R790Changed)
    Q_PROPERTY(double x_791 READ pos_X791 WRITE setPos_X791 NOTIFY pos_X791Changed)
    Q_PROPERTY(double y_791 READ pos_Y791 WRITE setPos_Y791 NOTIFY pos_Y791Changed)
    Q_PROPERTY(double r_791 READ pos_R791 WRITE setPos_R791 NOTIFY pos_R791Changed)
    Q_PROPERTY(double x_792 READ pos_X792 WRITE setPos_X792 NOTIFY pos_X792Changed)
    Q_PROPERTY(double y_792 READ pos_Y792 WRITE setPos_Y792 NOTIFY pos_Y792Changed)
    Q_PROPERTY(double r_792 READ pos_R792 WRITE setPos_R792 NOTIFY pos_R792Changed)
    Q_PROPERTY(double x_793 READ pos_X793 WRITE setPos_X793 NOTIFY pos_X793Changed)
    Q_PROPERTY(double y_793 READ pos_Y793 WRITE setPos_Y793 NOTIFY pos_Y793Changed)
    Q_PROPERTY(double r_793 READ pos_R793 WRITE setPos_R793 NOTIFY pos_R793Changed)
    Q_PROPERTY(double x_794 READ pos_X794 WRITE setPos_X794 NOTIFY pos_X794Changed)
    Q_PROPERTY(double y_794 READ pos_Y794 WRITE setPos_Y794 NOTIFY pos_Y794Changed)
    Q_PROPERTY(double r_794 READ pos_R794 WRITE setPos_R794 NOTIFY pos_R794Changed)
    Q_PROPERTY(double x_795 READ pos_X795 WRITE setPos_X795 NOTIFY pos_X795Changed)
    Q_PROPERTY(double y_795 READ pos_Y795 WRITE setPos_Y795 NOTIFY pos_Y795Changed)
    Q_PROPERTY(double r_795 READ pos_R795 WRITE setPos_R795 NOTIFY pos_R795Changed)
    Q_PROPERTY(double x_796 READ pos_X796 WRITE setPos_X796 NOTIFY pos_X796Changed)
    Q_PROPERTY(double y_796 READ pos_Y796 WRITE setPos_Y796 NOTIFY pos_Y796Changed)
    Q_PROPERTY(double r_796 READ pos_R796 WRITE setPos_R796 NOTIFY pos_R796Changed)
    Q_PROPERTY(double x_797 READ pos_X797 WRITE setPos_X797 NOTIFY pos_X797Changed)
    Q_PROPERTY(double y_797 READ pos_Y797 WRITE setPos_Y797 NOTIFY pos_Y797Changed)
    Q_PROPERTY(double r_797 READ pos_R797 WRITE setPos_R797 NOTIFY pos_R797Changed)
    Q_PROPERTY(double x_798 READ pos_X798 WRITE setPos_X798 NOTIFY pos_X798Changed)
    Q_PROPERTY(double y_798 READ pos_Y798 WRITE setPos_Y798 NOTIFY pos_Y798Changed)
    Q_PROPERTY(double r_798 READ pos_R798 WRITE setPos_R798 NOTIFY pos_R798Changed)
    Q_PROPERTY(double x_799 READ pos_X799 WRITE setPos_X799 NOTIFY pos_X799Changed)
    Q_PROPERTY(double y_799 READ pos_Y799 WRITE setPos_Y799 NOTIFY pos_Y799Changed)
    Q_PROPERTY(double r_799 READ pos_R799 WRITE setPos_R799 NOTIFY pos_R799Changed)
    Q_PROPERTY(double x_800 READ pos_X800 WRITE setPos_X800 NOTIFY pos_X800Changed)
    Q_PROPERTY(double y_800 READ pos_Y800 WRITE setPos_Y800 NOTIFY pos_Y800Changed)
    Q_PROPERTY(double r_800 READ pos_R800 WRITE setPos_R800 NOTIFY pos_R800Changed)
    Q_PROPERTY(double x_801 READ pos_X801 WRITE setPos_X801 NOTIFY pos_X801Changed)
    Q_PROPERTY(double y_801 READ pos_Y801 WRITE setPos_Y801 NOTIFY pos_Y801Changed)
    Q_PROPERTY(double r_801 READ pos_R801 WRITE setPos_R801 NOTIFY pos_R801Changed)
    Q_PROPERTY(double x_802 READ pos_X802 WRITE setPos_X802 NOTIFY pos_X802Changed)
    Q_PROPERTY(double y_802 READ pos_Y802 WRITE setPos_Y802 NOTIFY pos_Y802Changed)
    Q_PROPERTY(double r_802 READ pos_R802 WRITE setPos_R802 NOTIFY pos_R802Changed)
    Q_PROPERTY(double x_803 READ pos_X803 WRITE setPos_X803 NOTIFY pos_X803Changed)
    Q_PROPERTY(double y_803 READ pos_Y803 WRITE setPos_Y803 NOTIFY pos_Y803Changed)
    Q_PROPERTY(double r_803 READ pos_R803 WRITE setPos_R803 NOTIFY pos_R803Changed)
    Q_PROPERTY(double x_804 READ pos_X804 WRITE setPos_X804 NOTIFY pos_X804Changed)
    Q_PROPERTY(double y_804 READ pos_Y804 WRITE setPos_Y804 NOTIFY pos_Y804Changed)
    Q_PROPERTY(double r_804 READ pos_R804 WRITE setPos_R804 NOTIFY pos_R804Changed)
    Q_PROPERTY(double x_805 READ pos_X805 WRITE setPos_X805 NOTIFY pos_X805Changed)
    Q_PROPERTY(double y_805 READ pos_Y805 WRITE setPos_Y805 NOTIFY pos_Y805Changed)
    Q_PROPERTY(double r_805 READ pos_R805 WRITE setPos_R805 NOTIFY pos_R805Changed)
    Q_PROPERTY(double x_806 READ pos_X806 WRITE setPos_X806 NOTIFY pos_X806Changed)
    Q_PROPERTY(double y_806 READ pos_Y806 WRITE setPos_Y806 NOTIFY pos_Y806Changed)
    Q_PROPERTY(double r_806 READ pos_R806 WRITE setPos_R806 NOTIFY pos_R806Changed)
    Q_PROPERTY(double x_807 READ pos_X807 WRITE setPos_X807 NOTIFY pos_X807Changed)
    Q_PROPERTY(double y_807 READ pos_Y807 WRITE setPos_Y807 NOTIFY pos_Y807Changed)
    Q_PROPERTY(double r_807 READ pos_R807 WRITE setPos_R807 NOTIFY pos_R807Changed)
    Q_PROPERTY(double x_808 READ pos_X808 WRITE setPos_X808 NOTIFY pos_X808Changed)
    Q_PROPERTY(double y_808 READ pos_Y808 WRITE setPos_Y808 NOTIFY pos_Y808Changed)
    Q_PROPERTY(double r_808 READ pos_R808 WRITE setPos_R808 NOTIFY pos_R808Changed)
    Q_PROPERTY(double x_809 READ pos_X809 WRITE setPos_X809 NOTIFY pos_X809Changed)
    Q_PROPERTY(double y_809 READ pos_Y809 WRITE setPos_Y809 NOTIFY pos_Y809Changed)
    Q_PROPERTY(double r_809 READ pos_R809 WRITE setPos_R809 NOTIFY pos_R809Changed)
    Q_PROPERTY(double x_810 READ pos_X810 WRITE setPos_X810 NOTIFY pos_X810Changed)
    Q_PROPERTY(double y_810 READ pos_Y810 WRITE setPos_Y810 NOTIFY pos_Y810Changed)
    Q_PROPERTY(double r_810 READ pos_R810 WRITE setPos_R810 NOTIFY pos_R810Changed)
    Q_PROPERTY(double x_811 READ pos_X811 WRITE setPos_X811 NOTIFY pos_X811Changed)
    Q_PROPERTY(double y_811 READ pos_Y811 WRITE setPos_Y811 NOTIFY pos_Y811Changed)
    Q_PROPERTY(double r_811 READ pos_R811 WRITE setPos_R811 NOTIFY pos_R811Changed)
    Q_PROPERTY(double x_812 READ pos_X812 WRITE setPos_X812 NOTIFY pos_X812Changed)
    Q_PROPERTY(double y_812 READ pos_Y812 WRITE setPos_Y812 NOTIFY pos_Y812Changed)
    Q_PROPERTY(double r_812 READ pos_R812 WRITE setPos_R812 NOTIFY pos_R812Changed)
    Q_PROPERTY(double x_813 READ pos_X813 WRITE setPos_X813 NOTIFY pos_X813Changed)
    Q_PROPERTY(double y_813 READ pos_Y813 WRITE setPos_Y813 NOTIFY pos_Y813Changed)
    Q_PROPERTY(double r_813 READ pos_R813 WRITE setPos_R813 NOTIFY pos_R813Changed)
    Q_PROPERTY(double x_814 READ pos_X814 WRITE setPos_X814 NOTIFY pos_X814Changed)
    Q_PROPERTY(double y_814 READ pos_Y814 WRITE setPos_Y814 NOTIFY pos_Y814Changed)
    Q_PROPERTY(double r_814 READ pos_R814 WRITE setPos_R814 NOTIFY pos_R814Changed)
    Q_PROPERTY(double x_815 READ pos_X815 WRITE setPos_X815 NOTIFY pos_X815Changed)
    Q_PROPERTY(double y_815 READ pos_Y815 WRITE setPos_Y815 NOTIFY pos_Y815Changed)
    Q_PROPERTY(double r_815 READ pos_R815 WRITE setPos_R815 NOTIFY pos_R815Changed)
    Q_PROPERTY(double x_816 READ pos_X816 WRITE setPos_X816 NOTIFY pos_X816Changed)
    Q_PROPERTY(double y_816 READ pos_Y816 WRITE setPos_Y816 NOTIFY pos_Y816Changed)
    Q_PROPERTY(double r_816 READ pos_R816 WRITE setPos_R816 NOTIFY pos_R816Changed)
    Q_PROPERTY(double x_817 READ pos_X817 WRITE setPos_X817 NOTIFY pos_X817Changed)
    Q_PROPERTY(double y_817 READ pos_Y817 WRITE setPos_Y817 NOTIFY pos_Y817Changed)
    Q_PROPERTY(double r_817 READ pos_R817 WRITE setPos_R817 NOTIFY pos_R817Changed)
    Q_PROPERTY(double x_818 READ pos_X818 WRITE setPos_X818 NOTIFY pos_X818Changed)
    Q_PROPERTY(double y_818 READ pos_Y818 WRITE setPos_Y818 NOTIFY pos_Y818Changed)
    Q_PROPERTY(double r_818 READ pos_R818 WRITE setPos_R818 NOTIFY pos_R818Changed)
    Q_PROPERTY(double x_819 READ pos_X819 WRITE setPos_X819 NOTIFY pos_X819Changed)
    Q_PROPERTY(double y_819 READ pos_Y819 WRITE setPos_Y819 NOTIFY pos_Y819Changed)
    Q_PROPERTY(double r_819 READ pos_R819 WRITE setPos_R819 NOTIFY pos_R819Changed)
    Q_PROPERTY(double x_820 READ pos_X820 WRITE setPos_X820 NOTIFY pos_X820Changed)
    Q_PROPERTY(double y_820 READ pos_Y820 WRITE setPos_Y820 NOTIFY pos_Y820Changed)
    Q_PROPERTY(double r_820 READ pos_R820 WRITE setPos_R820 NOTIFY pos_R820Changed)
    Q_PROPERTY(double x_821 READ pos_X821 WRITE setPos_X821 NOTIFY pos_X821Changed)
    Q_PROPERTY(double y_821 READ pos_Y821 WRITE setPos_Y821 NOTIFY pos_Y821Changed)
    Q_PROPERTY(double r_821 READ pos_R821 WRITE setPos_R821 NOTIFY pos_R821Changed)
    Q_PROPERTY(double x_822 READ pos_X822 WRITE setPos_X822 NOTIFY pos_X822Changed)
    Q_PROPERTY(double y_822 READ pos_Y822 WRITE setPos_Y822 NOTIFY pos_Y822Changed)
    Q_PROPERTY(double r_822 READ pos_R822 WRITE setPos_R822 NOTIFY pos_R822Changed)
    Q_PROPERTY(double x_823 READ pos_X823 WRITE setPos_X823 NOTIFY pos_X823Changed)
    Q_PROPERTY(double y_823 READ pos_Y823 WRITE setPos_Y823 NOTIFY pos_Y823Changed)
    Q_PROPERTY(double r_823 READ pos_R823 WRITE setPos_R823 NOTIFY pos_R823Changed)
    Q_PROPERTY(double x_824 READ pos_X824 WRITE setPos_X824 NOTIFY pos_X824Changed)
    Q_PROPERTY(double y_824 READ pos_Y824 WRITE setPos_Y824 NOTIFY pos_Y824Changed)
    Q_PROPERTY(double r_824 READ pos_R824 WRITE setPos_R824 NOTIFY pos_R824Changed)
    Q_PROPERTY(double x_825 READ pos_X825 WRITE setPos_X825 NOTIFY pos_X825Changed)
    Q_PROPERTY(double y_825 READ pos_Y825 WRITE setPos_Y825 NOTIFY pos_Y825Changed)
    Q_PROPERTY(double r_825 READ pos_R825 WRITE setPos_R825 NOTIFY pos_R825Changed)
    Q_PROPERTY(double x_826 READ pos_X826 WRITE setPos_X826 NOTIFY pos_X826Changed)
    Q_PROPERTY(double y_826 READ pos_Y826 WRITE setPos_Y826 NOTIFY pos_Y826Changed)
    Q_PROPERTY(double r_826 READ pos_R826 WRITE setPos_R826 NOTIFY pos_R826Changed)
    Q_PROPERTY(double x_827 READ pos_X827 WRITE setPos_X827 NOTIFY pos_X827Changed)
    Q_PROPERTY(double y_827 READ pos_Y827 WRITE setPos_Y827 NOTIFY pos_Y827Changed)
    Q_PROPERTY(double r_827 READ pos_R827 WRITE setPos_R827 NOTIFY pos_R827Changed)
    Q_PROPERTY(double x_828 READ pos_X828 WRITE setPos_X828 NOTIFY pos_X828Changed)
    Q_PROPERTY(double y_828 READ pos_Y828 WRITE setPos_Y828 NOTIFY pos_Y828Changed)
    Q_PROPERTY(double r_828 READ pos_R828 WRITE setPos_R828 NOTIFY pos_R828Changed)
    Q_PROPERTY(double x_829 READ pos_X829 WRITE setPos_X829 NOTIFY pos_X829Changed)
    Q_PROPERTY(double y_829 READ pos_Y829 WRITE setPos_Y829 NOTIFY pos_Y829Changed)
    Q_PROPERTY(double r_829 READ pos_R829 WRITE setPos_R829 NOTIFY pos_R829Changed)
    Q_PROPERTY(double x_830 READ pos_X830 WRITE setPos_X830 NOTIFY pos_X830Changed)
    Q_PROPERTY(double y_830 READ pos_Y830 WRITE setPos_Y830 NOTIFY pos_Y830Changed)
    Q_PROPERTY(double r_830 READ pos_R830 WRITE setPos_R830 NOTIFY pos_R830Changed)
    Q_PROPERTY(double x_831 READ pos_X831 WRITE setPos_X831 NOTIFY pos_X831Changed)
    Q_PROPERTY(double y_831 READ pos_Y831 WRITE setPos_Y831 NOTIFY pos_Y831Changed)
    Q_PROPERTY(double r_831 READ pos_R831 WRITE setPos_R831 NOTIFY pos_R831Changed)
    Q_PROPERTY(double x_832 READ pos_X832 WRITE setPos_X832 NOTIFY pos_X832Changed)
    Q_PROPERTY(double y_832 READ pos_Y832 WRITE setPos_Y832 NOTIFY pos_Y832Changed)
    Q_PROPERTY(double r_832 READ pos_R832 WRITE setPos_R832 NOTIFY pos_R832Changed)
    Q_PROPERTY(double x_833 READ pos_X833 WRITE setPos_X833 NOTIFY pos_X833Changed)
    Q_PROPERTY(double y_833 READ pos_Y833 WRITE setPos_Y833 NOTIFY pos_Y833Changed)
    Q_PROPERTY(double r_833 READ pos_R833 WRITE setPos_R833 NOTIFY pos_R833Changed)
    Q_PROPERTY(double x_834 READ pos_X834 WRITE setPos_X834 NOTIFY pos_X834Changed)
    Q_PROPERTY(double y_834 READ pos_Y834 WRITE setPos_Y834 NOTIFY pos_Y834Changed)
    Q_PROPERTY(double r_834 READ pos_R834 WRITE setPos_R834 NOTIFY pos_R834Changed)
    Q_PROPERTY(double x_835 READ pos_X835 WRITE setPos_X835 NOTIFY pos_X835Changed)
    Q_PROPERTY(double y_835 READ pos_Y835 WRITE setPos_Y835 NOTIFY pos_Y835Changed)
    Q_PROPERTY(double r_835 READ pos_R835 WRITE setPos_R835 NOTIFY pos_R835Changed)
    Q_PROPERTY(double x_836 READ pos_X836 WRITE setPos_X836 NOTIFY pos_X836Changed)
    Q_PROPERTY(double y_836 READ pos_Y836 WRITE setPos_Y836 NOTIFY pos_Y836Changed)
    Q_PROPERTY(double r_836 READ pos_R836 WRITE setPos_R836 NOTIFY pos_R836Changed)
    Q_PROPERTY(double x_837 READ pos_X837 WRITE setPos_X837 NOTIFY pos_X837Changed)
    Q_PROPERTY(double y_837 READ pos_Y837 WRITE setPos_Y837 NOTIFY pos_Y837Changed)
    Q_PROPERTY(double r_837 READ pos_R837 WRITE setPos_R837 NOTIFY pos_R837Changed)
    Q_PROPERTY(double x_838 READ pos_X838 WRITE setPos_X838 NOTIFY pos_X838Changed)
    Q_PROPERTY(double y_838 READ pos_Y838 WRITE setPos_Y838 NOTIFY pos_Y838Changed)
    Q_PROPERTY(double r_838 READ pos_R838 WRITE setPos_R838 NOTIFY pos_R838Changed)
    Q_PROPERTY(double x_839 READ pos_X839 WRITE setPos_X839 NOTIFY pos_X839Changed)
    Q_PROPERTY(double y_839 READ pos_Y839 WRITE setPos_Y839 NOTIFY pos_Y839Changed)
    Q_PROPERTY(double r_839 READ pos_R839 WRITE setPos_R839 NOTIFY pos_R839Changed)
    Q_PROPERTY(double x_840 READ pos_X840 WRITE setPos_X840 NOTIFY pos_X840Changed)
    Q_PROPERTY(double y_840 READ pos_Y840 WRITE setPos_Y840 NOTIFY pos_Y840Changed)
    Q_PROPERTY(double r_840 READ pos_R840 WRITE setPos_R840 NOTIFY pos_R840Changed)
    Q_PROPERTY(double x_841 READ pos_X841 WRITE setPos_X841 NOTIFY pos_X841Changed)
    Q_PROPERTY(double y_841 READ pos_Y841 WRITE setPos_Y841 NOTIFY pos_Y841Changed)
    Q_PROPERTY(double r_841 READ pos_R841 WRITE setPos_R841 NOTIFY pos_R841Changed)
    Q_PROPERTY(double x_842 READ pos_X842 WRITE setPos_X842 NOTIFY pos_X842Changed)
    Q_PROPERTY(double y_842 READ pos_Y842 WRITE setPos_Y842 NOTIFY pos_Y842Changed)
    Q_PROPERTY(double r_842 READ pos_R842 WRITE setPos_R842 NOTIFY pos_R842Changed)
    Q_PROPERTY(double x_843 READ pos_X843 WRITE setPos_X843 NOTIFY pos_X843Changed)
    Q_PROPERTY(double y_843 READ pos_Y843 WRITE setPos_Y843 NOTIFY pos_Y843Changed)
    Q_PROPERTY(double r_843 READ pos_R843 WRITE setPos_R843 NOTIFY pos_R843Changed)
    Q_PROPERTY(double x_844 READ pos_X844 WRITE setPos_X844 NOTIFY pos_X844Changed)
    Q_PROPERTY(double y_844 READ pos_Y844 WRITE setPos_Y844 NOTIFY pos_Y844Changed)
    Q_PROPERTY(double r_844 READ pos_R844 WRITE setPos_R844 NOTIFY pos_R844Changed)
    Q_PROPERTY(double x_845 READ pos_X845 WRITE setPos_X845 NOTIFY pos_X845Changed)
    Q_PROPERTY(double y_845 READ pos_Y845 WRITE setPos_Y845 NOTIFY pos_Y845Changed)
    Q_PROPERTY(double r_845 READ pos_R845 WRITE setPos_R845 NOTIFY pos_R845Changed)
    Q_PROPERTY(double x_846 READ pos_X846 WRITE setPos_X846 NOTIFY pos_X846Changed)
    Q_PROPERTY(double y_846 READ pos_Y846 WRITE setPos_Y846 NOTIFY pos_Y846Changed)
    Q_PROPERTY(double r_846 READ pos_R846 WRITE setPos_R846 NOTIFY pos_R846Changed)
    Q_PROPERTY(double x_847 READ pos_X847 WRITE setPos_X847 NOTIFY pos_X847Changed)
    Q_PROPERTY(double y_847 READ pos_Y847 WRITE setPos_Y847 NOTIFY pos_Y847Changed)
    Q_PROPERTY(double r_847 READ pos_R847 WRITE setPos_R847 NOTIFY pos_R847Changed)
    Q_PROPERTY(double x_848 READ pos_X848 WRITE setPos_X848 NOTIFY pos_X848Changed)
    Q_PROPERTY(double y_848 READ pos_Y848 WRITE setPos_Y848 NOTIFY pos_Y848Changed)
    Q_PROPERTY(double r_848 READ pos_R848 WRITE setPos_R848 NOTIFY pos_R848Changed)
    Q_PROPERTY(double x_849 READ pos_X849 WRITE setPos_X849 NOTIFY pos_X849Changed)
    Q_PROPERTY(double y_849 READ pos_Y849 WRITE setPos_Y849 NOTIFY pos_Y849Changed)
    Q_PROPERTY(double r_849 READ pos_R849 WRITE setPos_R849 NOTIFY pos_R849Changed)
    Q_PROPERTY(double x_850 READ pos_X850 WRITE setPos_X850 NOTIFY pos_X850Changed)
    Q_PROPERTY(double y_850 READ pos_Y850 WRITE setPos_Y850 NOTIFY pos_Y850Changed)
    Q_PROPERTY(double r_850 READ pos_R850 WRITE setPos_R850 NOTIFY pos_R850Changed)
    Q_PROPERTY(double x_851 READ pos_X851 WRITE setPos_X851 NOTIFY pos_X851Changed)
    Q_PROPERTY(double y_851 READ pos_Y851 WRITE setPos_Y851 NOTIFY pos_Y851Changed)
    Q_PROPERTY(double r_851 READ pos_R851 WRITE setPos_R851 NOTIFY pos_R851Changed)
    Q_PROPERTY(double x_852 READ pos_X852 WRITE setPos_X852 NOTIFY pos_X852Changed)
    Q_PROPERTY(double y_852 READ pos_Y852 WRITE setPos_Y852 NOTIFY pos_Y852Changed)
    Q_PROPERTY(double r_852 READ pos_R852 WRITE setPos_R852 NOTIFY pos_R852Changed)
    Q_PROPERTY(double x_853 READ pos_X853 WRITE setPos_X853 NOTIFY pos_X853Changed)
    Q_PROPERTY(double y_853 READ pos_Y853 WRITE setPos_Y853 NOTIFY pos_Y853Changed)
    Q_PROPERTY(double r_853 READ pos_R853 WRITE setPos_R853 NOTIFY pos_R853Changed)
    Q_PROPERTY(double x_854 READ pos_X854 WRITE setPos_X854 NOTIFY pos_X854Changed)
    Q_PROPERTY(double y_854 READ pos_Y854 WRITE setPos_Y854 NOTIFY pos_Y854Changed)
    Q_PROPERTY(double r_854 READ pos_R854 WRITE setPos_R854 NOTIFY pos_R854Changed)
    Q_PROPERTY(double x_855 READ pos_X855 WRITE setPos_X855 NOTIFY pos_X855Changed)
    Q_PROPERTY(double y_855 READ pos_Y855 WRITE setPos_Y855 NOTIFY pos_Y855Changed)
    Q_PROPERTY(double r_855 READ pos_R855 WRITE setPos_R855 NOTIFY pos_R855Changed)
    Q_PROPERTY(double x_856 READ pos_X856 WRITE setPos_X856 NOTIFY pos_X856Changed)
    Q_PROPERTY(double y_856 READ pos_Y856 WRITE setPos_Y856 NOTIFY pos_Y856Changed)
    Q_PROPERTY(double r_856 READ pos_R856 WRITE setPos_R856 NOTIFY pos_R856Changed)
    Q_PROPERTY(double x_857 READ pos_X857 WRITE setPos_X857 NOTIFY pos_X857Changed)
    Q_PROPERTY(double y_857 READ pos_Y857 WRITE setPos_Y857 NOTIFY pos_Y857Changed)
    Q_PROPERTY(double r_857 READ pos_R857 WRITE setPos_R857 NOTIFY pos_R857Changed)
    Q_PROPERTY(double x_858 READ pos_X858 WRITE setPos_X858 NOTIFY pos_X858Changed)
    Q_PROPERTY(double y_858 READ pos_Y858 WRITE setPos_Y858 NOTIFY pos_Y858Changed)
    Q_PROPERTY(double r_858 READ pos_R858 WRITE setPos_R858 NOTIFY pos_R858Changed)
    Q_PROPERTY(double x_859 READ pos_X859 WRITE setPos_X859 NOTIFY pos_X859Changed)
    Q_PROPERTY(double y_859 READ pos_Y859 WRITE setPos_Y859 NOTIFY pos_Y859Changed)
    Q_PROPERTY(double r_859 READ pos_R859 WRITE setPos_R859 NOTIFY pos_R859Changed)
    Q_PROPERTY(double x_860 READ pos_X860 WRITE setPos_X860 NOTIFY pos_X860Changed)
    Q_PROPERTY(double y_860 READ pos_Y860 WRITE setPos_Y860 NOTIFY pos_Y860Changed)
    Q_PROPERTY(double r_860 READ pos_R860 WRITE setPos_R860 NOTIFY pos_R860Changed)
    Q_PROPERTY(double x_861 READ pos_X861 WRITE setPos_X861 NOTIFY pos_X861Changed)
    Q_PROPERTY(double y_861 READ pos_Y861 WRITE setPos_Y861 NOTIFY pos_Y861Changed)
    Q_PROPERTY(double r_861 READ pos_R861 WRITE setPos_R861 NOTIFY pos_R861Changed)
    Q_PROPERTY(double x_862 READ pos_X862 WRITE setPos_X862 NOTIFY pos_X862Changed)
    Q_PROPERTY(double y_862 READ pos_Y862 WRITE setPos_Y862 NOTIFY pos_Y862Changed)
    Q_PROPERTY(double r_862 READ pos_R862 WRITE setPos_R862 NOTIFY pos_R862Changed)
    Q_PROPERTY(double x_863 READ pos_X863 WRITE setPos_X863 NOTIFY pos_X863Changed)
    Q_PROPERTY(double y_863 READ pos_Y863 WRITE setPos_Y863 NOTIFY pos_Y863Changed)
    Q_PROPERTY(double r_863 READ pos_R863 WRITE setPos_R863 NOTIFY pos_R863Changed)
    Q_PROPERTY(double x_864 READ pos_X864 WRITE setPos_X864 NOTIFY pos_X864Changed)
    Q_PROPERTY(double y_864 READ pos_Y864 WRITE setPos_Y864 NOTIFY pos_Y864Changed)
    Q_PROPERTY(double r_864 READ pos_R864 WRITE setPos_R864 NOTIFY pos_R864Changed)
    Q_PROPERTY(double x_865 READ pos_X865 WRITE setPos_X865 NOTIFY pos_X865Changed)
    Q_PROPERTY(double y_865 READ pos_Y865 WRITE setPos_Y865 NOTIFY pos_Y865Changed)
    Q_PROPERTY(double r_865 READ pos_R865 WRITE setPos_R865 NOTIFY pos_R865Changed)
    Q_PROPERTY(double x_866 READ pos_X866 WRITE setPos_X866 NOTIFY pos_X866Changed)
    Q_PROPERTY(double y_866 READ pos_Y866 WRITE setPos_Y866 NOTIFY pos_Y866Changed)
    Q_PROPERTY(double r_866 READ pos_R866 WRITE setPos_R866 NOTIFY pos_R866Changed)
    Q_PROPERTY(double x_867 READ pos_X867 WRITE setPos_X867 NOTIFY pos_X867Changed)
    Q_PROPERTY(double y_867 READ pos_Y867 WRITE setPos_Y867 NOTIFY pos_Y867Changed)
    Q_PROPERTY(double r_867 READ pos_R867 WRITE setPos_R867 NOTIFY pos_R867Changed)
    Q_PROPERTY(double x_868 READ pos_X868 WRITE setPos_X868 NOTIFY pos_X868Changed)
    Q_PROPERTY(double y_868 READ pos_Y868 WRITE setPos_Y868 NOTIFY pos_Y868Changed)
    Q_PROPERTY(double r_868 READ pos_R868 WRITE setPos_R868 NOTIFY pos_R868Changed)
    Q_PROPERTY(double x_869 READ pos_X869 WRITE setPos_X869 NOTIFY pos_X869Changed)
    Q_PROPERTY(double y_869 READ pos_Y869 WRITE setPos_Y869 NOTIFY pos_Y869Changed)
    Q_PROPERTY(double r_869 READ pos_R869 WRITE setPos_R869 NOTIFY pos_R869Changed)
    Q_PROPERTY(double x_870 READ pos_X870 WRITE setPos_X870 NOTIFY pos_X870Changed)
    Q_PROPERTY(double y_870 READ pos_Y870 WRITE setPos_Y870 NOTIFY pos_Y870Changed)
    Q_PROPERTY(double r_870 READ pos_R870 WRITE setPos_R870 NOTIFY pos_R870Changed)
    Q_PROPERTY(double x_871 READ pos_X871 WRITE setPos_X871 NOTIFY pos_X871Changed)
    Q_PROPERTY(double y_871 READ pos_Y871 WRITE setPos_Y871 NOTIFY pos_Y871Changed)
    Q_PROPERTY(double r_871 READ pos_R871 WRITE setPos_R871 NOTIFY pos_R871Changed)
    Q_PROPERTY(double x_872 READ pos_X872 WRITE setPos_X872 NOTIFY pos_X872Changed)
    Q_PROPERTY(double y_872 READ pos_Y872 WRITE setPos_Y872 NOTIFY pos_Y872Changed)
    Q_PROPERTY(double r_872 READ pos_R872 WRITE setPos_R872 NOTIFY pos_R872Changed)
    Q_PROPERTY(double x_873 READ pos_X873 WRITE setPos_X873 NOTIFY pos_X873Changed)
    Q_PROPERTY(double y_873 READ pos_Y873 WRITE setPos_Y873 NOTIFY pos_Y873Changed)
    Q_PROPERTY(double r_873 READ pos_R873 WRITE setPos_R873 NOTIFY pos_R873Changed)
    Q_PROPERTY(double x_874 READ pos_X874 WRITE setPos_X874 NOTIFY pos_X874Changed)
    Q_PROPERTY(double y_874 READ pos_Y874 WRITE setPos_Y874 NOTIFY pos_Y874Changed)
    Q_PROPERTY(double r_874 READ pos_R874 WRITE setPos_R874 NOTIFY pos_R874Changed)
    Q_PROPERTY(double x_875 READ pos_X875 WRITE setPos_X875 NOTIFY pos_X875Changed)
    Q_PROPERTY(double y_875 READ pos_Y875 WRITE setPos_Y875 NOTIFY pos_Y875Changed)
    Q_PROPERTY(double r_875 READ pos_R875 WRITE setPos_R875 NOTIFY pos_R875Changed)
    Q_PROPERTY(double x_876 READ pos_X876 WRITE setPos_X876 NOTIFY pos_X876Changed)
    Q_PROPERTY(double y_876 READ pos_Y876 WRITE setPos_Y876 NOTIFY pos_Y876Changed)
    Q_PROPERTY(double r_876 READ pos_R876 WRITE setPos_R876 NOTIFY pos_R876Changed)
    Q_PROPERTY(double x_877 READ pos_X877 WRITE setPos_X877 NOTIFY pos_X877Changed)
    Q_PROPERTY(double y_877 READ pos_Y877 WRITE setPos_Y877 NOTIFY pos_Y877Changed)
    Q_PROPERTY(double r_877 READ pos_R877 WRITE setPos_R877 NOTIFY pos_R877Changed)
    Q_PROPERTY(double x_878 READ pos_X878 WRITE setPos_X878 NOTIFY pos_X878Changed)
    Q_PROPERTY(double y_878 READ pos_Y878 WRITE setPos_Y878 NOTIFY pos_Y878Changed)
    Q_PROPERTY(double r_878 READ pos_R878 WRITE setPos_R878 NOTIFY pos_R878Changed)
    Q_PROPERTY(double x_879 READ pos_X879 WRITE setPos_X879 NOTIFY pos_X879Changed)
    Q_PROPERTY(double y_879 READ pos_Y879 WRITE setPos_Y879 NOTIFY pos_Y879Changed)
    Q_PROPERTY(double r_879 READ pos_R879 WRITE setPos_R879 NOTIFY pos_R879Changed)
    Q_PROPERTY(double x_880 READ pos_X880 WRITE setPos_X880 NOTIFY pos_X880Changed)
    Q_PROPERTY(double y_880 READ pos_Y880 WRITE setPos_Y880 NOTIFY pos_Y880Changed)
    Q_PROPERTY(double r_880 READ pos_R880 WRITE setPos_R880 NOTIFY pos_R880Changed)
    Q_PROPERTY(double x_881 READ pos_X881 WRITE setPos_X881 NOTIFY pos_X881Changed)
    Q_PROPERTY(double y_881 READ pos_Y881 WRITE setPos_Y881 NOTIFY pos_Y881Changed)
    Q_PROPERTY(double r_881 READ pos_R881 WRITE setPos_R881 NOTIFY pos_R881Changed)
    Q_PROPERTY(double x_882 READ pos_X882 WRITE setPos_X882 NOTIFY pos_X882Changed)
    Q_PROPERTY(double y_882 READ pos_Y882 WRITE setPos_Y882 NOTIFY pos_Y882Changed)
    Q_PROPERTY(double r_882 READ pos_R882 WRITE setPos_R882 NOTIFY pos_R882Changed)
    Q_PROPERTY(double x_883 READ pos_X883 WRITE setPos_X883 NOTIFY pos_X883Changed)
    Q_PROPERTY(double y_883 READ pos_Y883 WRITE setPos_Y883 NOTIFY pos_Y883Changed)
    Q_PROPERTY(double r_883 READ pos_R883 WRITE setPos_R883 NOTIFY pos_R883Changed)
    Q_PROPERTY(double x_884 READ pos_X884 WRITE setPos_X884 NOTIFY pos_X884Changed)
    Q_PROPERTY(double y_884 READ pos_Y884 WRITE setPos_Y884 NOTIFY pos_Y884Changed)
    Q_PROPERTY(double r_884 READ pos_R884 WRITE setPos_R884 NOTIFY pos_R884Changed)
    Q_PROPERTY(double x_885 READ pos_X885 WRITE setPos_X885 NOTIFY pos_X885Changed)
    Q_PROPERTY(double y_885 READ pos_Y885 WRITE setPos_Y885 NOTIFY pos_Y885Changed)
    Q_PROPERTY(double r_885 READ pos_R885 WRITE setPos_R885 NOTIFY pos_R885Changed)
    Q_PROPERTY(double x_886 READ pos_X886 WRITE setPos_X886 NOTIFY pos_X886Changed)
    Q_PROPERTY(double y_886 READ pos_Y886 WRITE setPos_Y886 NOTIFY pos_Y886Changed)
    Q_PROPERTY(double r_886 READ pos_R886 WRITE setPos_R886 NOTIFY pos_R886Changed)
    Q_PROPERTY(double x_887 READ pos_X887 WRITE setPos_X887 NOTIFY pos_X887Changed)
    Q_PROPERTY(double y_887 READ pos_Y887 WRITE setPos_Y887 NOTIFY pos_Y887Changed)
    Q_PROPERTY(double r_887 READ pos_R887 WRITE setPos_R887 NOTIFY pos_R887Changed)
    Q_PROPERTY(double x_888 READ pos_X888 WRITE setPos_X888 NOTIFY pos_X888Changed)
    Q_PROPERTY(double y_888 READ pos_Y888 WRITE setPos_Y888 NOTIFY pos_Y888Changed)
    Q_PROPERTY(double r_888 READ pos_R888 WRITE setPos_R888 NOTIFY pos_R888Changed)
    Q_PROPERTY(double x_889 READ pos_X889 WRITE setPos_X889 NOTIFY pos_X889Changed)
    Q_PROPERTY(double y_889 READ pos_Y889 WRITE setPos_Y889 NOTIFY pos_Y889Changed)
    Q_PROPERTY(double r_889 READ pos_R889 WRITE setPos_R889 NOTIFY pos_R889Changed)
    Q_PROPERTY(double x_890 READ pos_X890 WRITE setPos_X890 NOTIFY pos_X890Changed)
    Q_PROPERTY(double y_890 READ pos_Y890 WRITE setPos_Y890 NOTIFY pos_Y890Changed)
    Q_PROPERTY(double r_890 READ pos_R890 WRITE setPos_R890 NOTIFY pos_R890Changed)
    Q_PROPERTY(double x_891 READ pos_X891 WRITE setPos_X891 NOTIFY pos_X891Changed)
    Q_PROPERTY(double y_891 READ pos_Y891 WRITE setPos_Y891 NOTIFY pos_Y891Changed)
    Q_PROPERTY(double r_891 READ pos_R891 WRITE setPos_R891 NOTIFY pos_R891Changed)
    Q_PROPERTY(double x_892 READ pos_X892 WRITE setPos_X892 NOTIFY pos_X892Changed)
    Q_PROPERTY(double y_892 READ pos_Y892 WRITE setPos_Y892 NOTIFY pos_Y892Changed)
    Q_PROPERTY(double r_892 READ pos_R892 WRITE setPos_R892 NOTIFY pos_R892Changed)
    Q_PROPERTY(double x_893 READ pos_X893 WRITE setPos_X893 NOTIFY pos_X893Changed)
    Q_PROPERTY(double y_893 READ pos_Y893 WRITE setPos_Y893 NOTIFY pos_Y893Changed)
    Q_PROPERTY(double r_893 READ pos_R893 WRITE setPos_R893 NOTIFY pos_R893Changed)
    Q_PROPERTY(double x_894 READ pos_X894 WRITE setPos_X894 NOTIFY pos_X894Changed)
    Q_PROPERTY(double y_894 READ pos_Y894 WRITE setPos_Y894 NOTIFY pos_Y894Changed)
    Q_PROPERTY(double r_894 READ pos_R894 WRITE setPos_R894 NOTIFY pos_R894Changed)
    Q_PROPERTY(double x_895 READ pos_X895 WRITE setPos_X895 NOTIFY pos_X895Changed)
    Q_PROPERTY(double y_895 READ pos_Y895 WRITE setPos_Y895 NOTIFY pos_Y895Changed)
    Q_PROPERTY(double r_895 READ pos_R895 WRITE setPos_R895 NOTIFY pos_R895Changed)
    Q_PROPERTY(double x_896 READ pos_X896 WRITE setPos_X896 NOTIFY pos_X896Changed)
    Q_PROPERTY(double y_896 READ pos_Y896 WRITE setPos_Y896 NOTIFY pos_Y896Changed)
    Q_PROPERTY(double r_896 READ pos_R896 WRITE setPos_R896 NOTIFY pos_R896Changed)
    Q_PROPERTY(double x_897 READ pos_X897 WRITE setPos_X897 NOTIFY pos_X897Changed)
    Q_PROPERTY(double y_897 READ pos_Y897 WRITE setPos_Y897 NOTIFY pos_Y897Changed)
    Q_PROPERTY(double r_897 READ pos_R897 WRITE setPos_R897 NOTIFY pos_R897Changed)
    Q_PROPERTY(double x_898 READ pos_X898 WRITE setPos_X898 NOTIFY pos_X898Changed)
    Q_PROPERTY(double y_898 READ pos_Y898 WRITE setPos_Y898 NOTIFY pos_Y898Changed)
    Q_PROPERTY(double r_898 READ pos_R898 WRITE setPos_R898 NOTIFY pos_R898Changed)
    Q_PROPERTY(double x_899 READ pos_X899 WRITE setPos_X899 NOTIFY pos_X899Changed)
    Q_PROPERTY(double y_899 READ pos_Y899 WRITE setPos_Y899 NOTIFY pos_Y899Changed)
    Q_PROPERTY(double r_899 READ pos_R899 WRITE setPos_R899 NOTIFY pos_R899Changed)
    Q_PROPERTY(double x_900 READ pos_X900 WRITE setPos_X900 NOTIFY pos_X900Changed)
    Q_PROPERTY(double y_900 READ pos_Y900 WRITE setPos_Y900 NOTIFY pos_Y900Changed)
    Q_PROPERTY(double r_900 READ pos_R900 WRITE setPos_R900 NOTIFY pos_R900Changed)
    Q_PROPERTY(double x_901 READ pos_X901 WRITE setPos_X901 NOTIFY pos_X901Changed)
    Q_PROPERTY(double y_901 READ pos_Y901 WRITE setPos_Y901 NOTIFY pos_Y901Changed)
    Q_PROPERTY(double r_901 READ pos_R901 WRITE setPos_R901 NOTIFY pos_R901Changed)
    Q_PROPERTY(double x_902 READ pos_X902 WRITE setPos_X902 NOTIFY pos_X902Changed)
    Q_PROPERTY(double y_902 READ pos_Y902 WRITE setPos_Y902 NOTIFY pos_Y902Changed)
    Q_PROPERTY(double r_902 READ pos_R902 WRITE setPos_R902 NOTIFY pos_R902Changed)
    Q_PROPERTY(double x_903 READ pos_X903 WRITE setPos_X903 NOTIFY pos_X903Changed)
    Q_PROPERTY(double y_903 READ pos_Y903 WRITE setPos_Y903 NOTIFY pos_Y903Changed)
    Q_PROPERTY(double r_903 READ pos_R903 WRITE setPos_R903 NOTIFY pos_R903Changed)
    Q_PROPERTY(double x_904 READ pos_X904 WRITE setPos_X904 NOTIFY pos_X904Changed)
    Q_PROPERTY(double y_904 READ pos_Y904 WRITE setPos_Y904 NOTIFY pos_Y904Changed)
    Q_PROPERTY(double r_904 READ pos_R904 WRITE setPos_R904 NOTIFY pos_R904Changed)
    Q_PROPERTY(double x_905 READ pos_X905 WRITE setPos_X905 NOTIFY pos_X905Changed)
    Q_PROPERTY(double y_905 READ pos_Y905 WRITE setPos_Y905 NOTIFY pos_Y905Changed)
    Q_PROPERTY(double r_905 READ pos_R905 WRITE setPos_R905 NOTIFY pos_R905Changed)
    Q_PROPERTY(double x_906 READ pos_X906 WRITE setPos_X906 NOTIFY pos_X906Changed)
    Q_PROPERTY(double y_906 READ pos_Y906 WRITE setPos_Y906 NOTIFY pos_Y906Changed)
    Q_PROPERTY(double r_906 READ pos_R906 WRITE setPos_R906 NOTIFY pos_R906Changed)
    Q_PROPERTY(double x_907 READ pos_X907 WRITE setPos_X907 NOTIFY pos_X907Changed)
    Q_PROPERTY(double y_907 READ pos_Y907 WRITE setPos_Y907 NOTIFY pos_Y907Changed)
    Q_PROPERTY(double r_907 READ pos_R907 WRITE setPos_R907 NOTIFY pos_R907Changed)
    Q_PROPERTY(double x_908 READ pos_X908 WRITE setPos_X908 NOTIFY pos_X908Changed)
    Q_PROPERTY(double y_908 READ pos_Y908 WRITE setPos_Y908 NOTIFY pos_Y908Changed)
    Q_PROPERTY(double r_908 READ pos_R908 WRITE setPos_R908 NOTIFY pos_R908Changed)
    Q_PROPERTY(double x_909 READ pos_X909 WRITE setPos_X909 NOTIFY pos_X909Changed)
    Q_PROPERTY(double y_909 READ pos_Y909 WRITE setPos_Y909 NOTIFY pos_Y909Changed)
    Q_PROPERTY(double r_909 READ pos_R909 WRITE setPos_R909 NOTIFY pos_R909Changed)
    Q_PROPERTY(double x_910 READ pos_X910 WRITE setPos_X910 NOTIFY pos_X910Changed)
    Q_PROPERTY(double y_910 READ pos_Y910 WRITE setPos_Y910 NOTIFY pos_Y910Changed)
    Q_PROPERTY(double r_910 READ pos_R910 WRITE setPos_R910 NOTIFY pos_R910Changed)
    Q_PROPERTY(double x_911 READ pos_X911 WRITE setPos_X911 NOTIFY pos_X911Changed)
    Q_PROPERTY(double y_911 READ pos_Y911 WRITE setPos_Y911 NOTIFY pos_Y911Changed)
    Q_PROPERTY(double r_911 READ pos_R911 WRITE setPos_R911 NOTIFY pos_R911Changed)
    Q_PROPERTY(double x_912 READ pos_X912 WRITE setPos_X912 NOTIFY pos_X912Changed)
    Q_PROPERTY(double y_912 READ pos_Y912 WRITE setPos_Y912 NOTIFY pos_Y912Changed)
    Q_PROPERTY(double r_912 READ pos_R912 WRITE setPos_R912 NOTIFY pos_R912Changed)
    Q_PROPERTY(double x_913 READ pos_X913 WRITE setPos_X913 NOTIFY pos_X913Changed)
    Q_PROPERTY(double y_913 READ pos_Y913 WRITE setPos_Y913 NOTIFY pos_Y913Changed)
    Q_PROPERTY(double r_913 READ pos_R913 WRITE setPos_R913 NOTIFY pos_R913Changed)
    Q_PROPERTY(double x_914 READ pos_X914 WRITE setPos_X914 NOTIFY pos_X914Changed)
    Q_PROPERTY(double y_914 READ pos_Y914 WRITE setPos_Y914 NOTIFY pos_Y914Changed)
    Q_PROPERTY(double r_914 READ pos_R914 WRITE setPos_R914 NOTIFY pos_R914Changed)
    Q_PROPERTY(double x_915 READ pos_X915 WRITE setPos_X915 NOTIFY pos_X915Changed)
    Q_PROPERTY(double y_915 READ pos_Y915 WRITE setPos_Y915 NOTIFY pos_Y915Changed)
    Q_PROPERTY(double r_915 READ pos_R915 WRITE setPos_R915 NOTIFY pos_R915Changed)
    Q_PROPERTY(double x_916 READ pos_X916 WRITE setPos_X916 NOTIFY pos_X916Changed)
    Q_PROPERTY(double y_916 READ pos_Y916 WRITE setPos_Y916 NOTIFY pos_Y916Changed)
    Q_PROPERTY(double r_916 READ pos_R916 WRITE setPos_R916 NOTIFY pos_R916Changed)
    Q_PROPERTY(double x_917 READ pos_X917 WRITE setPos_X917 NOTIFY pos_X917Changed)
    Q_PROPERTY(double y_917 READ pos_Y917 WRITE setPos_Y917 NOTIFY pos_Y917Changed)
    Q_PROPERTY(double r_917 READ pos_R917 WRITE setPos_R917 NOTIFY pos_R917Changed)
    Q_PROPERTY(double x_918 READ pos_X918 WRITE setPos_X918 NOTIFY pos_X918Changed)
    Q_PROPERTY(double y_918 READ pos_Y918 WRITE setPos_Y918 NOTIFY pos_Y918Changed)
    Q_PROPERTY(double r_918 READ pos_R918 WRITE setPos_R918 NOTIFY pos_R918Changed)
    Q_PROPERTY(double x_919 READ pos_X919 WRITE setPos_X919 NOTIFY pos_X919Changed)
    Q_PROPERTY(double y_919 READ pos_Y919 WRITE setPos_Y919 NOTIFY pos_Y919Changed)
    Q_PROPERTY(double r_919 READ pos_R919 WRITE setPos_R919 NOTIFY pos_R919Changed)
    Q_PROPERTY(double x_920 READ pos_X920 WRITE setPos_X920 NOTIFY pos_X920Changed)
    Q_PROPERTY(double y_920 READ pos_Y920 WRITE setPos_Y920 NOTIFY pos_Y920Changed)
    Q_PROPERTY(double r_920 READ pos_R920 WRITE setPos_R920 NOTIFY pos_R920Changed)
    Q_PROPERTY(double x_921 READ pos_X921 WRITE setPos_X921 NOTIFY pos_X921Changed)
    Q_PROPERTY(double y_921 READ pos_Y921 WRITE setPos_Y921 NOTIFY pos_Y921Changed)
    Q_PROPERTY(double r_921 READ pos_R921 WRITE setPos_R921 NOTIFY pos_R921Changed)
    Q_PROPERTY(double x_922 READ pos_X922 WRITE setPos_X922 NOTIFY pos_X922Changed)
    Q_PROPERTY(double y_922 READ pos_Y922 WRITE setPos_Y922 NOTIFY pos_Y922Changed)
    Q_PROPERTY(double r_922 READ pos_R922 WRITE setPos_R922 NOTIFY pos_R922Changed)
    Q_PROPERTY(double x_923 READ pos_X923 WRITE setPos_X923 NOTIFY pos_X923Changed)
    Q_PROPERTY(double y_923 READ pos_Y923 WRITE setPos_Y923 NOTIFY pos_Y923Changed)
    Q_PROPERTY(double r_923 READ pos_R923 WRITE setPos_R923 NOTIFY pos_R923Changed)
    Q_PROPERTY(double x_924 READ pos_X924 WRITE setPos_X924 NOTIFY pos_X924Changed)
    Q_PROPERTY(double y_924 READ pos_Y924 WRITE setPos_Y924 NOTIFY pos_Y924Changed)
    Q_PROPERTY(double r_924 READ pos_R924 WRITE setPos_R924 NOTIFY pos_R924Changed)
    Q_PROPERTY(double x_925 READ pos_X925 WRITE setPos_X925 NOTIFY pos_X925Changed)
    Q_PROPERTY(double y_925 READ pos_Y925 WRITE setPos_Y925 NOTIFY pos_Y925Changed)
    Q_PROPERTY(double r_925 READ pos_R925 WRITE setPos_R925 NOTIFY pos_R925Changed)
    Q_PROPERTY(double x_926 READ pos_X926 WRITE setPos_X926 NOTIFY pos_X926Changed)
    Q_PROPERTY(double y_926 READ pos_Y926 WRITE setPos_Y926 NOTIFY pos_Y926Changed)
    Q_PROPERTY(double r_926 READ pos_R926 WRITE setPos_R926 NOTIFY pos_R926Changed)
    Q_PROPERTY(double x_927 READ pos_X927 WRITE setPos_X927 NOTIFY pos_X927Changed)
    Q_PROPERTY(double y_927 READ pos_Y927 WRITE setPos_Y927 NOTIFY pos_Y927Changed)
    Q_PROPERTY(double r_927 READ pos_R927 WRITE setPos_R927 NOTIFY pos_R927Changed)
    Q_PROPERTY(double x_928 READ pos_X928 WRITE setPos_X928 NOTIFY pos_X928Changed)
    Q_PROPERTY(double y_928 READ pos_Y928 WRITE setPos_Y928 NOTIFY pos_Y928Changed)
    Q_PROPERTY(double r_928 READ pos_R928 WRITE setPos_R928 NOTIFY pos_R928Changed)
    Q_PROPERTY(double x_929 READ pos_X929 WRITE setPos_X929 NOTIFY pos_X929Changed)
    Q_PROPERTY(double y_929 READ pos_Y929 WRITE setPos_Y929 NOTIFY pos_Y929Changed)
    Q_PROPERTY(double r_929 READ pos_R929 WRITE setPos_R929 NOTIFY pos_R929Changed)
    Q_PROPERTY(double x_930 READ pos_X930 WRITE setPos_X930 NOTIFY pos_X930Changed)
    Q_PROPERTY(double y_930 READ pos_Y930 WRITE setPos_Y930 NOTIFY pos_Y930Changed)
    Q_PROPERTY(double r_930 READ pos_R930 WRITE setPos_R930 NOTIFY pos_R930Changed)
    Q_PROPERTY(double x_931 READ pos_X931 WRITE setPos_X931 NOTIFY pos_X931Changed)
    Q_PROPERTY(double y_931 READ pos_Y931 WRITE setPos_Y931 NOTIFY pos_Y931Changed)
    Q_PROPERTY(double r_931 READ pos_R931 WRITE setPos_R931 NOTIFY pos_R931Changed)
    Q_PROPERTY(double x_932 READ pos_X932 WRITE setPos_X932 NOTIFY pos_X932Changed)
    Q_PROPERTY(double y_932 READ pos_Y932 WRITE setPos_Y932 NOTIFY pos_Y932Changed)
    Q_PROPERTY(double r_932 READ pos_R932 WRITE setPos_R932 NOTIFY pos_R932Changed)
    Q_PROPERTY(double x_933 READ pos_X933 WRITE setPos_X933 NOTIFY pos_X933Changed)
    Q_PROPERTY(double y_933 READ pos_Y933 WRITE setPos_Y933 NOTIFY pos_Y933Changed)
    Q_PROPERTY(double r_933 READ pos_R933 WRITE setPos_R933 NOTIFY pos_R933Changed)
    Q_PROPERTY(double x_934 READ pos_X934 WRITE setPos_X934 NOTIFY pos_X934Changed)
    Q_PROPERTY(double y_934 READ pos_Y934 WRITE setPos_Y934 NOTIFY pos_Y934Changed)
    Q_PROPERTY(double r_934 READ pos_R934 WRITE setPos_R934 NOTIFY pos_R934Changed)
    Q_PROPERTY(double x_935 READ pos_X935 WRITE setPos_X935 NOTIFY pos_X935Changed)
    Q_PROPERTY(double y_935 READ pos_Y935 WRITE setPos_Y935 NOTIFY pos_Y935Changed)
    Q_PROPERTY(double r_935 READ pos_R935 WRITE setPos_R935 NOTIFY pos_R935Changed)
    Q_PROPERTY(double x_936 READ pos_X936 WRITE setPos_X936 NOTIFY pos_X936Changed)
    Q_PROPERTY(double y_936 READ pos_Y936 WRITE setPos_Y936 NOTIFY pos_Y936Changed)
    Q_PROPERTY(double r_936 READ pos_R936 WRITE setPos_R936 NOTIFY pos_R936Changed)
    Q_PROPERTY(double x_937 READ pos_X937 WRITE setPos_X937 NOTIFY pos_X937Changed)
    Q_PROPERTY(double y_937 READ pos_Y937 WRITE setPos_Y937 NOTIFY pos_Y937Changed)
    Q_PROPERTY(double r_937 READ pos_R937 WRITE setPos_R937 NOTIFY pos_R937Changed)
    Q_PROPERTY(double x_938 READ pos_X938 WRITE setPos_X938 NOTIFY pos_X938Changed)
    Q_PROPERTY(double y_938 READ pos_Y938 WRITE setPos_Y938 NOTIFY pos_Y938Changed)
    Q_PROPERTY(double r_938 READ pos_R938 WRITE setPos_R938 NOTIFY pos_R938Changed)
    Q_PROPERTY(double x_939 READ pos_X939 WRITE setPos_X939 NOTIFY pos_X939Changed)
    Q_PROPERTY(double y_939 READ pos_Y939 WRITE setPos_Y939 NOTIFY pos_Y939Changed)
    Q_PROPERTY(double r_939 READ pos_R939 WRITE setPos_R939 NOTIFY pos_R939Changed)
    Q_PROPERTY(double x_940 READ pos_X940 WRITE setPos_X940 NOTIFY pos_X940Changed)
    Q_PROPERTY(double y_940 READ pos_Y940 WRITE setPos_Y940 NOTIFY pos_Y940Changed)
    Q_PROPERTY(double r_940 READ pos_R940 WRITE setPos_R940 NOTIFY pos_R940Changed)
    Q_PROPERTY(double x_941 READ pos_X941 WRITE setPos_X941 NOTIFY pos_X941Changed)
    Q_PROPERTY(double y_941 READ pos_Y941 WRITE setPos_Y941 NOTIFY pos_Y941Changed)
    Q_PROPERTY(double r_941 READ pos_R941 WRITE setPos_R941 NOTIFY pos_R941Changed)
    Q_PROPERTY(double x_942 READ pos_X942 WRITE setPos_X942 NOTIFY pos_X942Changed)
    Q_PROPERTY(double y_942 READ pos_Y942 WRITE setPos_Y942 NOTIFY pos_Y942Changed)
    Q_PROPERTY(double r_942 READ pos_R942 WRITE setPos_R942 NOTIFY pos_R942Changed)
    Q_PROPERTY(double x_943 READ pos_X943 WRITE setPos_X943 NOTIFY pos_X943Changed)
    Q_PROPERTY(double y_943 READ pos_Y943 WRITE setPos_Y943 NOTIFY pos_Y943Changed)
    Q_PROPERTY(double r_943 READ pos_R943 WRITE setPos_R943 NOTIFY pos_R943Changed)
    Q_PROPERTY(double x_944 READ pos_X944 WRITE setPos_X944 NOTIFY pos_X944Changed)
    Q_PROPERTY(double y_944 READ pos_Y944 WRITE setPos_Y944 NOTIFY pos_Y944Changed)
    Q_PROPERTY(double r_944 READ pos_R944 WRITE setPos_R944 NOTIFY pos_R944Changed)
    Q_PROPERTY(double x_945 READ pos_X945 WRITE setPos_X945 NOTIFY pos_X945Changed)
    Q_PROPERTY(double y_945 READ pos_Y945 WRITE setPos_Y945 NOTIFY pos_Y945Changed)
    Q_PROPERTY(double r_945 READ pos_R945 WRITE setPos_R945 NOTIFY pos_R945Changed)
    Q_PROPERTY(double x_946 READ pos_X946 WRITE setPos_X946 NOTIFY pos_X946Changed)
    Q_PROPERTY(double y_946 READ pos_Y946 WRITE setPos_Y946 NOTIFY pos_Y946Changed)
    Q_PROPERTY(double r_946 READ pos_R946 WRITE setPos_R946 NOTIFY pos_R946Changed)
    Q_PROPERTY(double x_947 READ pos_X947 WRITE setPos_X947 NOTIFY pos_X947Changed)
    Q_PROPERTY(double y_947 READ pos_Y947 WRITE setPos_Y947 NOTIFY pos_Y947Changed)
    Q_PROPERTY(double r_947 READ pos_R947 WRITE setPos_R947 NOTIFY pos_R947Changed)
    Q_PROPERTY(double x_948 READ pos_X948 WRITE setPos_X948 NOTIFY pos_X948Changed)
    Q_PROPERTY(double y_948 READ pos_Y948 WRITE setPos_Y948 NOTIFY pos_Y948Changed)
    Q_PROPERTY(double r_948 READ pos_R948 WRITE setPos_R948 NOTIFY pos_R948Changed)
    Q_PROPERTY(double x_949 READ pos_X949 WRITE setPos_X949 NOTIFY pos_X949Changed)
    Q_PROPERTY(double y_949 READ pos_Y949 WRITE setPos_Y949 NOTIFY pos_Y949Changed)
    Q_PROPERTY(double r_949 READ pos_R949 WRITE setPos_R949 NOTIFY pos_R949Changed)
    Q_PROPERTY(double x_950 READ pos_X950 WRITE setPos_X950 NOTIFY pos_X950Changed)
    Q_PROPERTY(double y_950 READ pos_Y950 WRITE setPos_Y950 NOTIFY pos_Y950Changed)
    Q_PROPERTY(double r_950 READ pos_R950 WRITE setPos_R950 NOTIFY pos_R950Changed)
    Q_PROPERTY(double x_951 READ pos_X951 WRITE setPos_X951 NOTIFY pos_X951Changed)
    Q_PROPERTY(double y_951 READ pos_Y951 WRITE setPos_Y951 NOTIFY pos_Y951Changed)
    Q_PROPERTY(double r_951 READ pos_R951 WRITE setPos_R951 NOTIFY pos_R951Changed)
    Q_PROPERTY(double x_952 READ pos_X952 WRITE setPos_X952 NOTIFY pos_X952Changed)
    Q_PROPERTY(double y_952 READ pos_Y952 WRITE setPos_Y952 NOTIFY pos_Y952Changed)
    Q_PROPERTY(double r_952 READ pos_R952 WRITE setPos_R952 NOTIFY pos_R952Changed)
    Q_PROPERTY(double x_953 READ pos_X953 WRITE setPos_X953 NOTIFY pos_X953Changed)
    Q_PROPERTY(double y_953 READ pos_Y953 WRITE setPos_Y953 NOTIFY pos_Y953Changed)
    Q_PROPERTY(double r_953 READ pos_R953 WRITE setPos_R953 NOTIFY pos_R953Changed)
    Q_PROPERTY(double x_954 READ pos_X954 WRITE setPos_X954 NOTIFY pos_X954Changed)
    Q_PROPERTY(double y_954 READ pos_Y954 WRITE setPos_Y954 NOTIFY pos_Y954Changed)
    Q_PROPERTY(double r_954 READ pos_R954 WRITE setPos_R954 NOTIFY pos_R954Changed)
    Q_PROPERTY(double x_955 READ pos_X955 WRITE setPos_X955 NOTIFY pos_X955Changed)
    Q_PROPERTY(double y_955 READ pos_Y955 WRITE setPos_Y955 NOTIFY pos_Y955Changed)
    Q_PROPERTY(double r_955 READ pos_R955 WRITE setPos_R955 NOTIFY pos_R955Changed)
    Q_PROPERTY(double x_956 READ pos_X956 WRITE setPos_X956 NOTIFY pos_X956Changed)
    Q_PROPERTY(double y_956 READ pos_Y956 WRITE setPos_Y956 NOTIFY pos_Y956Changed)
    Q_PROPERTY(double r_956 READ pos_R956 WRITE setPos_R956 NOTIFY pos_R956Changed)
    Q_PROPERTY(double x_957 READ pos_X957 WRITE setPos_X957 NOTIFY pos_X957Changed)
    Q_PROPERTY(double y_957 READ pos_Y957 WRITE setPos_Y957 NOTIFY pos_Y957Changed)
    Q_PROPERTY(double r_957 READ pos_R957 WRITE setPos_R957 NOTIFY pos_R957Changed)
    Q_PROPERTY(double x_958 READ pos_X958 WRITE setPos_X958 NOTIFY pos_X958Changed)
    Q_PROPERTY(double y_958 READ pos_Y958 WRITE setPos_Y958 NOTIFY pos_Y958Changed)
    Q_PROPERTY(double r_958 READ pos_R958 WRITE setPos_R958 NOTIFY pos_R958Changed)
    Q_PROPERTY(double x_959 READ pos_X959 WRITE setPos_X959 NOTIFY pos_X959Changed)
    Q_PROPERTY(double y_959 READ pos_Y959 WRITE setPos_Y959 NOTIFY pos_Y959Changed)
    Q_PROPERTY(double r_959 READ pos_R959 WRITE setPos_R959 NOTIFY pos_R959Changed)
    Q_PROPERTY(double x_960 READ pos_X960 WRITE setPos_X960 NOTIFY pos_X960Changed)
    Q_PROPERTY(double y_960 READ pos_Y960 WRITE setPos_Y960 NOTIFY pos_Y960Changed)
    Q_PROPERTY(double r_960 READ pos_R960 WRITE setPos_R960 NOTIFY pos_R960Changed)
    Q_PROPERTY(double x_961 READ pos_X961 WRITE setPos_X961 NOTIFY pos_X961Changed)
    Q_PROPERTY(double y_961 READ pos_Y961 WRITE setPos_Y961 NOTIFY pos_Y961Changed)
    Q_PROPERTY(double r_961 READ pos_R961 WRITE setPos_R961 NOTIFY pos_R961Changed)
    Q_PROPERTY(double x_962 READ pos_X962 WRITE setPos_X962 NOTIFY pos_X962Changed)
    Q_PROPERTY(double y_962 READ pos_Y962 WRITE setPos_Y962 NOTIFY pos_Y962Changed)
    Q_PROPERTY(double r_962 READ pos_R962 WRITE setPos_R962 NOTIFY pos_R962Changed)
    Q_PROPERTY(double x_963 READ pos_X963 WRITE setPos_X963 NOTIFY pos_X963Changed)
    Q_PROPERTY(double y_963 READ pos_Y963 WRITE setPos_Y963 NOTIFY pos_Y963Changed)
    Q_PROPERTY(double r_963 READ pos_R963 WRITE setPos_R963 NOTIFY pos_R963Changed)
    Q_PROPERTY(double x_964 READ pos_X964 WRITE setPos_X964 NOTIFY pos_X964Changed)
    Q_PROPERTY(double y_964 READ pos_Y964 WRITE setPos_Y964 NOTIFY pos_Y964Changed)
    Q_PROPERTY(double r_964 READ pos_R964 WRITE setPos_R964 NOTIFY pos_R964Changed)
    Q_PROPERTY(double x_965 READ pos_X965 WRITE setPos_X965 NOTIFY pos_X965Changed)
    Q_PROPERTY(double y_965 READ pos_Y965 WRITE setPos_Y965 NOTIFY pos_Y965Changed)
    Q_PROPERTY(double r_965 READ pos_R965 WRITE setPos_R965 NOTIFY pos_R965Changed)
    Q_PROPERTY(double x_966 READ pos_X966 WRITE setPos_X966 NOTIFY pos_X966Changed)
    Q_PROPERTY(double y_966 READ pos_Y966 WRITE setPos_Y966 NOTIFY pos_Y966Changed)
    Q_PROPERTY(double r_966 READ pos_R966 WRITE setPos_R966 NOTIFY pos_R966Changed)
    Q_PROPERTY(double x_967 READ pos_X967 WRITE setPos_X967 NOTIFY pos_X967Changed)
    Q_PROPERTY(double y_967 READ pos_Y967 WRITE setPos_Y967 NOTIFY pos_Y967Changed)
    Q_PROPERTY(double r_967 READ pos_R967 WRITE setPos_R967 NOTIFY pos_R967Changed)
    Q_PROPERTY(double x_968 READ pos_X968 WRITE setPos_X968 NOTIFY pos_X968Changed)
    Q_PROPERTY(double y_968 READ pos_Y968 WRITE setPos_Y968 NOTIFY pos_Y968Changed)
    Q_PROPERTY(double r_968 READ pos_R968 WRITE setPos_R968 NOTIFY pos_R968Changed)
    Q_PROPERTY(double x_969 READ pos_X969 WRITE setPos_X969 NOTIFY pos_X969Changed)
    Q_PROPERTY(double y_969 READ pos_Y969 WRITE setPos_Y969 NOTIFY pos_Y969Changed)
    Q_PROPERTY(double r_969 READ pos_R969 WRITE setPos_R969 NOTIFY pos_R969Changed)
    Q_PROPERTY(double x_970 READ pos_X970 WRITE setPos_X970 NOTIFY pos_X970Changed)
    Q_PROPERTY(double y_970 READ pos_Y970 WRITE setPos_Y970 NOTIFY pos_Y970Changed)
    Q_PROPERTY(double r_970 READ pos_R970 WRITE setPos_R970 NOTIFY pos_R970Changed)
    Q_PROPERTY(double x_971 READ pos_X971 WRITE setPos_X971 NOTIFY pos_X971Changed)
    Q_PROPERTY(double y_971 READ pos_Y971 WRITE setPos_Y971 NOTIFY pos_Y971Changed)
    Q_PROPERTY(double r_971 READ pos_R971 WRITE setPos_R971 NOTIFY pos_R971Changed)
    Q_PROPERTY(double x_972 READ pos_X972 WRITE setPos_X972 NOTIFY pos_X972Changed)
    Q_PROPERTY(double y_972 READ pos_Y972 WRITE setPos_Y972 NOTIFY pos_Y972Changed)
    Q_PROPERTY(double r_972 READ pos_R972 WRITE setPos_R972 NOTIFY pos_R972Changed)
    Q_PROPERTY(double x_973 READ pos_X973 WRITE setPos_X973 NOTIFY pos_X973Changed)
    Q_PROPERTY(double y_973 READ pos_Y973 WRITE setPos_Y973 NOTIFY pos_Y973Changed)
    Q_PROPERTY(double r_973 READ pos_R973 WRITE setPos_R973 NOTIFY pos_R973Changed)
    Q_PROPERTY(double x_974 READ pos_X974 WRITE setPos_X974 NOTIFY pos_X974Changed)
    Q_PROPERTY(double y_974 READ pos_Y974 WRITE setPos_Y974 NOTIFY pos_Y974Changed)
    Q_PROPERTY(double r_974 READ pos_R974 WRITE setPos_R974 NOTIFY pos_R974Changed)
    Q_PROPERTY(double x_975 READ pos_X975 WRITE setPos_X975 NOTIFY pos_X975Changed)
    Q_PROPERTY(double y_975 READ pos_Y975 WRITE setPos_Y975 NOTIFY pos_Y975Changed)
    Q_PROPERTY(double r_975 READ pos_R975 WRITE setPos_R975 NOTIFY pos_R975Changed)
    Q_PROPERTY(double x_976 READ pos_X976 WRITE setPos_X976 NOTIFY pos_X976Changed)
    Q_PROPERTY(double y_976 READ pos_Y976 WRITE setPos_Y976 NOTIFY pos_Y976Changed)
    Q_PROPERTY(double r_976 READ pos_R976 WRITE setPos_R976 NOTIFY pos_R976Changed)
    Q_PROPERTY(double x_977 READ pos_X977 WRITE setPos_X977 NOTIFY pos_X977Changed)
    Q_PROPERTY(double y_977 READ pos_Y977 WRITE setPos_Y977 NOTIFY pos_Y977Changed)
    Q_PROPERTY(double r_977 READ pos_R977 WRITE setPos_R977 NOTIFY pos_R977Changed)
    Q_PROPERTY(double x_978 READ pos_X978 WRITE setPos_X978 NOTIFY pos_X978Changed)
    Q_PROPERTY(double y_978 READ pos_Y978 WRITE setPos_Y978 NOTIFY pos_Y978Changed)
    Q_PROPERTY(double r_978 READ pos_R978 WRITE setPos_R978 NOTIFY pos_R978Changed)
    Q_PROPERTY(double x_979 READ pos_X979 WRITE setPos_X979 NOTIFY pos_X979Changed)
    Q_PROPERTY(double y_979 READ pos_Y979 WRITE setPos_Y979 NOTIFY pos_Y979Changed)
    Q_PROPERTY(double r_979 READ pos_R979 WRITE setPos_R979 NOTIFY pos_R979Changed)
    Q_PROPERTY(double x_980 READ pos_X980 WRITE setPos_X980 NOTIFY pos_X980Changed)
    Q_PROPERTY(double y_980 READ pos_Y980 WRITE setPos_Y980 NOTIFY pos_Y980Changed)
    Q_PROPERTY(double r_980 READ pos_R980 WRITE setPos_R980 NOTIFY pos_R980Changed)
    Q_PROPERTY(double x_981 READ pos_X981 WRITE setPos_X981 NOTIFY pos_X981Changed)
    Q_PROPERTY(double y_981 READ pos_Y981 WRITE setPos_Y981 NOTIFY pos_Y981Changed)
    Q_PROPERTY(double r_981 READ pos_R981 WRITE setPos_R981 NOTIFY pos_R981Changed)
    Q_PROPERTY(double x_982 READ pos_X982 WRITE setPos_X982 NOTIFY pos_X982Changed)
    Q_PROPERTY(double y_982 READ pos_Y982 WRITE setPos_Y982 NOTIFY pos_Y982Changed)
    Q_PROPERTY(double r_982 READ pos_R982 WRITE setPos_R982 NOTIFY pos_R982Changed)
    Q_PROPERTY(double x_983 READ pos_X983 WRITE setPos_X983 NOTIFY pos_X983Changed)
    Q_PROPERTY(double y_983 READ pos_Y983 WRITE setPos_Y983 NOTIFY pos_Y983Changed)
    Q_PROPERTY(double r_983 READ pos_R983 WRITE setPos_R983 NOTIFY pos_R983Changed)
    Q_PROPERTY(double x_984 READ pos_X984 WRITE setPos_X984 NOTIFY pos_X984Changed)
    Q_PROPERTY(double y_984 READ pos_Y984 WRITE setPos_Y984 NOTIFY pos_Y984Changed)
    Q_PROPERTY(double r_984 READ pos_R984 WRITE setPos_R984 NOTIFY pos_R984Changed)
    Q_PROPERTY(double x_985 READ pos_X985 WRITE setPos_X985 NOTIFY pos_X985Changed)
    Q_PROPERTY(double y_985 READ pos_Y985 WRITE setPos_Y985 NOTIFY pos_Y985Changed)
    Q_PROPERTY(double r_985 READ pos_R985 WRITE setPos_R985 NOTIFY pos_R985Changed)
    Q_PROPERTY(double x_986 READ pos_X986 WRITE setPos_X986 NOTIFY pos_X986Changed)
    Q_PROPERTY(double y_986 READ pos_Y986 WRITE setPos_Y986 NOTIFY pos_Y986Changed)
    Q_PROPERTY(double r_986 READ pos_R986 WRITE setPos_R986 NOTIFY pos_R986Changed)
    Q_PROPERTY(double x_987 READ pos_X987 WRITE setPos_X987 NOTIFY pos_X987Changed)
    Q_PROPERTY(double y_987 READ pos_Y987 WRITE setPos_Y987 NOTIFY pos_Y987Changed)
    Q_PROPERTY(double r_987 READ pos_R987 WRITE setPos_R987 NOTIFY pos_R987Changed)
    Q_PROPERTY(double x_988 READ pos_X988 WRITE setPos_X988 NOTIFY pos_X988Changed)
    Q_PROPERTY(double y_988 READ pos_Y988 WRITE setPos_Y988 NOTIFY pos_Y988Changed)
    Q_PROPERTY(double r_988 READ pos_R988 WRITE setPos_R988 NOTIFY pos_R988Changed)
    Q_PROPERTY(double x_989 READ pos_X989 WRITE setPos_X989 NOTIFY pos_X989Changed)
    Q_PROPERTY(double y_989 READ pos_Y989 WRITE setPos_Y989 NOTIFY pos_Y989Changed)
    Q_PROPERTY(double r_989 READ pos_R989 WRITE setPos_R989 NOTIFY pos_R989Changed)
    Q_PROPERTY(double x_990 READ pos_X990 WRITE setPos_X990 NOTIFY pos_X990Changed)
    Q_PROPERTY(double y_990 READ pos_Y990 WRITE setPos_Y990 NOTIFY pos_Y990Changed)
    Q_PROPERTY(double r_990 READ pos_R990 WRITE setPos_R990 NOTIFY pos_R990Changed)
    Q_PROPERTY(double x_991 READ pos_X991 WRITE setPos_X991 NOTIFY pos_X991Changed)
    Q_PROPERTY(double y_991 READ pos_Y991 WRITE setPos_Y991 NOTIFY pos_Y991Changed)
    Q_PROPERTY(double r_991 READ pos_R991 WRITE setPos_R991 NOTIFY pos_R991Changed)
    Q_PROPERTY(double x_992 READ pos_X992 WRITE setPos_X992 NOTIFY pos_X992Changed)
    Q_PROPERTY(double y_992 READ pos_Y992 WRITE setPos_Y992 NOTIFY pos_Y992Changed)
    Q_PROPERTY(double r_992 READ pos_R992 WRITE setPos_R992 NOTIFY pos_R992Changed)
    Q_PROPERTY(double x_993 READ pos_X993 WRITE setPos_X993 NOTIFY pos_X993Changed)
    Q_PROPERTY(double y_993 READ pos_Y993 WRITE setPos_Y993 NOTIFY pos_Y993Changed)
    Q_PROPERTY(double r_993 READ pos_R993 WRITE setPos_R993 NOTIFY pos_R993Changed)
    Q_PROPERTY(double x_994 READ pos_X994 WRITE setPos_X994 NOTIFY pos_X994Changed)
    Q_PROPERTY(double y_994 READ pos_Y994 WRITE setPos_Y994 NOTIFY pos_Y994Changed)
    Q_PROPERTY(double r_994 READ pos_R994 WRITE setPos_R994 NOTIFY pos_R994Changed)
    Q_PROPERTY(double x_995 READ pos_X995 WRITE setPos_X995 NOTIFY pos_X995Changed)
    Q_PROPERTY(double y_995 READ pos_Y995 WRITE setPos_Y995 NOTIFY pos_Y995Changed)
    Q_PROPERTY(double r_995 READ pos_R995 WRITE setPos_R995 NOTIFY pos_R995Changed)
    Q_PROPERTY(double x_996 READ pos_X996 WRITE setPos_X996 NOTIFY pos_X996Changed)
    Q_PROPERTY(double y_996 READ pos_Y996 WRITE setPos_Y996 NOTIFY pos_Y996Changed)
    Q_PROPERTY(double r_996 READ pos_R996 WRITE setPos_R996 NOTIFY pos_R996Changed)
    Q_PROPERTY(double x_997 READ pos_X997 WRITE setPos_X997 NOTIFY pos_X997Changed)
    Q_PROPERTY(double y_997 READ pos_Y997 WRITE setPos_Y997 NOTIFY pos_Y997Changed)
    Q_PROPERTY(double r_997 READ pos_R997 WRITE setPos_R997 NOTIFY pos_R997Changed)
    Q_PROPERTY(double x_998 READ pos_X998 WRITE setPos_X998 NOTIFY pos_X998Changed)
    Q_PROPERTY(double y_998 READ pos_Y998 WRITE setPos_Y998 NOTIFY pos_Y998Changed)
    Q_PROPERTY(double r_998 READ pos_R998 WRITE setPos_R998 NOTIFY pos_R998Changed)
    Q_PROPERTY(double x_999 READ pos_X999 WRITE setPos_X999 NOTIFY pos_X999Changed)
    Q_PROPERTY(double y_999 READ pos_Y999 WRITE setPos_Y999 NOTIFY pos_Y999Changed)
    Q_PROPERTY(double r_999 READ pos_R999 WRITE setPos_R999 NOTIFY pos_R999Changed)
    void setTitle(const QString& title) { if (_title != title) { _title = title; emit titleChanged(title);} } QString title() { return _title; }
    void setCount(int c) { if (_count != c) { _count = c; emit countChanged(c);} } int count() { return _count; }
    void setFps  (int f) { if (_fps   != f) { _fps   = f; emit fpsChanged(f)  ;} } int fps()   { return _fps;   }
    void setPos_X0(double p) { if (_X0 != p) { _X0 = p; emit pos_X0Changed(p);} } double pos_X0() { return _X0; }
    void setPos_Y0(double p) { if (_Y0 != p) { _Y0 = p; emit pos_Y0Changed(p);} } double pos_Y0() { return _Y0; }
    void setPos_R0(double p) { if (_R0 != p) { _R0 = p; emit pos_R0Changed(p);} } double pos_R0() { return _R0; }
    void setPos_X1(double p) { if (_X1 != p) { _X1 = p; emit pos_X1Changed(p);} } double pos_X1() { return _X1; }
    void setPos_Y1(double p) { if (_Y1 != p) { _Y1 = p; emit pos_Y1Changed(p);} } double pos_Y1() { return _Y1; }
    void setPos_R1(double p) { if (_R1 != p) { _R1 = p; emit pos_R1Changed(p);} } double pos_R1() { return _R1; }
    void setPos_X2(double p) { if (_X2 != p) { _X2 = p; emit pos_X2Changed(p);} } double pos_X2() { return _X2; }
    void setPos_Y2(double p) { if (_Y2 != p) { _Y2 = p; emit pos_Y2Changed(p);} } double pos_Y2() { return _Y2; }
    void setPos_R2(double p) { if (_R2 != p) { _R2 = p; emit pos_R2Changed(p);} } double pos_R2() { return _R2; }
    void setPos_X3(double p) { if (_X3 != p) { _X3 = p; emit pos_X3Changed(p);} } double pos_X3() { return _X3; }
    void setPos_Y3(double p) { if (_Y3 != p) { _Y3 = p; emit pos_Y3Changed(p);} } double pos_Y3() { return _Y3; }
    void setPos_R3(double p) { if (_R3 != p) { _R3 = p; emit pos_R3Changed(p);} } double pos_R3() { return _R3; }
    void setPos_X4(double p) { if (_X4 != p) { _X4 = p; emit pos_X4Changed(p);} } double pos_X4() { return _X4; }
    void setPos_Y4(double p) { if (_Y4 != p) { _Y4 = p; emit pos_Y4Changed(p);} } double pos_Y4() { return _Y4; }
    void setPos_R4(double p) { if (_R4 != p) { _R4 = p; emit pos_R4Changed(p);} } double pos_R4() { return _R4; }
    void setPos_X5(double p) { if (_X5 != p) { _X5 = p; emit pos_X5Changed(p);} } double pos_X5() { return _X5; }
    void setPos_Y5(double p) { if (_Y5 != p) { _Y5 = p; emit pos_Y5Changed(p);} } double pos_Y5() { return _Y5; }
    void setPos_R5(double p) { if (_R5 != p) { _R5 = p; emit pos_R5Changed(p);} } double pos_R5() { return _R5; }
    void setPos_X6(double p) { if (_X6 != p) { _X6 = p; emit pos_X6Changed(p);} } double pos_X6() { return _X6; }
    void setPos_Y6(double p) { if (_Y6 != p) { _Y6 = p; emit pos_Y6Changed(p);} } double pos_Y6() { return _Y6; }
    void setPos_R6(double p) { if (_R6 != p) { _R6 = p; emit pos_R6Changed(p);} } double pos_R6() { return _R6; }
    void setPos_X7(double p) { if (_X7 != p) { _X7 = p; emit pos_X7Changed(p);} } double pos_X7() { return _X7; }
    void setPos_Y7(double p) { if (_Y7 != p) { _Y7 = p; emit pos_Y7Changed(p);} } double pos_Y7() { return _Y7; }
    void setPos_R7(double p) { if (_R7 != p) { _R7 = p; emit pos_R7Changed(p);} } double pos_R7() { return _R7; }
    void setPos_X8(double p) { if (_X8 != p) { _X8 = p; emit pos_X8Changed(p);} } double pos_X8() { return _X8; }
    void setPos_Y8(double p) { if (_Y8 != p) { _Y8 = p; emit pos_Y8Changed(p);} } double pos_Y8() { return _Y8; }
    void setPos_R8(double p) { if (_R8 != p) { _R8 = p; emit pos_R8Changed(p);} } double pos_R8() { return _R8; }
    void setPos_X9(double p) { if (_X9 != p) { _X9 = p; emit pos_X9Changed(p);} } double pos_X9() { return _X9; }
    void setPos_Y9(double p) { if (_Y9 != p) { _Y9 = p; emit pos_Y9Changed(p);} } double pos_Y9() { return _Y9; }
    void setPos_R9(double p) { if (_R9 != p) { _R9 = p; emit pos_R9Changed(p);} } double pos_R9() { return _R9; }
    void setPos_X10(double p) { if (_X10 != p) { _X10 = p; emit pos_X10Changed(p);} } double pos_X10() { return _X10; }
    void setPos_Y10(double p) { if (_Y10 != p) { _Y10 = p; emit pos_Y10Changed(p);} } double pos_Y10() { return _Y10; }
    void setPos_R10(double p) { if (_R10 != p) { _R10 = p; emit pos_R10Changed(p);} } double pos_R10() { return _R10; }
    void setPos_X11(double p) { if (_X11 != p) { _X11 = p; emit pos_X11Changed(p);} } double pos_X11() { return _X11; }
    void setPos_Y11(double p) { if (_Y11 != p) { _Y11 = p; emit pos_Y11Changed(p);} } double pos_Y11() { return _Y11; }
    void setPos_R11(double p) { if (_R11 != p) { _R11 = p; emit pos_R11Changed(p);} } double pos_R11() { return _R11; }
    void setPos_X12(double p) { if (_X12 != p) { _X12 = p; emit pos_X12Changed(p);} } double pos_X12() { return _X12; }
    void setPos_Y12(double p) { if (_Y12 != p) { _Y12 = p; emit pos_Y12Changed(p);} } double pos_Y12() { return _Y12; }
    void setPos_R12(double p) { if (_R12 != p) { _R12 = p; emit pos_R12Changed(p);} } double pos_R12() { return _R12; }
    void setPos_X13(double p) { if (_X13 != p) { _X13 = p; emit pos_X13Changed(p);} } double pos_X13() { return _X13; }
    void setPos_Y13(double p) { if (_Y13 != p) { _Y13 = p; emit pos_Y13Changed(p);} } double pos_Y13() { return _Y13; }
    void setPos_R13(double p) { if (_R13 != p) { _R13 = p; emit pos_R13Changed(p);} } double pos_R13() { return _R13; }
    void setPos_X14(double p) { if (_X14 != p) { _X14 = p; emit pos_X14Changed(p);} } double pos_X14() { return _X14; }
    void setPos_Y14(double p) { if (_Y14 != p) { _Y14 = p; emit pos_Y14Changed(p);} } double pos_Y14() { return _Y14; }
    void setPos_R14(double p) { if (_R14 != p) { _R14 = p; emit pos_R14Changed(p);} } double pos_R14() { return _R14; }
    void setPos_X15(double p) { if (_X15 != p) { _X15 = p; emit pos_X15Changed(p);} } double pos_X15() { return _X15; }
    void setPos_Y15(double p) { if (_Y15 != p) { _Y15 = p; emit pos_Y15Changed(p);} } double pos_Y15() { return _Y15; }
    void setPos_R15(double p) { if (_R15 != p) { _R15 = p; emit pos_R15Changed(p);} } double pos_R15() { return _R15; }
    void setPos_X16(double p) { if (_X16 != p) { _X16 = p; emit pos_X16Changed(p);} } double pos_X16() { return _X16; }
    void setPos_Y16(double p) { if (_Y16 != p) { _Y16 = p; emit pos_Y16Changed(p);} } double pos_Y16() { return _Y16; }
    void setPos_R16(double p) { if (_R16 != p) { _R16 = p; emit pos_R16Changed(p);} } double pos_R16() { return _R16; }
    void setPos_X17(double p) { if (_X17 != p) { _X17 = p; emit pos_X17Changed(p);} } double pos_X17() { return _X17; }
    void setPos_Y17(double p) { if (_Y17 != p) { _Y17 = p; emit pos_Y17Changed(p);} } double pos_Y17() { return _Y17; }
    void setPos_R17(double p) { if (_R17 != p) { _R17 = p; emit pos_R17Changed(p);} } double pos_R17() { return _R17; }
    void setPos_X18(double p) { if (_X18 != p) { _X18 = p; emit pos_X18Changed(p);} } double pos_X18() { return _X18; }
    void setPos_Y18(double p) { if (_Y18 != p) { _Y18 = p; emit pos_Y18Changed(p);} } double pos_Y18() { return _Y18; }
    void setPos_R18(double p) { if (_R18 != p) { _R18 = p; emit pos_R18Changed(p);} } double pos_R18() { return _R18; }
    void setPos_X19(double p) { if (_X19 != p) { _X19 = p; emit pos_X19Changed(p);} } double pos_X19() { return _X19; }
    void setPos_Y19(double p) { if (_Y19 != p) { _Y19 = p; emit pos_Y19Changed(p);} } double pos_Y19() { return _Y19; }
    void setPos_R19(double p) { if (_R19 != p) { _R19 = p; emit pos_R19Changed(p);} } double pos_R19() { return _R19; }
    void setPos_X20(double p) { if (_X20 != p) { _X20 = p; emit pos_X20Changed(p);} } double pos_X20() { return _X20; }
    void setPos_Y20(double p) { if (_Y20 != p) { _Y20 = p; emit pos_Y20Changed(p);} } double pos_Y20() { return _Y20; }
    void setPos_R20(double p) { if (_R20 != p) { _R20 = p; emit pos_R20Changed(p);} } double pos_R20() { return _R20; }
    void setPos_X21(double p) { if (_X21 != p) { _X21 = p; emit pos_X21Changed(p);} } double pos_X21() { return _X21; }
    void setPos_Y21(double p) { if (_Y21 != p) { _Y21 = p; emit pos_Y21Changed(p);} } double pos_Y21() { return _Y21; }
    void setPos_R21(double p) { if (_R21 != p) { _R21 = p; emit pos_R21Changed(p);} } double pos_R21() { return _R21; }
    void setPos_X22(double p) { if (_X22 != p) { _X22 = p; emit pos_X22Changed(p);} } double pos_X22() { return _X22; }
    void setPos_Y22(double p) { if (_Y22 != p) { _Y22 = p; emit pos_Y22Changed(p);} } double pos_Y22() { return _Y22; }
    void setPos_R22(double p) { if (_R22 != p) { _R22 = p; emit pos_R22Changed(p);} } double pos_R22() { return _R22; }
    void setPos_X23(double p) { if (_X23 != p) { _X23 = p; emit pos_X23Changed(p);} } double pos_X23() { return _X23; }
    void setPos_Y23(double p) { if (_Y23 != p) { _Y23 = p; emit pos_Y23Changed(p);} } double pos_Y23() { return _Y23; }
    void setPos_R23(double p) { if (_R23 != p) { _R23 = p; emit pos_R23Changed(p);} } double pos_R23() { return _R23; }
    void setPos_X24(double p) { if (_X24 != p) { _X24 = p; emit pos_X24Changed(p);} } double pos_X24() { return _X24; }
    void setPos_Y24(double p) { if (_Y24 != p) { _Y24 = p; emit pos_Y24Changed(p);} } double pos_Y24() { return _Y24; }
    void setPos_R24(double p) { if (_R24 != p) { _R24 = p; emit pos_R24Changed(p);} } double pos_R24() { return _R24; }
    void setPos_X25(double p) { if (_X25 != p) { _X25 = p; emit pos_X25Changed(p);} } double pos_X25() { return _X25; }
    void setPos_Y25(double p) { if (_Y25 != p) { _Y25 = p; emit pos_Y25Changed(p);} } double pos_Y25() { return _Y25; }
    void setPos_R25(double p) { if (_R25 != p) { _R25 = p; emit pos_R25Changed(p);} } double pos_R25() { return _R25; }
    void setPos_X26(double p) { if (_X26 != p) { _X26 = p; emit pos_X26Changed(p);} } double pos_X26() { return _X26; }
    void setPos_Y26(double p) { if (_Y26 != p) { _Y26 = p; emit pos_Y26Changed(p);} } double pos_Y26() { return _Y26; }
    void setPos_R26(double p) { if (_R26 != p) { _R26 = p; emit pos_R26Changed(p);} } double pos_R26() { return _R26; }
    void setPos_X27(double p) { if (_X27 != p) { _X27 = p; emit pos_X27Changed(p);} } double pos_X27() { return _X27; }
    void setPos_Y27(double p) { if (_Y27 != p) { _Y27 = p; emit pos_Y27Changed(p);} } double pos_Y27() { return _Y27; }
    void setPos_R27(double p) { if (_R27 != p) { _R27 = p; emit pos_R27Changed(p);} } double pos_R27() { return _R27; }
    void setPos_X28(double p) { if (_X28 != p) { _X28 = p; emit pos_X28Changed(p);} } double pos_X28() { return _X28; }
    void setPos_Y28(double p) { if (_Y28 != p) { _Y28 = p; emit pos_Y28Changed(p);} } double pos_Y28() { return _Y28; }
    void setPos_R28(double p) { if (_R28 != p) { _R28 = p; emit pos_R28Changed(p);} } double pos_R28() { return _R28; }
    void setPos_X29(double p) { if (_X29 != p) { _X29 = p; emit pos_X29Changed(p);} } double pos_X29() { return _X29; }
    void setPos_Y29(double p) { if (_Y29 != p) { _Y29 = p; emit pos_Y29Changed(p);} } double pos_Y29() { return _Y29; }
    void setPos_R29(double p) { if (_R29 != p) { _R29 = p; emit pos_R29Changed(p);} } double pos_R29() { return _R29; }
    void setPos_X30(double p) { if (_X30 != p) { _X30 = p; emit pos_X30Changed(p);} } double pos_X30() { return _X30; }
    void setPos_Y30(double p) { if (_Y30 != p) { _Y30 = p; emit pos_Y30Changed(p);} } double pos_Y30() { return _Y30; }
    void setPos_R30(double p) { if (_R30 != p) { _R30 = p; emit pos_R30Changed(p);} } double pos_R30() { return _R30; }
    void setPos_X31(double p) { if (_X31 != p) { _X31 = p; emit pos_X31Changed(p);} } double pos_X31() { return _X31; }
    void setPos_Y31(double p) { if (_Y31 != p) { _Y31 = p; emit pos_Y31Changed(p);} } double pos_Y31() { return _Y31; }
    void setPos_R31(double p) { if (_R31 != p) { _R31 = p; emit pos_R31Changed(p);} } double pos_R31() { return _R31; }
    void setPos_X32(double p) { if (_X32 != p) { _X32 = p; emit pos_X32Changed(p);} } double pos_X32() { return _X32; }
    void setPos_Y32(double p) { if (_Y32 != p) { _Y32 = p; emit pos_Y32Changed(p);} } double pos_Y32() { return _Y32; }
    void setPos_R32(double p) { if (_R32 != p) { _R32 = p; emit pos_R32Changed(p);} } double pos_R32() { return _R32; }
    void setPos_X33(double p) { if (_X33 != p) { _X33 = p; emit pos_X33Changed(p);} } double pos_X33() { return _X33; }
    void setPos_Y33(double p) { if (_Y33 != p) { _Y33 = p; emit pos_Y33Changed(p);} } double pos_Y33() { return _Y33; }
    void setPos_R33(double p) { if (_R33 != p) { _R33 = p; emit pos_R33Changed(p);} } double pos_R33() { return _R33; }
    void setPos_X34(double p) { if (_X34 != p) { _X34 = p; emit pos_X34Changed(p);} } double pos_X34() { return _X34; }
    void setPos_Y34(double p) { if (_Y34 != p) { _Y34 = p; emit pos_Y34Changed(p);} } double pos_Y34() { return _Y34; }
    void setPos_R34(double p) { if (_R34 != p) { _R34 = p; emit pos_R34Changed(p);} } double pos_R34() { return _R34; }
    void setPos_X35(double p) { if (_X35 != p) { _X35 = p; emit pos_X35Changed(p);} } double pos_X35() { return _X35; }
    void setPos_Y35(double p) { if (_Y35 != p) { _Y35 = p; emit pos_Y35Changed(p);} } double pos_Y35() { return _Y35; }
    void setPos_R35(double p) { if (_R35 != p) { _R35 = p; emit pos_R35Changed(p);} } double pos_R35() { return _R35; }
    void setPos_X36(double p) { if (_X36 != p) { _X36 = p; emit pos_X36Changed(p);} } double pos_X36() { return _X36; }
    void setPos_Y36(double p) { if (_Y36 != p) { _Y36 = p; emit pos_Y36Changed(p);} } double pos_Y36() { return _Y36; }
    void setPos_R36(double p) { if (_R36 != p) { _R36 = p; emit pos_R36Changed(p);} } double pos_R36() { return _R36; }
    void setPos_X37(double p) { if (_X37 != p) { _X37 = p; emit pos_X37Changed(p);} } double pos_X37() { return _X37; }
    void setPos_Y37(double p) { if (_Y37 != p) { _Y37 = p; emit pos_Y37Changed(p);} } double pos_Y37() { return _Y37; }
    void setPos_R37(double p) { if (_R37 != p) { _R37 = p; emit pos_R37Changed(p);} } double pos_R37() { return _R37; }
    void setPos_X38(double p) { if (_X38 != p) { _X38 = p; emit pos_X38Changed(p);} } double pos_X38() { return _X38; }
    void setPos_Y38(double p) { if (_Y38 != p) { _Y38 = p; emit pos_Y38Changed(p);} } double pos_Y38() { return _Y38; }
    void setPos_R38(double p) { if (_R38 != p) { _R38 = p; emit pos_R38Changed(p);} } double pos_R38() { return _R38; }
    void setPos_X39(double p) { if (_X39 != p) { _X39 = p; emit pos_X39Changed(p);} } double pos_X39() { return _X39; }
    void setPos_Y39(double p) { if (_Y39 != p) { _Y39 = p; emit pos_Y39Changed(p);} } double pos_Y39() { return _Y39; }
    void setPos_R39(double p) { if (_R39 != p) { _R39 = p; emit pos_R39Changed(p);} } double pos_R39() { return _R39; }
    void setPos_X40(double p) { if (_X40 != p) { _X40 = p; emit pos_X40Changed(p);} } double pos_X40() { return _X40; }
    void setPos_Y40(double p) { if (_Y40 != p) { _Y40 = p; emit pos_Y40Changed(p);} } double pos_Y40() { return _Y40; }
    void setPos_R40(double p) { if (_R40 != p) { _R40 = p; emit pos_R40Changed(p);} } double pos_R40() { return _R40; }
    void setPos_X41(double p) { if (_X41 != p) { _X41 = p; emit pos_X41Changed(p);} } double pos_X41() { return _X41; }
    void setPos_Y41(double p) { if (_Y41 != p) { _Y41 = p; emit pos_Y41Changed(p);} } double pos_Y41() { return _Y41; }
    void setPos_R41(double p) { if (_R41 != p) { _R41 = p; emit pos_R41Changed(p);} } double pos_R41() { return _R41; }
    void setPos_X42(double p) { if (_X42 != p) { _X42 = p; emit pos_X42Changed(p);} } double pos_X42() { return _X42; }
    void setPos_Y42(double p) { if (_Y42 != p) { _Y42 = p; emit pos_Y42Changed(p);} } double pos_Y42() { return _Y42; }
    void setPos_R42(double p) { if (_R42 != p) { _R42 = p; emit pos_R42Changed(p);} } double pos_R42() { return _R42; }
    void setPos_X43(double p) { if (_X43 != p) { _X43 = p; emit pos_X43Changed(p);} } double pos_X43() { return _X43; }
    void setPos_Y43(double p) { if (_Y43 != p) { _Y43 = p; emit pos_Y43Changed(p);} } double pos_Y43() { return _Y43; }
    void setPos_R43(double p) { if (_R43 != p) { _R43 = p; emit pos_R43Changed(p);} } double pos_R43() { return _R43; }
    void setPos_X44(double p) { if (_X44 != p) { _X44 = p; emit pos_X44Changed(p);} } double pos_X44() { return _X44; }
    void setPos_Y44(double p) { if (_Y44 != p) { _Y44 = p; emit pos_Y44Changed(p);} } double pos_Y44() { return _Y44; }
    void setPos_R44(double p) { if (_R44 != p) { _R44 = p; emit pos_R44Changed(p);} } double pos_R44() { return _R44; }
    void setPos_X45(double p) { if (_X45 != p) { _X45 = p; emit pos_X45Changed(p);} } double pos_X45() { return _X45; }
    void setPos_Y45(double p) { if (_Y45 != p) { _Y45 = p; emit pos_Y45Changed(p);} } double pos_Y45() { return _Y45; }
    void setPos_R45(double p) { if (_R45 != p) { _R45 = p; emit pos_R45Changed(p);} } double pos_R45() { return _R45; }
    void setPos_X46(double p) { if (_X46 != p) { _X46 = p; emit pos_X46Changed(p);} } double pos_X46() { return _X46; }
    void setPos_Y46(double p) { if (_Y46 != p) { _Y46 = p; emit pos_Y46Changed(p);} } double pos_Y46() { return _Y46; }
    void setPos_R46(double p) { if (_R46 != p) { _R46 = p; emit pos_R46Changed(p);} } double pos_R46() { return _R46; }
    void setPos_X47(double p) { if (_X47 != p) { _X47 = p; emit pos_X47Changed(p);} } double pos_X47() { return _X47; }
    void setPos_Y47(double p) { if (_Y47 != p) { _Y47 = p; emit pos_Y47Changed(p);} } double pos_Y47() { return _Y47; }
    void setPos_R47(double p) { if (_R47 != p) { _R47 = p; emit pos_R47Changed(p);} } double pos_R47() { return _R47; }
    void setPos_X48(double p) { if (_X48 != p) { _X48 = p; emit pos_X48Changed(p);} } double pos_X48() { return _X48; }
    void setPos_Y48(double p) { if (_Y48 != p) { _Y48 = p; emit pos_Y48Changed(p);} } double pos_Y48() { return _Y48; }
    void setPos_R48(double p) { if (_R48 != p) { _R48 = p; emit pos_R48Changed(p);} } double pos_R48() { return _R48; }
    void setPos_X49(double p) { if (_X49 != p) { _X49 = p; emit pos_X49Changed(p);} } double pos_X49() { return _X49; }
    void setPos_Y49(double p) { if (_Y49 != p) { _Y49 = p; emit pos_Y49Changed(p);} } double pos_Y49() { return _Y49; }
    void setPos_R49(double p) { if (_R49 != p) { _R49 = p; emit pos_R49Changed(p);} } double pos_R49() { return _R49; }
    void setPos_X50(double p) { if (_X50 != p) { _X50 = p; emit pos_X50Changed(p);} } double pos_X50() { return _X50; }
    void setPos_Y50(double p) { if (_Y50 != p) { _Y50 = p; emit pos_Y50Changed(p);} } double pos_Y50() { return _Y50; }
    void setPos_R50(double p) { if (_R50 != p) { _R50 = p; emit pos_R50Changed(p);} } double pos_R50() { return _R50; }
    void setPos_X51(double p) { if (_X51 != p) { _X51 = p; emit pos_X51Changed(p);} } double pos_X51() { return _X51; }
    void setPos_Y51(double p) { if (_Y51 != p) { _Y51 = p; emit pos_Y51Changed(p);} } double pos_Y51() { return _Y51; }
    void setPos_R51(double p) { if (_R51 != p) { _R51 = p; emit pos_R51Changed(p);} } double pos_R51() { return _R51; }
    void setPos_X52(double p) { if (_X52 != p) { _X52 = p; emit pos_X52Changed(p);} } double pos_X52() { return _X52; }
    void setPos_Y52(double p) { if (_Y52 != p) { _Y52 = p; emit pos_Y52Changed(p);} } double pos_Y52() { return _Y52; }
    void setPos_R52(double p) { if (_R52 != p) { _R52 = p; emit pos_R52Changed(p);} } double pos_R52() { return _R52; }
    void setPos_X53(double p) { if (_X53 != p) { _X53 = p; emit pos_X53Changed(p);} } double pos_X53() { return _X53; }
    void setPos_Y53(double p) { if (_Y53 != p) { _Y53 = p; emit pos_Y53Changed(p);} } double pos_Y53() { return _Y53; }
    void setPos_R53(double p) { if (_R53 != p) { _R53 = p; emit pos_R53Changed(p);} } double pos_R53() { return _R53; }
    void setPos_X54(double p) { if (_X54 != p) { _X54 = p; emit pos_X54Changed(p);} } double pos_X54() { return _X54; }
    void setPos_Y54(double p) { if (_Y54 != p) { _Y54 = p; emit pos_Y54Changed(p);} } double pos_Y54() { return _Y54; }
    void setPos_R54(double p) { if (_R54 != p) { _R54 = p; emit pos_R54Changed(p);} } double pos_R54() { return _R54; }
    void setPos_X55(double p) { if (_X55 != p) { _X55 = p; emit pos_X55Changed(p);} } double pos_X55() { return _X55; }
    void setPos_Y55(double p) { if (_Y55 != p) { _Y55 = p; emit pos_Y55Changed(p);} } double pos_Y55() { return _Y55; }
    void setPos_R55(double p) { if (_R55 != p) { _R55 = p; emit pos_R55Changed(p);} } double pos_R55() { return _R55; }
    void setPos_X56(double p) { if (_X56 != p) { _X56 = p; emit pos_X56Changed(p);} } double pos_X56() { return _X56; }
    void setPos_Y56(double p) { if (_Y56 != p) { _Y56 = p; emit pos_Y56Changed(p);} } double pos_Y56() { return _Y56; }
    void setPos_R56(double p) { if (_R56 != p) { _R56 = p; emit pos_R56Changed(p);} } double pos_R56() { return _R56; }
    void setPos_X57(double p) { if (_X57 != p) { _X57 = p; emit pos_X57Changed(p);} } double pos_X57() { return _X57; }
    void setPos_Y57(double p) { if (_Y57 != p) { _Y57 = p; emit pos_Y57Changed(p);} } double pos_Y57() { return _Y57; }
    void setPos_R57(double p) { if (_R57 != p) { _R57 = p; emit pos_R57Changed(p);} } double pos_R57() { return _R57; }
    void setPos_X58(double p) { if (_X58 != p) { _X58 = p; emit pos_X58Changed(p);} } double pos_X58() { return _X58; }
    void setPos_Y58(double p) { if (_Y58 != p) { _Y58 = p; emit pos_Y58Changed(p);} } double pos_Y58() { return _Y58; }
    void setPos_R58(double p) { if (_R58 != p) { _R58 = p; emit pos_R58Changed(p);} } double pos_R58() { return _R58; }
    void setPos_X59(double p) { if (_X59 != p) { _X59 = p; emit pos_X59Changed(p);} } double pos_X59() { return _X59; }
    void setPos_Y59(double p) { if (_Y59 != p) { _Y59 = p; emit pos_Y59Changed(p);} } double pos_Y59() { return _Y59; }
    void setPos_R59(double p) { if (_R59 != p) { _R59 = p; emit pos_R59Changed(p);} } double pos_R59() { return _R59; }
    void setPos_X60(double p) { if (_X60 != p) { _X60 = p; emit pos_X60Changed(p);} } double pos_X60() { return _X60; }
    void setPos_Y60(double p) { if (_Y60 != p) { _Y60 = p; emit pos_Y60Changed(p);} } double pos_Y60() { return _Y60; }
    void setPos_R60(double p) { if (_R60 != p) { _R60 = p; emit pos_R60Changed(p);} } double pos_R60() { return _R60; }
    void setPos_X61(double p) { if (_X61 != p) { _X61 = p; emit pos_X61Changed(p);} } double pos_X61() { return _X61; }
    void setPos_Y61(double p) { if (_Y61 != p) { _Y61 = p; emit pos_Y61Changed(p);} } double pos_Y61() { return _Y61; }
    void setPos_R61(double p) { if (_R61 != p) { _R61 = p; emit pos_R61Changed(p);} } double pos_R61() { return _R61; }
    void setPos_X62(double p) { if (_X62 != p) { _X62 = p; emit pos_X62Changed(p);} } double pos_X62() { return _X62; }
    void setPos_Y62(double p) { if (_Y62 != p) { _Y62 = p; emit pos_Y62Changed(p);} } double pos_Y62() { return _Y62; }
    void setPos_R62(double p) { if (_R62 != p) { _R62 = p; emit pos_R62Changed(p);} } double pos_R62() { return _R62; }
    void setPos_X63(double p) { if (_X63 != p) { _X63 = p; emit pos_X63Changed(p);} } double pos_X63() { return _X63; }
    void setPos_Y63(double p) { if (_Y63 != p) { _Y63 = p; emit pos_Y63Changed(p);} } double pos_Y63() { return _Y63; }
    void setPos_R63(double p) { if (_R63 != p) { _R63 = p; emit pos_R63Changed(p);} } double pos_R63() { return _R63; }
    void setPos_X64(double p) { if (_X64 != p) { _X64 = p; emit pos_X64Changed(p);} } double pos_X64() { return _X64; }
    void setPos_Y64(double p) { if (_Y64 != p) { _Y64 = p; emit pos_Y64Changed(p);} } double pos_Y64() { return _Y64; }
    void setPos_R64(double p) { if (_R64 != p) { _R64 = p; emit pos_R64Changed(p);} } double pos_R64() { return _R64; }
    void setPos_X65(double p) { if (_X65 != p) { _X65 = p; emit pos_X65Changed(p);} } double pos_X65() { return _X65; }
    void setPos_Y65(double p) { if (_Y65 != p) { _Y65 = p; emit pos_Y65Changed(p);} } double pos_Y65() { return _Y65; }
    void setPos_R65(double p) { if (_R65 != p) { _R65 = p; emit pos_R65Changed(p);} } double pos_R65() { return _R65; }
    void setPos_X66(double p) { if (_X66 != p) { _X66 = p; emit pos_X66Changed(p);} } double pos_X66() { return _X66; }
    void setPos_Y66(double p) { if (_Y66 != p) { _Y66 = p; emit pos_Y66Changed(p);} } double pos_Y66() { return _Y66; }
    void setPos_R66(double p) { if (_R66 != p) { _R66 = p; emit pos_R66Changed(p);} } double pos_R66() { return _R66; }
    void setPos_X67(double p) { if (_X67 != p) { _X67 = p; emit pos_X67Changed(p);} } double pos_X67() { return _X67; }
    void setPos_Y67(double p) { if (_Y67 != p) { _Y67 = p; emit pos_Y67Changed(p);} } double pos_Y67() { return _Y67; }
    void setPos_R67(double p) { if (_R67 != p) { _R67 = p; emit pos_R67Changed(p);} } double pos_R67() { return _R67; }
    void setPos_X68(double p) { if (_X68 != p) { _X68 = p; emit pos_X68Changed(p);} } double pos_X68() { return _X68; }
    void setPos_Y68(double p) { if (_Y68 != p) { _Y68 = p; emit pos_Y68Changed(p);} } double pos_Y68() { return _Y68; }
    void setPos_R68(double p) { if (_R68 != p) { _R68 = p; emit pos_R68Changed(p);} } double pos_R68() { return _R68; }
    void setPos_X69(double p) { if (_X69 != p) { _X69 = p; emit pos_X69Changed(p);} } double pos_X69() { return _X69; }
    void setPos_Y69(double p) { if (_Y69 != p) { _Y69 = p; emit pos_Y69Changed(p);} } double pos_Y69() { return _Y69; }
    void setPos_R69(double p) { if (_R69 != p) { _R69 = p; emit pos_R69Changed(p);} } double pos_R69() { return _R69; }
    void setPos_X70(double p) { if (_X70 != p) { _X70 = p; emit pos_X70Changed(p);} } double pos_X70() { return _X70; }
    void setPos_Y70(double p) { if (_Y70 != p) { _Y70 = p; emit pos_Y70Changed(p);} } double pos_Y70() { return _Y70; }
    void setPos_R70(double p) { if (_R70 != p) { _R70 = p; emit pos_R70Changed(p);} } double pos_R70() { return _R70; }
    void setPos_X71(double p) { if (_X71 != p) { _X71 = p; emit pos_X71Changed(p);} } double pos_X71() { return _X71; }
    void setPos_Y71(double p) { if (_Y71 != p) { _Y71 = p; emit pos_Y71Changed(p);} } double pos_Y71() { return _Y71; }
    void setPos_R71(double p) { if (_R71 != p) { _R71 = p; emit pos_R71Changed(p);} } double pos_R71() { return _R71; }
    void setPos_X72(double p) { if (_X72 != p) { _X72 = p; emit pos_X72Changed(p);} } double pos_X72() { return _X72; }
    void setPos_Y72(double p) { if (_Y72 != p) { _Y72 = p; emit pos_Y72Changed(p);} } double pos_Y72() { return _Y72; }
    void setPos_R72(double p) { if (_R72 != p) { _R72 = p; emit pos_R72Changed(p);} } double pos_R72() { return _R72; }
    void setPos_X73(double p) { if (_X73 != p) { _X73 = p; emit pos_X73Changed(p);} } double pos_X73() { return _X73; }
    void setPos_Y73(double p) { if (_Y73 != p) { _Y73 = p; emit pos_Y73Changed(p);} } double pos_Y73() { return _Y73; }
    void setPos_R73(double p) { if (_R73 != p) { _R73 = p; emit pos_R73Changed(p);} } double pos_R73() { return _R73; }
    void setPos_X74(double p) { if (_X74 != p) { _X74 = p; emit pos_X74Changed(p);} } double pos_X74() { return _X74; }
    void setPos_Y74(double p) { if (_Y74 != p) { _Y74 = p; emit pos_Y74Changed(p);} } double pos_Y74() { return _Y74; }
    void setPos_R74(double p) { if (_R74 != p) { _R74 = p; emit pos_R74Changed(p);} } double pos_R74() { return _R74; }
    void setPos_X75(double p) { if (_X75 != p) { _X75 = p; emit pos_X75Changed(p);} } double pos_X75() { return _X75; }
    void setPos_Y75(double p) { if (_Y75 != p) { _Y75 = p; emit pos_Y75Changed(p);} } double pos_Y75() { return _Y75; }
    void setPos_R75(double p) { if (_R75 != p) { _R75 = p; emit pos_R75Changed(p);} } double pos_R75() { return _R75; }
    void setPos_X76(double p) { if (_X76 != p) { _X76 = p; emit pos_X76Changed(p);} } double pos_X76() { return _X76; }
    void setPos_Y76(double p) { if (_Y76 != p) { _Y76 = p; emit pos_Y76Changed(p);} } double pos_Y76() { return _Y76; }
    void setPos_R76(double p) { if (_R76 != p) { _R76 = p; emit pos_R76Changed(p);} } double pos_R76() { return _R76; }
    void setPos_X77(double p) { if (_X77 != p) { _X77 = p; emit pos_X77Changed(p);} } double pos_X77() { return _X77; }
    void setPos_Y77(double p) { if (_Y77 != p) { _Y77 = p; emit pos_Y77Changed(p);} } double pos_Y77() { return _Y77; }
    void setPos_R77(double p) { if (_R77 != p) { _R77 = p; emit pos_R77Changed(p);} } double pos_R77() { return _R77; }
    void setPos_X78(double p) { if (_X78 != p) { _X78 = p; emit pos_X78Changed(p);} } double pos_X78() { return _X78; }
    void setPos_Y78(double p) { if (_Y78 != p) { _Y78 = p; emit pos_Y78Changed(p);} } double pos_Y78() { return _Y78; }
    void setPos_R78(double p) { if (_R78 != p) { _R78 = p; emit pos_R78Changed(p);} } double pos_R78() { return _R78; }
    void setPos_X79(double p) { if (_X79 != p) { _X79 = p; emit pos_X79Changed(p);} } double pos_X79() { return _X79; }
    void setPos_Y79(double p) { if (_Y79 != p) { _Y79 = p; emit pos_Y79Changed(p);} } double pos_Y79() { return _Y79; }
    void setPos_R79(double p) { if (_R79 != p) { _R79 = p; emit pos_R79Changed(p);} } double pos_R79() { return _R79; }
    void setPos_X80(double p) { if (_X80 != p) { _X80 = p; emit pos_X80Changed(p);} } double pos_X80() { return _X80; }
    void setPos_Y80(double p) { if (_Y80 != p) { _Y80 = p; emit pos_Y80Changed(p);} } double pos_Y80() { return _Y80; }
    void setPos_R80(double p) { if (_R80 != p) { _R80 = p; emit pos_R80Changed(p);} } double pos_R80() { return _R80; }
    void setPos_X81(double p) { if (_X81 != p) { _X81 = p; emit pos_X81Changed(p);} } double pos_X81() { return _X81; }
    void setPos_Y81(double p) { if (_Y81 != p) { _Y81 = p; emit pos_Y81Changed(p);} } double pos_Y81() { return _Y81; }
    void setPos_R81(double p) { if (_R81 != p) { _R81 = p; emit pos_R81Changed(p);} } double pos_R81() { return _R81; }
    void setPos_X82(double p) { if (_X82 != p) { _X82 = p; emit pos_X82Changed(p);} } double pos_X82() { return _X82; }
    void setPos_Y82(double p) { if (_Y82 != p) { _Y82 = p; emit pos_Y82Changed(p);} } double pos_Y82() { return _Y82; }
    void setPos_R82(double p) { if (_R82 != p) { _R82 = p; emit pos_R82Changed(p);} } double pos_R82() { return _R82; }
    void setPos_X83(double p) { if (_X83 != p) { _X83 = p; emit pos_X83Changed(p);} } double pos_X83() { return _X83; }
    void setPos_Y83(double p) { if (_Y83 != p) { _Y83 = p; emit pos_Y83Changed(p);} } double pos_Y83() { return _Y83; }
    void setPos_R83(double p) { if (_R83 != p) { _R83 = p; emit pos_R83Changed(p);} } double pos_R83() { return _R83; }
    void setPos_X84(double p) { if (_X84 != p) { _X84 = p; emit pos_X84Changed(p);} } double pos_X84() { return _X84; }
    void setPos_Y84(double p) { if (_Y84 != p) { _Y84 = p; emit pos_Y84Changed(p);} } double pos_Y84() { return _Y84; }
    void setPos_R84(double p) { if (_R84 != p) { _R84 = p; emit pos_R84Changed(p);} } double pos_R84() { return _R84; }
    void setPos_X85(double p) { if (_X85 != p) { _X85 = p; emit pos_X85Changed(p);} } double pos_X85() { return _X85; }
    void setPos_Y85(double p) { if (_Y85 != p) { _Y85 = p; emit pos_Y85Changed(p);} } double pos_Y85() { return _Y85; }
    void setPos_R85(double p) { if (_R85 != p) { _R85 = p; emit pos_R85Changed(p);} } double pos_R85() { return _R85; }
    void setPos_X86(double p) { if (_X86 != p) { _X86 = p; emit pos_X86Changed(p);} } double pos_X86() { return _X86; }
    void setPos_Y86(double p) { if (_Y86 != p) { _Y86 = p; emit pos_Y86Changed(p);} } double pos_Y86() { return _Y86; }
    void setPos_R86(double p) { if (_R86 != p) { _R86 = p; emit pos_R86Changed(p);} } double pos_R86() { return _R86; }
    void setPos_X87(double p) { if (_X87 != p) { _X87 = p; emit pos_X87Changed(p);} } double pos_X87() { return _X87; }
    void setPos_Y87(double p) { if (_Y87 != p) { _Y87 = p; emit pos_Y87Changed(p);} } double pos_Y87() { return _Y87; }
    void setPos_R87(double p) { if (_R87 != p) { _R87 = p; emit pos_R87Changed(p);} } double pos_R87() { return _R87; }
    void setPos_X88(double p) { if (_X88 != p) { _X88 = p; emit pos_X88Changed(p);} } double pos_X88() { return _X88; }
    void setPos_Y88(double p) { if (_Y88 != p) { _Y88 = p; emit pos_Y88Changed(p);} } double pos_Y88() { return _Y88; }
    void setPos_R88(double p) { if (_R88 != p) { _R88 = p; emit pos_R88Changed(p);} } double pos_R88() { return _R88; }
    void setPos_X89(double p) { if (_X89 != p) { _X89 = p; emit pos_X89Changed(p);} } double pos_X89() { return _X89; }
    void setPos_Y89(double p) { if (_Y89 != p) { _Y89 = p; emit pos_Y89Changed(p);} } double pos_Y89() { return _Y89; }
    void setPos_R89(double p) { if (_R89 != p) { _R89 = p; emit pos_R89Changed(p);} } double pos_R89() { return _R89; }
    void setPos_X90(double p) { if (_X90 != p) { _X90 = p; emit pos_X90Changed(p);} } double pos_X90() { return _X90; }
    void setPos_Y90(double p) { if (_Y90 != p) { _Y90 = p; emit pos_Y90Changed(p);} } double pos_Y90() { return _Y90; }
    void setPos_R90(double p) { if (_R90 != p) { _R90 = p; emit pos_R90Changed(p);} } double pos_R90() { return _R90; }
    void setPos_X91(double p) { if (_X91 != p) { _X91 = p; emit pos_X91Changed(p);} } double pos_X91() { return _X91; }
    void setPos_Y91(double p) { if (_Y91 != p) { _Y91 = p; emit pos_Y91Changed(p);} } double pos_Y91() { return _Y91; }
    void setPos_R91(double p) { if (_R91 != p) { _R91 = p; emit pos_R91Changed(p);} } double pos_R91() { return _R91; }
    void setPos_X92(double p) { if (_X92 != p) { _X92 = p; emit pos_X92Changed(p);} } double pos_X92() { return _X92; }
    void setPos_Y92(double p) { if (_Y92 != p) { _Y92 = p; emit pos_Y92Changed(p);} } double pos_Y92() { return _Y92; }
    void setPos_R92(double p) { if (_R92 != p) { _R92 = p; emit pos_R92Changed(p);} } double pos_R92() { return _R92; }
    void setPos_X93(double p) { if (_X93 != p) { _X93 = p; emit pos_X93Changed(p);} } double pos_X93() { return _X93; }
    void setPos_Y93(double p) { if (_Y93 != p) { _Y93 = p; emit pos_Y93Changed(p);} } double pos_Y93() { return _Y93; }
    void setPos_R93(double p) { if (_R93 != p) { _R93 = p; emit pos_R93Changed(p);} } double pos_R93() { return _R93; }
    void setPos_X94(double p) { if (_X94 != p) { _X94 = p; emit pos_X94Changed(p);} } double pos_X94() { return _X94; }
    void setPos_Y94(double p) { if (_Y94 != p) { _Y94 = p; emit pos_Y94Changed(p);} } double pos_Y94() { return _Y94; }
    void setPos_R94(double p) { if (_R94 != p) { _R94 = p; emit pos_R94Changed(p);} } double pos_R94() { return _R94; }
    void setPos_X95(double p) { if (_X95 != p) { _X95 = p; emit pos_X95Changed(p);} } double pos_X95() { return _X95; }
    void setPos_Y95(double p) { if (_Y95 != p) { _Y95 = p; emit pos_Y95Changed(p);} } double pos_Y95() { return _Y95; }
    void setPos_R95(double p) { if (_R95 != p) { _R95 = p; emit pos_R95Changed(p);} } double pos_R95() { return _R95; }
    void setPos_X96(double p) { if (_X96 != p) { _X96 = p; emit pos_X96Changed(p);} } double pos_X96() { return _X96; }
    void setPos_Y96(double p) { if (_Y96 != p) { _Y96 = p; emit pos_Y96Changed(p);} } double pos_Y96() { return _Y96; }
    void setPos_R96(double p) { if (_R96 != p) { _R96 = p; emit pos_R96Changed(p);} } double pos_R96() { return _R96; }
    void setPos_X97(double p) { if (_X97 != p) { _X97 = p; emit pos_X97Changed(p);} } double pos_X97() { return _X97; }
    void setPos_Y97(double p) { if (_Y97 != p) { _Y97 = p; emit pos_Y97Changed(p);} } double pos_Y97() { return _Y97; }
    void setPos_R97(double p) { if (_R97 != p) { _R97 = p; emit pos_R97Changed(p);} } double pos_R97() { return _R97; }
    void setPos_X98(double p) { if (_X98 != p) { _X98 = p; emit pos_X98Changed(p);} } double pos_X98() { return _X98; }
    void setPos_Y98(double p) { if (_Y98 != p) { _Y98 = p; emit pos_Y98Changed(p);} } double pos_Y98() { return _Y98; }
    void setPos_R98(double p) { if (_R98 != p) { _R98 = p; emit pos_R98Changed(p);} } double pos_R98() { return _R98; }
    void setPos_X99(double p) { if (_X99 != p) { _X99 = p; emit pos_X99Changed(p);} } double pos_X99() { return _X99; }
    void setPos_Y99(double p) { if (_Y99 != p) { _Y99 = p; emit pos_Y99Changed(p);} } double pos_Y99() { return _Y99; }
    void setPos_R99(double p) { if (_R99 != p) { _R99 = p; emit pos_R99Changed(p);} } double pos_R99() { return _R99; }
    void setPos_X100(double p) { if (_X100 != p) { _X100 = p; emit pos_X100Changed(p);} } double pos_X100() { return _X100; }
    void setPos_Y100(double p) { if (_Y100 != p) { _Y100 = p; emit pos_Y100Changed(p);} } double pos_Y100() { return _Y100; }
    void setPos_R100(double p) { if (_R100 != p) { _R100 = p; emit pos_R100Changed(p);} } double pos_R100() { return _R100; }
    void setPos_X101(double p) { if (_X101 != p) { _X101 = p; emit pos_X101Changed(p);} } double pos_X101() { return _X101; }
    void setPos_Y101(double p) { if (_Y101 != p) { _Y101 = p; emit pos_Y101Changed(p);} } double pos_Y101() { return _Y101; }
    void setPos_R101(double p) { if (_R101 != p) { _R101 = p; emit pos_R101Changed(p);} } double pos_R101() { return _R101; }
    void setPos_X102(double p) { if (_X102 != p) { _X102 = p; emit pos_X102Changed(p);} } double pos_X102() { return _X102; }
    void setPos_Y102(double p) { if (_Y102 != p) { _Y102 = p; emit pos_Y102Changed(p);} } double pos_Y102() { return _Y102; }
    void setPos_R102(double p) { if (_R102 != p) { _R102 = p; emit pos_R102Changed(p);} } double pos_R102() { return _R102; }
    void setPos_X103(double p) { if (_X103 != p) { _X103 = p; emit pos_X103Changed(p);} } double pos_X103() { return _X103; }
    void setPos_Y103(double p) { if (_Y103 != p) { _Y103 = p; emit pos_Y103Changed(p);} } double pos_Y103() { return _Y103; }
    void setPos_R103(double p) { if (_R103 != p) { _R103 = p; emit pos_R103Changed(p);} } double pos_R103() { return _R103; }
    void setPos_X104(double p) { if (_X104 != p) { _X104 = p; emit pos_X104Changed(p);} } double pos_X104() { return _X104; }
    void setPos_Y104(double p) { if (_Y104 != p) { _Y104 = p; emit pos_Y104Changed(p);} } double pos_Y104() { return _Y104; }
    void setPos_R104(double p) { if (_R104 != p) { _R104 = p; emit pos_R104Changed(p);} } double pos_R104() { return _R104; }
    void setPos_X105(double p) { if (_X105 != p) { _X105 = p; emit pos_X105Changed(p);} } double pos_X105() { return _X105; }
    void setPos_Y105(double p) { if (_Y105 != p) { _Y105 = p; emit pos_Y105Changed(p);} } double pos_Y105() { return _Y105; }
    void setPos_R105(double p) { if (_R105 != p) { _R105 = p; emit pos_R105Changed(p);} } double pos_R105() { return _R105; }
    void setPos_X106(double p) { if (_X106 != p) { _X106 = p; emit pos_X106Changed(p);} } double pos_X106() { return _X106; }
    void setPos_Y106(double p) { if (_Y106 != p) { _Y106 = p; emit pos_Y106Changed(p);} } double pos_Y106() { return _Y106; }
    void setPos_R106(double p) { if (_R106 != p) { _R106 = p; emit pos_R106Changed(p);} } double pos_R106() { return _R106; }
    void setPos_X107(double p) { if (_X107 != p) { _X107 = p; emit pos_X107Changed(p);} } double pos_X107() { return _X107; }
    void setPos_Y107(double p) { if (_Y107 != p) { _Y107 = p; emit pos_Y107Changed(p);} } double pos_Y107() { return _Y107; }
    void setPos_R107(double p) { if (_R107 != p) { _R107 = p; emit pos_R107Changed(p);} } double pos_R107() { return _R107; }
    void setPos_X108(double p) { if (_X108 != p) { _X108 = p; emit pos_X108Changed(p);} } double pos_X108() { return _X108; }
    void setPos_Y108(double p) { if (_Y108 != p) { _Y108 = p; emit pos_Y108Changed(p);} } double pos_Y108() { return _Y108; }
    void setPos_R108(double p) { if (_R108 != p) { _R108 = p; emit pos_R108Changed(p);} } double pos_R108() { return _R108; }
    void setPos_X109(double p) { if (_X109 != p) { _X109 = p; emit pos_X109Changed(p);} } double pos_X109() { return _X109; }
    void setPos_Y109(double p) { if (_Y109 != p) { _Y109 = p; emit pos_Y109Changed(p);} } double pos_Y109() { return _Y109; }
    void setPos_R109(double p) { if (_R109 != p) { _R109 = p; emit pos_R109Changed(p);} } double pos_R109() { return _R109; }
    void setPos_X110(double p) { if (_X110 != p) { _X110 = p; emit pos_X110Changed(p);} } double pos_X110() { return _X110; }
    void setPos_Y110(double p) { if (_Y110 != p) { _Y110 = p; emit pos_Y110Changed(p);} } double pos_Y110() { return _Y110; }
    void setPos_R110(double p) { if (_R110 != p) { _R110 = p; emit pos_R110Changed(p);} } double pos_R110() { return _R110; }
    void setPos_X111(double p) { if (_X111 != p) { _X111 = p; emit pos_X111Changed(p);} } double pos_X111() { return _X111; }
    void setPos_Y111(double p) { if (_Y111 != p) { _Y111 = p; emit pos_Y111Changed(p);} } double pos_Y111() { return _Y111; }
    void setPos_R111(double p) { if (_R111 != p) { _R111 = p; emit pos_R111Changed(p);} } double pos_R111() { return _R111; }
    void setPos_X112(double p) { if (_X112 != p) { _X112 = p; emit pos_X112Changed(p);} } double pos_X112() { return _X112; }
    void setPos_Y112(double p) { if (_Y112 != p) { _Y112 = p; emit pos_Y112Changed(p);} } double pos_Y112() { return _Y112; }
    void setPos_R112(double p) { if (_R112 != p) { _R112 = p; emit pos_R112Changed(p);} } double pos_R112() { return _R112; }
    void setPos_X113(double p) { if (_X113 != p) { _X113 = p; emit pos_X113Changed(p);} } double pos_X113() { return _X113; }
    void setPos_Y113(double p) { if (_Y113 != p) { _Y113 = p; emit pos_Y113Changed(p);} } double pos_Y113() { return _Y113; }
    void setPos_R113(double p) { if (_R113 != p) { _R113 = p; emit pos_R113Changed(p);} } double pos_R113() { return _R113; }
    void setPos_X114(double p) { if (_X114 != p) { _X114 = p; emit pos_X114Changed(p);} } double pos_X114() { return _X114; }
    void setPos_Y114(double p) { if (_Y114 != p) { _Y114 = p; emit pos_Y114Changed(p);} } double pos_Y114() { return _Y114; }
    void setPos_R114(double p) { if (_R114 != p) { _R114 = p; emit pos_R114Changed(p);} } double pos_R114() { return _R114; }
    void setPos_X115(double p) { if (_X115 != p) { _X115 = p; emit pos_X115Changed(p);} } double pos_X115() { return _X115; }
    void setPos_Y115(double p) { if (_Y115 != p) { _Y115 = p; emit pos_Y115Changed(p);} } double pos_Y115() { return _Y115; }
    void setPos_R115(double p) { if (_R115 != p) { _R115 = p; emit pos_R115Changed(p);} } double pos_R115() { return _R115; }
    void setPos_X116(double p) { if (_X116 != p) { _X116 = p; emit pos_X116Changed(p);} } double pos_X116() { return _X116; }
    void setPos_Y116(double p) { if (_Y116 != p) { _Y116 = p; emit pos_Y116Changed(p);} } double pos_Y116() { return _Y116; }
    void setPos_R116(double p) { if (_R116 != p) { _R116 = p; emit pos_R116Changed(p);} } double pos_R116() { return _R116; }
    void setPos_X117(double p) { if (_X117 != p) { _X117 = p; emit pos_X117Changed(p);} } double pos_X117() { return _X117; }
    void setPos_Y117(double p) { if (_Y117 != p) { _Y117 = p; emit pos_Y117Changed(p);} } double pos_Y117() { return _Y117; }
    void setPos_R117(double p) { if (_R117 != p) { _R117 = p; emit pos_R117Changed(p);} } double pos_R117() { return _R117; }
    void setPos_X118(double p) { if (_X118 != p) { _X118 = p; emit pos_X118Changed(p);} } double pos_X118() { return _X118; }
    void setPos_Y118(double p) { if (_Y118 != p) { _Y118 = p; emit pos_Y118Changed(p);} } double pos_Y118() { return _Y118; }
    void setPos_R118(double p) { if (_R118 != p) { _R118 = p; emit pos_R118Changed(p);} } double pos_R118() { return _R118; }
    void setPos_X119(double p) { if (_X119 != p) { _X119 = p; emit pos_X119Changed(p);} } double pos_X119() { return _X119; }
    void setPos_Y119(double p) { if (_Y119 != p) { _Y119 = p; emit pos_Y119Changed(p);} } double pos_Y119() { return _Y119; }
    void setPos_R119(double p) { if (_R119 != p) { _R119 = p; emit pos_R119Changed(p);} } double pos_R119() { return _R119; }
    void setPos_X120(double p) { if (_X120 != p) { _X120 = p; emit pos_X120Changed(p);} } double pos_X120() { return _X120; }
    void setPos_Y120(double p) { if (_Y120 != p) { _Y120 = p; emit pos_Y120Changed(p);} } double pos_Y120() { return _Y120; }
    void setPos_R120(double p) { if (_R120 != p) { _R120 = p; emit pos_R120Changed(p);} } double pos_R120() { return _R120; }
    void setPos_X121(double p) { if (_X121 != p) { _X121 = p; emit pos_X121Changed(p);} } double pos_X121() { return _X121; }
    void setPos_Y121(double p) { if (_Y121 != p) { _Y121 = p; emit pos_Y121Changed(p);} } double pos_Y121() { return _Y121; }
    void setPos_R121(double p) { if (_R121 != p) { _R121 = p; emit pos_R121Changed(p);} } double pos_R121() { return _R121; }
    void setPos_X122(double p) { if (_X122 != p) { _X122 = p; emit pos_X122Changed(p);} } double pos_X122() { return _X122; }
    void setPos_Y122(double p) { if (_Y122 != p) { _Y122 = p; emit pos_Y122Changed(p);} } double pos_Y122() { return _Y122; }
    void setPos_R122(double p) { if (_R122 != p) { _R122 = p; emit pos_R122Changed(p);} } double pos_R122() { return _R122; }
    void setPos_X123(double p) { if (_X123 != p) { _X123 = p; emit pos_X123Changed(p);} } double pos_X123() { return _X123; }
    void setPos_Y123(double p) { if (_Y123 != p) { _Y123 = p; emit pos_Y123Changed(p);} } double pos_Y123() { return _Y123; }
    void setPos_R123(double p) { if (_R123 != p) { _R123 = p; emit pos_R123Changed(p);} } double pos_R123() { return _R123; }
    void setPos_X124(double p) { if (_X124 != p) { _X124 = p; emit pos_X124Changed(p);} } double pos_X124() { return _X124; }
    void setPos_Y124(double p) { if (_Y124 != p) { _Y124 = p; emit pos_Y124Changed(p);} } double pos_Y124() { return _Y124; }
    void setPos_R124(double p) { if (_R124 != p) { _R124 = p; emit pos_R124Changed(p);} } double pos_R124() { return _R124; }
    void setPos_X125(double p) { if (_X125 != p) { _X125 = p; emit pos_X125Changed(p);} } double pos_X125() { return _X125; }
    void setPos_Y125(double p) { if (_Y125 != p) { _Y125 = p; emit pos_Y125Changed(p);} } double pos_Y125() { return _Y125; }
    void setPos_R125(double p) { if (_R125 != p) { _R125 = p; emit pos_R125Changed(p);} } double pos_R125() { return _R125; }
    void setPos_X126(double p) { if (_X126 != p) { _X126 = p; emit pos_X126Changed(p);} } double pos_X126() { return _X126; }
    void setPos_Y126(double p) { if (_Y126 != p) { _Y126 = p; emit pos_Y126Changed(p);} } double pos_Y126() { return _Y126; }
    void setPos_R126(double p) { if (_R126 != p) { _R126 = p; emit pos_R126Changed(p);} } double pos_R126() { return _R126; }
    void setPos_X127(double p) { if (_X127 != p) { _X127 = p; emit pos_X127Changed(p);} } double pos_X127() { return _X127; }
    void setPos_Y127(double p) { if (_Y127 != p) { _Y127 = p; emit pos_Y127Changed(p);} } double pos_Y127() { return _Y127; }
    void setPos_R127(double p) { if (_R127 != p) { _R127 = p; emit pos_R127Changed(p);} } double pos_R127() { return _R127; }
    void setPos_X128(double p) { if (_X128 != p) { _X128 = p; emit pos_X128Changed(p);} } double pos_X128() { return _X128; }
    void setPos_Y128(double p) { if (_Y128 != p) { _Y128 = p; emit pos_Y128Changed(p);} } double pos_Y128() { return _Y128; }
    void setPos_R128(double p) { if (_R128 != p) { _R128 = p; emit pos_R128Changed(p);} } double pos_R128() { return _R128; }
    void setPos_X129(double p) { if (_X129 != p) { _X129 = p; emit pos_X129Changed(p);} } double pos_X129() { return _X129; }
    void setPos_Y129(double p) { if (_Y129 != p) { _Y129 = p; emit pos_Y129Changed(p);} } double pos_Y129() { return _Y129; }
    void setPos_R129(double p) { if (_R129 != p) { _R129 = p; emit pos_R129Changed(p);} } double pos_R129() { return _R129; }
    void setPos_X130(double p) { if (_X130 != p) { _X130 = p; emit pos_X130Changed(p);} } double pos_X130() { return _X130; }
    void setPos_Y130(double p) { if (_Y130 != p) { _Y130 = p; emit pos_Y130Changed(p);} } double pos_Y130() { return _Y130; }
    void setPos_R130(double p) { if (_R130 != p) { _R130 = p; emit pos_R130Changed(p);} } double pos_R130() { return _R130; }
    void setPos_X131(double p) { if (_X131 != p) { _X131 = p; emit pos_X131Changed(p);} } double pos_X131() { return _X131; }
    void setPos_Y131(double p) { if (_Y131 != p) { _Y131 = p; emit pos_Y131Changed(p);} } double pos_Y131() { return _Y131; }
    void setPos_R131(double p) { if (_R131 != p) { _R131 = p; emit pos_R131Changed(p);} } double pos_R131() { return _R131; }
    void setPos_X132(double p) { if (_X132 != p) { _X132 = p; emit pos_X132Changed(p);} } double pos_X132() { return _X132; }
    void setPos_Y132(double p) { if (_Y132 != p) { _Y132 = p; emit pos_Y132Changed(p);} } double pos_Y132() { return _Y132; }
    void setPos_R132(double p) { if (_R132 != p) { _R132 = p; emit pos_R132Changed(p);} } double pos_R132() { return _R132; }
    void setPos_X133(double p) { if (_X133 != p) { _X133 = p; emit pos_X133Changed(p);} } double pos_X133() { return _X133; }
    void setPos_Y133(double p) { if (_Y133 != p) { _Y133 = p; emit pos_Y133Changed(p);} } double pos_Y133() { return _Y133; }
    void setPos_R133(double p) { if (_R133 != p) { _R133 = p; emit pos_R133Changed(p);} } double pos_R133() { return _R133; }
    void setPos_X134(double p) { if (_X134 != p) { _X134 = p; emit pos_X134Changed(p);} } double pos_X134() { return _X134; }
    void setPos_Y134(double p) { if (_Y134 != p) { _Y134 = p; emit pos_Y134Changed(p);} } double pos_Y134() { return _Y134; }
    void setPos_R134(double p) { if (_R134 != p) { _R134 = p; emit pos_R134Changed(p);} } double pos_R134() { return _R134; }
    void setPos_X135(double p) { if (_X135 != p) { _X135 = p; emit pos_X135Changed(p);} } double pos_X135() { return _X135; }
    void setPos_Y135(double p) { if (_Y135 != p) { _Y135 = p; emit pos_Y135Changed(p);} } double pos_Y135() { return _Y135; }
    void setPos_R135(double p) { if (_R135 != p) { _R135 = p; emit pos_R135Changed(p);} } double pos_R135() { return _R135; }
    void setPos_X136(double p) { if (_X136 != p) { _X136 = p; emit pos_X136Changed(p);} } double pos_X136() { return _X136; }
    void setPos_Y136(double p) { if (_Y136 != p) { _Y136 = p; emit pos_Y136Changed(p);} } double pos_Y136() { return _Y136; }
    void setPos_R136(double p) { if (_R136 != p) { _R136 = p; emit pos_R136Changed(p);} } double pos_R136() { return _R136; }
    void setPos_X137(double p) { if (_X137 != p) { _X137 = p; emit pos_X137Changed(p);} } double pos_X137() { return _X137; }
    void setPos_Y137(double p) { if (_Y137 != p) { _Y137 = p; emit pos_Y137Changed(p);} } double pos_Y137() { return _Y137; }
    void setPos_R137(double p) { if (_R137 != p) { _R137 = p; emit pos_R137Changed(p);} } double pos_R137() { return _R137; }
    void setPos_X138(double p) { if (_X138 != p) { _X138 = p; emit pos_X138Changed(p);} } double pos_X138() { return _X138; }
    void setPos_Y138(double p) { if (_Y138 != p) { _Y138 = p; emit pos_Y138Changed(p);} } double pos_Y138() { return _Y138; }
    void setPos_R138(double p) { if (_R138 != p) { _R138 = p; emit pos_R138Changed(p);} } double pos_R138() { return _R138; }
    void setPos_X139(double p) { if (_X139 != p) { _X139 = p; emit pos_X139Changed(p);} } double pos_X139() { return _X139; }
    void setPos_Y139(double p) { if (_Y139 != p) { _Y139 = p; emit pos_Y139Changed(p);} } double pos_Y139() { return _Y139; }
    void setPos_R139(double p) { if (_R139 != p) { _R139 = p; emit pos_R139Changed(p);} } double pos_R139() { return _R139; }
    void setPos_X140(double p) { if (_X140 != p) { _X140 = p; emit pos_X140Changed(p);} } double pos_X140() { return _X140; }
    void setPos_Y140(double p) { if (_Y140 != p) { _Y140 = p; emit pos_Y140Changed(p);} } double pos_Y140() { return _Y140; }
    void setPos_R140(double p) { if (_R140 != p) { _R140 = p; emit pos_R140Changed(p);} } double pos_R140() { return _R140; }
    void setPos_X141(double p) { if (_X141 != p) { _X141 = p; emit pos_X141Changed(p);} } double pos_X141() { return _X141; }
    void setPos_Y141(double p) { if (_Y141 != p) { _Y141 = p; emit pos_Y141Changed(p);} } double pos_Y141() { return _Y141; }
    void setPos_R141(double p) { if (_R141 != p) { _R141 = p; emit pos_R141Changed(p);} } double pos_R141() { return _R141; }
    void setPos_X142(double p) { if (_X142 != p) { _X142 = p; emit pos_X142Changed(p);} } double pos_X142() { return _X142; }
    void setPos_Y142(double p) { if (_Y142 != p) { _Y142 = p; emit pos_Y142Changed(p);} } double pos_Y142() { return _Y142; }
    void setPos_R142(double p) { if (_R142 != p) { _R142 = p; emit pos_R142Changed(p);} } double pos_R142() { return _R142; }
    void setPos_X143(double p) { if (_X143 != p) { _X143 = p; emit pos_X143Changed(p);} } double pos_X143() { return _X143; }
    void setPos_Y143(double p) { if (_Y143 != p) { _Y143 = p; emit pos_Y143Changed(p);} } double pos_Y143() { return _Y143; }
    void setPos_R143(double p) { if (_R143 != p) { _R143 = p; emit pos_R143Changed(p);} } double pos_R143() { return _R143; }
    void setPos_X144(double p) { if (_X144 != p) { _X144 = p; emit pos_X144Changed(p);} } double pos_X144() { return _X144; }
    void setPos_Y144(double p) { if (_Y144 != p) { _Y144 = p; emit pos_Y144Changed(p);} } double pos_Y144() { return _Y144; }
    void setPos_R144(double p) { if (_R144 != p) { _R144 = p; emit pos_R144Changed(p);} } double pos_R144() { return _R144; }
    void setPos_X145(double p) { if (_X145 != p) { _X145 = p; emit pos_X145Changed(p);} } double pos_X145() { return _X145; }
    void setPos_Y145(double p) { if (_Y145 != p) { _Y145 = p; emit pos_Y145Changed(p);} } double pos_Y145() { return _Y145; }
    void setPos_R145(double p) { if (_R145 != p) { _R145 = p; emit pos_R145Changed(p);} } double pos_R145() { return _R145; }
    void setPos_X146(double p) { if (_X146 != p) { _X146 = p; emit pos_X146Changed(p);} } double pos_X146() { return _X146; }
    void setPos_Y146(double p) { if (_Y146 != p) { _Y146 = p; emit pos_Y146Changed(p);} } double pos_Y146() { return _Y146; }
    void setPos_R146(double p) { if (_R146 != p) { _R146 = p; emit pos_R146Changed(p);} } double pos_R146() { return _R146; }
    void setPos_X147(double p) { if (_X147 != p) { _X147 = p; emit pos_X147Changed(p);} } double pos_X147() { return _X147; }
    void setPos_Y147(double p) { if (_Y147 != p) { _Y147 = p; emit pos_Y147Changed(p);} } double pos_Y147() { return _Y147; }
    void setPos_R147(double p) { if (_R147 != p) { _R147 = p; emit pos_R147Changed(p);} } double pos_R147() { return _R147; }
    void setPos_X148(double p) { if (_X148 != p) { _X148 = p; emit pos_X148Changed(p);} } double pos_X148() { return _X148; }
    void setPos_Y148(double p) { if (_Y148 != p) { _Y148 = p; emit pos_Y148Changed(p);} } double pos_Y148() { return _Y148; }
    void setPos_R148(double p) { if (_R148 != p) { _R148 = p; emit pos_R148Changed(p);} } double pos_R148() { return _R148; }
    void setPos_X149(double p) { if (_X149 != p) { _X149 = p; emit pos_X149Changed(p);} } double pos_X149() { return _X149; }
    void setPos_Y149(double p) { if (_Y149 != p) { _Y149 = p; emit pos_Y149Changed(p);} } double pos_Y149() { return _Y149; }
    void setPos_R149(double p) { if (_R149 != p) { _R149 = p; emit pos_R149Changed(p);} } double pos_R149() { return _R149; }
    void setPos_X150(double p) { if (_X150 != p) { _X150 = p; emit pos_X150Changed(p);} } double pos_X150() { return _X150; }
    void setPos_Y150(double p) { if (_Y150 != p) { _Y150 = p; emit pos_Y150Changed(p);} } double pos_Y150() { return _Y150; }
    void setPos_R150(double p) { if (_R150 != p) { _R150 = p; emit pos_R150Changed(p);} } double pos_R150() { return _R150; }
    void setPos_X151(double p) { if (_X151 != p) { _X151 = p; emit pos_X151Changed(p);} } double pos_X151() { return _X151; }
    void setPos_Y151(double p) { if (_Y151 != p) { _Y151 = p; emit pos_Y151Changed(p);} } double pos_Y151() { return _Y151; }
    void setPos_R151(double p) { if (_R151 != p) { _R151 = p; emit pos_R151Changed(p);} } double pos_R151() { return _R151; }
    void setPos_X152(double p) { if (_X152 != p) { _X152 = p; emit pos_X152Changed(p);} } double pos_X152() { return _X152; }
    void setPos_Y152(double p) { if (_Y152 != p) { _Y152 = p; emit pos_Y152Changed(p);} } double pos_Y152() { return _Y152; }
    void setPos_R152(double p) { if (_R152 != p) { _R152 = p; emit pos_R152Changed(p);} } double pos_R152() { return _R152; }
    void setPos_X153(double p) { if (_X153 != p) { _X153 = p; emit pos_X153Changed(p);} } double pos_X153() { return _X153; }
    void setPos_Y153(double p) { if (_Y153 != p) { _Y153 = p; emit pos_Y153Changed(p);} } double pos_Y153() { return _Y153; }
    void setPos_R153(double p) { if (_R153 != p) { _R153 = p; emit pos_R153Changed(p);} } double pos_R153() { return _R153; }
    void setPos_X154(double p) { if (_X154 != p) { _X154 = p; emit pos_X154Changed(p);} } double pos_X154() { return _X154; }
    void setPos_Y154(double p) { if (_Y154 != p) { _Y154 = p; emit pos_Y154Changed(p);} } double pos_Y154() { return _Y154; }
    void setPos_R154(double p) { if (_R154 != p) { _R154 = p; emit pos_R154Changed(p);} } double pos_R154() { return _R154; }
    void setPos_X155(double p) { if (_X155 != p) { _X155 = p; emit pos_X155Changed(p);} } double pos_X155() { return _X155; }
    void setPos_Y155(double p) { if (_Y155 != p) { _Y155 = p; emit pos_Y155Changed(p);} } double pos_Y155() { return _Y155; }
    void setPos_R155(double p) { if (_R155 != p) { _R155 = p; emit pos_R155Changed(p);} } double pos_R155() { return _R155; }
    void setPos_X156(double p) { if (_X156 != p) { _X156 = p; emit pos_X156Changed(p);} } double pos_X156() { return _X156; }
    void setPos_Y156(double p) { if (_Y156 != p) { _Y156 = p; emit pos_Y156Changed(p);} } double pos_Y156() { return _Y156; }
    void setPos_R156(double p) { if (_R156 != p) { _R156 = p; emit pos_R156Changed(p);} } double pos_R156() { return _R156; }
    void setPos_X157(double p) { if (_X157 != p) { _X157 = p; emit pos_X157Changed(p);} } double pos_X157() { return _X157; }
    void setPos_Y157(double p) { if (_Y157 != p) { _Y157 = p; emit pos_Y157Changed(p);} } double pos_Y157() { return _Y157; }
    void setPos_R157(double p) { if (_R157 != p) { _R157 = p; emit pos_R157Changed(p);} } double pos_R157() { return _R157; }
    void setPos_X158(double p) { if (_X158 != p) { _X158 = p; emit pos_X158Changed(p);} } double pos_X158() { return _X158; }
    void setPos_Y158(double p) { if (_Y158 != p) { _Y158 = p; emit pos_Y158Changed(p);} } double pos_Y158() { return _Y158; }
    void setPos_R158(double p) { if (_R158 != p) { _R158 = p; emit pos_R158Changed(p);} } double pos_R158() { return _R158; }
    void setPos_X159(double p) { if (_X159 != p) { _X159 = p; emit pos_X159Changed(p);} } double pos_X159() { return _X159; }
    void setPos_Y159(double p) { if (_Y159 != p) { _Y159 = p; emit pos_Y159Changed(p);} } double pos_Y159() { return _Y159; }
    void setPos_R159(double p) { if (_R159 != p) { _R159 = p; emit pos_R159Changed(p);} } double pos_R159() { return _R159; }
    void setPos_X160(double p) { if (_X160 != p) { _X160 = p; emit pos_X160Changed(p);} } double pos_X160() { return _X160; }
    void setPos_Y160(double p) { if (_Y160 != p) { _Y160 = p; emit pos_Y160Changed(p);} } double pos_Y160() { return _Y160; }
    void setPos_R160(double p) { if (_R160 != p) { _R160 = p; emit pos_R160Changed(p);} } double pos_R160() { return _R160; }
    void setPos_X161(double p) { if (_X161 != p) { _X161 = p; emit pos_X161Changed(p);} } double pos_X161() { return _X161; }
    void setPos_Y161(double p) { if (_Y161 != p) { _Y161 = p; emit pos_Y161Changed(p);} } double pos_Y161() { return _Y161; }
    void setPos_R161(double p) { if (_R161 != p) { _R161 = p; emit pos_R161Changed(p);} } double pos_R161() { return _R161; }
    void setPos_X162(double p) { if (_X162 != p) { _X162 = p; emit pos_X162Changed(p);} } double pos_X162() { return _X162; }
    void setPos_Y162(double p) { if (_Y162 != p) { _Y162 = p; emit pos_Y162Changed(p);} } double pos_Y162() { return _Y162; }
    void setPos_R162(double p) { if (_R162 != p) { _R162 = p; emit pos_R162Changed(p);} } double pos_R162() { return _R162; }
    void setPos_X163(double p) { if (_X163 != p) { _X163 = p; emit pos_X163Changed(p);} } double pos_X163() { return _X163; }
    void setPos_Y163(double p) { if (_Y163 != p) { _Y163 = p; emit pos_Y163Changed(p);} } double pos_Y163() { return _Y163; }
    void setPos_R163(double p) { if (_R163 != p) { _R163 = p; emit pos_R163Changed(p);} } double pos_R163() { return _R163; }
    void setPos_X164(double p) { if (_X164 != p) { _X164 = p; emit pos_X164Changed(p);} } double pos_X164() { return _X164; }
    void setPos_Y164(double p) { if (_Y164 != p) { _Y164 = p; emit pos_Y164Changed(p);} } double pos_Y164() { return _Y164; }
    void setPos_R164(double p) { if (_R164 != p) { _R164 = p; emit pos_R164Changed(p);} } double pos_R164() { return _R164; }
    void setPos_X165(double p) { if (_X165 != p) { _X165 = p; emit pos_X165Changed(p);} } double pos_X165() { return _X165; }
    void setPos_Y165(double p) { if (_Y165 != p) { _Y165 = p; emit pos_Y165Changed(p);} } double pos_Y165() { return _Y165; }
    void setPos_R165(double p) { if (_R165 != p) { _R165 = p; emit pos_R165Changed(p);} } double pos_R165() { return _R165; }
    void setPos_X166(double p) { if (_X166 != p) { _X166 = p; emit pos_X166Changed(p);} } double pos_X166() { return _X166; }
    void setPos_Y166(double p) { if (_Y166 != p) { _Y166 = p; emit pos_Y166Changed(p);} } double pos_Y166() { return _Y166; }
    void setPos_R166(double p) { if (_R166 != p) { _R166 = p; emit pos_R166Changed(p);} } double pos_R166() { return _R166; }
    void setPos_X167(double p) { if (_X167 != p) { _X167 = p; emit pos_X167Changed(p);} } double pos_X167() { return _X167; }
    void setPos_Y167(double p) { if (_Y167 != p) { _Y167 = p; emit pos_Y167Changed(p);} } double pos_Y167() { return _Y167; }
    void setPos_R167(double p) { if (_R167 != p) { _R167 = p; emit pos_R167Changed(p);} } double pos_R167() { return _R167; }
    void setPos_X168(double p) { if (_X168 != p) { _X168 = p; emit pos_X168Changed(p);} } double pos_X168() { return _X168; }
    void setPos_Y168(double p) { if (_Y168 != p) { _Y168 = p; emit pos_Y168Changed(p);} } double pos_Y168() { return _Y168; }
    void setPos_R168(double p) { if (_R168 != p) { _R168 = p; emit pos_R168Changed(p);} } double pos_R168() { return _R168; }
    void setPos_X169(double p) { if (_X169 != p) { _X169 = p; emit pos_X169Changed(p);} } double pos_X169() { return _X169; }
    void setPos_Y169(double p) { if (_Y169 != p) { _Y169 = p; emit pos_Y169Changed(p);} } double pos_Y169() { return _Y169; }
    void setPos_R169(double p) { if (_R169 != p) { _R169 = p; emit pos_R169Changed(p);} } double pos_R169() { return _R169; }
    void setPos_X170(double p) { if (_X170 != p) { _X170 = p; emit pos_X170Changed(p);} } double pos_X170() { return _X170; }
    void setPos_Y170(double p) { if (_Y170 != p) { _Y170 = p; emit pos_Y170Changed(p);} } double pos_Y170() { return _Y170; }
    void setPos_R170(double p) { if (_R170 != p) { _R170 = p; emit pos_R170Changed(p);} } double pos_R170() { return _R170; }
    void setPos_X171(double p) { if (_X171 != p) { _X171 = p; emit pos_X171Changed(p);} } double pos_X171() { return _X171; }
    void setPos_Y171(double p) { if (_Y171 != p) { _Y171 = p; emit pos_Y171Changed(p);} } double pos_Y171() { return _Y171; }
    void setPos_R171(double p) { if (_R171 != p) { _R171 = p; emit pos_R171Changed(p);} } double pos_R171() { return _R171; }
    void setPos_X172(double p) { if (_X172 != p) { _X172 = p; emit pos_X172Changed(p);} } double pos_X172() { return _X172; }
    void setPos_Y172(double p) { if (_Y172 != p) { _Y172 = p; emit pos_Y172Changed(p);} } double pos_Y172() { return _Y172; }
    void setPos_R172(double p) { if (_R172 != p) { _R172 = p; emit pos_R172Changed(p);} } double pos_R172() { return _R172; }
    void setPos_X173(double p) { if (_X173 != p) { _X173 = p; emit pos_X173Changed(p);} } double pos_X173() { return _X173; }
    void setPos_Y173(double p) { if (_Y173 != p) { _Y173 = p; emit pos_Y173Changed(p);} } double pos_Y173() { return _Y173; }
    void setPos_R173(double p) { if (_R173 != p) { _R173 = p; emit pos_R173Changed(p);} } double pos_R173() { return _R173; }
    void setPos_X174(double p) { if (_X174 != p) { _X174 = p; emit pos_X174Changed(p);} } double pos_X174() { return _X174; }
    void setPos_Y174(double p) { if (_Y174 != p) { _Y174 = p; emit pos_Y174Changed(p);} } double pos_Y174() { return _Y174; }
    void setPos_R174(double p) { if (_R174 != p) { _R174 = p; emit pos_R174Changed(p);} } double pos_R174() { return _R174; }
    void setPos_X175(double p) { if (_X175 != p) { _X175 = p; emit pos_X175Changed(p);} } double pos_X175() { return _X175; }
    void setPos_Y175(double p) { if (_Y175 != p) { _Y175 = p; emit pos_Y175Changed(p);} } double pos_Y175() { return _Y175; }
    void setPos_R175(double p) { if (_R175 != p) { _R175 = p; emit pos_R175Changed(p);} } double pos_R175() { return _R175; }
    void setPos_X176(double p) { if (_X176 != p) { _X176 = p; emit pos_X176Changed(p);} } double pos_X176() { return _X176; }
    void setPos_Y176(double p) { if (_Y176 != p) { _Y176 = p; emit pos_Y176Changed(p);} } double pos_Y176() { return _Y176; }
    void setPos_R176(double p) { if (_R176 != p) { _R176 = p; emit pos_R176Changed(p);} } double pos_R176() { return _R176; }
    void setPos_X177(double p) { if (_X177 != p) { _X177 = p; emit pos_X177Changed(p);} } double pos_X177() { return _X177; }
    void setPos_Y177(double p) { if (_Y177 != p) { _Y177 = p; emit pos_Y177Changed(p);} } double pos_Y177() { return _Y177; }
    void setPos_R177(double p) { if (_R177 != p) { _R177 = p; emit pos_R177Changed(p);} } double pos_R177() { return _R177; }
    void setPos_X178(double p) { if (_X178 != p) { _X178 = p; emit pos_X178Changed(p);} } double pos_X178() { return _X178; }
    void setPos_Y178(double p) { if (_Y178 != p) { _Y178 = p; emit pos_Y178Changed(p);} } double pos_Y178() { return _Y178; }
    void setPos_R178(double p) { if (_R178 != p) { _R178 = p; emit pos_R178Changed(p);} } double pos_R178() { return _R178; }
    void setPos_X179(double p) { if (_X179 != p) { _X179 = p; emit pos_X179Changed(p);} } double pos_X179() { return _X179; }
    void setPos_Y179(double p) { if (_Y179 != p) { _Y179 = p; emit pos_Y179Changed(p);} } double pos_Y179() { return _Y179; }
    void setPos_R179(double p) { if (_R179 != p) { _R179 = p; emit pos_R179Changed(p);} } double pos_R179() { return _R179; }
    void setPos_X180(double p) { if (_X180 != p) { _X180 = p; emit pos_X180Changed(p);} } double pos_X180() { return _X180; }
    void setPos_Y180(double p) { if (_Y180 != p) { _Y180 = p; emit pos_Y180Changed(p);} } double pos_Y180() { return _Y180; }
    void setPos_R180(double p) { if (_R180 != p) { _R180 = p; emit pos_R180Changed(p);} } double pos_R180() { return _R180; }
    void setPos_X181(double p) { if (_X181 != p) { _X181 = p; emit pos_X181Changed(p);} } double pos_X181() { return _X181; }
    void setPos_Y181(double p) { if (_Y181 != p) { _Y181 = p; emit pos_Y181Changed(p);} } double pos_Y181() { return _Y181; }
    void setPos_R181(double p) { if (_R181 != p) { _R181 = p; emit pos_R181Changed(p);} } double pos_R181() { return _R181; }
    void setPos_X182(double p) { if (_X182 != p) { _X182 = p; emit pos_X182Changed(p);} } double pos_X182() { return _X182; }
    void setPos_Y182(double p) { if (_Y182 != p) { _Y182 = p; emit pos_Y182Changed(p);} } double pos_Y182() { return _Y182; }
    void setPos_R182(double p) { if (_R182 != p) { _R182 = p; emit pos_R182Changed(p);} } double pos_R182() { return _R182; }
    void setPos_X183(double p) { if (_X183 != p) { _X183 = p; emit pos_X183Changed(p);} } double pos_X183() { return _X183; }
    void setPos_Y183(double p) { if (_Y183 != p) { _Y183 = p; emit pos_Y183Changed(p);} } double pos_Y183() { return _Y183; }
    void setPos_R183(double p) { if (_R183 != p) { _R183 = p; emit pos_R183Changed(p);} } double pos_R183() { return _R183; }
    void setPos_X184(double p) { if (_X184 != p) { _X184 = p; emit pos_X184Changed(p);} } double pos_X184() { return _X184; }
    void setPos_Y184(double p) { if (_Y184 != p) { _Y184 = p; emit pos_Y184Changed(p);} } double pos_Y184() { return _Y184; }
    void setPos_R184(double p) { if (_R184 != p) { _R184 = p; emit pos_R184Changed(p);} } double pos_R184() { return _R184; }
    void setPos_X185(double p) { if (_X185 != p) { _X185 = p; emit pos_X185Changed(p);} } double pos_X185() { return _X185; }
    void setPos_Y185(double p) { if (_Y185 != p) { _Y185 = p; emit pos_Y185Changed(p);} } double pos_Y185() { return _Y185; }
    void setPos_R185(double p) { if (_R185 != p) { _R185 = p; emit pos_R185Changed(p);} } double pos_R185() { return _R185; }
    void setPos_X186(double p) { if (_X186 != p) { _X186 = p; emit pos_X186Changed(p);} } double pos_X186() { return _X186; }
    void setPos_Y186(double p) { if (_Y186 != p) { _Y186 = p; emit pos_Y186Changed(p);} } double pos_Y186() { return _Y186; }
    void setPos_R186(double p) { if (_R186 != p) { _R186 = p; emit pos_R186Changed(p);} } double pos_R186() { return _R186; }
    void setPos_X187(double p) { if (_X187 != p) { _X187 = p; emit pos_X187Changed(p);} } double pos_X187() { return _X187; }
    void setPos_Y187(double p) { if (_Y187 != p) { _Y187 = p; emit pos_Y187Changed(p);} } double pos_Y187() { return _Y187; }
    void setPos_R187(double p) { if (_R187 != p) { _R187 = p; emit pos_R187Changed(p);} } double pos_R187() { return _R187; }
    void setPos_X188(double p) { if (_X188 != p) { _X188 = p; emit pos_X188Changed(p);} } double pos_X188() { return _X188; }
    void setPos_Y188(double p) { if (_Y188 != p) { _Y188 = p; emit pos_Y188Changed(p);} } double pos_Y188() { return _Y188; }
    void setPos_R188(double p) { if (_R188 != p) { _R188 = p; emit pos_R188Changed(p);} } double pos_R188() { return _R188; }
    void setPos_X189(double p) { if (_X189 != p) { _X189 = p; emit pos_X189Changed(p);} } double pos_X189() { return _X189; }
    void setPos_Y189(double p) { if (_Y189 != p) { _Y189 = p; emit pos_Y189Changed(p);} } double pos_Y189() { return _Y189; }
    void setPos_R189(double p) { if (_R189 != p) { _R189 = p; emit pos_R189Changed(p);} } double pos_R189() { return _R189; }
    void setPos_X190(double p) { if (_X190 != p) { _X190 = p; emit pos_X190Changed(p);} } double pos_X190() { return _X190; }
    void setPos_Y190(double p) { if (_Y190 != p) { _Y190 = p; emit pos_Y190Changed(p);} } double pos_Y190() { return _Y190; }
    void setPos_R190(double p) { if (_R190 != p) { _R190 = p; emit pos_R190Changed(p);} } double pos_R190() { return _R190; }
    void setPos_X191(double p) { if (_X191 != p) { _X191 = p; emit pos_X191Changed(p);} } double pos_X191() { return _X191; }
    void setPos_Y191(double p) { if (_Y191 != p) { _Y191 = p; emit pos_Y191Changed(p);} } double pos_Y191() { return _Y191; }
    void setPos_R191(double p) { if (_R191 != p) { _R191 = p; emit pos_R191Changed(p);} } double pos_R191() { return _R191; }
    void setPos_X192(double p) { if (_X192 != p) { _X192 = p; emit pos_X192Changed(p);} } double pos_X192() { return _X192; }
    void setPos_Y192(double p) { if (_Y192 != p) { _Y192 = p; emit pos_Y192Changed(p);} } double pos_Y192() { return _Y192; }
    void setPos_R192(double p) { if (_R192 != p) { _R192 = p; emit pos_R192Changed(p);} } double pos_R192() { return _R192; }
    void setPos_X193(double p) { if (_X193 != p) { _X193 = p; emit pos_X193Changed(p);} } double pos_X193() { return _X193; }
    void setPos_Y193(double p) { if (_Y193 != p) { _Y193 = p; emit pos_Y193Changed(p);} } double pos_Y193() { return _Y193; }
    void setPos_R193(double p) { if (_R193 != p) { _R193 = p; emit pos_R193Changed(p);} } double pos_R193() { return _R193; }
    void setPos_X194(double p) { if (_X194 != p) { _X194 = p; emit pos_X194Changed(p);} } double pos_X194() { return _X194; }
    void setPos_Y194(double p) { if (_Y194 != p) { _Y194 = p; emit pos_Y194Changed(p);} } double pos_Y194() { return _Y194; }
    void setPos_R194(double p) { if (_R194 != p) { _R194 = p; emit pos_R194Changed(p);} } double pos_R194() { return _R194; }
    void setPos_X195(double p) { if (_X195 != p) { _X195 = p; emit pos_X195Changed(p);} } double pos_X195() { return _X195; }
    void setPos_Y195(double p) { if (_Y195 != p) { _Y195 = p; emit pos_Y195Changed(p);} } double pos_Y195() { return _Y195; }
    void setPos_R195(double p) { if (_R195 != p) { _R195 = p; emit pos_R195Changed(p);} } double pos_R195() { return _R195; }
    void setPos_X196(double p) { if (_X196 != p) { _X196 = p; emit pos_X196Changed(p);} } double pos_X196() { return _X196; }
    void setPos_Y196(double p) { if (_Y196 != p) { _Y196 = p; emit pos_Y196Changed(p);} } double pos_Y196() { return _Y196; }
    void setPos_R196(double p) { if (_R196 != p) { _R196 = p; emit pos_R196Changed(p);} } double pos_R196() { return _R196; }
    void setPos_X197(double p) { if (_X197 != p) { _X197 = p; emit pos_X197Changed(p);} } double pos_X197() { return _X197; }
    void setPos_Y197(double p) { if (_Y197 != p) { _Y197 = p; emit pos_Y197Changed(p);} } double pos_Y197() { return _Y197; }
    void setPos_R197(double p) { if (_R197 != p) { _R197 = p; emit pos_R197Changed(p);} } double pos_R197() { return _R197; }
    void setPos_X198(double p) { if (_X198 != p) { _X198 = p; emit pos_X198Changed(p);} } double pos_X198() { return _X198; }
    void setPos_Y198(double p) { if (_Y198 != p) { _Y198 = p; emit pos_Y198Changed(p);} } double pos_Y198() { return _Y198; }
    void setPos_R198(double p) { if (_R198 != p) { _R198 = p; emit pos_R198Changed(p);} } double pos_R198() { return _R198; }
    void setPos_X199(double p) { if (_X199 != p) { _X199 = p; emit pos_X199Changed(p);} } double pos_X199() { return _X199; }
    void setPos_Y199(double p) { if (_Y199 != p) { _Y199 = p; emit pos_Y199Changed(p);} } double pos_Y199() { return _Y199; }
    void setPos_R199(double p) { if (_R199 != p) { _R199 = p; emit pos_R199Changed(p);} } double pos_R199() { return _R199; }
    void setPos_X200(double p) { if (_X200 != p) { _X200 = p; emit pos_X200Changed(p);} } double pos_X200() { return _X200; }
    void setPos_Y200(double p) { if (_Y200 != p) { _Y200 = p; emit pos_Y200Changed(p);} } double pos_Y200() { return _Y200; }
    void setPos_R200(double p) { if (_R200 != p) { _R200 = p; emit pos_R200Changed(p);} } double pos_R200() { return _R200; }
    void setPos_X201(double p) { if (_X201 != p) { _X201 = p; emit pos_X201Changed(p);} } double pos_X201() { return _X201; }
    void setPos_Y201(double p) { if (_Y201 != p) { _Y201 = p; emit pos_Y201Changed(p);} } double pos_Y201() { return _Y201; }
    void setPos_R201(double p) { if (_R201 != p) { _R201 = p; emit pos_R201Changed(p);} } double pos_R201() { return _R201; }
    void setPos_X202(double p) { if (_X202 != p) { _X202 = p; emit pos_X202Changed(p);} } double pos_X202() { return _X202; }
    void setPos_Y202(double p) { if (_Y202 != p) { _Y202 = p; emit pos_Y202Changed(p);} } double pos_Y202() { return _Y202; }
    void setPos_R202(double p) { if (_R202 != p) { _R202 = p; emit pos_R202Changed(p);} } double pos_R202() { return _R202; }
    void setPos_X203(double p) { if (_X203 != p) { _X203 = p; emit pos_X203Changed(p);} } double pos_X203() { return _X203; }
    void setPos_Y203(double p) { if (_Y203 != p) { _Y203 = p; emit pos_Y203Changed(p);} } double pos_Y203() { return _Y203; }
    void setPos_R203(double p) { if (_R203 != p) { _R203 = p; emit pos_R203Changed(p);} } double pos_R203() { return _R203; }
    void setPos_X204(double p) { if (_X204 != p) { _X204 = p; emit pos_X204Changed(p);} } double pos_X204() { return _X204; }
    void setPos_Y204(double p) { if (_Y204 != p) { _Y204 = p; emit pos_Y204Changed(p);} } double pos_Y204() { return _Y204; }
    void setPos_R204(double p) { if (_R204 != p) { _R204 = p; emit pos_R204Changed(p);} } double pos_R204() { return _R204; }
    void setPos_X205(double p) { if (_X205 != p) { _X205 = p; emit pos_X205Changed(p);} } double pos_X205() { return _X205; }
    void setPos_Y205(double p) { if (_Y205 != p) { _Y205 = p; emit pos_Y205Changed(p);} } double pos_Y205() { return _Y205; }
    void setPos_R205(double p) { if (_R205 != p) { _R205 = p; emit pos_R205Changed(p);} } double pos_R205() { return _R205; }
    void setPos_X206(double p) { if (_X206 != p) { _X206 = p; emit pos_X206Changed(p);} } double pos_X206() { return _X206; }
    void setPos_Y206(double p) { if (_Y206 != p) { _Y206 = p; emit pos_Y206Changed(p);} } double pos_Y206() { return _Y206; }
    void setPos_R206(double p) { if (_R206 != p) { _R206 = p; emit pos_R206Changed(p);} } double pos_R206() { return _R206; }
    void setPos_X207(double p) { if (_X207 != p) { _X207 = p; emit pos_X207Changed(p);} } double pos_X207() { return _X207; }
    void setPos_Y207(double p) { if (_Y207 != p) { _Y207 = p; emit pos_Y207Changed(p);} } double pos_Y207() { return _Y207; }
    void setPos_R207(double p) { if (_R207 != p) { _R207 = p; emit pos_R207Changed(p);} } double pos_R207() { return _R207; }
    void setPos_X208(double p) { if (_X208 != p) { _X208 = p; emit pos_X208Changed(p);} } double pos_X208() { return _X208; }
    void setPos_Y208(double p) { if (_Y208 != p) { _Y208 = p; emit pos_Y208Changed(p);} } double pos_Y208() { return _Y208; }
    void setPos_R208(double p) { if (_R208 != p) { _R208 = p; emit pos_R208Changed(p);} } double pos_R208() { return _R208; }
    void setPos_X209(double p) { if (_X209 != p) { _X209 = p; emit pos_X209Changed(p);} } double pos_X209() { return _X209; }
    void setPos_Y209(double p) { if (_Y209 != p) { _Y209 = p; emit pos_Y209Changed(p);} } double pos_Y209() { return _Y209; }
    void setPos_R209(double p) { if (_R209 != p) { _R209 = p; emit pos_R209Changed(p);} } double pos_R209() { return _R209; }
    void setPos_X210(double p) { if (_X210 != p) { _X210 = p; emit pos_X210Changed(p);} } double pos_X210() { return _X210; }
    void setPos_Y210(double p) { if (_Y210 != p) { _Y210 = p; emit pos_Y210Changed(p);} } double pos_Y210() { return _Y210; }
    void setPos_R210(double p) { if (_R210 != p) { _R210 = p; emit pos_R210Changed(p);} } double pos_R210() { return _R210; }
    void setPos_X211(double p) { if (_X211 != p) { _X211 = p; emit pos_X211Changed(p);} } double pos_X211() { return _X211; }
    void setPos_Y211(double p) { if (_Y211 != p) { _Y211 = p; emit pos_Y211Changed(p);} } double pos_Y211() { return _Y211; }
    void setPos_R211(double p) { if (_R211 != p) { _R211 = p; emit pos_R211Changed(p);} } double pos_R211() { return _R211; }
    void setPos_X212(double p) { if (_X212 != p) { _X212 = p; emit pos_X212Changed(p);} } double pos_X212() { return _X212; }
    void setPos_Y212(double p) { if (_Y212 != p) { _Y212 = p; emit pos_Y212Changed(p);} } double pos_Y212() { return _Y212; }
    void setPos_R212(double p) { if (_R212 != p) { _R212 = p; emit pos_R212Changed(p);} } double pos_R212() { return _R212; }
    void setPos_X213(double p) { if (_X213 != p) { _X213 = p; emit pos_X213Changed(p);} } double pos_X213() { return _X213; }
    void setPos_Y213(double p) { if (_Y213 != p) { _Y213 = p; emit pos_Y213Changed(p);} } double pos_Y213() { return _Y213; }
    void setPos_R213(double p) { if (_R213 != p) { _R213 = p; emit pos_R213Changed(p);} } double pos_R213() { return _R213; }
    void setPos_X214(double p) { if (_X214 != p) { _X214 = p; emit pos_X214Changed(p);} } double pos_X214() { return _X214; }
    void setPos_Y214(double p) { if (_Y214 != p) { _Y214 = p; emit pos_Y214Changed(p);} } double pos_Y214() { return _Y214; }
    void setPos_R214(double p) { if (_R214 != p) { _R214 = p; emit pos_R214Changed(p);} } double pos_R214() { return _R214; }
    void setPos_X215(double p) { if (_X215 != p) { _X215 = p; emit pos_X215Changed(p);} } double pos_X215() { return _X215; }
    void setPos_Y215(double p) { if (_Y215 != p) { _Y215 = p; emit pos_Y215Changed(p);} } double pos_Y215() { return _Y215; }
    void setPos_R215(double p) { if (_R215 != p) { _R215 = p; emit pos_R215Changed(p);} } double pos_R215() { return _R215; }
    void setPos_X216(double p) { if (_X216 != p) { _X216 = p; emit pos_X216Changed(p);} } double pos_X216() { return _X216; }
    void setPos_Y216(double p) { if (_Y216 != p) { _Y216 = p; emit pos_Y216Changed(p);} } double pos_Y216() { return _Y216; }
    void setPos_R216(double p) { if (_R216 != p) { _R216 = p; emit pos_R216Changed(p);} } double pos_R216() { return _R216; }
    void setPos_X217(double p) { if (_X217 != p) { _X217 = p; emit pos_X217Changed(p);} } double pos_X217() { return _X217; }
    void setPos_Y217(double p) { if (_Y217 != p) { _Y217 = p; emit pos_Y217Changed(p);} } double pos_Y217() { return _Y217; }
    void setPos_R217(double p) { if (_R217 != p) { _R217 = p; emit pos_R217Changed(p);} } double pos_R217() { return _R217; }
    void setPos_X218(double p) { if (_X218 != p) { _X218 = p; emit pos_X218Changed(p);} } double pos_X218() { return _X218; }
    void setPos_Y218(double p) { if (_Y218 != p) { _Y218 = p; emit pos_Y218Changed(p);} } double pos_Y218() { return _Y218; }
    void setPos_R218(double p) { if (_R218 != p) { _R218 = p; emit pos_R218Changed(p);} } double pos_R218() { return _R218; }
    void setPos_X219(double p) { if (_X219 != p) { _X219 = p; emit pos_X219Changed(p);} } double pos_X219() { return _X219; }
    void setPos_Y219(double p) { if (_Y219 != p) { _Y219 = p; emit pos_Y219Changed(p);} } double pos_Y219() { return _Y219; }
    void setPos_R219(double p) { if (_R219 != p) { _R219 = p; emit pos_R219Changed(p);} } double pos_R219() { return _R219; }
    void setPos_X220(double p) { if (_X220 != p) { _X220 = p; emit pos_X220Changed(p);} } double pos_X220() { return _X220; }
    void setPos_Y220(double p) { if (_Y220 != p) { _Y220 = p; emit pos_Y220Changed(p);} } double pos_Y220() { return _Y220; }
    void setPos_R220(double p) { if (_R220 != p) { _R220 = p; emit pos_R220Changed(p);} } double pos_R220() { return _R220; }
    void setPos_X221(double p) { if (_X221 != p) { _X221 = p; emit pos_X221Changed(p);} } double pos_X221() { return _X221; }
    void setPos_Y221(double p) { if (_Y221 != p) { _Y221 = p; emit pos_Y221Changed(p);} } double pos_Y221() { return _Y221; }
    void setPos_R221(double p) { if (_R221 != p) { _R221 = p; emit pos_R221Changed(p);} } double pos_R221() { return _R221; }
    void setPos_X222(double p) { if (_X222 != p) { _X222 = p; emit pos_X222Changed(p);} } double pos_X222() { return _X222; }
    void setPos_Y222(double p) { if (_Y222 != p) { _Y222 = p; emit pos_Y222Changed(p);} } double pos_Y222() { return _Y222; }
    void setPos_R222(double p) { if (_R222 != p) { _R222 = p; emit pos_R222Changed(p);} } double pos_R222() { return _R222; }
    void setPos_X223(double p) { if (_X223 != p) { _X223 = p; emit pos_X223Changed(p);} } double pos_X223() { return _X223; }
    void setPos_Y223(double p) { if (_Y223 != p) { _Y223 = p; emit pos_Y223Changed(p);} } double pos_Y223() { return _Y223; }
    void setPos_R223(double p) { if (_R223 != p) { _R223 = p; emit pos_R223Changed(p);} } double pos_R223() { return _R223; }
    void setPos_X224(double p) { if (_X224 != p) { _X224 = p; emit pos_X224Changed(p);} } double pos_X224() { return _X224; }
    void setPos_Y224(double p) { if (_Y224 != p) { _Y224 = p; emit pos_Y224Changed(p);} } double pos_Y224() { return _Y224; }
    void setPos_R224(double p) { if (_R224 != p) { _R224 = p; emit pos_R224Changed(p);} } double pos_R224() { return _R224; }
    void setPos_X225(double p) { if (_X225 != p) { _X225 = p; emit pos_X225Changed(p);} } double pos_X225() { return _X225; }
    void setPos_Y225(double p) { if (_Y225 != p) { _Y225 = p; emit pos_Y225Changed(p);} } double pos_Y225() { return _Y225; }
    void setPos_R225(double p) { if (_R225 != p) { _R225 = p; emit pos_R225Changed(p);} } double pos_R225() { return _R225; }
    void setPos_X226(double p) { if (_X226 != p) { _X226 = p; emit pos_X226Changed(p);} } double pos_X226() { return _X226; }
    void setPos_Y226(double p) { if (_Y226 != p) { _Y226 = p; emit pos_Y226Changed(p);} } double pos_Y226() { return _Y226; }
    void setPos_R226(double p) { if (_R226 != p) { _R226 = p; emit pos_R226Changed(p);} } double pos_R226() { return _R226; }
    void setPos_X227(double p) { if (_X227 != p) { _X227 = p; emit pos_X227Changed(p);} } double pos_X227() { return _X227; }
    void setPos_Y227(double p) { if (_Y227 != p) { _Y227 = p; emit pos_Y227Changed(p);} } double pos_Y227() { return _Y227; }
    void setPos_R227(double p) { if (_R227 != p) { _R227 = p; emit pos_R227Changed(p);} } double pos_R227() { return _R227; }
    void setPos_X228(double p) { if (_X228 != p) { _X228 = p; emit pos_X228Changed(p);} } double pos_X228() { return _X228; }
    void setPos_Y228(double p) { if (_Y228 != p) { _Y228 = p; emit pos_Y228Changed(p);} } double pos_Y228() { return _Y228; }
    void setPos_R228(double p) { if (_R228 != p) { _R228 = p; emit pos_R228Changed(p);} } double pos_R228() { return _R228; }
    void setPos_X229(double p) { if (_X229 != p) { _X229 = p; emit pos_X229Changed(p);} } double pos_X229() { return _X229; }
    void setPos_Y229(double p) { if (_Y229 != p) { _Y229 = p; emit pos_Y229Changed(p);} } double pos_Y229() { return _Y229; }
    void setPos_R229(double p) { if (_R229 != p) { _R229 = p; emit pos_R229Changed(p);} } double pos_R229() { return _R229; }
    void setPos_X230(double p) { if (_X230 != p) { _X230 = p; emit pos_X230Changed(p);} } double pos_X230() { return _X230; }
    void setPos_Y230(double p) { if (_Y230 != p) { _Y230 = p; emit pos_Y230Changed(p);} } double pos_Y230() { return _Y230; }
    void setPos_R230(double p) { if (_R230 != p) { _R230 = p; emit pos_R230Changed(p);} } double pos_R230() { return _R230; }
    void setPos_X231(double p) { if (_X231 != p) { _X231 = p; emit pos_X231Changed(p);} } double pos_X231() { return _X231; }
    void setPos_Y231(double p) { if (_Y231 != p) { _Y231 = p; emit pos_Y231Changed(p);} } double pos_Y231() { return _Y231; }
    void setPos_R231(double p) { if (_R231 != p) { _R231 = p; emit pos_R231Changed(p);} } double pos_R231() { return _R231; }
    void setPos_X232(double p) { if (_X232 != p) { _X232 = p; emit pos_X232Changed(p);} } double pos_X232() { return _X232; }
    void setPos_Y232(double p) { if (_Y232 != p) { _Y232 = p; emit pos_Y232Changed(p);} } double pos_Y232() { return _Y232; }
    void setPos_R232(double p) { if (_R232 != p) { _R232 = p; emit pos_R232Changed(p);} } double pos_R232() { return _R232; }
    void setPos_X233(double p) { if (_X233 != p) { _X233 = p; emit pos_X233Changed(p);} } double pos_X233() { return _X233; }
    void setPos_Y233(double p) { if (_Y233 != p) { _Y233 = p; emit pos_Y233Changed(p);} } double pos_Y233() { return _Y233; }
    void setPos_R233(double p) { if (_R233 != p) { _R233 = p; emit pos_R233Changed(p);} } double pos_R233() { return _R233; }
    void setPos_X234(double p) { if (_X234 != p) { _X234 = p; emit pos_X234Changed(p);} } double pos_X234() { return _X234; }
    void setPos_Y234(double p) { if (_Y234 != p) { _Y234 = p; emit pos_Y234Changed(p);} } double pos_Y234() { return _Y234; }
    void setPos_R234(double p) { if (_R234 != p) { _R234 = p; emit pos_R234Changed(p);} } double pos_R234() { return _R234; }
    void setPos_X235(double p) { if (_X235 != p) { _X235 = p; emit pos_X235Changed(p);} } double pos_X235() { return _X235; }
    void setPos_Y235(double p) { if (_Y235 != p) { _Y235 = p; emit pos_Y235Changed(p);} } double pos_Y235() { return _Y235; }
    void setPos_R235(double p) { if (_R235 != p) { _R235 = p; emit pos_R235Changed(p);} } double pos_R235() { return _R235; }
    void setPos_X236(double p) { if (_X236 != p) { _X236 = p; emit pos_X236Changed(p);} } double pos_X236() { return _X236; }
    void setPos_Y236(double p) { if (_Y236 != p) { _Y236 = p; emit pos_Y236Changed(p);} } double pos_Y236() { return _Y236; }
    void setPos_R236(double p) { if (_R236 != p) { _R236 = p; emit pos_R236Changed(p);} } double pos_R236() { return _R236; }
    void setPos_X237(double p) { if (_X237 != p) { _X237 = p; emit pos_X237Changed(p);} } double pos_X237() { return _X237; }
    void setPos_Y237(double p) { if (_Y237 != p) { _Y237 = p; emit pos_Y237Changed(p);} } double pos_Y237() { return _Y237; }
    void setPos_R237(double p) { if (_R237 != p) { _R237 = p; emit pos_R237Changed(p);} } double pos_R237() { return _R237; }
    void setPos_X238(double p) { if (_X238 != p) { _X238 = p; emit pos_X238Changed(p);} } double pos_X238() { return _X238; }
    void setPos_Y238(double p) { if (_Y238 != p) { _Y238 = p; emit pos_Y238Changed(p);} } double pos_Y238() { return _Y238; }
    void setPos_R238(double p) { if (_R238 != p) { _R238 = p; emit pos_R238Changed(p);} } double pos_R238() { return _R238; }
    void setPos_X239(double p) { if (_X239 != p) { _X239 = p; emit pos_X239Changed(p);} } double pos_X239() { return _X239; }
    void setPos_Y239(double p) { if (_Y239 != p) { _Y239 = p; emit pos_Y239Changed(p);} } double pos_Y239() { return _Y239; }
    void setPos_R239(double p) { if (_R239 != p) { _R239 = p; emit pos_R239Changed(p);} } double pos_R239() { return _R239; }
    void setPos_X240(double p) { if (_X240 != p) { _X240 = p; emit pos_X240Changed(p);} } double pos_X240() { return _X240; }
    void setPos_Y240(double p) { if (_Y240 != p) { _Y240 = p; emit pos_Y240Changed(p);} } double pos_Y240() { return _Y240; }
    void setPos_R240(double p) { if (_R240 != p) { _R240 = p; emit pos_R240Changed(p);} } double pos_R240() { return _R240; }
    void setPos_X241(double p) { if (_X241 != p) { _X241 = p; emit pos_X241Changed(p);} } double pos_X241() { return _X241; }
    void setPos_Y241(double p) { if (_Y241 != p) { _Y241 = p; emit pos_Y241Changed(p);} } double pos_Y241() { return _Y241; }
    void setPos_R241(double p) { if (_R241 != p) { _R241 = p; emit pos_R241Changed(p);} } double pos_R241() { return _R241; }
    void setPos_X242(double p) { if (_X242 != p) { _X242 = p; emit pos_X242Changed(p);} } double pos_X242() { return _X242; }
    void setPos_Y242(double p) { if (_Y242 != p) { _Y242 = p; emit pos_Y242Changed(p);} } double pos_Y242() { return _Y242; }
    void setPos_R242(double p) { if (_R242 != p) { _R242 = p; emit pos_R242Changed(p);} } double pos_R242() { return _R242; }
    void setPos_X243(double p) { if (_X243 != p) { _X243 = p; emit pos_X243Changed(p);} } double pos_X243() { return _X243; }
    void setPos_Y243(double p) { if (_Y243 != p) { _Y243 = p; emit pos_Y243Changed(p);} } double pos_Y243() { return _Y243; }
    void setPos_R243(double p) { if (_R243 != p) { _R243 = p; emit pos_R243Changed(p);} } double pos_R243() { return _R243; }
    void setPos_X244(double p) { if (_X244 != p) { _X244 = p; emit pos_X244Changed(p);} } double pos_X244() { return _X244; }
    void setPos_Y244(double p) { if (_Y244 != p) { _Y244 = p; emit pos_Y244Changed(p);} } double pos_Y244() { return _Y244; }
    void setPos_R244(double p) { if (_R244 != p) { _R244 = p; emit pos_R244Changed(p);} } double pos_R244() { return _R244; }
    void setPos_X245(double p) { if (_X245 != p) { _X245 = p; emit pos_X245Changed(p);} } double pos_X245() { return _X245; }
    void setPos_Y245(double p) { if (_Y245 != p) { _Y245 = p; emit pos_Y245Changed(p);} } double pos_Y245() { return _Y245; }
    void setPos_R245(double p) { if (_R245 != p) { _R245 = p; emit pos_R245Changed(p);} } double pos_R245() { return _R245; }
    void setPos_X246(double p) { if (_X246 != p) { _X246 = p; emit pos_X246Changed(p);} } double pos_X246() { return _X246; }
    void setPos_Y246(double p) { if (_Y246 != p) { _Y246 = p; emit pos_Y246Changed(p);} } double pos_Y246() { return _Y246; }
    void setPos_R246(double p) { if (_R246 != p) { _R246 = p; emit pos_R246Changed(p);} } double pos_R246() { return _R246; }
    void setPos_X247(double p) { if (_X247 != p) { _X247 = p; emit pos_X247Changed(p);} } double pos_X247() { return _X247; }
    void setPos_Y247(double p) { if (_Y247 != p) { _Y247 = p; emit pos_Y247Changed(p);} } double pos_Y247() { return _Y247; }
    void setPos_R247(double p) { if (_R247 != p) { _R247 = p; emit pos_R247Changed(p);} } double pos_R247() { return _R247; }
    void setPos_X248(double p) { if (_X248 != p) { _X248 = p; emit pos_X248Changed(p);} } double pos_X248() { return _X248; }
    void setPos_Y248(double p) { if (_Y248 != p) { _Y248 = p; emit pos_Y248Changed(p);} } double pos_Y248() { return _Y248; }
    void setPos_R248(double p) { if (_R248 != p) { _R248 = p; emit pos_R248Changed(p);} } double pos_R248() { return _R248; }
    void setPos_X249(double p) { if (_X249 != p) { _X249 = p; emit pos_X249Changed(p);} } double pos_X249() { return _X249; }
    void setPos_Y249(double p) { if (_Y249 != p) { _Y249 = p; emit pos_Y249Changed(p);} } double pos_Y249() { return _Y249; }
    void setPos_R249(double p) { if (_R249 != p) { _R249 = p; emit pos_R249Changed(p);} } double pos_R249() { return _R249; }
    void setPos_X250(double p) { if (_X250 != p) { _X250 = p; emit pos_X250Changed(p);} } double pos_X250() { return _X250; }
    void setPos_Y250(double p) { if (_Y250 != p) { _Y250 = p; emit pos_Y250Changed(p);} } double pos_Y250() { return _Y250; }
    void setPos_R250(double p) { if (_R250 != p) { _R250 = p; emit pos_R250Changed(p);} } double pos_R250() { return _R250; }
    void setPos_X251(double p) { if (_X251 != p) { _X251 = p; emit pos_X251Changed(p);} } double pos_X251() { return _X251; }
    void setPos_Y251(double p) { if (_Y251 != p) { _Y251 = p; emit pos_Y251Changed(p);} } double pos_Y251() { return _Y251; }
    void setPos_R251(double p) { if (_R251 != p) { _R251 = p; emit pos_R251Changed(p);} } double pos_R251() { return _R251; }
    void setPos_X252(double p) { if (_X252 != p) { _X252 = p; emit pos_X252Changed(p);} } double pos_X252() { return _X252; }
    void setPos_Y252(double p) { if (_Y252 != p) { _Y252 = p; emit pos_Y252Changed(p);} } double pos_Y252() { return _Y252; }
    void setPos_R252(double p) { if (_R252 != p) { _R252 = p; emit pos_R252Changed(p);} } double pos_R252() { return _R252; }
    void setPos_X253(double p) { if (_X253 != p) { _X253 = p; emit pos_X253Changed(p);} } double pos_X253() { return _X253; }
    void setPos_Y253(double p) { if (_Y253 != p) { _Y253 = p; emit pos_Y253Changed(p);} } double pos_Y253() { return _Y253; }
    void setPos_R253(double p) { if (_R253 != p) { _R253 = p; emit pos_R253Changed(p);} } double pos_R253() { return _R253; }
    void setPos_X254(double p) { if (_X254 != p) { _X254 = p; emit pos_X254Changed(p);} } double pos_X254() { return _X254; }
    void setPos_Y254(double p) { if (_Y254 != p) { _Y254 = p; emit pos_Y254Changed(p);} } double pos_Y254() { return _Y254; }
    void setPos_R254(double p) { if (_R254 != p) { _R254 = p; emit pos_R254Changed(p);} } double pos_R254() { return _R254; }
    void setPos_X255(double p) { if (_X255 != p) { _X255 = p; emit pos_X255Changed(p);} } double pos_X255() { return _X255; }
    void setPos_Y255(double p) { if (_Y255 != p) { _Y255 = p; emit pos_Y255Changed(p);} } double pos_Y255() { return _Y255; }
    void setPos_R255(double p) { if (_R255 != p) { _R255 = p; emit pos_R255Changed(p);} } double pos_R255() { return _R255; }
    void setPos_X256(double p) { if (_X256 != p) { _X256 = p; emit pos_X256Changed(p);} } double pos_X256() { return _X256; }
    void setPos_Y256(double p) { if (_Y256 != p) { _Y256 = p; emit pos_Y256Changed(p);} } double pos_Y256() { return _Y256; }
    void setPos_R256(double p) { if (_R256 != p) { _R256 = p; emit pos_R256Changed(p);} } double pos_R256() { return _R256; }
    void setPos_X257(double p) { if (_X257 != p) { _X257 = p; emit pos_X257Changed(p);} } double pos_X257() { return _X257; }
    void setPos_Y257(double p) { if (_Y257 != p) { _Y257 = p; emit pos_Y257Changed(p);} } double pos_Y257() { return _Y257; }
    void setPos_R257(double p) { if (_R257 != p) { _R257 = p; emit pos_R257Changed(p);} } double pos_R257() { return _R257; }
    void setPos_X258(double p) { if (_X258 != p) { _X258 = p; emit pos_X258Changed(p);} } double pos_X258() { return _X258; }
    void setPos_Y258(double p) { if (_Y258 != p) { _Y258 = p; emit pos_Y258Changed(p);} } double pos_Y258() { return _Y258; }
    void setPos_R258(double p) { if (_R258 != p) { _R258 = p; emit pos_R258Changed(p);} } double pos_R258() { return _R258; }
    void setPos_X259(double p) { if (_X259 != p) { _X259 = p; emit pos_X259Changed(p);} } double pos_X259() { return _X259; }
    void setPos_Y259(double p) { if (_Y259 != p) { _Y259 = p; emit pos_Y259Changed(p);} } double pos_Y259() { return _Y259; }
    void setPos_R259(double p) { if (_R259 != p) { _R259 = p; emit pos_R259Changed(p);} } double pos_R259() { return _R259; }
    void setPos_X260(double p) { if (_X260 != p) { _X260 = p; emit pos_X260Changed(p);} } double pos_X260() { return _X260; }
    void setPos_Y260(double p) { if (_Y260 != p) { _Y260 = p; emit pos_Y260Changed(p);} } double pos_Y260() { return _Y260; }
    void setPos_R260(double p) { if (_R260 != p) { _R260 = p; emit pos_R260Changed(p);} } double pos_R260() { return _R260; }
    void setPos_X261(double p) { if (_X261 != p) { _X261 = p; emit pos_X261Changed(p);} } double pos_X261() { return _X261; }
    void setPos_Y261(double p) { if (_Y261 != p) { _Y261 = p; emit pos_Y261Changed(p);} } double pos_Y261() { return _Y261; }
    void setPos_R261(double p) { if (_R261 != p) { _R261 = p; emit pos_R261Changed(p);} } double pos_R261() { return _R261; }
    void setPos_X262(double p) { if (_X262 != p) { _X262 = p; emit pos_X262Changed(p);} } double pos_X262() { return _X262; }
    void setPos_Y262(double p) { if (_Y262 != p) { _Y262 = p; emit pos_Y262Changed(p);} } double pos_Y262() { return _Y262; }
    void setPos_R262(double p) { if (_R262 != p) { _R262 = p; emit pos_R262Changed(p);} } double pos_R262() { return _R262; }
    void setPos_X263(double p) { if (_X263 != p) { _X263 = p; emit pos_X263Changed(p);} } double pos_X263() { return _X263; }
    void setPos_Y263(double p) { if (_Y263 != p) { _Y263 = p; emit pos_Y263Changed(p);} } double pos_Y263() { return _Y263; }
    void setPos_R263(double p) { if (_R263 != p) { _R263 = p; emit pos_R263Changed(p);} } double pos_R263() { return _R263; }
    void setPos_X264(double p) { if (_X264 != p) { _X264 = p; emit pos_X264Changed(p);} } double pos_X264() { return _X264; }
    void setPos_Y264(double p) { if (_Y264 != p) { _Y264 = p; emit pos_Y264Changed(p);} } double pos_Y264() { return _Y264; }
    void setPos_R264(double p) { if (_R264 != p) { _R264 = p; emit pos_R264Changed(p);} } double pos_R264() { return _R264; }
    void setPos_X265(double p) { if (_X265 != p) { _X265 = p; emit pos_X265Changed(p);} } double pos_X265() { return _X265; }
    void setPos_Y265(double p) { if (_Y265 != p) { _Y265 = p; emit pos_Y265Changed(p);} } double pos_Y265() { return _Y265; }
    void setPos_R265(double p) { if (_R265 != p) { _R265 = p; emit pos_R265Changed(p);} } double pos_R265() { return _R265; }
    void setPos_X266(double p) { if (_X266 != p) { _X266 = p; emit pos_X266Changed(p);} } double pos_X266() { return _X266; }
    void setPos_Y266(double p) { if (_Y266 != p) { _Y266 = p; emit pos_Y266Changed(p);} } double pos_Y266() { return _Y266; }
    void setPos_R266(double p) { if (_R266 != p) { _R266 = p; emit pos_R266Changed(p);} } double pos_R266() { return _R266; }
    void setPos_X267(double p) { if (_X267 != p) { _X267 = p; emit pos_X267Changed(p);} } double pos_X267() { return _X267; }
    void setPos_Y267(double p) { if (_Y267 != p) { _Y267 = p; emit pos_Y267Changed(p);} } double pos_Y267() { return _Y267; }
    void setPos_R267(double p) { if (_R267 != p) { _R267 = p; emit pos_R267Changed(p);} } double pos_R267() { return _R267; }
    void setPos_X268(double p) { if (_X268 != p) { _X268 = p; emit pos_X268Changed(p);} } double pos_X268() { return _X268; }
    void setPos_Y268(double p) { if (_Y268 != p) { _Y268 = p; emit pos_Y268Changed(p);} } double pos_Y268() { return _Y268; }
    void setPos_R268(double p) { if (_R268 != p) { _R268 = p; emit pos_R268Changed(p);} } double pos_R268() { return _R268; }
    void setPos_X269(double p) { if (_X269 != p) { _X269 = p; emit pos_X269Changed(p);} } double pos_X269() { return _X269; }
    void setPos_Y269(double p) { if (_Y269 != p) { _Y269 = p; emit pos_Y269Changed(p);} } double pos_Y269() { return _Y269; }
    void setPos_R269(double p) { if (_R269 != p) { _R269 = p; emit pos_R269Changed(p);} } double pos_R269() { return _R269; }
    void setPos_X270(double p) { if (_X270 != p) { _X270 = p; emit pos_X270Changed(p);} } double pos_X270() { return _X270; }
    void setPos_Y270(double p) { if (_Y270 != p) { _Y270 = p; emit pos_Y270Changed(p);} } double pos_Y270() { return _Y270; }
    void setPos_R270(double p) { if (_R270 != p) { _R270 = p; emit pos_R270Changed(p);} } double pos_R270() { return _R270; }
    void setPos_X271(double p) { if (_X271 != p) { _X271 = p; emit pos_X271Changed(p);} } double pos_X271() { return _X271; }
    void setPos_Y271(double p) { if (_Y271 != p) { _Y271 = p; emit pos_Y271Changed(p);} } double pos_Y271() { return _Y271; }
    void setPos_R271(double p) { if (_R271 != p) { _R271 = p; emit pos_R271Changed(p);} } double pos_R271() { return _R271; }
    void setPos_X272(double p) { if (_X272 != p) { _X272 = p; emit pos_X272Changed(p);} } double pos_X272() { return _X272; }
    void setPos_Y272(double p) { if (_Y272 != p) { _Y272 = p; emit pos_Y272Changed(p);} } double pos_Y272() { return _Y272; }
    void setPos_R272(double p) { if (_R272 != p) { _R272 = p; emit pos_R272Changed(p);} } double pos_R272() { return _R272; }
    void setPos_X273(double p) { if (_X273 != p) { _X273 = p; emit pos_X273Changed(p);} } double pos_X273() { return _X273; }
    void setPos_Y273(double p) { if (_Y273 != p) { _Y273 = p; emit pos_Y273Changed(p);} } double pos_Y273() { return _Y273; }
    void setPos_R273(double p) { if (_R273 != p) { _R273 = p; emit pos_R273Changed(p);} } double pos_R273() { return _R273; }
    void setPos_X274(double p) { if (_X274 != p) { _X274 = p; emit pos_X274Changed(p);} } double pos_X274() { return _X274; }
    void setPos_Y274(double p) { if (_Y274 != p) { _Y274 = p; emit pos_Y274Changed(p);} } double pos_Y274() { return _Y274; }
    void setPos_R274(double p) { if (_R274 != p) { _R274 = p; emit pos_R274Changed(p);} } double pos_R274() { return _R274; }
    void setPos_X275(double p) { if (_X275 != p) { _X275 = p; emit pos_X275Changed(p);} } double pos_X275() { return _X275; }
    void setPos_Y275(double p) { if (_Y275 != p) { _Y275 = p; emit pos_Y275Changed(p);} } double pos_Y275() { return _Y275; }
    void setPos_R275(double p) { if (_R275 != p) { _R275 = p; emit pos_R275Changed(p);} } double pos_R275() { return _R275; }
    void setPos_X276(double p) { if (_X276 != p) { _X276 = p; emit pos_X276Changed(p);} } double pos_X276() { return _X276; }
    void setPos_Y276(double p) { if (_Y276 != p) { _Y276 = p; emit pos_Y276Changed(p);} } double pos_Y276() { return _Y276; }
    void setPos_R276(double p) { if (_R276 != p) { _R276 = p; emit pos_R276Changed(p);} } double pos_R276() { return _R276; }
    void setPos_X277(double p) { if (_X277 != p) { _X277 = p; emit pos_X277Changed(p);} } double pos_X277() { return _X277; }
    void setPos_Y277(double p) { if (_Y277 != p) { _Y277 = p; emit pos_Y277Changed(p);} } double pos_Y277() { return _Y277; }
    void setPos_R277(double p) { if (_R277 != p) { _R277 = p; emit pos_R277Changed(p);} } double pos_R277() { return _R277; }
    void setPos_X278(double p) { if (_X278 != p) { _X278 = p; emit pos_X278Changed(p);} } double pos_X278() { return _X278; }
    void setPos_Y278(double p) { if (_Y278 != p) { _Y278 = p; emit pos_Y278Changed(p);} } double pos_Y278() { return _Y278; }
    void setPos_R278(double p) { if (_R278 != p) { _R278 = p; emit pos_R278Changed(p);} } double pos_R278() { return _R278; }
    void setPos_X279(double p) { if (_X279 != p) { _X279 = p; emit pos_X279Changed(p);} } double pos_X279() { return _X279; }
    void setPos_Y279(double p) { if (_Y279 != p) { _Y279 = p; emit pos_Y279Changed(p);} } double pos_Y279() { return _Y279; }
    void setPos_R279(double p) { if (_R279 != p) { _R279 = p; emit pos_R279Changed(p);} } double pos_R279() { return _R279; }
    void setPos_X280(double p) { if (_X280 != p) { _X280 = p; emit pos_X280Changed(p);} } double pos_X280() { return _X280; }
    void setPos_Y280(double p) { if (_Y280 != p) { _Y280 = p; emit pos_Y280Changed(p);} } double pos_Y280() { return _Y280; }
    void setPos_R280(double p) { if (_R280 != p) { _R280 = p; emit pos_R280Changed(p);} } double pos_R280() { return _R280; }
    void setPos_X281(double p) { if (_X281 != p) { _X281 = p; emit pos_X281Changed(p);} } double pos_X281() { return _X281; }
    void setPos_Y281(double p) { if (_Y281 != p) { _Y281 = p; emit pos_Y281Changed(p);} } double pos_Y281() { return _Y281; }
    void setPos_R281(double p) { if (_R281 != p) { _R281 = p; emit pos_R281Changed(p);} } double pos_R281() { return _R281; }
    void setPos_X282(double p) { if (_X282 != p) { _X282 = p; emit pos_X282Changed(p);} } double pos_X282() { return _X282; }
    void setPos_Y282(double p) { if (_Y282 != p) { _Y282 = p; emit pos_Y282Changed(p);} } double pos_Y282() { return _Y282; }
    void setPos_R282(double p) { if (_R282 != p) { _R282 = p; emit pos_R282Changed(p);} } double pos_R282() { return _R282; }
    void setPos_X283(double p) { if (_X283 != p) { _X283 = p; emit pos_X283Changed(p);} } double pos_X283() { return _X283; }
    void setPos_Y283(double p) { if (_Y283 != p) { _Y283 = p; emit pos_Y283Changed(p);} } double pos_Y283() { return _Y283; }
    void setPos_R283(double p) { if (_R283 != p) { _R283 = p; emit pos_R283Changed(p);} } double pos_R283() { return _R283; }
    void setPos_X284(double p) { if (_X284 != p) { _X284 = p; emit pos_X284Changed(p);} } double pos_X284() { return _X284; }
    void setPos_Y284(double p) { if (_Y284 != p) { _Y284 = p; emit pos_Y284Changed(p);} } double pos_Y284() { return _Y284; }
    void setPos_R284(double p) { if (_R284 != p) { _R284 = p; emit pos_R284Changed(p);} } double pos_R284() { return _R284; }
    void setPos_X285(double p) { if (_X285 != p) { _X285 = p; emit pos_X285Changed(p);} } double pos_X285() { return _X285; }
    void setPos_Y285(double p) { if (_Y285 != p) { _Y285 = p; emit pos_Y285Changed(p);} } double pos_Y285() { return _Y285; }
    void setPos_R285(double p) { if (_R285 != p) { _R285 = p; emit pos_R285Changed(p);} } double pos_R285() { return _R285; }
    void setPos_X286(double p) { if (_X286 != p) { _X286 = p; emit pos_X286Changed(p);} } double pos_X286() { return _X286; }
    void setPos_Y286(double p) { if (_Y286 != p) { _Y286 = p; emit pos_Y286Changed(p);} } double pos_Y286() { return _Y286; }
    void setPos_R286(double p) { if (_R286 != p) { _R286 = p; emit pos_R286Changed(p);} } double pos_R286() { return _R286; }
    void setPos_X287(double p) { if (_X287 != p) { _X287 = p; emit pos_X287Changed(p);} } double pos_X287() { return _X287; }
    void setPos_Y287(double p) { if (_Y287 != p) { _Y287 = p; emit pos_Y287Changed(p);} } double pos_Y287() { return _Y287; }
    void setPos_R287(double p) { if (_R287 != p) { _R287 = p; emit pos_R287Changed(p);} } double pos_R287() { return _R287; }
    void setPos_X288(double p) { if (_X288 != p) { _X288 = p; emit pos_X288Changed(p);} } double pos_X288() { return _X288; }
    void setPos_Y288(double p) { if (_Y288 != p) { _Y288 = p; emit pos_Y288Changed(p);} } double pos_Y288() { return _Y288; }
    void setPos_R288(double p) { if (_R288 != p) { _R288 = p; emit pos_R288Changed(p);} } double pos_R288() { return _R288; }
    void setPos_X289(double p) { if (_X289 != p) { _X289 = p; emit pos_X289Changed(p);} } double pos_X289() { return _X289; }
    void setPos_Y289(double p) { if (_Y289 != p) { _Y289 = p; emit pos_Y289Changed(p);} } double pos_Y289() { return _Y289; }
    void setPos_R289(double p) { if (_R289 != p) { _R289 = p; emit pos_R289Changed(p);} } double pos_R289() { return _R289; }
    void setPos_X290(double p) { if (_X290 != p) { _X290 = p; emit pos_X290Changed(p);} } double pos_X290() { return _X290; }
    void setPos_Y290(double p) { if (_Y290 != p) { _Y290 = p; emit pos_Y290Changed(p);} } double pos_Y290() { return _Y290; }
    void setPos_R290(double p) { if (_R290 != p) { _R290 = p; emit pos_R290Changed(p);} } double pos_R290() { return _R290; }
    void setPos_X291(double p) { if (_X291 != p) { _X291 = p; emit pos_X291Changed(p);} } double pos_X291() { return _X291; }
    void setPos_Y291(double p) { if (_Y291 != p) { _Y291 = p; emit pos_Y291Changed(p);} } double pos_Y291() { return _Y291; }
    void setPos_R291(double p) { if (_R291 != p) { _R291 = p; emit pos_R291Changed(p);} } double pos_R291() { return _R291; }
    void setPos_X292(double p) { if (_X292 != p) { _X292 = p; emit pos_X292Changed(p);} } double pos_X292() { return _X292; }
    void setPos_Y292(double p) { if (_Y292 != p) { _Y292 = p; emit pos_Y292Changed(p);} } double pos_Y292() { return _Y292; }
    void setPos_R292(double p) { if (_R292 != p) { _R292 = p; emit pos_R292Changed(p);} } double pos_R292() { return _R292; }
    void setPos_X293(double p) { if (_X293 != p) { _X293 = p; emit pos_X293Changed(p);} } double pos_X293() { return _X293; }
    void setPos_Y293(double p) { if (_Y293 != p) { _Y293 = p; emit pos_Y293Changed(p);} } double pos_Y293() { return _Y293; }
    void setPos_R293(double p) { if (_R293 != p) { _R293 = p; emit pos_R293Changed(p);} } double pos_R293() { return _R293; }
    void setPos_X294(double p) { if (_X294 != p) { _X294 = p; emit pos_X294Changed(p);} } double pos_X294() { return _X294; }
    void setPos_Y294(double p) { if (_Y294 != p) { _Y294 = p; emit pos_Y294Changed(p);} } double pos_Y294() { return _Y294; }
    void setPos_R294(double p) { if (_R294 != p) { _R294 = p; emit pos_R294Changed(p);} } double pos_R294() { return _R294; }
    void setPos_X295(double p) { if (_X295 != p) { _X295 = p; emit pos_X295Changed(p);} } double pos_X295() { return _X295; }
    void setPos_Y295(double p) { if (_Y295 != p) { _Y295 = p; emit pos_Y295Changed(p);} } double pos_Y295() { return _Y295; }
    void setPos_R295(double p) { if (_R295 != p) { _R295 = p; emit pos_R295Changed(p);} } double pos_R295() { return _R295; }
    void setPos_X296(double p) { if (_X296 != p) { _X296 = p; emit pos_X296Changed(p);} } double pos_X296() { return _X296; }
    void setPos_Y296(double p) { if (_Y296 != p) { _Y296 = p; emit pos_Y296Changed(p);} } double pos_Y296() { return _Y296; }
    void setPos_R296(double p) { if (_R296 != p) { _R296 = p; emit pos_R296Changed(p);} } double pos_R296() { return _R296; }
    void setPos_X297(double p) { if (_X297 != p) { _X297 = p; emit pos_X297Changed(p);} } double pos_X297() { return _X297; }
    void setPos_Y297(double p) { if (_Y297 != p) { _Y297 = p; emit pos_Y297Changed(p);} } double pos_Y297() { return _Y297; }
    void setPos_R297(double p) { if (_R297 != p) { _R297 = p; emit pos_R297Changed(p);} } double pos_R297() { return _R297; }
    void setPos_X298(double p) { if (_X298 != p) { _X298 = p; emit pos_X298Changed(p);} } double pos_X298() { return _X298; }
    void setPos_Y298(double p) { if (_Y298 != p) { _Y298 = p; emit pos_Y298Changed(p);} } double pos_Y298() { return _Y298; }
    void setPos_R298(double p) { if (_R298 != p) { _R298 = p; emit pos_R298Changed(p);} } double pos_R298() { return _R298; }
    void setPos_X299(double p) { if (_X299 != p) { _X299 = p; emit pos_X299Changed(p);} } double pos_X299() { return _X299; }
    void setPos_Y299(double p) { if (_Y299 != p) { _Y299 = p; emit pos_Y299Changed(p);} } double pos_Y299() { return _Y299; }
    void setPos_R299(double p) { if (_R299 != p) { _R299 = p; emit pos_R299Changed(p);} } double pos_R299() { return _R299; }
    void setPos_X300(double p) { if (_X300 != p) { _X300 = p; emit pos_X300Changed(p);} } double pos_X300() { return _X300; }
    void setPos_Y300(double p) { if (_Y300 != p) { _Y300 = p; emit pos_Y300Changed(p);} } double pos_Y300() { return _Y300; }
    void setPos_R300(double p) { if (_R300 != p) { _R300 = p; emit pos_R300Changed(p);} } double pos_R300() { return _R300; }
    void setPos_X301(double p) { if (_X301 != p) { _X301 = p; emit pos_X301Changed(p);} } double pos_X301() { return _X301; }
    void setPos_Y301(double p) { if (_Y301 != p) { _Y301 = p; emit pos_Y301Changed(p);} } double pos_Y301() { return _Y301; }
    void setPos_R301(double p) { if (_R301 != p) { _R301 = p; emit pos_R301Changed(p);} } double pos_R301() { return _R301; }
    void setPos_X302(double p) { if (_X302 != p) { _X302 = p; emit pos_X302Changed(p);} } double pos_X302() { return _X302; }
    void setPos_Y302(double p) { if (_Y302 != p) { _Y302 = p; emit pos_Y302Changed(p);} } double pos_Y302() { return _Y302; }
    void setPos_R302(double p) { if (_R302 != p) { _R302 = p; emit pos_R302Changed(p);} } double pos_R302() { return _R302; }
    void setPos_X303(double p) { if (_X303 != p) { _X303 = p; emit pos_X303Changed(p);} } double pos_X303() { return _X303; }
    void setPos_Y303(double p) { if (_Y303 != p) { _Y303 = p; emit pos_Y303Changed(p);} } double pos_Y303() { return _Y303; }
    void setPos_R303(double p) { if (_R303 != p) { _R303 = p; emit pos_R303Changed(p);} } double pos_R303() { return _R303; }
    void setPos_X304(double p) { if (_X304 != p) { _X304 = p; emit pos_X304Changed(p);} } double pos_X304() { return _X304; }
    void setPos_Y304(double p) { if (_Y304 != p) { _Y304 = p; emit pos_Y304Changed(p);} } double pos_Y304() { return _Y304; }
    void setPos_R304(double p) { if (_R304 != p) { _R304 = p; emit pos_R304Changed(p);} } double pos_R304() { return _R304; }
    void setPos_X305(double p) { if (_X305 != p) { _X305 = p; emit pos_X305Changed(p);} } double pos_X305() { return _X305; }
    void setPos_Y305(double p) { if (_Y305 != p) { _Y305 = p; emit pos_Y305Changed(p);} } double pos_Y305() { return _Y305; }
    void setPos_R305(double p) { if (_R305 != p) { _R305 = p; emit pos_R305Changed(p);} } double pos_R305() { return _R305; }
    void setPos_X306(double p) { if (_X306 != p) { _X306 = p; emit pos_X306Changed(p);} } double pos_X306() { return _X306; }
    void setPos_Y306(double p) { if (_Y306 != p) { _Y306 = p; emit pos_Y306Changed(p);} } double pos_Y306() { return _Y306; }
    void setPos_R306(double p) { if (_R306 != p) { _R306 = p; emit pos_R306Changed(p);} } double pos_R306() { return _R306; }
    void setPos_X307(double p) { if (_X307 != p) { _X307 = p; emit pos_X307Changed(p);} } double pos_X307() { return _X307; }
    void setPos_Y307(double p) { if (_Y307 != p) { _Y307 = p; emit pos_Y307Changed(p);} } double pos_Y307() { return _Y307; }
    void setPos_R307(double p) { if (_R307 != p) { _R307 = p; emit pos_R307Changed(p);} } double pos_R307() { return _R307; }
    void setPos_X308(double p) { if (_X308 != p) { _X308 = p; emit pos_X308Changed(p);} } double pos_X308() { return _X308; }
    void setPos_Y308(double p) { if (_Y308 != p) { _Y308 = p; emit pos_Y308Changed(p);} } double pos_Y308() { return _Y308; }
    void setPos_R308(double p) { if (_R308 != p) { _R308 = p; emit pos_R308Changed(p);} } double pos_R308() { return _R308; }
    void setPos_X309(double p) { if (_X309 != p) { _X309 = p; emit pos_X309Changed(p);} } double pos_X309() { return _X309; }
    void setPos_Y309(double p) { if (_Y309 != p) { _Y309 = p; emit pos_Y309Changed(p);} } double pos_Y309() { return _Y309; }
    void setPos_R309(double p) { if (_R309 != p) { _R309 = p; emit pos_R309Changed(p);} } double pos_R309() { return _R309; }
    void setPos_X310(double p) { if (_X310 != p) { _X310 = p; emit pos_X310Changed(p);} } double pos_X310() { return _X310; }
    void setPos_Y310(double p) { if (_Y310 != p) { _Y310 = p; emit pos_Y310Changed(p);} } double pos_Y310() { return _Y310; }
    void setPos_R310(double p) { if (_R310 != p) { _R310 = p; emit pos_R310Changed(p);} } double pos_R310() { return _R310; }
    void setPos_X311(double p) { if (_X311 != p) { _X311 = p; emit pos_X311Changed(p);} } double pos_X311() { return _X311; }
    void setPos_Y311(double p) { if (_Y311 != p) { _Y311 = p; emit pos_Y311Changed(p);} } double pos_Y311() { return _Y311; }
    void setPos_R311(double p) { if (_R311 != p) { _R311 = p; emit pos_R311Changed(p);} } double pos_R311() { return _R311; }
    void setPos_X312(double p) { if (_X312 != p) { _X312 = p; emit pos_X312Changed(p);} } double pos_X312() { return _X312; }
    void setPos_Y312(double p) { if (_Y312 != p) { _Y312 = p; emit pos_Y312Changed(p);} } double pos_Y312() { return _Y312; }
    void setPos_R312(double p) { if (_R312 != p) { _R312 = p; emit pos_R312Changed(p);} } double pos_R312() { return _R312; }
    void setPos_X313(double p) { if (_X313 != p) { _X313 = p; emit pos_X313Changed(p);} } double pos_X313() { return _X313; }
    void setPos_Y313(double p) { if (_Y313 != p) { _Y313 = p; emit pos_Y313Changed(p);} } double pos_Y313() { return _Y313; }
    void setPos_R313(double p) { if (_R313 != p) { _R313 = p; emit pos_R313Changed(p);} } double pos_R313() { return _R313; }
    void setPos_X314(double p) { if (_X314 != p) { _X314 = p; emit pos_X314Changed(p);} } double pos_X314() { return _X314; }
    void setPos_Y314(double p) { if (_Y314 != p) { _Y314 = p; emit pos_Y314Changed(p);} } double pos_Y314() { return _Y314; }
    void setPos_R314(double p) { if (_R314 != p) { _R314 = p; emit pos_R314Changed(p);} } double pos_R314() { return _R314; }
    void setPos_X315(double p) { if (_X315 != p) { _X315 = p; emit pos_X315Changed(p);} } double pos_X315() { return _X315; }
    void setPos_Y315(double p) { if (_Y315 != p) { _Y315 = p; emit pos_Y315Changed(p);} } double pos_Y315() { return _Y315; }
    void setPos_R315(double p) { if (_R315 != p) { _R315 = p; emit pos_R315Changed(p);} } double pos_R315() { return _R315; }
    void setPos_X316(double p) { if (_X316 != p) { _X316 = p; emit pos_X316Changed(p);} } double pos_X316() { return _X316; }
    void setPos_Y316(double p) { if (_Y316 != p) { _Y316 = p; emit pos_Y316Changed(p);} } double pos_Y316() { return _Y316; }
    void setPos_R316(double p) { if (_R316 != p) { _R316 = p; emit pos_R316Changed(p);} } double pos_R316() { return _R316; }
    void setPos_X317(double p) { if (_X317 != p) { _X317 = p; emit pos_X317Changed(p);} } double pos_X317() { return _X317; }
    void setPos_Y317(double p) { if (_Y317 != p) { _Y317 = p; emit pos_Y317Changed(p);} } double pos_Y317() { return _Y317; }
    void setPos_R317(double p) { if (_R317 != p) { _R317 = p; emit pos_R317Changed(p);} } double pos_R317() { return _R317; }
    void setPos_X318(double p) { if (_X318 != p) { _X318 = p; emit pos_X318Changed(p);} } double pos_X318() { return _X318; }
    void setPos_Y318(double p) { if (_Y318 != p) { _Y318 = p; emit pos_Y318Changed(p);} } double pos_Y318() { return _Y318; }
    void setPos_R318(double p) { if (_R318 != p) { _R318 = p; emit pos_R318Changed(p);} } double pos_R318() { return _R318; }
    void setPos_X319(double p) { if (_X319 != p) { _X319 = p; emit pos_X319Changed(p);} } double pos_X319() { return _X319; }
    void setPos_Y319(double p) { if (_Y319 != p) { _Y319 = p; emit pos_Y319Changed(p);} } double pos_Y319() { return _Y319; }
    void setPos_R319(double p) { if (_R319 != p) { _R319 = p; emit pos_R319Changed(p);} } double pos_R319() { return _R319; }
    void setPos_X320(double p) { if (_X320 != p) { _X320 = p; emit pos_X320Changed(p);} } double pos_X320() { return _X320; }
    void setPos_Y320(double p) { if (_Y320 != p) { _Y320 = p; emit pos_Y320Changed(p);} } double pos_Y320() { return _Y320; }
    void setPos_R320(double p) { if (_R320 != p) { _R320 = p; emit pos_R320Changed(p);} } double pos_R320() { return _R320; }
    void setPos_X321(double p) { if (_X321 != p) { _X321 = p; emit pos_X321Changed(p);} } double pos_X321() { return _X321; }
    void setPos_Y321(double p) { if (_Y321 != p) { _Y321 = p; emit pos_Y321Changed(p);} } double pos_Y321() { return _Y321; }
    void setPos_R321(double p) { if (_R321 != p) { _R321 = p; emit pos_R321Changed(p);} } double pos_R321() { return _R321; }
    void setPos_X322(double p) { if (_X322 != p) { _X322 = p; emit pos_X322Changed(p);} } double pos_X322() { return _X322; }
    void setPos_Y322(double p) { if (_Y322 != p) { _Y322 = p; emit pos_Y322Changed(p);} } double pos_Y322() { return _Y322; }
    void setPos_R322(double p) { if (_R322 != p) { _R322 = p; emit pos_R322Changed(p);} } double pos_R322() { return _R322; }
    void setPos_X323(double p) { if (_X323 != p) { _X323 = p; emit pos_X323Changed(p);} } double pos_X323() { return _X323; }
    void setPos_Y323(double p) { if (_Y323 != p) { _Y323 = p; emit pos_Y323Changed(p);} } double pos_Y323() { return _Y323; }
    void setPos_R323(double p) { if (_R323 != p) { _R323 = p; emit pos_R323Changed(p);} } double pos_R323() { return _R323; }
    void setPos_X324(double p) { if (_X324 != p) { _X324 = p; emit pos_X324Changed(p);} } double pos_X324() { return _X324; }
    void setPos_Y324(double p) { if (_Y324 != p) { _Y324 = p; emit pos_Y324Changed(p);} } double pos_Y324() { return _Y324; }
    void setPos_R324(double p) { if (_R324 != p) { _R324 = p; emit pos_R324Changed(p);} } double pos_R324() { return _R324; }
    void setPos_X325(double p) { if (_X325 != p) { _X325 = p; emit pos_X325Changed(p);} } double pos_X325() { return _X325; }
    void setPos_Y325(double p) { if (_Y325 != p) { _Y325 = p; emit pos_Y325Changed(p);} } double pos_Y325() { return _Y325; }
    void setPos_R325(double p) { if (_R325 != p) { _R325 = p; emit pos_R325Changed(p);} } double pos_R325() { return _R325; }
    void setPos_X326(double p) { if (_X326 != p) { _X326 = p; emit pos_X326Changed(p);} } double pos_X326() { return _X326; }
    void setPos_Y326(double p) { if (_Y326 != p) { _Y326 = p; emit pos_Y326Changed(p);} } double pos_Y326() { return _Y326; }
    void setPos_R326(double p) { if (_R326 != p) { _R326 = p; emit pos_R326Changed(p);} } double pos_R326() { return _R326; }
    void setPos_X327(double p) { if (_X327 != p) { _X327 = p; emit pos_X327Changed(p);} } double pos_X327() { return _X327; }
    void setPos_Y327(double p) { if (_Y327 != p) { _Y327 = p; emit pos_Y327Changed(p);} } double pos_Y327() { return _Y327; }
    void setPos_R327(double p) { if (_R327 != p) { _R327 = p; emit pos_R327Changed(p);} } double pos_R327() { return _R327; }
    void setPos_X328(double p) { if (_X328 != p) { _X328 = p; emit pos_X328Changed(p);} } double pos_X328() { return _X328; }
    void setPos_Y328(double p) { if (_Y328 != p) { _Y328 = p; emit pos_Y328Changed(p);} } double pos_Y328() { return _Y328; }
    void setPos_R328(double p) { if (_R328 != p) { _R328 = p; emit pos_R328Changed(p);} } double pos_R328() { return _R328; }
    void setPos_X329(double p) { if (_X329 != p) { _X329 = p; emit pos_X329Changed(p);} } double pos_X329() { return _X329; }
    void setPos_Y329(double p) { if (_Y329 != p) { _Y329 = p; emit pos_Y329Changed(p);} } double pos_Y329() { return _Y329; }
    void setPos_R329(double p) { if (_R329 != p) { _R329 = p; emit pos_R329Changed(p);} } double pos_R329() { return _R329; }
    void setPos_X330(double p) { if (_X330 != p) { _X330 = p; emit pos_X330Changed(p);} } double pos_X330() { return _X330; }
    void setPos_Y330(double p) { if (_Y330 != p) { _Y330 = p; emit pos_Y330Changed(p);} } double pos_Y330() { return _Y330; }
    void setPos_R330(double p) { if (_R330 != p) { _R330 = p; emit pos_R330Changed(p);} } double pos_R330() { return _R330; }
    void setPos_X331(double p) { if (_X331 != p) { _X331 = p; emit pos_X331Changed(p);} } double pos_X331() { return _X331; }
    void setPos_Y331(double p) { if (_Y331 != p) { _Y331 = p; emit pos_Y331Changed(p);} } double pos_Y331() { return _Y331; }
    void setPos_R331(double p) { if (_R331 != p) { _R331 = p; emit pos_R331Changed(p);} } double pos_R331() { return _R331; }
    void setPos_X332(double p) { if (_X332 != p) { _X332 = p; emit pos_X332Changed(p);} } double pos_X332() { return _X332; }
    void setPos_Y332(double p) { if (_Y332 != p) { _Y332 = p; emit pos_Y332Changed(p);} } double pos_Y332() { return _Y332; }
    void setPos_R332(double p) { if (_R332 != p) { _R332 = p; emit pos_R332Changed(p);} } double pos_R332() { return _R332; }
    void setPos_X333(double p) { if (_X333 != p) { _X333 = p; emit pos_X333Changed(p);} } double pos_X333() { return _X333; }
    void setPos_Y333(double p) { if (_Y333 != p) { _Y333 = p; emit pos_Y333Changed(p);} } double pos_Y333() { return _Y333; }
    void setPos_R333(double p) { if (_R333 != p) { _R333 = p; emit pos_R333Changed(p);} } double pos_R333() { return _R333; }
    void setPos_X334(double p) { if (_X334 != p) { _X334 = p; emit pos_X334Changed(p);} } double pos_X334() { return _X334; }
    void setPos_Y334(double p) { if (_Y334 != p) { _Y334 = p; emit pos_Y334Changed(p);} } double pos_Y334() { return _Y334; }
    void setPos_R334(double p) { if (_R334 != p) { _R334 = p; emit pos_R334Changed(p);} } double pos_R334() { return _R334; }
    void setPos_X335(double p) { if (_X335 != p) { _X335 = p; emit pos_X335Changed(p);} } double pos_X335() { return _X335; }
    void setPos_Y335(double p) { if (_Y335 != p) { _Y335 = p; emit pos_Y335Changed(p);} } double pos_Y335() { return _Y335; }
    void setPos_R335(double p) { if (_R335 != p) { _R335 = p; emit pos_R335Changed(p);} } double pos_R335() { return _R335; }
    void setPos_X336(double p) { if (_X336 != p) { _X336 = p; emit pos_X336Changed(p);} } double pos_X336() { return _X336; }
    void setPos_Y336(double p) { if (_Y336 != p) { _Y336 = p; emit pos_Y336Changed(p);} } double pos_Y336() { return _Y336; }
    void setPos_R336(double p) { if (_R336 != p) { _R336 = p; emit pos_R336Changed(p);} } double pos_R336() { return _R336; }
    void setPos_X337(double p) { if (_X337 != p) { _X337 = p; emit pos_X337Changed(p);} } double pos_X337() { return _X337; }
    void setPos_Y337(double p) { if (_Y337 != p) { _Y337 = p; emit pos_Y337Changed(p);} } double pos_Y337() { return _Y337; }
    void setPos_R337(double p) { if (_R337 != p) { _R337 = p; emit pos_R337Changed(p);} } double pos_R337() { return _R337; }
    void setPos_X338(double p) { if (_X338 != p) { _X338 = p; emit pos_X338Changed(p);} } double pos_X338() { return _X338; }
    void setPos_Y338(double p) { if (_Y338 != p) { _Y338 = p; emit pos_Y338Changed(p);} } double pos_Y338() { return _Y338; }
    void setPos_R338(double p) { if (_R338 != p) { _R338 = p; emit pos_R338Changed(p);} } double pos_R338() { return _R338; }
    void setPos_X339(double p) { if (_X339 != p) { _X339 = p; emit pos_X339Changed(p);} } double pos_X339() { return _X339; }
    void setPos_Y339(double p) { if (_Y339 != p) { _Y339 = p; emit pos_Y339Changed(p);} } double pos_Y339() { return _Y339; }
    void setPos_R339(double p) { if (_R339 != p) { _R339 = p; emit pos_R339Changed(p);} } double pos_R339() { return _R339; }
    void setPos_X340(double p) { if (_X340 != p) { _X340 = p; emit pos_X340Changed(p);} } double pos_X340() { return _X340; }
    void setPos_Y340(double p) { if (_Y340 != p) { _Y340 = p; emit pos_Y340Changed(p);} } double pos_Y340() { return _Y340; }
    void setPos_R340(double p) { if (_R340 != p) { _R340 = p; emit pos_R340Changed(p);} } double pos_R340() { return _R340; }
    void setPos_X341(double p) { if (_X341 != p) { _X341 = p; emit pos_X341Changed(p);} } double pos_X341() { return _X341; }
    void setPos_Y341(double p) { if (_Y341 != p) { _Y341 = p; emit pos_Y341Changed(p);} } double pos_Y341() { return _Y341; }
    void setPos_R341(double p) { if (_R341 != p) { _R341 = p; emit pos_R341Changed(p);} } double pos_R341() { return _R341; }
    void setPos_X342(double p) { if (_X342 != p) { _X342 = p; emit pos_X342Changed(p);} } double pos_X342() { return _X342; }
    void setPos_Y342(double p) { if (_Y342 != p) { _Y342 = p; emit pos_Y342Changed(p);} } double pos_Y342() { return _Y342; }
    void setPos_R342(double p) { if (_R342 != p) { _R342 = p; emit pos_R342Changed(p);} } double pos_R342() { return _R342; }
    void setPos_X343(double p) { if (_X343 != p) { _X343 = p; emit pos_X343Changed(p);} } double pos_X343() { return _X343; }
    void setPos_Y343(double p) { if (_Y343 != p) { _Y343 = p; emit pos_Y343Changed(p);} } double pos_Y343() { return _Y343; }
    void setPos_R343(double p) { if (_R343 != p) { _R343 = p; emit pos_R343Changed(p);} } double pos_R343() { return _R343; }
    void setPos_X344(double p) { if (_X344 != p) { _X344 = p; emit pos_X344Changed(p);} } double pos_X344() { return _X344; }
    void setPos_Y344(double p) { if (_Y344 != p) { _Y344 = p; emit pos_Y344Changed(p);} } double pos_Y344() { return _Y344; }
    void setPos_R344(double p) { if (_R344 != p) { _R344 = p; emit pos_R344Changed(p);} } double pos_R344() { return _R344; }
    void setPos_X345(double p) { if (_X345 != p) { _X345 = p; emit pos_X345Changed(p);} } double pos_X345() { return _X345; }
    void setPos_Y345(double p) { if (_Y345 != p) { _Y345 = p; emit pos_Y345Changed(p);} } double pos_Y345() { return _Y345; }
    void setPos_R345(double p) { if (_R345 != p) { _R345 = p; emit pos_R345Changed(p);} } double pos_R345() { return _R345; }
    void setPos_X346(double p) { if (_X346 != p) { _X346 = p; emit pos_X346Changed(p);} } double pos_X346() { return _X346; }
    void setPos_Y346(double p) { if (_Y346 != p) { _Y346 = p; emit pos_Y346Changed(p);} } double pos_Y346() { return _Y346; }
    void setPos_R346(double p) { if (_R346 != p) { _R346 = p; emit pos_R346Changed(p);} } double pos_R346() { return _R346; }
    void setPos_X347(double p) { if (_X347 != p) { _X347 = p; emit pos_X347Changed(p);} } double pos_X347() { return _X347; }
    void setPos_Y347(double p) { if (_Y347 != p) { _Y347 = p; emit pos_Y347Changed(p);} } double pos_Y347() { return _Y347; }
    void setPos_R347(double p) { if (_R347 != p) { _R347 = p; emit pos_R347Changed(p);} } double pos_R347() { return _R347; }
    void setPos_X348(double p) { if (_X348 != p) { _X348 = p; emit pos_X348Changed(p);} } double pos_X348() { return _X348; }
    void setPos_Y348(double p) { if (_Y348 != p) { _Y348 = p; emit pos_Y348Changed(p);} } double pos_Y348() { return _Y348; }
    void setPos_R348(double p) { if (_R348 != p) { _R348 = p; emit pos_R348Changed(p);} } double pos_R348() { return _R348; }
    void setPos_X349(double p) { if (_X349 != p) { _X349 = p; emit pos_X349Changed(p);} } double pos_X349() { return _X349; }
    void setPos_Y349(double p) { if (_Y349 != p) { _Y349 = p; emit pos_Y349Changed(p);} } double pos_Y349() { return _Y349; }
    void setPos_R349(double p) { if (_R349 != p) { _R349 = p; emit pos_R349Changed(p);} } double pos_R349() { return _R349; }
    void setPos_X350(double p) { if (_X350 != p) { _X350 = p; emit pos_X350Changed(p);} } double pos_X350() { return _X350; }
    void setPos_Y350(double p) { if (_Y350 != p) { _Y350 = p; emit pos_Y350Changed(p);} } double pos_Y350() { return _Y350; }
    void setPos_R350(double p) { if (_R350 != p) { _R350 = p; emit pos_R350Changed(p);} } double pos_R350() { return _R350; }
    void setPos_X351(double p) { if (_X351 != p) { _X351 = p; emit pos_X351Changed(p);} } double pos_X351() { return _X351; }
    void setPos_Y351(double p) { if (_Y351 != p) { _Y351 = p; emit pos_Y351Changed(p);} } double pos_Y351() { return _Y351; }
    void setPos_R351(double p) { if (_R351 != p) { _R351 = p; emit pos_R351Changed(p);} } double pos_R351() { return _R351; }
    void setPos_X352(double p) { if (_X352 != p) { _X352 = p; emit pos_X352Changed(p);} } double pos_X352() { return _X352; }
    void setPos_Y352(double p) { if (_Y352 != p) { _Y352 = p; emit pos_Y352Changed(p);} } double pos_Y352() { return _Y352; }
    void setPos_R352(double p) { if (_R352 != p) { _R352 = p; emit pos_R352Changed(p);} } double pos_R352() { return _R352; }
    void setPos_X353(double p) { if (_X353 != p) { _X353 = p; emit pos_X353Changed(p);} } double pos_X353() { return _X353; }
    void setPos_Y353(double p) { if (_Y353 != p) { _Y353 = p; emit pos_Y353Changed(p);} } double pos_Y353() { return _Y353; }
    void setPos_R353(double p) { if (_R353 != p) { _R353 = p; emit pos_R353Changed(p);} } double pos_R353() { return _R353; }
    void setPos_X354(double p) { if (_X354 != p) { _X354 = p; emit pos_X354Changed(p);} } double pos_X354() { return _X354; }
    void setPos_Y354(double p) { if (_Y354 != p) { _Y354 = p; emit pos_Y354Changed(p);} } double pos_Y354() { return _Y354; }
    void setPos_R354(double p) { if (_R354 != p) { _R354 = p; emit pos_R354Changed(p);} } double pos_R354() { return _R354; }
    void setPos_X355(double p) { if (_X355 != p) { _X355 = p; emit pos_X355Changed(p);} } double pos_X355() { return _X355; }
    void setPos_Y355(double p) { if (_Y355 != p) { _Y355 = p; emit pos_Y355Changed(p);} } double pos_Y355() { return _Y355; }
    void setPos_R355(double p) { if (_R355 != p) { _R355 = p; emit pos_R355Changed(p);} } double pos_R355() { return _R355; }
    void setPos_X356(double p) { if (_X356 != p) { _X356 = p; emit pos_X356Changed(p);} } double pos_X356() { return _X356; }
    void setPos_Y356(double p) { if (_Y356 != p) { _Y356 = p; emit pos_Y356Changed(p);} } double pos_Y356() { return _Y356; }
    void setPos_R356(double p) { if (_R356 != p) { _R356 = p; emit pos_R356Changed(p);} } double pos_R356() { return _R356; }
    void setPos_X357(double p) { if (_X357 != p) { _X357 = p; emit pos_X357Changed(p);} } double pos_X357() { return _X357; }
    void setPos_Y357(double p) { if (_Y357 != p) { _Y357 = p; emit pos_Y357Changed(p);} } double pos_Y357() { return _Y357; }
    void setPos_R357(double p) { if (_R357 != p) { _R357 = p; emit pos_R357Changed(p);} } double pos_R357() { return _R357; }
    void setPos_X358(double p) { if (_X358 != p) { _X358 = p; emit pos_X358Changed(p);} } double pos_X358() { return _X358; }
    void setPos_Y358(double p) { if (_Y358 != p) { _Y358 = p; emit pos_Y358Changed(p);} } double pos_Y358() { return _Y358; }
    void setPos_R358(double p) { if (_R358 != p) { _R358 = p; emit pos_R358Changed(p);} } double pos_R358() { return _R358; }
    void setPos_X359(double p) { if (_X359 != p) { _X359 = p; emit pos_X359Changed(p);} } double pos_X359() { return _X359; }
    void setPos_Y359(double p) { if (_Y359 != p) { _Y359 = p; emit pos_Y359Changed(p);} } double pos_Y359() { return _Y359; }
    void setPos_R359(double p) { if (_R359 != p) { _R359 = p; emit pos_R359Changed(p);} } double pos_R359() { return _R359; }
    void setPos_X360(double p) { if (_X360 != p) { _X360 = p; emit pos_X360Changed(p);} } double pos_X360() { return _X360; }
    void setPos_Y360(double p) { if (_Y360 != p) { _Y360 = p; emit pos_Y360Changed(p);} } double pos_Y360() { return _Y360; }
    void setPos_R360(double p) { if (_R360 != p) { _R360 = p; emit pos_R360Changed(p);} } double pos_R360() { return _R360; }
    void setPos_X361(double p) { if (_X361 != p) { _X361 = p; emit pos_X361Changed(p);} } double pos_X361() { return _X361; }
    void setPos_Y361(double p) { if (_Y361 != p) { _Y361 = p; emit pos_Y361Changed(p);} } double pos_Y361() { return _Y361; }
    void setPos_R361(double p) { if (_R361 != p) { _R361 = p; emit pos_R361Changed(p);} } double pos_R361() { return _R361; }
    void setPos_X362(double p) { if (_X362 != p) { _X362 = p; emit pos_X362Changed(p);} } double pos_X362() { return _X362; }
    void setPos_Y362(double p) { if (_Y362 != p) { _Y362 = p; emit pos_Y362Changed(p);} } double pos_Y362() { return _Y362; }
    void setPos_R362(double p) { if (_R362 != p) { _R362 = p; emit pos_R362Changed(p);} } double pos_R362() { return _R362; }
    void setPos_X363(double p) { if (_X363 != p) { _X363 = p; emit pos_X363Changed(p);} } double pos_X363() { return _X363; }
    void setPos_Y363(double p) { if (_Y363 != p) { _Y363 = p; emit pos_Y363Changed(p);} } double pos_Y363() { return _Y363; }
    void setPos_R363(double p) { if (_R363 != p) { _R363 = p; emit pos_R363Changed(p);} } double pos_R363() { return _R363; }
    void setPos_X364(double p) { if (_X364 != p) { _X364 = p; emit pos_X364Changed(p);} } double pos_X364() { return _X364; }
    void setPos_Y364(double p) { if (_Y364 != p) { _Y364 = p; emit pos_Y364Changed(p);} } double pos_Y364() { return _Y364; }
    void setPos_R364(double p) { if (_R364 != p) { _R364 = p; emit pos_R364Changed(p);} } double pos_R364() { return _R364; }
    void setPos_X365(double p) { if (_X365 != p) { _X365 = p; emit pos_X365Changed(p);} } double pos_X365() { return _X365; }
    void setPos_Y365(double p) { if (_Y365 != p) { _Y365 = p; emit pos_Y365Changed(p);} } double pos_Y365() { return _Y365; }
    void setPos_R365(double p) { if (_R365 != p) { _R365 = p; emit pos_R365Changed(p);} } double pos_R365() { return _R365; }
    void setPos_X366(double p) { if (_X366 != p) { _X366 = p; emit pos_X366Changed(p);} } double pos_X366() { return _X366; }
    void setPos_Y366(double p) { if (_Y366 != p) { _Y366 = p; emit pos_Y366Changed(p);} } double pos_Y366() { return _Y366; }
    void setPos_R366(double p) { if (_R366 != p) { _R366 = p; emit pos_R366Changed(p);} } double pos_R366() { return _R366; }
    void setPos_X367(double p) { if (_X367 != p) { _X367 = p; emit pos_X367Changed(p);} } double pos_X367() { return _X367; }
    void setPos_Y367(double p) { if (_Y367 != p) { _Y367 = p; emit pos_Y367Changed(p);} } double pos_Y367() { return _Y367; }
    void setPos_R367(double p) { if (_R367 != p) { _R367 = p; emit pos_R367Changed(p);} } double pos_R367() { return _R367; }
    void setPos_X368(double p) { if (_X368 != p) { _X368 = p; emit pos_X368Changed(p);} } double pos_X368() { return _X368; }
    void setPos_Y368(double p) { if (_Y368 != p) { _Y368 = p; emit pos_Y368Changed(p);} } double pos_Y368() { return _Y368; }
    void setPos_R368(double p) { if (_R368 != p) { _R368 = p; emit pos_R368Changed(p);} } double pos_R368() { return _R368; }
    void setPos_X369(double p) { if (_X369 != p) { _X369 = p; emit pos_X369Changed(p);} } double pos_X369() { return _X369; }
    void setPos_Y369(double p) { if (_Y369 != p) { _Y369 = p; emit pos_Y369Changed(p);} } double pos_Y369() { return _Y369; }
    void setPos_R369(double p) { if (_R369 != p) { _R369 = p; emit pos_R369Changed(p);} } double pos_R369() { return _R369; }
    void setPos_X370(double p) { if (_X370 != p) { _X370 = p; emit pos_X370Changed(p);} } double pos_X370() { return _X370; }
    void setPos_Y370(double p) { if (_Y370 != p) { _Y370 = p; emit pos_Y370Changed(p);} } double pos_Y370() { return _Y370; }
    void setPos_R370(double p) { if (_R370 != p) { _R370 = p; emit pos_R370Changed(p);} } double pos_R370() { return _R370; }
    void setPos_X371(double p) { if (_X371 != p) { _X371 = p; emit pos_X371Changed(p);} } double pos_X371() { return _X371; }
    void setPos_Y371(double p) { if (_Y371 != p) { _Y371 = p; emit pos_Y371Changed(p);} } double pos_Y371() { return _Y371; }
    void setPos_R371(double p) { if (_R371 != p) { _R371 = p; emit pos_R371Changed(p);} } double pos_R371() { return _R371; }
    void setPos_X372(double p) { if (_X372 != p) { _X372 = p; emit pos_X372Changed(p);} } double pos_X372() { return _X372; }
    void setPos_Y372(double p) { if (_Y372 != p) { _Y372 = p; emit pos_Y372Changed(p);} } double pos_Y372() { return _Y372; }
    void setPos_R372(double p) { if (_R372 != p) { _R372 = p; emit pos_R372Changed(p);} } double pos_R372() { return _R372; }
    void setPos_X373(double p) { if (_X373 != p) { _X373 = p; emit pos_X373Changed(p);} } double pos_X373() { return _X373; }
    void setPos_Y373(double p) { if (_Y373 != p) { _Y373 = p; emit pos_Y373Changed(p);} } double pos_Y373() { return _Y373; }
    void setPos_R373(double p) { if (_R373 != p) { _R373 = p; emit pos_R373Changed(p);} } double pos_R373() { return _R373; }
    void setPos_X374(double p) { if (_X374 != p) { _X374 = p; emit pos_X374Changed(p);} } double pos_X374() { return _X374; }
    void setPos_Y374(double p) { if (_Y374 != p) { _Y374 = p; emit pos_Y374Changed(p);} } double pos_Y374() { return _Y374; }
    void setPos_R374(double p) { if (_R374 != p) { _R374 = p; emit pos_R374Changed(p);} } double pos_R374() { return _R374; }
    void setPos_X375(double p) { if (_X375 != p) { _X375 = p; emit pos_X375Changed(p);} } double pos_X375() { return _X375; }
    void setPos_Y375(double p) { if (_Y375 != p) { _Y375 = p; emit pos_Y375Changed(p);} } double pos_Y375() { return _Y375; }
    void setPos_R375(double p) { if (_R375 != p) { _R375 = p; emit pos_R375Changed(p);} } double pos_R375() { return _R375; }
    void setPos_X376(double p) { if (_X376 != p) { _X376 = p; emit pos_X376Changed(p);} } double pos_X376() { return _X376; }
    void setPos_Y376(double p) { if (_Y376 != p) { _Y376 = p; emit pos_Y376Changed(p);} } double pos_Y376() { return _Y376; }
    void setPos_R376(double p) { if (_R376 != p) { _R376 = p; emit pos_R376Changed(p);} } double pos_R376() { return _R376; }
    void setPos_X377(double p) { if (_X377 != p) { _X377 = p; emit pos_X377Changed(p);} } double pos_X377() { return _X377; }
    void setPos_Y377(double p) { if (_Y377 != p) { _Y377 = p; emit pos_Y377Changed(p);} } double pos_Y377() { return _Y377; }
    void setPos_R377(double p) { if (_R377 != p) { _R377 = p; emit pos_R377Changed(p);} } double pos_R377() { return _R377; }
    void setPos_X378(double p) { if (_X378 != p) { _X378 = p; emit pos_X378Changed(p);} } double pos_X378() { return _X378; }
    void setPos_Y378(double p) { if (_Y378 != p) { _Y378 = p; emit pos_Y378Changed(p);} } double pos_Y378() { return _Y378; }
    void setPos_R378(double p) { if (_R378 != p) { _R378 = p; emit pos_R378Changed(p);} } double pos_R378() { return _R378; }
    void setPos_X379(double p) { if (_X379 != p) { _X379 = p; emit pos_X379Changed(p);} } double pos_X379() { return _X379; }
    void setPos_Y379(double p) { if (_Y379 != p) { _Y379 = p; emit pos_Y379Changed(p);} } double pos_Y379() { return _Y379; }
    void setPos_R379(double p) { if (_R379 != p) { _R379 = p; emit pos_R379Changed(p);} } double pos_R379() { return _R379; }
    void setPos_X380(double p) { if (_X380 != p) { _X380 = p; emit pos_X380Changed(p);} } double pos_X380() { return _X380; }
    void setPos_Y380(double p) { if (_Y380 != p) { _Y380 = p; emit pos_Y380Changed(p);} } double pos_Y380() { return _Y380; }
    void setPos_R380(double p) { if (_R380 != p) { _R380 = p; emit pos_R380Changed(p);} } double pos_R380() { return _R380; }
    void setPos_X381(double p) { if (_X381 != p) { _X381 = p; emit pos_X381Changed(p);} } double pos_X381() { return _X381; }
    void setPos_Y381(double p) { if (_Y381 != p) { _Y381 = p; emit pos_Y381Changed(p);} } double pos_Y381() { return _Y381; }
    void setPos_R381(double p) { if (_R381 != p) { _R381 = p; emit pos_R381Changed(p);} } double pos_R381() { return _R381; }
    void setPos_X382(double p) { if (_X382 != p) { _X382 = p; emit pos_X382Changed(p);} } double pos_X382() { return _X382; }
    void setPos_Y382(double p) { if (_Y382 != p) { _Y382 = p; emit pos_Y382Changed(p);} } double pos_Y382() { return _Y382; }
    void setPos_R382(double p) { if (_R382 != p) { _R382 = p; emit pos_R382Changed(p);} } double pos_R382() { return _R382; }
    void setPos_X383(double p) { if (_X383 != p) { _X383 = p; emit pos_X383Changed(p);} } double pos_X383() { return _X383; }
    void setPos_Y383(double p) { if (_Y383 != p) { _Y383 = p; emit pos_Y383Changed(p);} } double pos_Y383() { return _Y383; }
    void setPos_R383(double p) { if (_R383 != p) { _R383 = p; emit pos_R383Changed(p);} } double pos_R383() { return _R383; }
    void setPos_X384(double p) { if (_X384 != p) { _X384 = p; emit pos_X384Changed(p);} } double pos_X384() { return _X384; }
    void setPos_Y384(double p) { if (_Y384 != p) { _Y384 = p; emit pos_Y384Changed(p);} } double pos_Y384() { return _Y384; }
    void setPos_R384(double p) { if (_R384 != p) { _R384 = p; emit pos_R384Changed(p);} } double pos_R384() { return _R384; }
    void setPos_X385(double p) { if (_X385 != p) { _X385 = p; emit pos_X385Changed(p);} } double pos_X385() { return _X385; }
    void setPos_Y385(double p) { if (_Y385 != p) { _Y385 = p; emit pos_Y385Changed(p);} } double pos_Y385() { return _Y385; }
    void setPos_R385(double p) { if (_R385 != p) { _R385 = p; emit pos_R385Changed(p);} } double pos_R385() { return _R385; }
    void setPos_X386(double p) { if (_X386 != p) { _X386 = p; emit pos_X386Changed(p);} } double pos_X386() { return _X386; }
    void setPos_Y386(double p) { if (_Y386 != p) { _Y386 = p; emit pos_Y386Changed(p);} } double pos_Y386() { return _Y386; }
    void setPos_R386(double p) { if (_R386 != p) { _R386 = p; emit pos_R386Changed(p);} } double pos_R386() { return _R386; }
    void setPos_X387(double p) { if (_X387 != p) { _X387 = p; emit pos_X387Changed(p);} } double pos_X387() { return _X387; }
    void setPos_Y387(double p) { if (_Y387 != p) { _Y387 = p; emit pos_Y387Changed(p);} } double pos_Y387() { return _Y387; }
    void setPos_R387(double p) { if (_R387 != p) { _R387 = p; emit pos_R387Changed(p);} } double pos_R387() { return _R387; }
    void setPos_X388(double p) { if (_X388 != p) { _X388 = p; emit pos_X388Changed(p);} } double pos_X388() { return _X388; }
    void setPos_Y388(double p) { if (_Y388 != p) { _Y388 = p; emit pos_Y388Changed(p);} } double pos_Y388() { return _Y388; }
    void setPos_R388(double p) { if (_R388 != p) { _R388 = p; emit pos_R388Changed(p);} } double pos_R388() { return _R388; }
    void setPos_X389(double p) { if (_X389 != p) { _X389 = p; emit pos_X389Changed(p);} } double pos_X389() { return _X389; }
    void setPos_Y389(double p) { if (_Y389 != p) { _Y389 = p; emit pos_Y389Changed(p);} } double pos_Y389() { return _Y389; }
    void setPos_R389(double p) { if (_R389 != p) { _R389 = p; emit pos_R389Changed(p);} } double pos_R389() { return _R389; }
    void setPos_X390(double p) { if (_X390 != p) { _X390 = p; emit pos_X390Changed(p);} } double pos_X390() { return _X390; }
    void setPos_Y390(double p) { if (_Y390 != p) { _Y390 = p; emit pos_Y390Changed(p);} } double pos_Y390() { return _Y390; }
    void setPos_R390(double p) { if (_R390 != p) { _R390 = p; emit pos_R390Changed(p);} } double pos_R390() { return _R390; }
    void setPos_X391(double p) { if (_X391 != p) { _X391 = p; emit pos_X391Changed(p);} } double pos_X391() { return _X391; }
    void setPos_Y391(double p) { if (_Y391 != p) { _Y391 = p; emit pos_Y391Changed(p);} } double pos_Y391() { return _Y391; }
    void setPos_R391(double p) { if (_R391 != p) { _R391 = p; emit pos_R391Changed(p);} } double pos_R391() { return _R391; }
    void setPos_X392(double p) { if (_X392 != p) { _X392 = p; emit pos_X392Changed(p);} } double pos_X392() { return _X392; }
    void setPos_Y392(double p) { if (_Y392 != p) { _Y392 = p; emit pos_Y392Changed(p);} } double pos_Y392() { return _Y392; }
    void setPos_R392(double p) { if (_R392 != p) { _R392 = p; emit pos_R392Changed(p);} } double pos_R392() { return _R392; }
    void setPos_X393(double p) { if (_X393 != p) { _X393 = p; emit pos_X393Changed(p);} } double pos_X393() { return _X393; }
    void setPos_Y393(double p) { if (_Y393 != p) { _Y393 = p; emit pos_Y393Changed(p);} } double pos_Y393() { return _Y393; }
    void setPos_R393(double p) { if (_R393 != p) { _R393 = p; emit pos_R393Changed(p);} } double pos_R393() { return _R393; }
    void setPos_X394(double p) { if (_X394 != p) { _X394 = p; emit pos_X394Changed(p);} } double pos_X394() { return _X394; }
    void setPos_Y394(double p) { if (_Y394 != p) { _Y394 = p; emit pos_Y394Changed(p);} } double pos_Y394() { return _Y394; }
    void setPos_R394(double p) { if (_R394 != p) { _R394 = p; emit pos_R394Changed(p);} } double pos_R394() { return _R394; }
    void setPos_X395(double p) { if (_X395 != p) { _X395 = p; emit pos_X395Changed(p);} } double pos_X395() { return _X395; }
    void setPos_Y395(double p) { if (_Y395 != p) { _Y395 = p; emit pos_Y395Changed(p);} } double pos_Y395() { return _Y395; }
    void setPos_R395(double p) { if (_R395 != p) { _R395 = p; emit pos_R395Changed(p);} } double pos_R395() { return _R395; }
    void setPos_X396(double p) { if (_X396 != p) { _X396 = p; emit pos_X396Changed(p);} } double pos_X396() { return _X396; }
    void setPos_Y396(double p) { if (_Y396 != p) { _Y396 = p; emit pos_Y396Changed(p);} } double pos_Y396() { return _Y396; }
    void setPos_R396(double p) { if (_R396 != p) { _R396 = p; emit pos_R396Changed(p);} } double pos_R396() { return _R396; }
    void setPos_X397(double p) { if (_X397 != p) { _X397 = p; emit pos_X397Changed(p);} } double pos_X397() { return _X397; }
    void setPos_Y397(double p) { if (_Y397 != p) { _Y397 = p; emit pos_Y397Changed(p);} } double pos_Y397() { return _Y397; }
    void setPos_R397(double p) { if (_R397 != p) { _R397 = p; emit pos_R397Changed(p);} } double pos_R397() { return _R397; }
    void setPos_X398(double p) { if (_X398 != p) { _X398 = p; emit pos_X398Changed(p);} } double pos_X398() { return _X398; }
    void setPos_Y398(double p) { if (_Y398 != p) { _Y398 = p; emit pos_Y398Changed(p);} } double pos_Y398() { return _Y398; }
    void setPos_R398(double p) { if (_R398 != p) { _R398 = p; emit pos_R398Changed(p);} } double pos_R398() { return _R398; }
    void setPos_X399(double p) { if (_X399 != p) { _X399 = p; emit pos_X399Changed(p);} } double pos_X399() { return _X399; }
    void setPos_Y399(double p) { if (_Y399 != p) { _Y399 = p; emit pos_Y399Changed(p);} } double pos_Y399() { return _Y399; }
    void setPos_R399(double p) { if (_R399 != p) { _R399 = p; emit pos_R399Changed(p);} } double pos_R399() { return _R399; }
    void setPos_X400(double p) { if (_X400 != p) { _X400 = p; emit pos_X400Changed(p);} } double pos_X400() { return _X400; }
    void setPos_Y400(double p) { if (_Y400 != p) { _Y400 = p; emit pos_Y400Changed(p);} } double pos_Y400() { return _Y400; }
    void setPos_R400(double p) { if (_R400 != p) { _R400 = p; emit pos_R400Changed(p);} } double pos_R400() { return _R400; }
    void setPos_X401(double p) { if (_X401 != p) { _X401 = p; emit pos_X401Changed(p);} } double pos_X401() { return _X401; }
    void setPos_Y401(double p) { if (_Y401 != p) { _Y401 = p; emit pos_Y401Changed(p);} } double pos_Y401() { return _Y401; }
    void setPos_R401(double p) { if (_R401 != p) { _R401 = p; emit pos_R401Changed(p);} } double pos_R401() { return _R401; }
    void setPos_X402(double p) { if (_X402 != p) { _X402 = p; emit pos_X402Changed(p);} } double pos_X402() { return _X402; }
    void setPos_Y402(double p) { if (_Y402 != p) { _Y402 = p; emit pos_Y402Changed(p);} } double pos_Y402() { return _Y402; }
    void setPos_R402(double p) { if (_R402 != p) { _R402 = p; emit pos_R402Changed(p);} } double pos_R402() { return _R402; }
    void setPos_X403(double p) { if (_X403 != p) { _X403 = p; emit pos_X403Changed(p);} } double pos_X403() { return _X403; }
    void setPos_Y403(double p) { if (_Y403 != p) { _Y403 = p; emit pos_Y403Changed(p);} } double pos_Y403() { return _Y403; }
    void setPos_R403(double p) { if (_R403 != p) { _R403 = p; emit pos_R403Changed(p);} } double pos_R403() { return _R403; }
    void setPos_X404(double p) { if (_X404 != p) { _X404 = p; emit pos_X404Changed(p);} } double pos_X404() { return _X404; }
    void setPos_Y404(double p) { if (_Y404 != p) { _Y404 = p; emit pos_Y404Changed(p);} } double pos_Y404() { return _Y404; }
    void setPos_R404(double p) { if (_R404 != p) { _R404 = p; emit pos_R404Changed(p);} } double pos_R404() { return _R404; }
    void setPos_X405(double p) { if (_X405 != p) { _X405 = p; emit pos_X405Changed(p);} } double pos_X405() { return _X405; }
    void setPos_Y405(double p) { if (_Y405 != p) { _Y405 = p; emit pos_Y405Changed(p);} } double pos_Y405() { return _Y405; }
    void setPos_R405(double p) { if (_R405 != p) { _R405 = p; emit pos_R405Changed(p);} } double pos_R405() { return _R405; }
    void setPos_X406(double p) { if (_X406 != p) { _X406 = p; emit pos_X406Changed(p);} } double pos_X406() { return _X406; }
    void setPos_Y406(double p) { if (_Y406 != p) { _Y406 = p; emit pos_Y406Changed(p);} } double pos_Y406() { return _Y406; }
    void setPos_R406(double p) { if (_R406 != p) { _R406 = p; emit pos_R406Changed(p);} } double pos_R406() { return _R406; }
    void setPos_X407(double p) { if (_X407 != p) { _X407 = p; emit pos_X407Changed(p);} } double pos_X407() { return _X407; }
    void setPos_Y407(double p) { if (_Y407 != p) { _Y407 = p; emit pos_Y407Changed(p);} } double pos_Y407() { return _Y407; }
    void setPos_R407(double p) { if (_R407 != p) { _R407 = p; emit pos_R407Changed(p);} } double pos_R407() { return _R407; }
    void setPos_X408(double p) { if (_X408 != p) { _X408 = p; emit pos_X408Changed(p);} } double pos_X408() { return _X408; }
    void setPos_Y408(double p) { if (_Y408 != p) { _Y408 = p; emit pos_Y408Changed(p);} } double pos_Y408() { return _Y408; }
    void setPos_R408(double p) { if (_R408 != p) { _R408 = p; emit pos_R408Changed(p);} } double pos_R408() { return _R408; }
    void setPos_X409(double p) { if (_X409 != p) { _X409 = p; emit pos_X409Changed(p);} } double pos_X409() { return _X409; }
    void setPos_Y409(double p) { if (_Y409 != p) { _Y409 = p; emit pos_Y409Changed(p);} } double pos_Y409() { return _Y409; }
    void setPos_R409(double p) { if (_R409 != p) { _R409 = p; emit pos_R409Changed(p);} } double pos_R409() { return _R409; }
    void setPos_X410(double p) { if (_X410 != p) { _X410 = p; emit pos_X410Changed(p);} } double pos_X410() { return _X410; }
    void setPos_Y410(double p) { if (_Y410 != p) { _Y410 = p; emit pos_Y410Changed(p);} } double pos_Y410() { return _Y410; }
    void setPos_R410(double p) { if (_R410 != p) { _R410 = p; emit pos_R410Changed(p);} } double pos_R410() { return _R410; }
    void setPos_X411(double p) { if (_X411 != p) { _X411 = p; emit pos_X411Changed(p);} } double pos_X411() { return _X411; }
    void setPos_Y411(double p) { if (_Y411 != p) { _Y411 = p; emit pos_Y411Changed(p);} } double pos_Y411() { return _Y411; }
    void setPos_R411(double p) { if (_R411 != p) { _R411 = p; emit pos_R411Changed(p);} } double pos_R411() { return _R411; }
    void setPos_X412(double p) { if (_X412 != p) { _X412 = p; emit pos_X412Changed(p);} } double pos_X412() { return _X412; }
    void setPos_Y412(double p) { if (_Y412 != p) { _Y412 = p; emit pos_Y412Changed(p);} } double pos_Y412() { return _Y412; }
    void setPos_R412(double p) { if (_R412 != p) { _R412 = p; emit pos_R412Changed(p);} } double pos_R412() { return _R412; }
    void setPos_X413(double p) { if (_X413 != p) { _X413 = p; emit pos_X413Changed(p);} } double pos_X413() { return _X413; }
    void setPos_Y413(double p) { if (_Y413 != p) { _Y413 = p; emit pos_Y413Changed(p);} } double pos_Y413() { return _Y413; }
    void setPos_R413(double p) { if (_R413 != p) { _R413 = p; emit pos_R413Changed(p);} } double pos_R413() { return _R413; }
    void setPos_X414(double p) { if (_X414 != p) { _X414 = p; emit pos_X414Changed(p);} } double pos_X414() { return _X414; }
    void setPos_Y414(double p) { if (_Y414 != p) { _Y414 = p; emit pos_Y414Changed(p);} } double pos_Y414() { return _Y414; }
    void setPos_R414(double p) { if (_R414 != p) { _R414 = p; emit pos_R414Changed(p);} } double pos_R414() { return _R414; }
    void setPos_X415(double p) { if (_X415 != p) { _X415 = p; emit pos_X415Changed(p);} } double pos_X415() { return _X415; }
    void setPos_Y415(double p) { if (_Y415 != p) { _Y415 = p; emit pos_Y415Changed(p);} } double pos_Y415() { return _Y415; }
    void setPos_R415(double p) { if (_R415 != p) { _R415 = p; emit pos_R415Changed(p);} } double pos_R415() { return _R415; }
    void setPos_X416(double p) { if (_X416 != p) { _X416 = p; emit pos_X416Changed(p);} } double pos_X416() { return _X416; }
    void setPos_Y416(double p) { if (_Y416 != p) { _Y416 = p; emit pos_Y416Changed(p);} } double pos_Y416() { return _Y416; }
    void setPos_R416(double p) { if (_R416 != p) { _R416 = p; emit pos_R416Changed(p);} } double pos_R416() { return _R416; }
    void setPos_X417(double p) { if (_X417 != p) { _X417 = p; emit pos_X417Changed(p);} } double pos_X417() { return _X417; }
    void setPos_Y417(double p) { if (_Y417 != p) { _Y417 = p; emit pos_Y417Changed(p);} } double pos_Y417() { return _Y417; }
    void setPos_R417(double p) { if (_R417 != p) { _R417 = p; emit pos_R417Changed(p);} } double pos_R417() { return _R417; }
    void setPos_X418(double p) { if (_X418 != p) { _X418 = p; emit pos_X418Changed(p);} } double pos_X418() { return _X418; }
    void setPos_Y418(double p) { if (_Y418 != p) { _Y418 = p; emit pos_Y418Changed(p);} } double pos_Y418() { return _Y418; }
    void setPos_R418(double p) { if (_R418 != p) { _R418 = p; emit pos_R418Changed(p);} } double pos_R418() { return _R418; }
    void setPos_X419(double p) { if (_X419 != p) { _X419 = p; emit pos_X419Changed(p);} } double pos_X419() { return _X419; }
    void setPos_Y419(double p) { if (_Y419 != p) { _Y419 = p; emit pos_Y419Changed(p);} } double pos_Y419() { return _Y419; }
    void setPos_R419(double p) { if (_R419 != p) { _R419 = p; emit pos_R419Changed(p);} } double pos_R419() { return _R419; }
    void setPos_X420(double p) { if (_X420 != p) { _X420 = p; emit pos_X420Changed(p);} } double pos_X420() { return _X420; }
    void setPos_Y420(double p) { if (_Y420 != p) { _Y420 = p; emit pos_Y420Changed(p);} } double pos_Y420() { return _Y420; }
    void setPos_R420(double p) { if (_R420 != p) { _R420 = p; emit pos_R420Changed(p);} } double pos_R420() { return _R420; }
    void setPos_X421(double p) { if (_X421 != p) { _X421 = p; emit pos_X421Changed(p);} } double pos_X421() { return _X421; }
    void setPos_Y421(double p) { if (_Y421 != p) { _Y421 = p; emit pos_Y421Changed(p);} } double pos_Y421() { return _Y421; }
    void setPos_R421(double p) { if (_R421 != p) { _R421 = p; emit pos_R421Changed(p);} } double pos_R421() { return _R421; }
    void setPos_X422(double p) { if (_X422 != p) { _X422 = p; emit pos_X422Changed(p);} } double pos_X422() { return _X422; }
    void setPos_Y422(double p) { if (_Y422 != p) { _Y422 = p; emit pos_Y422Changed(p);} } double pos_Y422() { return _Y422; }
    void setPos_R422(double p) { if (_R422 != p) { _R422 = p; emit pos_R422Changed(p);} } double pos_R422() { return _R422; }
    void setPos_X423(double p) { if (_X423 != p) { _X423 = p; emit pos_X423Changed(p);} } double pos_X423() { return _X423; }
    void setPos_Y423(double p) { if (_Y423 != p) { _Y423 = p; emit pos_Y423Changed(p);} } double pos_Y423() { return _Y423; }
    void setPos_R423(double p) { if (_R423 != p) { _R423 = p; emit pos_R423Changed(p);} } double pos_R423() { return _R423; }
    void setPos_X424(double p) { if (_X424 != p) { _X424 = p; emit pos_X424Changed(p);} } double pos_X424() { return _X424; }
    void setPos_Y424(double p) { if (_Y424 != p) { _Y424 = p; emit pos_Y424Changed(p);} } double pos_Y424() { return _Y424; }
    void setPos_R424(double p) { if (_R424 != p) { _R424 = p; emit pos_R424Changed(p);} } double pos_R424() { return _R424; }
    void setPos_X425(double p) { if (_X425 != p) { _X425 = p; emit pos_X425Changed(p);} } double pos_X425() { return _X425; }
    void setPos_Y425(double p) { if (_Y425 != p) { _Y425 = p; emit pos_Y425Changed(p);} } double pos_Y425() { return _Y425; }
    void setPos_R425(double p) { if (_R425 != p) { _R425 = p; emit pos_R425Changed(p);} } double pos_R425() { return _R425; }
    void setPos_X426(double p) { if (_X426 != p) { _X426 = p; emit pos_X426Changed(p);} } double pos_X426() { return _X426; }
    void setPos_Y426(double p) { if (_Y426 != p) { _Y426 = p; emit pos_Y426Changed(p);} } double pos_Y426() { return _Y426; }
    void setPos_R426(double p) { if (_R426 != p) { _R426 = p; emit pos_R426Changed(p);} } double pos_R426() { return _R426; }
    void setPos_X427(double p) { if (_X427 != p) { _X427 = p; emit pos_X427Changed(p);} } double pos_X427() { return _X427; }
    void setPos_Y427(double p) { if (_Y427 != p) { _Y427 = p; emit pos_Y427Changed(p);} } double pos_Y427() { return _Y427; }
    void setPos_R427(double p) { if (_R427 != p) { _R427 = p; emit pos_R427Changed(p);} } double pos_R427() { return _R427; }
    void setPos_X428(double p) { if (_X428 != p) { _X428 = p; emit pos_X428Changed(p);} } double pos_X428() { return _X428; }
    void setPos_Y428(double p) { if (_Y428 != p) { _Y428 = p; emit pos_Y428Changed(p);} } double pos_Y428() { return _Y428; }
    void setPos_R428(double p) { if (_R428 != p) { _R428 = p; emit pos_R428Changed(p);} } double pos_R428() { return _R428; }
    void setPos_X429(double p) { if (_X429 != p) { _X429 = p; emit pos_X429Changed(p);} } double pos_X429() { return _X429; }
    void setPos_Y429(double p) { if (_Y429 != p) { _Y429 = p; emit pos_Y429Changed(p);} } double pos_Y429() { return _Y429; }
    void setPos_R429(double p) { if (_R429 != p) { _R429 = p; emit pos_R429Changed(p);} } double pos_R429() { return _R429; }
    void setPos_X430(double p) { if (_X430 != p) { _X430 = p; emit pos_X430Changed(p);} } double pos_X430() { return _X430; }
    void setPos_Y430(double p) { if (_Y430 != p) { _Y430 = p; emit pos_Y430Changed(p);} } double pos_Y430() { return _Y430; }
    void setPos_R430(double p) { if (_R430 != p) { _R430 = p; emit pos_R430Changed(p);} } double pos_R430() { return _R430; }
    void setPos_X431(double p) { if (_X431 != p) { _X431 = p; emit pos_X431Changed(p);} } double pos_X431() { return _X431; }
    void setPos_Y431(double p) { if (_Y431 != p) { _Y431 = p; emit pos_Y431Changed(p);} } double pos_Y431() { return _Y431; }
    void setPos_R431(double p) { if (_R431 != p) { _R431 = p; emit pos_R431Changed(p);} } double pos_R431() { return _R431; }
    void setPos_X432(double p) { if (_X432 != p) { _X432 = p; emit pos_X432Changed(p);} } double pos_X432() { return _X432; }
    void setPos_Y432(double p) { if (_Y432 != p) { _Y432 = p; emit pos_Y432Changed(p);} } double pos_Y432() { return _Y432; }
    void setPos_R432(double p) { if (_R432 != p) { _R432 = p; emit pos_R432Changed(p);} } double pos_R432() { return _R432; }
    void setPos_X433(double p) { if (_X433 != p) { _X433 = p; emit pos_X433Changed(p);} } double pos_X433() { return _X433; }
    void setPos_Y433(double p) { if (_Y433 != p) { _Y433 = p; emit pos_Y433Changed(p);} } double pos_Y433() { return _Y433; }
    void setPos_R433(double p) { if (_R433 != p) { _R433 = p; emit pos_R433Changed(p);} } double pos_R433() { return _R433; }
    void setPos_X434(double p) { if (_X434 != p) { _X434 = p; emit pos_X434Changed(p);} } double pos_X434() { return _X434; }
    void setPos_Y434(double p) { if (_Y434 != p) { _Y434 = p; emit pos_Y434Changed(p);} } double pos_Y434() { return _Y434; }
    void setPos_R434(double p) { if (_R434 != p) { _R434 = p; emit pos_R434Changed(p);} } double pos_R434() { return _R434; }
    void setPos_X435(double p) { if (_X435 != p) { _X435 = p; emit pos_X435Changed(p);} } double pos_X435() { return _X435; }
    void setPos_Y435(double p) { if (_Y435 != p) { _Y435 = p; emit pos_Y435Changed(p);} } double pos_Y435() { return _Y435; }
    void setPos_R435(double p) { if (_R435 != p) { _R435 = p; emit pos_R435Changed(p);} } double pos_R435() { return _R435; }
    void setPos_X436(double p) { if (_X436 != p) { _X436 = p; emit pos_X436Changed(p);} } double pos_X436() { return _X436; }
    void setPos_Y436(double p) { if (_Y436 != p) { _Y436 = p; emit pos_Y436Changed(p);} } double pos_Y436() { return _Y436; }
    void setPos_R436(double p) { if (_R436 != p) { _R436 = p; emit pos_R436Changed(p);} } double pos_R436() { return _R436; }
    void setPos_X437(double p) { if (_X437 != p) { _X437 = p; emit pos_X437Changed(p);} } double pos_X437() { return _X437; }
    void setPos_Y437(double p) { if (_Y437 != p) { _Y437 = p; emit pos_Y437Changed(p);} } double pos_Y437() { return _Y437; }
    void setPos_R437(double p) { if (_R437 != p) { _R437 = p; emit pos_R437Changed(p);} } double pos_R437() { return _R437; }
    void setPos_X438(double p) { if (_X438 != p) { _X438 = p; emit pos_X438Changed(p);} } double pos_X438() { return _X438; }
    void setPos_Y438(double p) { if (_Y438 != p) { _Y438 = p; emit pos_Y438Changed(p);} } double pos_Y438() { return _Y438; }
    void setPos_R438(double p) { if (_R438 != p) { _R438 = p; emit pos_R438Changed(p);} } double pos_R438() { return _R438; }
    void setPos_X439(double p) { if (_X439 != p) { _X439 = p; emit pos_X439Changed(p);} } double pos_X439() { return _X439; }
    void setPos_Y439(double p) { if (_Y439 != p) { _Y439 = p; emit pos_Y439Changed(p);} } double pos_Y439() { return _Y439; }
    void setPos_R439(double p) { if (_R439 != p) { _R439 = p; emit pos_R439Changed(p);} } double pos_R439() { return _R439; }
    void setPos_X440(double p) { if (_X440 != p) { _X440 = p; emit pos_X440Changed(p);} } double pos_X440() { return _X440; }
    void setPos_Y440(double p) { if (_Y440 != p) { _Y440 = p; emit pos_Y440Changed(p);} } double pos_Y440() { return _Y440; }
    void setPos_R440(double p) { if (_R440 != p) { _R440 = p; emit pos_R440Changed(p);} } double pos_R440() { return _R440; }
    void setPos_X441(double p) { if (_X441 != p) { _X441 = p; emit pos_X441Changed(p);} } double pos_X441() { return _X441; }
    void setPos_Y441(double p) { if (_Y441 != p) { _Y441 = p; emit pos_Y441Changed(p);} } double pos_Y441() { return _Y441; }
    void setPos_R441(double p) { if (_R441 != p) { _R441 = p; emit pos_R441Changed(p);} } double pos_R441() { return _R441; }
    void setPos_X442(double p) { if (_X442 != p) { _X442 = p; emit pos_X442Changed(p);} } double pos_X442() { return _X442; }
    void setPos_Y442(double p) { if (_Y442 != p) { _Y442 = p; emit pos_Y442Changed(p);} } double pos_Y442() { return _Y442; }
    void setPos_R442(double p) { if (_R442 != p) { _R442 = p; emit pos_R442Changed(p);} } double pos_R442() { return _R442; }
    void setPos_X443(double p) { if (_X443 != p) { _X443 = p; emit pos_X443Changed(p);} } double pos_X443() { return _X443; }
    void setPos_Y443(double p) { if (_Y443 != p) { _Y443 = p; emit pos_Y443Changed(p);} } double pos_Y443() { return _Y443; }
    void setPos_R443(double p) { if (_R443 != p) { _R443 = p; emit pos_R443Changed(p);} } double pos_R443() { return _R443; }
    void setPos_X444(double p) { if (_X444 != p) { _X444 = p; emit pos_X444Changed(p);} } double pos_X444() { return _X444; }
    void setPos_Y444(double p) { if (_Y444 != p) { _Y444 = p; emit pos_Y444Changed(p);} } double pos_Y444() { return _Y444; }
    void setPos_R444(double p) { if (_R444 != p) { _R444 = p; emit pos_R444Changed(p);} } double pos_R444() { return _R444; }
    void setPos_X445(double p) { if (_X445 != p) { _X445 = p; emit pos_X445Changed(p);} } double pos_X445() { return _X445; }
    void setPos_Y445(double p) { if (_Y445 != p) { _Y445 = p; emit pos_Y445Changed(p);} } double pos_Y445() { return _Y445; }
    void setPos_R445(double p) { if (_R445 != p) { _R445 = p; emit pos_R445Changed(p);} } double pos_R445() { return _R445; }
    void setPos_X446(double p) { if (_X446 != p) { _X446 = p; emit pos_X446Changed(p);} } double pos_X446() { return _X446; }
    void setPos_Y446(double p) { if (_Y446 != p) { _Y446 = p; emit pos_Y446Changed(p);} } double pos_Y446() { return _Y446; }
    void setPos_R446(double p) { if (_R446 != p) { _R446 = p; emit pos_R446Changed(p);} } double pos_R446() { return _R446; }
    void setPos_X447(double p) { if (_X447 != p) { _X447 = p; emit pos_X447Changed(p);} } double pos_X447() { return _X447; }
    void setPos_Y447(double p) { if (_Y447 != p) { _Y447 = p; emit pos_Y447Changed(p);} } double pos_Y447() { return _Y447; }
    void setPos_R447(double p) { if (_R447 != p) { _R447 = p; emit pos_R447Changed(p);} } double pos_R447() { return _R447; }
    void setPos_X448(double p) { if (_X448 != p) { _X448 = p; emit pos_X448Changed(p);} } double pos_X448() { return _X448; }
    void setPos_Y448(double p) { if (_Y448 != p) { _Y448 = p; emit pos_Y448Changed(p);} } double pos_Y448() { return _Y448; }
    void setPos_R448(double p) { if (_R448 != p) { _R448 = p; emit pos_R448Changed(p);} } double pos_R448() { return _R448; }
    void setPos_X449(double p) { if (_X449 != p) { _X449 = p; emit pos_X449Changed(p);} } double pos_X449() { return _X449; }
    void setPos_Y449(double p) { if (_Y449 != p) { _Y449 = p; emit pos_Y449Changed(p);} } double pos_Y449() { return _Y449; }
    void setPos_R449(double p) { if (_R449 != p) { _R449 = p; emit pos_R449Changed(p);} } double pos_R449() { return _R449; }
    void setPos_X450(double p) { if (_X450 != p) { _X450 = p; emit pos_X450Changed(p);} } double pos_X450() { return _X450; }
    void setPos_Y450(double p) { if (_Y450 != p) { _Y450 = p; emit pos_Y450Changed(p);} } double pos_Y450() { return _Y450; }
    void setPos_R450(double p) { if (_R450 != p) { _R450 = p; emit pos_R450Changed(p);} } double pos_R450() { return _R450; }
    void setPos_X451(double p) { if (_X451 != p) { _X451 = p; emit pos_X451Changed(p);} } double pos_X451() { return _X451; }
    void setPos_Y451(double p) { if (_Y451 != p) { _Y451 = p; emit pos_Y451Changed(p);} } double pos_Y451() { return _Y451; }
    void setPos_R451(double p) { if (_R451 != p) { _R451 = p; emit pos_R451Changed(p);} } double pos_R451() { return _R451; }
    void setPos_X452(double p) { if (_X452 != p) { _X452 = p; emit pos_X452Changed(p);} } double pos_X452() { return _X452; }
    void setPos_Y452(double p) { if (_Y452 != p) { _Y452 = p; emit pos_Y452Changed(p);} } double pos_Y452() { return _Y452; }
    void setPos_R452(double p) { if (_R452 != p) { _R452 = p; emit pos_R452Changed(p);} } double pos_R452() { return _R452; }
    void setPos_X453(double p) { if (_X453 != p) { _X453 = p; emit pos_X453Changed(p);} } double pos_X453() { return _X453; }
    void setPos_Y453(double p) { if (_Y453 != p) { _Y453 = p; emit pos_Y453Changed(p);} } double pos_Y453() { return _Y453; }
    void setPos_R453(double p) { if (_R453 != p) { _R453 = p; emit pos_R453Changed(p);} } double pos_R453() { return _R453; }
    void setPos_X454(double p) { if (_X454 != p) { _X454 = p; emit pos_X454Changed(p);} } double pos_X454() { return _X454; }
    void setPos_Y454(double p) { if (_Y454 != p) { _Y454 = p; emit pos_Y454Changed(p);} } double pos_Y454() { return _Y454; }
    void setPos_R454(double p) { if (_R454 != p) { _R454 = p; emit pos_R454Changed(p);} } double pos_R454() { return _R454; }
    void setPos_X455(double p) { if (_X455 != p) { _X455 = p; emit pos_X455Changed(p);} } double pos_X455() { return _X455; }
    void setPos_Y455(double p) { if (_Y455 != p) { _Y455 = p; emit pos_Y455Changed(p);} } double pos_Y455() { return _Y455; }
    void setPos_R455(double p) { if (_R455 != p) { _R455 = p; emit pos_R455Changed(p);} } double pos_R455() { return _R455; }
    void setPos_X456(double p) { if (_X456 != p) { _X456 = p; emit pos_X456Changed(p);} } double pos_X456() { return _X456; }
    void setPos_Y456(double p) { if (_Y456 != p) { _Y456 = p; emit pos_Y456Changed(p);} } double pos_Y456() { return _Y456; }
    void setPos_R456(double p) { if (_R456 != p) { _R456 = p; emit pos_R456Changed(p);} } double pos_R456() { return _R456; }
    void setPos_X457(double p) { if (_X457 != p) { _X457 = p; emit pos_X457Changed(p);} } double pos_X457() { return _X457; }
    void setPos_Y457(double p) { if (_Y457 != p) { _Y457 = p; emit pos_Y457Changed(p);} } double pos_Y457() { return _Y457; }
    void setPos_R457(double p) { if (_R457 != p) { _R457 = p; emit pos_R457Changed(p);} } double pos_R457() { return _R457; }
    void setPos_X458(double p) { if (_X458 != p) { _X458 = p; emit pos_X458Changed(p);} } double pos_X458() { return _X458; }
    void setPos_Y458(double p) { if (_Y458 != p) { _Y458 = p; emit pos_Y458Changed(p);} } double pos_Y458() { return _Y458; }
    void setPos_R458(double p) { if (_R458 != p) { _R458 = p; emit pos_R458Changed(p);} } double pos_R458() { return _R458; }
    void setPos_X459(double p) { if (_X459 != p) { _X459 = p; emit pos_X459Changed(p);} } double pos_X459() { return _X459; }
    void setPos_Y459(double p) { if (_Y459 != p) { _Y459 = p; emit pos_Y459Changed(p);} } double pos_Y459() { return _Y459; }
    void setPos_R459(double p) { if (_R459 != p) { _R459 = p; emit pos_R459Changed(p);} } double pos_R459() { return _R459; }
    void setPos_X460(double p) { if (_X460 != p) { _X460 = p; emit pos_X460Changed(p);} } double pos_X460() { return _X460; }
    void setPos_Y460(double p) { if (_Y460 != p) { _Y460 = p; emit pos_Y460Changed(p);} } double pos_Y460() { return _Y460; }
    void setPos_R460(double p) { if (_R460 != p) { _R460 = p; emit pos_R460Changed(p);} } double pos_R460() { return _R460; }
    void setPos_X461(double p) { if (_X461 != p) { _X461 = p; emit pos_X461Changed(p);} } double pos_X461() { return _X461; }
    void setPos_Y461(double p) { if (_Y461 != p) { _Y461 = p; emit pos_Y461Changed(p);} } double pos_Y461() { return _Y461; }
    void setPos_R461(double p) { if (_R461 != p) { _R461 = p; emit pos_R461Changed(p);} } double pos_R461() { return _R461; }
    void setPos_X462(double p) { if (_X462 != p) { _X462 = p; emit pos_X462Changed(p);} } double pos_X462() { return _X462; }
    void setPos_Y462(double p) { if (_Y462 != p) { _Y462 = p; emit pos_Y462Changed(p);} } double pos_Y462() { return _Y462; }
    void setPos_R462(double p) { if (_R462 != p) { _R462 = p; emit pos_R462Changed(p);} } double pos_R462() { return _R462; }
    void setPos_X463(double p) { if (_X463 != p) { _X463 = p; emit pos_X463Changed(p);} } double pos_X463() { return _X463; }
    void setPos_Y463(double p) { if (_Y463 != p) { _Y463 = p; emit pos_Y463Changed(p);} } double pos_Y463() { return _Y463; }
    void setPos_R463(double p) { if (_R463 != p) { _R463 = p; emit pos_R463Changed(p);} } double pos_R463() { return _R463; }
    void setPos_X464(double p) { if (_X464 != p) { _X464 = p; emit pos_X464Changed(p);} } double pos_X464() { return _X464; }
    void setPos_Y464(double p) { if (_Y464 != p) { _Y464 = p; emit pos_Y464Changed(p);} } double pos_Y464() { return _Y464; }
    void setPos_R464(double p) { if (_R464 != p) { _R464 = p; emit pos_R464Changed(p);} } double pos_R464() { return _R464; }
    void setPos_X465(double p) { if (_X465 != p) { _X465 = p; emit pos_X465Changed(p);} } double pos_X465() { return _X465; }
    void setPos_Y465(double p) { if (_Y465 != p) { _Y465 = p; emit pos_Y465Changed(p);} } double pos_Y465() { return _Y465; }
    void setPos_R465(double p) { if (_R465 != p) { _R465 = p; emit pos_R465Changed(p);} } double pos_R465() { return _R465; }
    void setPos_X466(double p) { if (_X466 != p) { _X466 = p; emit pos_X466Changed(p);} } double pos_X466() { return _X466; }
    void setPos_Y466(double p) { if (_Y466 != p) { _Y466 = p; emit pos_Y466Changed(p);} } double pos_Y466() { return _Y466; }
    void setPos_R466(double p) { if (_R466 != p) { _R466 = p; emit pos_R466Changed(p);} } double pos_R466() { return _R466; }
    void setPos_X467(double p) { if (_X467 != p) { _X467 = p; emit pos_X467Changed(p);} } double pos_X467() { return _X467; }
    void setPos_Y467(double p) { if (_Y467 != p) { _Y467 = p; emit pos_Y467Changed(p);} } double pos_Y467() { return _Y467; }
    void setPos_R467(double p) { if (_R467 != p) { _R467 = p; emit pos_R467Changed(p);} } double pos_R467() { return _R467; }
    void setPos_X468(double p) { if (_X468 != p) { _X468 = p; emit pos_X468Changed(p);} } double pos_X468() { return _X468; }
    void setPos_Y468(double p) { if (_Y468 != p) { _Y468 = p; emit pos_Y468Changed(p);} } double pos_Y468() { return _Y468; }
    void setPos_R468(double p) { if (_R468 != p) { _R468 = p; emit pos_R468Changed(p);} } double pos_R468() { return _R468; }
    void setPos_X469(double p) { if (_X469 != p) { _X469 = p; emit pos_X469Changed(p);} } double pos_X469() { return _X469; }
    void setPos_Y469(double p) { if (_Y469 != p) { _Y469 = p; emit pos_Y469Changed(p);} } double pos_Y469() { return _Y469; }
    void setPos_R469(double p) { if (_R469 != p) { _R469 = p; emit pos_R469Changed(p);} } double pos_R469() { return _R469; }
    void setPos_X470(double p) { if (_X470 != p) { _X470 = p; emit pos_X470Changed(p);} } double pos_X470() { return _X470; }
    void setPos_Y470(double p) { if (_Y470 != p) { _Y470 = p; emit pos_Y470Changed(p);} } double pos_Y470() { return _Y470; }
    void setPos_R470(double p) { if (_R470 != p) { _R470 = p; emit pos_R470Changed(p);} } double pos_R470() { return _R470; }
    void setPos_X471(double p) { if (_X471 != p) { _X471 = p; emit pos_X471Changed(p);} } double pos_X471() { return _X471; }
    void setPos_Y471(double p) { if (_Y471 != p) { _Y471 = p; emit pos_Y471Changed(p);} } double pos_Y471() { return _Y471; }
    void setPos_R471(double p) { if (_R471 != p) { _R471 = p; emit pos_R471Changed(p);} } double pos_R471() { return _R471; }
    void setPos_X472(double p) { if (_X472 != p) { _X472 = p; emit pos_X472Changed(p);} } double pos_X472() { return _X472; }
    void setPos_Y472(double p) { if (_Y472 != p) { _Y472 = p; emit pos_Y472Changed(p);} } double pos_Y472() { return _Y472; }
    void setPos_R472(double p) { if (_R472 != p) { _R472 = p; emit pos_R472Changed(p);} } double pos_R472() { return _R472; }
    void setPos_X473(double p) { if (_X473 != p) { _X473 = p; emit pos_X473Changed(p);} } double pos_X473() { return _X473; }
    void setPos_Y473(double p) { if (_Y473 != p) { _Y473 = p; emit pos_Y473Changed(p);} } double pos_Y473() { return _Y473; }
    void setPos_R473(double p) { if (_R473 != p) { _R473 = p; emit pos_R473Changed(p);} } double pos_R473() { return _R473; }
    void setPos_X474(double p) { if (_X474 != p) { _X474 = p; emit pos_X474Changed(p);} } double pos_X474() { return _X474; }
    void setPos_Y474(double p) { if (_Y474 != p) { _Y474 = p; emit pos_Y474Changed(p);} } double pos_Y474() { return _Y474; }
    void setPos_R474(double p) { if (_R474 != p) { _R474 = p; emit pos_R474Changed(p);} } double pos_R474() { return _R474; }
    void setPos_X475(double p) { if (_X475 != p) { _X475 = p; emit pos_X475Changed(p);} } double pos_X475() { return _X475; }
    void setPos_Y475(double p) { if (_Y475 != p) { _Y475 = p; emit pos_Y475Changed(p);} } double pos_Y475() { return _Y475; }
    void setPos_R475(double p) { if (_R475 != p) { _R475 = p; emit pos_R475Changed(p);} } double pos_R475() { return _R475; }
    void setPos_X476(double p) { if (_X476 != p) { _X476 = p; emit pos_X476Changed(p);} } double pos_X476() { return _X476; }
    void setPos_Y476(double p) { if (_Y476 != p) { _Y476 = p; emit pos_Y476Changed(p);} } double pos_Y476() { return _Y476; }
    void setPos_R476(double p) { if (_R476 != p) { _R476 = p; emit pos_R476Changed(p);} } double pos_R476() { return _R476; }
    void setPos_X477(double p) { if (_X477 != p) { _X477 = p; emit pos_X477Changed(p);} } double pos_X477() { return _X477; }
    void setPos_Y477(double p) { if (_Y477 != p) { _Y477 = p; emit pos_Y477Changed(p);} } double pos_Y477() { return _Y477; }
    void setPos_R477(double p) { if (_R477 != p) { _R477 = p; emit pos_R477Changed(p);} } double pos_R477() { return _R477; }
    void setPos_X478(double p) { if (_X478 != p) { _X478 = p; emit pos_X478Changed(p);} } double pos_X478() { return _X478; }
    void setPos_Y478(double p) { if (_Y478 != p) { _Y478 = p; emit pos_Y478Changed(p);} } double pos_Y478() { return _Y478; }
    void setPos_R478(double p) { if (_R478 != p) { _R478 = p; emit pos_R478Changed(p);} } double pos_R478() { return _R478; }
    void setPos_X479(double p) { if (_X479 != p) { _X479 = p; emit pos_X479Changed(p);} } double pos_X479() { return _X479; }
    void setPos_Y479(double p) { if (_Y479 != p) { _Y479 = p; emit pos_Y479Changed(p);} } double pos_Y479() { return _Y479; }
    void setPos_R479(double p) { if (_R479 != p) { _R479 = p; emit pos_R479Changed(p);} } double pos_R479() { return _R479; }
    void setPos_X480(double p) { if (_X480 != p) { _X480 = p; emit pos_X480Changed(p);} } double pos_X480() { return _X480; }
    void setPos_Y480(double p) { if (_Y480 != p) { _Y480 = p; emit pos_Y480Changed(p);} } double pos_Y480() { return _Y480; }
    void setPos_R480(double p) { if (_R480 != p) { _R480 = p; emit pos_R480Changed(p);} } double pos_R480() { return _R480; }
    void setPos_X481(double p) { if (_X481 != p) { _X481 = p; emit pos_X481Changed(p);} } double pos_X481() { return _X481; }
    void setPos_Y481(double p) { if (_Y481 != p) { _Y481 = p; emit pos_Y481Changed(p);} } double pos_Y481() { return _Y481; }
    void setPos_R481(double p) { if (_R481 != p) { _R481 = p; emit pos_R481Changed(p);} } double pos_R481() { return _R481; }
    void setPos_X482(double p) { if (_X482 != p) { _X482 = p; emit pos_X482Changed(p);} } double pos_X482() { return _X482; }
    void setPos_Y482(double p) { if (_Y482 != p) { _Y482 = p; emit pos_Y482Changed(p);} } double pos_Y482() { return _Y482; }
    void setPos_R482(double p) { if (_R482 != p) { _R482 = p; emit pos_R482Changed(p);} } double pos_R482() { return _R482; }
    void setPos_X483(double p) { if (_X483 != p) { _X483 = p; emit pos_X483Changed(p);} } double pos_X483() { return _X483; }
    void setPos_Y483(double p) { if (_Y483 != p) { _Y483 = p; emit pos_Y483Changed(p);} } double pos_Y483() { return _Y483; }
    void setPos_R483(double p) { if (_R483 != p) { _R483 = p; emit pos_R483Changed(p);} } double pos_R483() { return _R483; }
    void setPos_X484(double p) { if (_X484 != p) { _X484 = p; emit pos_X484Changed(p);} } double pos_X484() { return _X484; }
    void setPos_Y484(double p) { if (_Y484 != p) { _Y484 = p; emit pos_Y484Changed(p);} } double pos_Y484() { return _Y484; }
    void setPos_R484(double p) { if (_R484 != p) { _R484 = p; emit pos_R484Changed(p);} } double pos_R484() { return _R484; }
    void setPos_X485(double p) { if (_X485 != p) { _X485 = p; emit pos_X485Changed(p);} } double pos_X485() { return _X485; }
    void setPos_Y485(double p) { if (_Y485 != p) { _Y485 = p; emit pos_Y485Changed(p);} } double pos_Y485() { return _Y485; }
    void setPos_R485(double p) { if (_R485 != p) { _R485 = p; emit pos_R485Changed(p);} } double pos_R485() { return _R485; }
    void setPos_X486(double p) { if (_X486 != p) { _X486 = p; emit pos_X486Changed(p);} } double pos_X486() { return _X486; }
    void setPos_Y486(double p) { if (_Y486 != p) { _Y486 = p; emit pos_Y486Changed(p);} } double pos_Y486() { return _Y486; }
    void setPos_R486(double p) { if (_R486 != p) { _R486 = p; emit pos_R486Changed(p);} } double pos_R486() { return _R486; }
    void setPos_X487(double p) { if (_X487 != p) { _X487 = p; emit pos_X487Changed(p);} } double pos_X487() { return _X487; }
    void setPos_Y487(double p) { if (_Y487 != p) { _Y487 = p; emit pos_Y487Changed(p);} } double pos_Y487() { return _Y487; }
    void setPos_R487(double p) { if (_R487 != p) { _R487 = p; emit pos_R487Changed(p);} } double pos_R487() { return _R487; }
    void setPos_X488(double p) { if (_X488 != p) { _X488 = p; emit pos_X488Changed(p);} } double pos_X488() { return _X488; }
    void setPos_Y488(double p) { if (_Y488 != p) { _Y488 = p; emit pos_Y488Changed(p);} } double pos_Y488() { return _Y488; }
    void setPos_R488(double p) { if (_R488 != p) { _R488 = p; emit pos_R488Changed(p);} } double pos_R488() { return _R488; }
    void setPos_X489(double p) { if (_X489 != p) { _X489 = p; emit pos_X489Changed(p);} } double pos_X489() { return _X489; }
    void setPos_Y489(double p) { if (_Y489 != p) { _Y489 = p; emit pos_Y489Changed(p);} } double pos_Y489() { return _Y489; }
    void setPos_R489(double p) { if (_R489 != p) { _R489 = p; emit pos_R489Changed(p);} } double pos_R489() { return _R489; }
    void setPos_X490(double p) { if (_X490 != p) { _X490 = p; emit pos_X490Changed(p);} } double pos_X490() { return _X490; }
    void setPos_Y490(double p) { if (_Y490 != p) { _Y490 = p; emit pos_Y490Changed(p);} } double pos_Y490() { return _Y490; }
    void setPos_R490(double p) { if (_R490 != p) { _R490 = p; emit pos_R490Changed(p);} } double pos_R490() { return _R490; }
    void setPos_X491(double p) { if (_X491 != p) { _X491 = p; emit pos_X491Changed(p);} } double pos_X491() { return _X491; }
    void setPos_Y491(double p) { if (_Y491 != p) { _Y491 = p; emit pos_Y491Changed(p);} } double pos_Y491() { return _Y491; }
    void setPos_R491(double p) { if (_R491 != p) { _R491 = p; emit pos_R491Changed(p);} } double pos_R491() { return _R491; }
    void setPos_X492(double p) { if (_X492 != p) { _X492 = p; emit pos_X492Changed(p);} } double pos_X492() { return _X492; }
    void setPos_Y492(double p) { if (_Y492 != p) { _Y492 = p; emit pos_Y492Changed(p);} } double pos_Y492() { return _Y492; }
    void setPos_R492(double p) { if (_R492 != p) { _R492 = p; emit pos_R492Changed(p);} } double pos_R492() { return _R492; }
    void setPos_X493(double p) { if (_X493 != p) { _X493 = p; emit pos_X493Changed(p);} } double pos_X493() { return _X493; }
    void setPos_Y493(double p) { if (_Y493 != p) { _Y493 = p; emit pos_Y493Changed(p);} } double pos_Y493() { return _Y493; }
    void setPos_R493(double p) { if (_R493 != p) { _R493 = p; emit pos_R493Changed(p);} } double pos_R493() { return _R493; }
    void setPos_X494(double p) { if (_X494 != p) { _X494 = p; emit pos_X494Changed(p);} } double pos_X494() { return _X494; }
    void setPos_Y494(double p) { if (_Y494 != p) { _Y494 = p; emit pos_Y494Changed(p);} } double pos_Y494() { return _Y494; }
    void setPos_R494(double p) { if (_R494 != p) { _R494 = p; emit pos_R494Changed(p);} } double pos_R494() { return _R494; }
    void setPos_X495(double p) { if (_X495 != p) { _X495 = p; emit pos_X495Changed(p);} } double pos_X495() { return _X495; }
    void setPos_Y495(double p) { if (_Y495 != p) { _Y495 = p; emit pos_Y495Changed(p);} } double pos_Y495() { return _Y495; }
    void setPos_R495(double p) { if (_R495 != p) { _R495 = p; emit pos_R495Changed(p);} } double pos_R495() { return _R495; }
    void setPos_X496(double p) { if (_X496 != p) { _X496 = p; emit pos_X496Changed(p);} } double pos_X496() { return _X496; }
    void setPos_Y496(double p) { if (_Y496 != p) { _Y496 = p; emit pos_Y496Changed(p);} } double pos_Y496() { return _Y496; }
    void setPos_R496(double p) { if (_R496 != p) { _R496 = p; emit pos_R496Changed(p);} } double pos_R496() { return _R496; }
    void setPos_X497(double p) { if (_X497 != p) { _X497 = p; emit pos_X497Changed(p);} } double pos_X497() { return _X497; }
    void setPos_Y497(double p) { if (_Y497 != p) { _Y497 = p; emit pos_Y497Changed(p);} } double pos_Y497() { return _Y497; }
    void setPos_R497(double p) { if (_R497 != p) { _R497 = p; emit pos_R497Changed(p);} } double pos_R497() { return _R497; }
    void setPos_X498(double p) { if (_X498 != p) { _X498 = p; emit pos_X498Changed(p);} } double pos_X498() { return _X498; }
    void setPos_Y498(double p) { if (_Y498 != p) { _Y498 = p; emit pos_Y498Changed(p);} } double pos_Y498() { return _Y498; }
    void setPos_R498(double p) { if (_R498 != p) { _R498 = p; emit pos_R498Changed(p);} } double pos_R498() { return _R498; }
    void setPos_X499(double p) { if (_X499 != p) { _X499 = p; emit pos_X499Changed(p);} } double pos_X499() { return _X499; }
    void setPos_Y499(double p) { if (_Y499 != p) { _Y499 = p; emit pos_Y499Changed(p);} } double pos_Y499() { return _Y499; }
    void setPos_R499(double p) { if (_R499 != p) { _R499 = p; emit pos_R499Changed(p);} } double pos_R499() { return _R499; }
    void setPos_X500(double p) { if (_X500 != p) { _X500 = p; emit pos_X500Changed(p);} } double pos_X500() { return _X500; }
    void setPos_Y500(double p) { if (_Y500 != p) { _Y500 = p; emit pos_Y500Changed(p);} } double pos_Y500() { return _Y500; }
    void setPos_R500(double p) { if (_R500 != p) { _R500 = p; emit pos_R500Changed(p);} } double pos_R500() { return _R500; }
    void setPos_X501(double p) { if (_X501 != p) { _X501 = p; emit pos_X501Changed(p);} } double pos_X501() { return _X501; }
    void setPos_Y501(double p) { if (_Y501 != p) { _Y501 = p; emit pos_Y501Changed(p);} } double pos_Y501() { return _Y501; }
    void setPos_R501(double p) { if (_R501 != p) { _R501 = p; emit pos_R501Changed(p);} } double pos_R501() { return _R501; }
    void setPos_X502(double p) { if (_X502 != p) { _X502 = p; emit pos_X502Changed(p);} } double pos_X502() { return _X502; }
    void setPos_Y502(double p) { if (_Y502 != p) { _Y502 = p; emit pos_Y502Changed(p);} } double pos_Y502() { return _Y502; }
    void setPos_R502(double p) { if (_R502 != p) { _R502 = p; emit pos_R502Changed(p);} } double pos_R502() { return _R502; }
    void setPos_X503(double p) { if (_X503 != p) { _X503 = p; emit pos_X503Changed(p);} } double pos_X503() { return _X503; }
    void setPos_Y503(double p) { if (_Y503 != p) { _Y503 = p; emit pos_Y503Changed(p);} } double pos_Y503() { return _Y503; }
    void setPos_R503(double p) { if (_R503 != p) { _R503 = p; emit pos_R503Changed(p);} } double pos_R503() { return _R503; }
    void setPos_X504(double p) { if (_X504 != p) { _X504 = p; emit pos_X504Changed(p);} } double pos_X504() { return _X504; }
    void setPos_Y504(double p) { if (_Y504 != p) { _Y504 = p; emit pos_Y504Changed(p);} } double pos_Y504() { return _Y504; }
    void setPos_R504(double p) { if (_R504 != p) { _R504 = p; emit pos_R504Changed(p);} } double pos_R504() { return _R504; }
    void setPos_X505(double p) { if (_X505 != p) { _X505 = p; emit pos_X505Changed(p);} } double pos_X505() { return _X505; }
    void setPos_Y505(double p) { if (_Y505 != p) { _Y505 = p; emit pos_Y505Changed(p);} } double pos_Y505() { return _Y505; }
    void setPos_R505(double p) { if (_R505 != p) { _R505 = p; emit pos_R505Changed(p);} } double pos_R505() { return _R505; }
    void setPos_X506(double p) { if (_X506 != p) { _X506 = p; emit pos_X506Changed(p);} } double pos_X506() { return _X506; }
    void setPos_Y506(double p) { if (_Y506 != p) { _Y506 = p; emit pos_Y506Changed(p);} } double pos_Y506() { return _Y506; }
    void setPos_R506(double p) { if (_R506 != p) { _R506 = p; emit pos_R506Changed(p);} } double pos_R506() { return _R506; }
    void setPos_X507(double p) { if (_X507 != p) { _X507 = p; emit pos_X507Changed(p);} } double pos_X507() { return _X507; }
    void setPos_Y507(double p) { if (_Y507 != p) { _Y507 = p; emit pos_Y507Changed(p);} } double pos_Y507() { return _Y507; }
    void setPos_R507(double p) { if (_R507 != p) { _R507 = p; emit pos_R507Changed(p);} } double pos_R507() { return _R507; }
    void setPos_X508(double p) { if (_X508 != p) { _X508 = p; emit pos_X508Changed(p);} } double pos_X508() { return _X508; }
    void setPos_Y508(double p) { if (_Y508 != p) { _Y508 = p; emit pos_Y508Changed(p);} } double pos_Y508() { return _Y508; }
    void setPos_R508(double p) { if (_R508 != p) { _R508 = p; emit pos_R508Changed(p);} } double pos_R508() { return _R508; }
    void setPos_X509(double p) { if (_X509 != p) { _X509 = p; emit pos_X509Changed(p);} } double pos_X509() { return _X509; }
    void setPos_Y509(double p) { if (_Y509 != p) { _Y509 = p; emit pos_Y509Changed(p);} } double pos_Y509() { return _Y509; }
    void setPos_R509(double p) { if (_R509 != p) { _R509 = p; emit pos_R509Changed(p);} } double pos_R509() { return _R509; }
    void setPos_X510(double p) { if (_X510 != p) { _X510 = p; emit pos_X510Changed(p);} } double pos_X510() { return _X510; }
    void setPos_Y510(double p) { if (_Y510 != p) { _Y510 = p; emit pos_Y510Changed(p);} } double pos_Y510() { return _Y510; }
    void setPos_R510(double p) { if (_R510 != p) { _R510 = p; emit pos_R510Changed(p);} } double pos_R510() { return _R510; }
    void setPos_X511(double p) { if (_X511 != p) { _X511 = p; emit pos_X511Changed(p);} } double pos_X511() { return _X511; }
    void setPos_Y511(double p) { if (_Y511 != p) { _Y511 = p; emit pos_Y511Changed(p);} } double pos_Y511() { return _Y511; }
    void setPos_R511(double p) { if (_R511 != p) { _R511 = p; emit pos_R511Changed(p);} } double pos_R511() { return _R511; }
    void setPos_X512(double p) { if (_X512 != p) { _X512 = p; emit pos_X512Changed(p);} } double pos_X512() { return _X512; }
    void setPos_Y512(double p) { if (_Y512 != p) { _Y512 = p; emit pos_Y512Changed(p);} } double pos_Y512() { return _Y512; }
    void setPos_R512(double p) { if (_R512 != p) { _R512 = p; emit pos_R512Changed(p);} } double pos_R512() { return _R512; }
    void setPos_X513(double p) { if (_X513 != p) { _X513 = p; emit pos_X513Changed(p);} } double pos_X513() { return _X513; }
    void setPos_Y513(double p) { if (_Y513 != p) { _Y513 = p; emit pos_Y513Changed(p);} } double pos_Y513() { return _Y513; }
    void setPos_R513(double p) { if (_R513 != p) { _R513 = p; emit pos_R513Changed(p);} } double pos_R513() { return _R513; }
    void setPos_X514(double p) { if (_X514 != p) { _X514 = p; emit pos_X514Changed(p);} } double pos_X514() { return _X514; }
    void setPos_Y514(double p) { if (_Y514 != p) { _Y514 = p; emit pos_Y514Changed(p);} } double pos_Y514() { return _Y514; }
    void setPos_R514(double p) { if (_R514 != p) { _R514 = p; emit pos_R514Changed(p);} } double pos_R514() { return _R514; }
    void setPos_X515(double p) { if (_X515 != p) { _X515 = p; emit pos_X515Changed(p);} } double pos_X515() { return _X515; }
    void setPos_Y515(double p) { if (_Y515 != p) { _Y515 = p; emit pos_Y515Changed(p);} } double pos_Y515() { return _Y515; }
    void setPos_R515(double p) { if (_R515 != p) { _R515 = p; emit pos_R515Changed(p);} } double pos_R515() { return _R515; }
    void setPos_X516(double p) { if (_X516 != p) { _X516 = p; emit pos_X516Changed(p);} } double pos_X516() { return _X516; }
    void setPos_Y516(double p) { if (_Y516 != p) { _Y516 = p; emit pos_Y516Changed(p);} } double pos_Y516() { return _Y516; }
    void setPos_R516(double p) { if (_R516 != p) { _R516 = p; emit pos_R516Changed(p);} } double pos_R516() { return _R516; }
    void setPos_X517(double p) { if (_X517 != p) { _X517 = p; emit pos_X517Changed(p);} } double pos_X517() { return _X517; }
    void setPos_Y517(double p) { if (_Y517 != p) { _Y517 = p; emit pos_Y517Changed(p);} } double pos_Y517() { return _Y517; }
    void setPos_R517(double p) { if (_R517 != p) { _R517 = p; emit pos_R517Changed(p);} } double pos_R517() { return _R517; }
    void setPos_X518(double p) { if (_X518 != p) { _X518 = p; emit pos_X518Changed(p);} } double pos_X518() { return _X518; }
    void setPos_Y518(double p) { if (_Y518 != p) { _Y518 = p; emit pos_Y518Changed(p);} } double pos_Y518() { return _Y518; }
    void setPos_R518(double p) { if (_R518 != p) { _R518 = p; emit pos_R518Changed(p);} } double pos_R518() { return _R518; }
    void setPos_X519(double p) { if (_X519 != p) { _X519 = p; emit pos_X519Changed(p);} } double pos_X519() { return _X519; }
    void setPos_Y519(double p) { if (_Y519 != p) { _Y519 = p; emit pos_Y519Changed(p);} } double pos_Y519() { return _Y519; }
    void setPos_R519(double p) { if (_R519 != p) { _R519 = p; emit pos_R519Changed(p);} } double pos_R519() { return _R519; }
    void setPos_X520(double p) { if (_X520 != p) { _X520 = p; emit pos_X520Changed(p);} } double pos_X520() { return _X520; }
    void setPos_Y520(double p) { if (_Y520 != p) { _Y520 = p; emit pos_Y520Changed(p);} } double pos_Y520() { return _Y520; }
    void setPos_R520(double p) { if (_R520 != p) { _R520 = p; emit pos_R520Changed(p);} } double pos_R520() { return _R520; }
    void setPos_X521(double p) { if (_X521 != p) { _X521 = p; emit pos_X521Changed(p);} } double pos_X521() { return _X521; }
    void setPos_Y521(double p) { if (_Y521 != p) { _Y521 = p; emit pos_Y521Changed(p);} } double pos_Y521() { return _Y521; }
    void setPos_R521(double p) { if (_R521 != p) { _R521 = p; emit pos_R521Changed(p);} } double pos_R521() { return _R521; }
    void setPos_X522(double p) { if (_X522 != p) { _X522 = p; emit pos_X522Changed(p);} } double pos_X522() { return _X522; }
    void setPos_Y522(double p) { if (_Y522 != p) { _Y522 = p; emit pos_Y522Changed(p);} } double pos_Y522() { return _Y522; }
    void setPos_R522(double p) { if (_R522 != p) { _R522 = p; emit pos_R522Changed(p);} } double pos_R522() { return _R522; }
    void setPos_X523(double p) { if (_X523 != p) { _X523 = p; emit pos_X523Changed(p);} } double pos_X523() { return _X523; }
    void setPos_Y523(double p) { if (_Y523 != p) { _Y523 = p; emit pos_Y523Changed(p);} } double pos_Y523() { return _Y523; }
    void setPos_R523(double p) { if (_R523 != p) { _R523 = p; emit pos_R523Changed(p);} } double pos_R523() { return _R523; }
    void setPos_X524(double p) { if (_X524 != p) { _X524 = p; emit pos_X524Changed(p);} } double pos_X524() { return _X524; }
    void setPos_Y524(double p) { if (_Y524 != p) { _Y524 = p; emit pos_Y524Changed(p);} } double pos_Y524() { return _Y524; }
    void setPos_R524(double p) { if (_R524 != p) { _R524 = p; emit pos_R524Changed(p);} } double pos_R524() { return _R524; }
    void setPos_X525(double p) { if (_X525 != p) { _X525 = p; emit pos_X525Changed(p);} } double pos_X525() { return _X525; }
    void setPos_Y525(double p) { if (_Y525 != p) { _Y525 = p; emit pos_Y525Changed(p);} } double pos_Y525() { return _Y525; }
    void setPos_R525(double p) { if (_R525 != p) { _R525 = p; emit pos_R525Changed(p);} } double pos_R525() { return _R525; }
    void setPos_X526(double p) { if (_X526 != p) { _X526 = p; emit pos_X526Changed(p);} } double pos_X526() { return _X526; }
    void setPos_Y526(double p) { if (_Y526 != p) { _Y526 = p; emit pos_Y526Changed(p);} } double pos_Y526() { return _Y526; }
    void setPos_R526(double p) { if (_R526 != p) { _R526 = p; emit pos_R526Changed(p);} } double pos_R526() { return _R526; }
    void setPos_X527(double p) { if (_X527 != p) { _X527 = p; emit pos_X527Changed(p);} } double pos_X527() { return _X527; }
    void setPos_Y527(double p) { if (_Y527 != p) { _Y527 = p; emit pos_Y527Changed(p);} } double pos_Y527() { return _Y527; }
    void setPos_R527(double p) { if (_R527 != p) { _R527 = p; emit pos_R527Changed(p);} } double pos_R527() { return _R527; }
    void setPos_X528(double p) { if (_X528 != p) { _X528 = p; emit pos_X528Changed(p);} } double pos_X528() { return _X528; }
    void setPos_Y528(double p) { if (_Y528 != p) { _Y528 = p; emit pos_Y528Changed(p);} } double pos_Y528() { return _Y528; }
    void setPos_R528(double p) { if (_R528 != p) { _R528 = p; emit pos_R528Changed(p);} } double pos_R528() { return _R528; }
    void setPos_X529(double p) { if (_X529 != p) { _X529 = p; emit pos_X529Changed(p);} } double pos_X529() { return _X529; }
    void setPos_Y529(double p) { if (_Y529 != p) { _Y529 = p; emit pos_Y529Changed(p);} } double pos_Y529() { return _Y529; }
    void setPos_R529(double p) { if (_R529 != p) { _R529 = p; emit pos_R529Changed(p);} } double pos_R529() { return _R529; }
    void setPos_X530(double p) { if (_X530 != p) { _X530 = p; emit pos_X530Changed(p);} } double pos_X530() { return _X530; }
    void setPos_Y530(double p) { if (_Y530 != p) { _Y530 = p; emit pos_Y530Changed(p);} } double pos_Y530() { return _Y530; }
    void setPos_R530(double p) { if (_R530 != p) { _R530 = p; emit pos_R530Changed(p);} } double pos_R530() { return _R530; }
    void setPos_X531(double p) { if (_X531 != p) { _X531 = p; emit pos_X531Changed(p);} } double pos_X531() { return _X531; }
    void setPos_Y531(double p) { if (_Y531 != p) { _Y531 = p; emit pos_Y531Changed(p);} } double pos_Y531() { return _Y531; }
    void setPos_R531(double p) { if (_R531 != p) { _R531 = p; emit pos_R531Changed(p);} } double pos_R531() { return _R531; }
    void setPos_X532(double p) { if (_X532 != p) { _X532 = p; emit pos_X532Changed(p);} } double pos_X532() { return _X532; }
    void setPos_Y532(double p) { if (_Y532 != p) { _Y532 = p; emit pos_Y532Changed(p);} } double pos_Y532() { return _Y532; }
    void setPos_R532(double p) { if (_R532 != p) { _R532 = p; emit pos_R532Changed(p);} } double pos_R532() { return _R532; }
    void setPos_X533(double p) { if (_X533 != p) { _X533 = p; emit pos_X533Changed(p);} } double pos_X533() { return _X533; }
    void setPos_Y533(double p) { if (_Y533 != p) { _Y533 = p; emit pos_Y533Changed(p);} } double pos_Y533() { return _Y533; }
    void setPos_R533(double p) { if (_R533 != p) { _R533 = p; emit pos_R533Changed(p);} } double pos_R533() { return _R533; }
    void setPos_X534(double p) { if (_X534 != p) { _X534 = p; emit pos_X534Changed(p);} } double pos_X534() { return _X534; }
    void setPos_Y534(double p) { if (_Y534 != p) { _Y534 = p; emit pos_Y534Changed(p);} } double pos_Y534() { return _Y534; }
    void setPos_R534(double p) { if (_R534 != p) { _R534 = p; emit pos_R534Changed(p);} } double pos_R534() { return _R534; }
    void setPos_X535(double p) { if (_X535 != p) { _X535 = p; emit pos_X535Changed(p);} } double pos_X535() { return _X535; }
    void setPos_Y535(double p) { if (_Y535 != p) { _Y535 = p; emit pos_Y535Changed(p);} } double pos_Y535() { return _Y535; }
    void setPos_R535(double p) { if (_R535 != p) { _R535 = p; emit pos_R535Changed(p);} } double pos_R535() { return _R535; }
    void setPos_X536(double p) { if (_X536 != p) { _X536 = p; emit pos_X536Changed(p);} } double pos_X536() { return _X536; }
    void setPos_Y536(double p) { if (_Y536 != p) { _Y536 = p; emit pos_Y536Changed(p);} } double pos_Y536() { return _Y536; }
    void setPos_R536(double p) { if (_R536 != p) { _R536 = p; emit pos_R536Changed(p);} } double pos_R536() { return _R536; }
    void setPos_X537(double p) { if (_X537 != p) { _X537 = p; emit pos_X537Changed(p);} } double pos_X537() { return _X537; }
    void setPos_Y537(double p) { if (_Y537 != p) { _Y537 = p; emit pos_Y537Changed(p);} } double pos_Y537() { return _Y537; }
    void setPos_R537(double p) { if (_R537 != p) { _R537 = p; emit pos_R537Changed(p);} } double pos_R537() { return _R537; }
    void setPos_X538(double p) { if (_X538 != p) { _X538 = p; emit pos_X538Changed(p);} } double pos_X538() { return _X538; }
    void setPos_Y538(double p) { if (_Y538 != p) { _Y538 = p; emit pos_Y538Changed(p);} } double pos_Y538() { return _Y538; }
    void setPos_R538(double p) { if (_R538 != p) { _R538 = p; emit pos_R538Changed(p);} } double pos_R538() { return _R538; }
    void setPos_X539(double p) { if (_X539 != p) { _X539 = p; emit pos_X539Changed(p);} } double pos_X539() { return _X539; }
    void setPos_Y539(double p) { if (_Y539 != p) { _Y539 = p; emit pos_Y539Changed(p);} } double pos_Y539() { return _Y539; }
    void setPos_R539(double p) { if (_R539 != p) { _R539 = p; emit pos_R539Changed(p);} } double pos_R539() { return _R539; }
    void setPos_X540(double p) { if (_X540 != p) { _X540 = p; emit pos_X540Changed(p);} } double pos_X540() { return _X540; }
    void setPos_Y540(double p) { if (_Y540 != p) { _Y540 = p; emit pos_Y540Changed(p);} } double pos_Y540() { return _Y540; }
    void setPos_R540(double p) { if (_R540 != p) { _R540 = p; emit pos_R540Changed(p);} } double pos_R540() { return _R540; }
    void setPos_X541(double p) { if (_X541 != p) { _X541 = p; emit pos_X541Changed(p);} } double pos_X541() { return _X541; }
    void setPos_Y541(double p) { if (_Y541 != p) { _Y541 = p; emit pos_Y541Changed(p);} } double pos_Y541() { return _Y541; }
    void setPos_R541(double p) { if (_R541 != p) { _R541 = p; emit pos_R541Changed(p);} } double pos_R541() { return _R541; }
    void setPos_X542(double p) { if (_X542 != p) { _X542 = p; emit pos_X542Changed(p);} } double pos_X542() { return _X542; }
    void setPos_Y542(double p) { if (_Y542 != p) { _Y542 = p; emit pos_Y542Changed(p);} } double pos_Y542() { return _Y542; }
    void setPos_R542(double p) { if (_R542 != p) { _R542 = p; emit pos_R542Changed(p);} } double pos_R542() { return _R542; }
    void setPos_X543(double p) { if (_X543 != p) { _X543 = p; emit pos_X543Changed(p);} } double pos_X543() { return _X543; }
    void setPos_Y543(double p) { if (_Y543 != p) { _Y543 = p; emit pos_Y543Changed(p);} } double pos_Y543() { return _Y543; }
    void setPos_R543(double p) { if (_R543 != p) { _R543 = p; emit pos_R543Changed(p);} } double pos_R543() { return _R543; }
    void setPos_X544(double p) { if (_X544 != p) { _X544 = p; emit pos_X544Changed(p);} } double pos_X544() { return _X544; }
    void setPos_Y544(double p) { if (_Y544 != p) { _Y544 = p; emit pos_Y544Changed(p);} } double pos_Y544() { return _Y544; }
    void setPos_R544(double p) { if (_R544 != p) { _R544 = p; emit pos_R544Changed(p);} } double pos_R544() { return _R544; }
    void setPos_X545(double p) { if (_X545 != p) { _X545 = p; emit pos_X545Changed(p);} } double pos_X545() { return _X545; }
    void setPos_Y545(double p) { if (_Y545 != p) { _Y545 = p; emit pos_Y545Changed(p);} } double pos_Y545() { return _Y545; }
    void setPos_R545(double p) { if (_R545 != p) { _R545 = p; emit pos_R545Changed(p);} } double pos_R545() { return _R545; }
    void setPos_X546(double p) { if (_X546 != p) { _X546 = p; emit pos_X546Changed(p);} } double pos_X546() { return _X546; }
    void setPos_Y546(double p) { if (_Y546 != p) { _Y546 = p; emit pos_Y546Changed(p);} } double pos_Y546() { return _Y546; }
    void setPos_R546(double p) { if (_R546 != p) { _R546 = p; emit pos_R546Changed(p);} } double pos_R546() { return _R546; }
    void setPos_X547(double p) { if (_X547 != p) { _X547 = p; emit pos_X547Changed(p);} } double pos_X547() { return _X547; }
    void setPos_Y547(double p) { if (_Y547 != p) { _Y547 = p; emit pos_Y547Changed(p);} } double pos_Y547() { return _Y547; }
    void setPos_R547(double p) { if (_R547 != p) { _R547 = p; emit pos_R547Changed(p);} } double pos_R547() { return _R547; }
    void setPos_X548(double p) { if (_X548 != p) { _X548 = p; emit pos_X548Changed(p);} } double pos_X548() { return _X548; }
    void setPos_Y548(double p) { if (_Y548 != p) { _Y548 = p; emit pos_Y548Changed(p);} } double pos_Y548() { return _Y548; }
    void setPos_R548(double p) { if (_R548 != p) { _R548 = p; emit pos_R548Changed(p);} } double pos_R548() { return _R548; }
    void setPos_X549(double p) { if (_X549 != p) { _X549 = p; emit pos_X549Changed(p);} } double pos_X549() { return _X549; }
    void setPos_Y549(double p) { if (_Y549 != p) { _Y549 = p; emit pos_Y549Changed(p);} } double pos_Y549() { return _Y549; }
    void setPos_R549(double p) { if (_R549 != p) { _R549 = p; emit pos_R549Changed(p);} } double pos_R549() { return _R549; }
    void setPos_X550(double p) { if (_X550 != p) { _X550 = p; emit pos_X550Changed(p);} } double pos_X550() { return _X550; }
    void setPos_Y550(double p) { if (_Y550 != p) { _Y550 = p; emit pos_Y550Changed(p);} } double pos_Y550() { return _Y550; }
    void setPos_R550(double p) { if (_R550 != p) { _R550 = p; emit pos_R550Changed(p);} } double pos_R550() { return _R550; }
    void setPos_X551(double p) { if (_X551 != p) { _X551 = p; emit pos_X551Changed(p);} } double pos_X551() { return _X551; }
    void setPos_Y551(double p) { if (_Y551 != p) { _Y551 = p; emit pos_Y551Changed(p);} } double pos_Y551() { return _Y551; }
    void setPos_R551(double p) { if (_R551 != p) { _R551 = p; emit pos_R551Changed(p);} } double pos_R551() { return _R551; }
    void setPos_X552(double p) { if (_X552 != p) { _X552 = p; emit pos_X552Changed(p);} } double pos_X552() { return _X552; }
    void setPos_Y552(double p) { if (_Y552 != p) { _Y552 = p; emit pos_Y552Changed(p);} } double pos_Y552() { return _Y552; }
    void setPos_R552(double p) { if (_R552 != p) { _R552 = p; emit pos_R552Changed(p);} } double pos_R552() { return _R552; }
    void setPos_X553(double p) { if (_X553 != p) { _X553 = p; emit pos_X553Changed(p);} } double pos_X553() { return _X553; }
    void setPos_Y553(double p) { if (_Y553 != p) { _Y553 = p; emit pos_Y553Changed(p);} } double pos_Y553() { return _Y553; }
    void setPos_R553(double p) { if (_R553 != p) { _R553 = p; emit pos_R553Changed(p);} } double pos_R553() { return _R553; }
    void setPos_X554(double p) { if (_X554 != p) { _X554 = p; emit pos_X554Changed(p);} } double pos_X554() { return _X554; }
    void setPos_Y554(double p) { if (_Y554 != p) { _Y554 = p; emit pos_Y554Changed(p);} } double pos_Y554() { return _Y554; }
    void setPos_R554(double p) { if (_R554 != p) { _R554 = p; emit pos_R554Changed(p);} } double pos_R554() { return _R554; }
    void setPos_X555(double p) { if (_X555 != p) { _X555 = p; emit pos_X555Changed(p);} } double pos_X555() { return _X555; }
    void setPos_Y555(double p) { if (_Y555 != p) { _Y555 = p; emit pos_Y555Changed(p);} } double pos_Y555() { return _Y555; }
    void setPos_R555(double p) { if (_R555 != p) { _R555 = p; emit pos_R555Changed(p);} } double pos_R555() { return _R555; }
    void setPos_X556(double p) { if (_X556 != p) { _X556 = p; emit pos_X556Changed(p);} } double pos_X556() { return _X556; }
    void setPos_Y556(double p) { if (_Y556 != p) { _Y556 = p; emit pos_Y556Changed(p);} } double pos_Y556() { return _Y556; }
    void setPos_R556(double p) { if (_R556 != p) { _R556 = p; emit pos_R556Changed(p);} } double pos_R556() { return _R556; }
    void setPos_X557(double p) { if (_X557 != p) { _X557 = p; emit pos_X557Changed(p);} } double pos_X557() { return _X557; }
    void setPos_Y557(double p) { if (_Y557 != p) { _Y557 = p; emit pos_Y557Changed(p);} } double pos_Y557() { return _Y557; }
    void setPos_R557(double p) { if (_R557 != p) { _R557 = p; emit pos_R557Changed(p);} } double pos_R557() { return _R557; }
    void setPos_X558(double p) { if (_X558 != p) { _X558 = p; emit pos_X558Changed(p);} } double pos_X558() { return _X558; }
    void setPos_Y558(double p) { if (_Y558 != p) { _Y558 = p; emit pos_Y558Changed(p);} } double pos_Y558() { return _Y558; }
    void setPos_R558(double p) { if (_R558 != p) { _R558 = p; emit pos_R558Changed(p);} } double pos_R558() { return _R558; }
    void setPos_X559(double p) { if (_X559 != p) { _X559 = p; emit pos_X559Changed(p);} } double pos_X559() { return _X559; }
    void setPos_Y559(double p) { if (_Y559 != p) { _Y559 = p; emit pos_Y559Changed(p);} } double pos_Y559() { return _Y559; }
    void setPos_R559(double p) { if (_R559 != p) { _R559 = p; emit pos_R559Changed(p);} } double pos_R559() { return _R559; }
    void setPos_X560(double p) { if (_X560 != p) { _X560 = p; emit pos_X560Changed(p);} } double pos_X560() { return _X560; }
    void setPos_Y560(double p) { if (_Y560 != p) { _Y560 = p; emit pos_Y560Changed(p);} } double pos_Y560() { return _Y560; }
    void setPos_R560(double p) { if (_R560 != p) { _R560 = p; emit pos_R560Changed(p);} } double pos_R560() { return _R560; }
    void setPos_X561(double p) { if (_X561 != p) { _X561 = p; emit pos_X561Changed(p);} } double pos_X561() { return _X561; }
    void setPos_Y561(double p) { if (_Y561 != p) { _Y561 = p; emit pos_Y561Changed(p);} } double pos_Y561() { return _Y561; }
    void setPos_R561(double p) { if (_R561 != p) { _R561 = p; emit pos_R561Changed(p);} } double pos_R561() { return _R561; }
    void setPos_X562(double p) { if (_X562 != p) { _X562 = p; emit pos_X562Changed(p);} } double pos_X562() { return _X562; }
    void setPos_Y562(double p) { if (_Y562 != p) { _Y562 = p; emit pos_Y562Changed(p);} } double pos_Y562() { return _Y562; }
    void setPos_R562(double p) { if (_R562 != p) { _R562 = p; emit pos_R562Changed(p);} } double pos_R562() { return _R562; }
    void setPos_X563(double p) { if (_X563 != p) { _X563 = p; emit pos_X563Changed(p);} } double pos_X563() { return _X563; }
    void setPos_Y563(double p) { if (_Y563 != p) { _Y563 = p; emit pos_Y563Changed(p);} } double pos_Y563() { return _Y563; }
    void setPos_R563(double p) { if (_R563 != p) { _R563 = p; emit pos_R563Changed(p);} } double pos_R563() { return _R563; }
    void setPos_X564(double p) { if (_X564 != p) { _X564 = p; emit pos_X564Changed(p);} } double pos_X564() { return _X564; }
    void setPos_Y564(double p) { if (_Y564 != p) { _Y564 = p; emit pos_Y564Changed(p);} } double pos_Y564() { return _Y564; }
    void setPos_R564(double p) { if (_R564 != p) { _R564 = p; emit pos_R564Changed(p);} } double pos_R564() { return _R564; }
    void setPos_X565(double p) { if (_X565 != p) { _X565 = p; emit pos_X565Changed(p);} } double pos_X565() { return _X565; }
    void setPos_Y565(double p) { if (_Y565 != p) { _Y565 = p; emit pos_Y565Changed(p);} } double pos_Y565() { return _Y565; }
    void setPos_R565(double p) { if (_R565 != p) { _R565 = p; emit pos_R565Changed(p);} } double pos_R565() { return _R565; }
    void setPos_X566(double p) { if (_X566 != p) { _X566 = p; emit pos_X566Changed(p);} } double pos_X566() { return _X566; }
    void setPos_Y566(double p) { if (_Y566 != p) { _Y566 = p; emit pos_Y566Changed(p);} } double pos_Y566() { return _Y566; }
    void setPos_R566(double p) { if (_R566 != p) { _R566 = p; emit pos_R566Changed(p);} } double pos_R566() { return _R566; }
    void setPos_X567(double p) { if (_X567 != p) { _X567 = p; emit pos_X567Changed(p);} } double pos_X567() { return _X567; }
    void setPos_Y567(double p) { if (_Y567 != p) { _Y567 = p; emit pos_Y567Changed(p);} } double pos_Y567() { return _Y567; }
    void setPos_R567(double p) { if (_R567 != p) { _R567 = p; emit pos_R567Changed(p);} } double pos_R567() { return _R567; }
    void setPos_X568(double p) { if (_X568 != p) { _X568 = p; emit pos_X568Changed(p);} } double pos_X568() { return _X568; }
    void setPos_Y568(double p) { if (_Y568 != p) { _Y568 = p; emit pos_Y568Changed(p);} } double pos_Y568() { return _Y568; }
    void setPos_R568(double p) { if (_R568 != p) { _R568 = p; emit pos_R568Changed(p);} } double pos_R568() { return _R568; }
    void setPos_X569(double p) { if (_X569 != p) { _X569 = p; emit pos_X569Changed(p);} } double pos_X569() { return _X569; }
    void setPos_Y569(double p) { if (_Y569 != p) { _Y569 = p; emit pos_Y569Changed(p);} } double pos_Y569() { return _Y569; }
    void setPos_R569(double p) { if (_R569 != p) { _R569 = p; emit pos_R569Changed(p);} } double pos_R569() { return _R569; }
    void setPos_X570(double p) { if (_X570 != p) { _X570 = p; emit pos_X570Changed(p);} } double pos_X570() { return _X570; }
    void setPos_Y570(double p) { if (_Y570 != p) { _Y570 = p; emit pos_Y570Changed(p);} } double pos_Y570() { return _Y570; }
    void setPos_R570(double p) { if (_R570 != p) { _R570 = p; emit pos_R570Changed(p);} } double pos_R570() { return _R570; }
    void setPos_X571(double p) { if (_X571 != p) { _X571 = p; emit pos_X571Changed(p);} } double pos_X571() { return _X571; }
    void setPos_Y571(double p) { if (_Y571 != p) { _Y571 = p; emit pos_Y571Changed(p);} } double pos_Y571() { return _Y571; }
    void setPos_R571(double p) { if (_R571 != p) { _R571 = p; emit pos_R571Changed(p);} } double pos_R571() { return _R571; }
    void setPos_X572(double p) { if (_X572 != p) { _X572 = p; emit pos_X572Changed(p);} } double pos_X572() { return _X572; }
    void setPos_Y572(double p) { if (_Y572 != p) { _Y572 = p; emit pos_Y572Changed(p);} } double pos_Y572() { return _Y572; }
    void setPos_R572(double p) { if (_R572 != p) { _R572 = p; emit pos_R572Changed(p);} } double pos_R572() { return _R572; }
    void setPos_X573(double p) { if (_X573 != p) { _X573 = p; emit pos_X573Changed(p);} } double pos_X573() { return _X573; }
    void setPos_Y573(double p) { if (_Y573 != p) { _Y573 = p; emit pos_Y573Changed(p);} } double pos_Y573() { return _Y573; }
    void setPos_R573(double p) { if (_R573 != p) { _R573 = p; emit pos_R573Changed(p);} } double pos_R573() { return _R573; }
    void setPos_X574(double p) { if (_X574 != p) { _X574 = p; emit pos_X574Changed(p);} } double pos_X574() { return _X574; }
    void setPos_Y574(double p) { if (_Y574 != p) { _Y574 = p; emit pos_Y574Changed(p);} } double pos_Y574() { return _Y574; }
    void setPos_R574(double p) { if (_R574 != p) { _R574 = p; emit pos_R574Changed(p);} } double pos_R574() { return _R574; }
    void setPos_X575(double p) { if (_X575 != p) { _X575 = p; emit pos_X575Changed(p);} } double pos_X575() { return _X575; }
    void setPos_Y575(double p) { if (_Y575 != p) { _Y575 = p; emit pos_Y575Changed(p);} } double pos_Y575() { return _Y575; }
    void setPos_R575(double p) { if (_R575 != p) { _R575 = p; emit pos_R575Changed(p);} } double pos_R575() { return _R575; }
    void setPos_X576(double p) { if (_X576 != p) { _X576 = p; emit pos_X576Changed(p);} } double pos_X576() { return _X576; }
    void setPos_Y576(double p) { if (_Y576 != p) { _Y576 = p; emit pos_Y576Changed(p);} } double pos_Y576() { return _Y576; }
    void setPos_R576(double p) { if (_R576 != p) { _R576 = p; emit pos_R576Changed(p);} } double pos_R576() { return _R576; }
    void setPos_X577(double p) { if (_X577 != p) { _X577 = p; emit pos_X577Changed(p);} } double pos_X577() { return _X577; }
    void setPos_Y577(double p) { if (_Y577 != p) { _Y577 = p; emit pos_Y577Changed(p);} } double pos_Y577() { return _Y577; }
    void setPos_R577(double p) { if (_R577 != p) { _R577 = p; emit pos_R577Changed(p);} } double pos_R577() { return _R577; }
    void setPos_X578(double p) { if (_X578 != p) { _X578 = p; emit pos_X578Changed(p);} } double pos_X578() { return _X578; }
    void setPos_Y578(double p) { if (_Y578 != p) { _Y578 = p; emit pos_Y578Changed(p);} } double pos_Y578() { return _Y578; }
    void setPos_R578(double p) { if (_R578 != p) { _R578 = p; emit pos_R578Changed(p);} } double pos_R578() { return _R578; }
    void setPos_X579(double p) { if (_X579 != p) { _X579 = p; emit pos_X579Changed(p);} } double pos_X579() { return _X579; }
    void setPos_Y579(double p) { if (_Y579 != p) { _Y579 = p; emit pos_Y579Changed(p);} } double pos_Y579() { return _Y579; }
    void setPos_R579(double p) { if (_R579 != p) { _R579 = p; emit pos_R579Changed(p);} } double pos_R579() { return _R579; }
    void setPos_X580(double p) { if (_X580 != p) { _X580 = p; emit pos_X580Changed(p);} } double pos_X580() { return _X580; }
    void setPos_Y580(double p) { if (_Y580 != p) { _Y580 = p; emit pos_Y580Changed(p);} } double pos_Y580() { return _Y580; }
    void setPos_R580(double p) { if (_R580 != p) { _R580 = p; emit pos_R580Changed(p);} } double pos_R580() { return _R580; }
    void setPos_X581(double p) { if (_X581 != p) { _X581 = p; emit pos_X581Changed(p);} } double pos_X581() { return _X581; }
    void setPos_Y581(double p) { if (_Y581 != p) { _Y581 = p; emit pos_Y581Changed(p);} } double pos_Y581() { return _Y581; }
    void setPos_R581(double p) { if (_R581 != p) { _R581 = p; emit pos_R581Changed(p);} } double pos_R581() { return _R581; }
    void setPos_X582(double p) { if (_X582 != p) { _X582 = p; emit pos_X582Changed(p);} } double pos_X582() { return _X582; }
    void setPos_Y582(double p) { if (_Y582 != p) { _Y582 = p; emit pos_Y582Changed(p);} } double pos_Y582() { return _Y582; }
    void setPos_R582(double p) { if (_R582 != p) { _R582 = p; emit pos_R582Changed(p);} } double pos_R582() { return _R582; }
    void setPos_X583(double p) { if (_X583 != p) { _X583 = p; emit pos_X583Changed(p);} } double pos_X583() { return _X583; }
    void setPos_Y583(double p) { if (_Y583 != p) { _Y583 = p; emit pos_Y583Changed(p);} } double pos_Y583() { return _Y583; }
    void setPos_R583(double p) { if (_R583 != p) { _R583 = p; emit pos_R583Changed(p);} } double pos_R583() { return _R583; }
    void setPos_X584(double p) { if (_X584 != p) { _X584 = p; emit pos_X584Changed(p);} } double pos_X584() { return _X584; }
    void setPos_Y584(double p) { if (_Y584 != p) { _Y584 = p; emit pos_Y584Changed(p);} } double pos_Y584() { return _Y584; }
    void setPos_R584(double p) { if (_R584 != p) { _R584 = p; emit pos_R584Changed(p);} } double pos_R584() { return _R584; }
    void setPos_X585(double p) { if (_X585 != p) { _X585 = p; emit pos_X585Changed(p);} } double pos_X585() { return _X585; }
    void setPos_Y585(double p) { if (_Y585 != p) { _Y585 = p; emit pos_Y585Changed(p);} } double pos_Y585() { return _Y585; }
    void setPos_R585(double p) { if (_R585 != p) { _R585 = p; emit pos_R585Changed(p);} } double pos_R585() { return _R585; }
    void setPos_X586(double p) { if (_X586 != p) { _X586 = p; emit pos_X586Changed(p);} } double pos_X586() { return _X586; }
    void setPos_Y586(double p) { if (_Y586 != p) { _Y586 = p; emit pos_Y586Changed(p);} } double pos_Y586() { return _Y586; }
    void setPos_R586(double p) { if (_R586 != p) { _R586 = p; emit pos_R586Changed(p);} } double pos_R586() { return _R586; }
    void setPos_X587(double p) { if (_X587 != p) { _X587 = p; emit pos_X587Changed(p);} } double pos_X587() { return _X587; }
    void setPos_Y587(double p) { if (_Y587 != p) { _Y587 = p; emit pos_Y587Changed(p);} } double pos_Y587() { return _Y587; }
    void setPos_R587(double p) { if (_R587 != p) { _R587 = p; emit pos_R587Changed(p);} } double pos_R587() { return _R587; }
    void setPos_X588(double p) { if (_X588 != p) { _X588 = p; emit pos_X588Changed(p);} } double pos_X588() { return _X588; }
    void setPos_Y588(double p) { if (_Y588 != p) { _Y588 = p; emit pos_Y588Changed(p);} } double pos_Y588() { return _Y588; }
    void setPos_R588(double p) { if (_R588 != p) { _R588 = p; emit pos_R588Changed(p);} } double pos_R588() { return _R588; }
    void setPos_X589(double p) { if (_X589 != p) { _X589 = p; emit pos_X589Changed(p);} } double pos_X589() { return _X589; }
    void setPos_Y589(double p) { if (_Y589 != p) { _Y589 = p; emit pos_Y589Changed(p);} } double pos_Y589() { return _Y589; }
    void setPos_R589(double p) { if (_R589 != p) { _R589 = p; emit pos_R589Changed(p);} } double pos_R589() { return _R589; }
    void setPos_X590(double p) { if (_X590 != p) { _X590 = p; emit pos_X590Changed(p);} } double pos_X590() { return _X590; }
    void setPos_Y590(double p) { if (_Y590 != p) { _Y590 = p; emit pos_Y590Changed(p);} } double pos_Y590() { return _Y590; }
    void setPos_R590(double p) { if (_R590 != p) { _R590 = p; emit pos_R590Changed(p);} } double pos_R590() { return _R590; }
    void setPos_X591(double p) { if (_X591 != p) { _X591 = p; emit pos_X591Changed(p);} } double pos_X591() { return _X591; }
    void setPos_Y591(double p) { if (_Y591 != p) { _Y591 = p; emit pos_Y591Changed(p);} } double pos_Y591() { return _Y591; }
    void setPos_R591(double p) { if (_R591 != p) { _R591 = p; emit pos_R591Changed(p);} } double pos_R591() { return _R591; }
    void setPos_X592(double p) { if (_X592 != p) { _X592 = p; emit pos_X592Changed(p);} } double pos_X592() { return _X592; }
    void setPos_Y592(double p) { if (_Y592 != p) { _Y592 = p; emit pos_Y592Changed(p);} } double pos_Y592() { return _Y592; }
    void setPos_R592(double p) { if (_R592 != p) { _R592 = p; emit pos_R592Changed(p);} } double pos_R592() { return _R592; }
    void setPos_X593(double p) { if (_X593 != p) { _X593 = p; emit pos_X593Changed(p);} } double pos_X593() { return _X593; }
    void setPos_Y593(double p) { if (_Y593 != p) { _Y593 = p; emit pos_Y593Changed(p);} } double pos_Y593() { return _Y593; }
    void setPos_R593(double p) { if (_R593 != p) { _R593 = p; emit pos_R593Changed(p);} } double pos_R593() { return _R593; }
    void setPos_X594(double p) { if (_X594 != p) { _X594 = p; emit pos_X594Changed(p);} } double pos_X594() { return _X594; }
    void setPos_Y594(double p) { if (_Y594 != p) { _Y594 = p; emit pos_Y594Changed(p);} } double pos_Y594() { return _Y594; }
    void setPos_R594(double p) { if (_R594 != p) { _R594 = p; emit pos_R594Changed(p);} } double pos_R594() { return _R594; }
    void setPos_X595(double p) { if (_X595 != p) { _X595 = p; emit pos_X595Changed(p);} } double pos_X595() { return _X595; }
    void setPos_Y595(double p) { if (_Y595 != p) { _Y595 = p; emit pos_Y595Changed(p);} } double pos_Y595() { return _Y595; }
    void setPos_R595(double p) { if (_R595 != p) { _R595 = p; emit pos_R595Changed(p);} } double pos_R595() { return _R595; }
    void setPos_X596(double p) { if (_X596 != p) { _X596 = p; emit pos_X596Changed(p);} } double pos_X596() { return _X596; }
    void setPos_Y596(double p) { if (_Y596 != p) { _Y596 = p; emit pos_Y596Changed(p);} } double pos_Y596() { return _Y596; }
    void setPos_R596(double p) { if (_R596 != p) { _R596 = p; emit pos_R596Changed(p);} } double pos_R596() { return _R596; }
    void setPos_X597(double p) { if (_X597 != p) { _X597 = p; emit pos_X597Changed(p);} } double pos_X597() { return _X597; }
    void setPos_Y597(double p) { if (_Y597 != p) { _Y597 = p; emit pos_Y597Changed(p);} } double pos_Y597() { return _Y597; }
    void setPos_R597(double p) { if (_R597 != p) { _R597 = p; emit pos_R597Changed(p);} } double pos_R597() { return _R597; }
    void setPos_X598(double p) { if (_X598 != p) { _X598 = p; emit pos_X598Changed(p);} } double pos_X598() { return _X598; }
    void setPos_Y598(double p) { if (_Y598 != p) { _Y598 = p; emit pos_Y598Changed(p);} } double pos_Y598() { return _Y598; }
    void setPos_R598(double p) { if (_R598 != p) { _R598 = p; emit pos_R598Changed(p);} } double pos_R598() { return _R598; }
    void setPos_X599(double p) { if (_X599 != p) { _X599 = p; emit pos_X599Changed(p);} } double pos_X599() { return _X599; }
    void setPos_Y599(double p) { if (_Y599 != p) { _Y599 = p; emit pos_Y599Changed(p);} } double pos_Y599() { return _Y599; }
    void setPos_R599(double p) { if (_R599 != p) { _R599 = p; emit pos_R599Changed(p);} } double pos_R599() { return _R599; }
    void setPos_X600(double p) { if (_X600 != p) { _X600 = p; emit pos_X600Changed(p);} } double pos_X600() { return _X600; }
    void setPos_Y600(double p) { if (_Y600 != p) { _Y600 = p; emit pos_Y600Changed(p);} } double pos_Y600() { return _Y600; }
    void setPos_R600(double p) { if (_R600 != p) { _R600 = p; emit pos_R600Changed(p);} } double pos_R600() { return _R600; }
    void setPos_X601(double p) { if (_X601 != p) { _X601 = p; emit pos_X601Changed(p);} } double pos_X601() { return _X601; }
    void setPos_Y601(double p) { if (_Y601 != p) { _Y601 = p; emit pos_Y601Changed(p);} } double pos_Y601() { return _Y601; }
    void setPos_R601(double p) { if (_R601 != p) { _R601 = p; emit pos_R601Changed(p);} } double pos_R601() { return _R601; }
    void setPos_X602(double p) { if (_X602 != p) { _X602 = p; emit pos_X602Changed(p);} } double pos_X602() { return _X602; }
    void setPos_Y602(double p) { if (_Y602 != p) { _Y602 = p; emit pos_Y602Changed(p);} } double pos_Y602() { return _Y602; }
    void setPos_R602(double p) { if (_R602 != p) { _R602 = p; emit pos_R602Changed(p);} } double pos_R602() { return _R602; }
    void setPos_X603(double p) { if (_X603 != p) { _X603 = p; emit pos_X603Changed(p);} } double pos_X603() { return _X603; }
    void setPos_Y603(double p) { if (_Y603 != p) { _Y603 = p; emit pos_Y603Changed(p);} } double pos_Y603() { return _Y603; }
    void setPos_R603(double p) { if (_R603 != p) { _R603 = p; emit pos_R603Changed(p);} } double pos_R603() { return _R603; }
    void setPos_X604(double p) { if (_X604 != p) { _X604 = p; emit pos_X604Changed(p);} } double pos_X604() { return _X604; }
    void setPos_Y604(double p) { if (_Y604 != p) { _Y604 = p; emit pos_Y604Changed(p);} } double pos_Y604() { return _Y604; }
    void setPos_R604(double p) { if (_R604 != p) { _R604 = p; emit pos_R604Changed(p);} } double pos_R604() { return _R604; }
    void setPos_X605(double p) { if (_X605 != p) { _X605 = p; emit pos_X605Changed(p);} } double pos_X605() { return _X605; }
    void setPos_Y605(double p) { if (_Y605 != p) { _Y605 = p; emit pos_Y605Changed(p);} } double pos_Y605() { return _Y605; }
    void setPos_R605(double p) { if (_R605 != p) { _R605 = p; emit pos_R605Changed(p);} } double pos_R605() { return _R605; }
    void setPos_X606(double p) { if (_X606 != p) { _X606 = p; emit pos_X606Changed(p);} } double pos_X606() { return _X606; }
    void setPos_Y606(double p) { if (_Y606 != p) { _Y606 = p; emit pos_Y606Changed(p);} } double pos_Y606() { return _Y606; }
    void setPos_R606(double p) { if (_R606 != p) { _R606 = p; emit pos_R606Changed(p);} } double pos_R606() { return _R606; }
    void setPos_X607(double p) { if (_X607 != p) { _X607 = p; emit pos_X607Changed(p);} } double pos_X607() { return _X607; }
    void setPos_Y607(double p) { if (_Y607 != p) { _Y607 = p; emit pos_Y607Changed(p);} } double pos_Y607() { return _Y607; }
    void setPos_R607(double p) { if (_R607 != p) { _R607 = p; emit pos_R607Changed(p);} } double pos_R607() { return _R607; }
    void setPos_X608(double p) { if (_X608 != p) { _X608 = p; emit pos_X608Changed(p);} } double pos_X608() { return _X608; }
    void setPos_Y608(double p) { if (_Y608 != p) { _Y608 = p; emit pos_Y608Changed(p);} } double pos_Y608() { return _Y608; }
    void setPos_R608(double p) { if (_R608 != p) { _R608 = p; emit pos_R608Changed(p);} } double pos_R608() { return _R608; }
    void setPos_X609(double p) { if (_X609 != p) { _X609 = p; emit pos_X609Changed(p);} } double pos_X609() { return _X609; }
    void setPos_Y609(double p) { if (_Y609 != p) { _Y609 = p; emit pos_Y609Changed(p);} } double pos_Y609() { return _Y609; }
    void setPos_R609(double p) { if (_R609 != p) { _R609 = p; emit pos_R609Changed(p);} } double pos_R609() { return _R609; }
    void setPos_X610(double p) { if (_X610 != p) { _X610 = p; emit pos_X610Changed(p);} } double pos_X610() { return _X610; }
    void setPos_Y610(double p) { if (_Y610 != p) { _Y610 = p; emit pos_Y610Changed(p);} } double pos_Y610() { return _Y610; }
    void setPos_R610(double p) { if (_R610 != p) { _R610 = p; emit pos_R610Changed(p);} } double pos_R610() { return _R610; }
    void setPos_X611(double p) { if (_X611 != p) { _X611 = p; emit pos_X611Changed(p);} } double pos_X611() { return _X611; }
    void setPos_Y611(double p) { if (_Y611 != p) { _Y611 = p; emit pos_Y611Changed(p);} } double pos_Y611() { return _Y611; }
    void setPos_R611(double p) { if (_R611 != p) { _R611 = p; emit pos_R611Changed(p);} } double pos_R611() { return _R611; }
    void setPos_X612(double p) { if (_X612 != p) { _X612 = p; emit pos_X612Changed(p);} } double pos_X612() { return _X612; }
    void setPos_Y612(double p) { if (_Y612 != p) { _Y612 = p; emit pos_Y612Changed(p);} } double pos_Y612() { return _Y612; }
    void setPos_R612(double p) { if (_R612 != p) { _R612 = p; emit pos_R612Changed(p);} } double pos_R612() { return _R612; }
    void setPos_X613(double p) { if (_X613 != p) { _X613 = p; emit pos_X613Changed(p);} } double pos_X613() { return _X613; }
    void setPos_Y613(double p) { if (_Y613 != p) { _Y613 = p; emit pos_Y613Changed(p);} } double pos_Y613() { return _Y613; }
    void setPos_R613(double p) { if (_R613 != p) { _R613 = p; emit pos_R613Changed(p);} } double pos_R613() { return _R613; }
    void setPos_X614(double p) { if (_X614 != p) { _X614 = p; emit pos_X614Changed(p);} } double pos_X614() { return _X614; }
    void setPos_Y614(double p) { if (_Y614 != p) { _Y614 = p; emit pos_Y614Changed(p);} } double pos_Y614() { return _Y614; }
    void setPos_R614(double p) { if (_R614 != p) { _R614 = p; emit pos_R614Changed(p);} } double pos_R614() { return _R614; }
    void setPos_X615(double p) { if (_X615 != p) { _X615 = p; emit pos_X615Changed(p);} } double pos_X615() { return _X615; }
    void setPos_Y615(double p) { if (_Y615 != p) { _Y615 = p; emit pos_Y615Changed(p);} } double pos_Y615() { return _Y615; }
    void setPos_R615(double p) { if (_R615 != p) { _R615 = p; emit pos_R615Changed(p);} } double pos_R615() { return _R615; }
    void setPos_X616(double p) { if (_X616 != p) { _X616 = p; emit pos_X616Changed(p);} } double pos_X616() { return _X616; }
    void setPos_Y616(double p) { if (_Y616 != p) { _Y616 = p; emit pos_Y616Changed(p);} } double pos_Y616() { return _Y616; }
    void setPos_R616(double p) { if (_R616 != p) { _R616 = p; emit pos_R616Changed(p);} } double pos_R616() { return _R616; }
    void setPos_X617(double p) { if (_X617 != p) { _X617 = p; emit pos_X617Changed(p);} } double pos_X617() { return _X617; }
    void setPos_Y617(double p) { if (_Y617 != p) { _Y617 = p; emit pos_Y617Changed(p);} } double pos_Y617() { return _Y617; }
    void setPos_R617(double p) { if (_R617 != p) { _R617 = p; emit pos_R617Changed(p);} } double pos_R617() { return _R617; }
    void setPos_X618(double p) { if (_X618 != p) { _X618 = p; emit pos_X618Changed(p);} } double pos_X618() { return _X618; }
    void setPos_Y618(double p) { if (_Y618 != p) { _Y618 = p; emit pos_Y618Changed(p);} } double pos_Y618() { return _Y618; }
    void setPos_R618(double p) { if (_R618 != p) { _R618 = p; emit pos_R618Changed(p);} } double pos_R618() { return _R618; }
    void setPos_X619(double p) { if (_X619 != p) { _X619 = p; emit pos_X619Changed(p);} } double pos_X619() { return _X619; }
    void setPos_Y619(double p) { if (_Y619 != p) { _Y619 = p; emit pos_Y619Changed(p);} } double pos_Y619() { return _Y619; }
    void setPos_R619(double p) { if (_R619 != p) { _R619 = p; emit pos_R619Changed(p);} } double pos_R619() { return _R619; }
    void setPos_X620(double p) { if (_X620 != p) { _X620 = p; emit pos_X620Changed(p);} } double pos_X620() { return _X620; }
    void setPos_Y620(double p) { if (_Y620 != p) { _Y620 = p; emit pos_Y620Changed(p);} } double pos_Y620() { return _Y620; }
    void setPos_R620(double p) { if (_R620 != p) { _R620 = p; emit pos_R620Changed(p);} } double pos_R620() { return _R620; }
    void setPos_X621(double p) { if (_X621 != p) { _X621 = p; emit pos_X621Changed(p);} } double pos_X621() { return _X621; }
    void setPos_Y621(double p) { if (_Y621 != p) { _Y621 = p; emit pos_Y621Changed(p);} } double pos_Y621() { return _Y621; }
    void setPos_R621(double p) { if (_R621 != p) { _R621 = p; emit pos_R621Changed(p);} } double pos_R621() { return _R621; }
    void setPos_X622(double p) { if (_X622 != p) { _X622 = p; emit pos_X622Changed(p);} } double pos_X622() { return _X622; }
    void setPos_Y622(double p) { if (_Y622 != p) { _Y622 = p; emit pos_Y622Changed(p);} } double pos_Y622() { return _Y622; }
    void setPos_R622(double p) { if (_R622 != p) { _R622 = p; emit pos_R622Changed(p);} } double pos_R622() { return _R622; }
    void setPos_X623(double p) { if (_X623 != p) { _X623 = p; emit pos_X623Changed(p);} } double pos_X623() { return _X623; }
    void setPos_Y623(double p) { if (_Y623 != p) { _Y623 = p; emit pos_Y623Changed(p);} } double pos_Y623() { return _Y623; }
    void setPos_R623(double p) { if (_R623 != p) { _R623 = p; emit pos_R623Changed(p);} } double pos_R623() { return _R623; }
    void setPos_X624(double p) { if (_X624 != p) { _X624 = p; emit pos_X624Changed(p);} } double pos_X624() { return _X624; }
    void setPos_Y624(double p) { if (_Y624 != p) { _Y624 = p; emit pos_Y624Changed(p);} } double pos_Y624() { return _Y624; }
    void setPos_R624(double p) { if (_R624 != p) { _R624 = p; emit pos_R624Changed(p);} } double pos_R624() { return _R624; }
    void setPos_X625(double p) { if (_X625 != p) { _X625 = p; emit pos_X625Changed(p);} } double pos_X625() { return _X625; }
    void setPos_Y625(double p) { if (_Y625 != p) { _Y625 = p; emit pos_Y625Changed(p);} } double pos_Y625() { return _Y625; }
    void setPos_R625(double p) { if (_R625 != p) { _R625 = p; emit pos_R625Changed(p);} } double pos_R625() { return _R625; }
    void setPos_X626(double p) { if (_X626 != p) { _X626 = p; emit pos_X626Changed(p);} } double pos_X626() { return _X626; }
    void setPos_Y626(double p) { if (_Y626 != p) { _Y626 = p; emit pos_Y626Changed(p);} } double pos_Y626() { return _Y626; }
    void setPos_R626(double p) { if (_R626 != p) { _R626 = p; emit pos_R626Changed(p);} } double pos_R626() { return _R626; }
    void setPos_X627(double p) { if (_X627 != p) { _X627 = p; emit pos_X627Changed(p);} } double pos_X627() { return _X627; }
    void setPos_Y627(double p) { if (_Y627 != p) { _Y627 = p; emit pos_Y627Changed(p);} } double pos_Y627() { return _Y627; }
    void setPos_R627(double p) { if (_R627 != p) { _R627 = p; emit pos_R627Changed(p);} } double pos_R627() { return _R627; }
    void setPos_X628(double p) { if (_X628 != p) { _X628 = p; emit pos_X628Changed(p);} } double pos_X628() { return _X628; }
    void setPos_Y628(double p) { if (_Y628 != p) { _Y628 = p; emit pos_Y628Changed(p);} } double pos_Y628() { return _Y628; }
    void setPos_R628(double p) { if (_R628 != p) { _R628 = p; emit pos_R628Changed(p);} } double pos_R628() { return _R628; }
    void setPos_X629(double p) { if (_X629 != p) { _X629 = p; emit pos_X629Changed(p);} } double pos_X629() { return _X629; }
    void setPos_Y629(double p) { if (_Y629 != p) { _Y629 = p; emit pos_Y629Changed(p);} } double pos_Y629() { return _Y629; }
    void setPos_R629(double p) { if (_R629 != p) { _R629 = p; emit pos_R629Changed(p);} } double pos_R629() { return _R629; }
    void setPos_X630(double p) { if (_X630 != p) { _X630 = p; emit pos_X630Changed(p);} } double pos_X630() { return _X630; }
    void setPos_Y630(double p) { if (_Y630 != p) { _Y630 = p; emit pos_Y630Changed(p);} } double pos_Y630() { return _Y630; }
    void setPos_R630(double p) { if (_R630 != p) { _R630 = p; emit pos_R630Changed(p);} } double pos_R630() { return _R630; }
    void setPos_X631(double p) { if (_X631 != p) { _X631 = p; emit pos_X631Changed(p);} } double pos_X631() { return _X631; }
    void setPos_Y631(double p) { if (_Y631 != p) { _Y631 = p; emit pos_Y631Changed(p);} } double pos_Y631() { return _Y631; }
    void setPos_R631(double p) { if (_R631 != p) { _R631 = p; emit pos_R631Changed(p);} } double pos_R631() { return _R631; }
    void setPos_X632(double p) { if (_X632 != p) { _X632 = p; emit pos_X632Changed(p);} } double pos_X632() { return _X632; }
    void setPos_Y632(double p) { if (_Y632 != p) { _Y632 = p; emit pos_Y632Changed(p);} } double pos_Y632() { return _Y632; }
    void setPos_R632(double p) { if (_R632 != p) { _R632 = p; emit pos_R632Changed(p);} } double pos_R632() { return _R632; }
    void setPos_X633(double p) { if (_X633 != p) { _X633 = p; emit pos_X633Changed(p);} } double pos_X633() { return _X633; }
    void setPos_Y633(double p) { if (_Y633 != p) { _Y633 = p; emit pos_Y633Changed(p);} } double pos_Y633() { return _Y633; }
    void setPos_R633(double p) { if (_R633 != p) { _R633 = p; emit pos_R633Changed(p);} } double pos_R633() { return _R633; }
    void setPos_X634(double p) { if (_X634 != p) { _X634 = p; emit pos_X634Changed(p);} } double pos_X634() { return _X634; }
    void setPos_Y634(double p) { if (_Y634 != p) { _Y634 = p; emit pos_Y634Changed(p);} } double pos_Y634() { return _Y634; }
    void setPos_R634(double p) { if (_R634 != p) { _R634 = p; emit pos_R634Changed(p);} } double pos_R634() { return _R634; }
    void setPos_X635(double p) { if (_X635 != p) { _X635 = p; emit pos_X635Changed(p);} } double pos_X635() { return _X635; }
    void setPos_Y635(double p) { if (_Y635 != p) { _Y635 = p; emit pos_Y635Changed(p);} } double pos_Y635() { return _Y635; }
    void setPos_R635(double p) { if (_R635 != p) { _R635 = p; emit pos_R635Changed(p);} } double pos_R635() { return _R635; }
    void setPos_X636(double p) { if (_X636 != p) { _X636 = p; emit pos_X636Changed(p);} } double pos_X636() { return _X636; }
    void setPos_Y636(double p) { if (_Y636 != p) { _Y636 = p; emit pos_Y636Changed(p);} } double pos_Y636() { return _Y636; }
    void setPos_R636(double p) { if (_R636 != p) { _R636 = p; emit pos_R636Changed(p);} } double pos_R636() { return _R636; }
    void setPos_X637(double p) { if (_X637 != p) { _X637 = p; emit pos_X637Changed(p);} } double pos_X637() { return _X637; }
    void setPos_Y637(double p) { if (_Y637 != p) { _Y637 = p; emit pos_Y637Changed(p);} } double pos_Y637() { return _Y637; }
    void setPos_R637(double p) { if (_R637 != p) { _R637 = p; emit pos_R637Changed(p);} } double pos_R637() { return _R637; }
    void setPos_X638(double p) { if (_X638 != p) { _X638 = p; emit pos_X638Changed(p);} } double pos_X638() { return _X638; }
    void setPos_Y638(double p) { if (_Y638 != p) { _Y638 = p; emit pos_Y638Changed(p);} } double pos_Y638() { return _Y638; }
    void setPos_R638(double p) { if (_R638 != p) { _R638 = p; emit pos_R638Changed(p);} } double pos_R638() { return _R638; }
    void setPos_X639(double p) { if (_X639 != p) { _X639 = p; emit pos_X639Changed(p);} } double pos_X639() { return _X639; }
    void setPos_Y639(double p) { if (_Y639 != p) { _Y639 = p; emit pos_Y639Changed(p);} } double pos_Y639() { return _Y639; }
    void setPos_R639(double p) { if (_R639 != p) { _R639 = p; emit pos_R639Changed(p);} } double pos_R639() { return _R639; }
    void setPos_X640(double p) { if (_X640 != p) { _X640 = p; emit pos_X640Changed(p);} } double pos_X640() { return _X640; }
    void setPos_Y640(double p) { if (_Y640 != p) { _Y640 = p; emit pos_Y640Changed(p);} } double pos_Y640() { return _Y640; }
    void setPos_R640(double p) { if (_R640 != p) { _R640 = p; emit pos_R640Changed(p);} } double pos_R640() { return _R640; }
    void setPos_X641(double p) { if (_X641 != p) { _X641 = p; emit pos_X641Changed(p);} } double pos_X641() { return _X641; }
    void setPos_Y641(double p) { if (_Y641 != p) { _Y641 = p; emit pos_Y641Changed(p);} } double pos_Y641() { return _Y641; }
    void setPos_R641(double p) { if (_R641 != p) { _R641 = p; emit pos_R641Changed(p);} } double pos_R641() { return _R641; }
    void setPos_X642(double p) { if (_X642 != p) { _X642 = p; emit pos_X642Changed(p);} } double pos_X642() { return _X642; }
    void setPos_Y642(double p) { if (_Y642 != p) { _Y642 = p; emit pos_Y642Changed(p);} } double pos_Y642() { return _Y642; }
    void setPos_R642(double p) { if (_R642 != p) { _R642 = p; emit pos_R642Changed(p);} } double pos_R642() { return _R642; }
    void setPos_X643(double p) { if (_X643 != p) { _X643 = p; emit pos_X643Changed(p);} } double pos_X643() { return _X643; }
    void setPos_Y643(double p) { if (_Y643 != p) { _Y643 = p; emit pos_Y643Changed(p);} } double pos_Y643() { return _Y643; }
    void setPos_R643(double p) { if (_R643 != p) { _R643 = p; emit pos_R643Changed(p);} } double pos_R643() { return _R643; }
    void setPos_X644(double p) { if (_X644 != p) { _X644 = p; emit pos_X644Changed(p);} } double pos_X644() { return _X644; }
    void setPos_Y644(double p) { if (_Y644 != p) { _Y644 = p; emit pos_Y644Changed(p);} } double pos_Y644() { return _Y644; }
    void setPos_R644(double p) { if (_R644 != p) { _R644 = p; emit pos_R644Changed(p);} } double pos_R644() { return _R644; }
    void setPos_X645(double p) { if (_X645 != p) { _X645 = p; emit pos_X645Changed(p);} } double pos_X645() { return _X645; }
    void setPos_Y645(double p) { if (_Y645 != p) { _Y645 = p; emit pos_Y645Changed(p);} } double pos_Y645() { return _Y645; }
    void setPos_R645(double p) { if (_R645 != p) { _R645 = p; emit pos_R645Changed(p);} } double pos_R645() { return _R645; }
    void setPos_X646(double p) { if (_X646 != p) { _X646 = p; emit pos_X646Changed(p);} } double pos_X646() { return _X646; }
    void setPos_Y646(double p) { if (_Y646 != p) { _Y646 = p; emit pos_Y646Changed(p);} } double pos_Y646() { return _Y646; }
    void setPos_R646(double p) { if (_R646 != p) { _R646 = p; emit pos_R646Changed(p);} } double pos_R646() { return _R646; }
    void setPos_X647(double p) { if (_X647 != p) { _X647 = p; emit pos_X647Changed(p);} } double pos_X647() { return _X647; }
    void setPos_Y647(double p) { if (_Y647 != p) { _Y647 = p; emit pos_Y647Changed(p);} } double pos_Y647() { return _Y647; }
    void setPos_R647(double p) { if (_R647 != p) { _R647 = p; emit pos_R647Changed(p);} } double pos_R647() { return _R647; }
    void setPos_X648(double p) { if (_X648 != p) { _X648 = p; emit pos_X648Changed(p);} } double pos_X648() { return _X648; }
    void setPos_Y648(double p) { if (_Y648 != p) { _Y648 = p; emit pos_Y648Changed(p);} } double pos_Y648() { return _Y648; }
    void setPos_R648(double p) { if (_R648 != p) { _R648 = p; emit pos_R648Changed(p);} } double pos_R648() { return _R648; }
    void setPos_X649(double p) { if (_X649 != p) { _X649 = p; emit pos_X649Changed(p);} } double pos_X649() { return _X649; }
    void setPos_Y649(double p) { if (_Y649 != p) { _Y649 = p; emit pos_Y649Changed(p);} } double pos_Y649() { return _Y649; }
    void setPos_R649(double p) { if (_R649 != p) { _R649 = p; emit pos_R649Changed(p);} } double pos_R649() { return _R649; }
    void setPos_X650(double p) { if (_X650 != p) { _X650 = p; emit pos_X650Changed(p);} } double pos_X650() { return _X650; }
    void setPos_Y650(double p) { if (_Y650 != p) { _Y650 = p; emit pos_Y650Changed(p);} } double pos_Y650() { return _Y650; }
    void setPos_R650(double p) { if (_R650 != p) { _R650 = p; emit pos_R650Changed(p);} } double pos_R650() { return _R650; }
    void setPos_X651(double p) { if (_X651 != p) { _X651 = p; emit pos_X651Changed(p);} } double pos_X651() { return _X651; }
    void setPos_Y651(double p) { if (_Y651 != p) { _Y651 = p; emit pos_Y651Changed(p);} } double pos_Y651() { return _Y651; }
    void setPos_R651(double p) { if (_R651 != p) { _R651 = p; emit pos_R651Changed(p);} } double pos_R651() { return _R651; }
    void setPos_X652(double p) { if (_X652 != p) { _X652 = p; emit pos_X652Changed(p);} } double pos_X652() { return _X652; }
    void setPos_Y652(double p) { if (_Y652 != p) { _Y652 = p; emit pos_Y652Changed(p);} } double pos_Y652() { return _Y652; }
    void setPos_R652(double p) { if (_R652 != p) { _R652 = p; emit pos_R652Changed(p);} } double pos_R652() { return _R652; }
    void setPos_X653(double p) { if (_X653 != p) { _X653 = p; emit pos_X653Changed(p);} } double pos_X653() { return _X653; }
    void setPos_Y653(double p) { if (_Y653 != p) { _Y653 = p; emit pos_Y653Changed(p);} } double pos_Y653() { return _Y653; }
    void setPos_R653(double p) { if (_R653 != p) { _R653 = p; emit pos_R653Changed(p);} } double pos_R653() { return _R653; }
    void setPos_X654(double p) { if (_X654 != p) { _X654 = p; emit pos_X654Changed(p);} } double pos_X654() { return _X654; }
    void setPos_Y654(double p) { if (_Y654 != p) { _Y654 = p; emit pos_Y654Changed(p);} } double pos_Y654() { return _Y654; }
    void setPos_R654(double p) { if (_R654 != p) { _R654 = p; emit pos_R654Changed(p);} } double pos_R654() { return _R654; }
    void setPos_X655(double p) { if (_X655 != p) { _X655 = p; emit pos_X655Changed(p);} } double pos_X655() { return _X655; }
    void setPos_Y655(double p) { if (_Y655 != p) { _Y655 = p; emit pos_Y655Changed(p);} } double pos_Y655() { return _Y655; }
    void setPos_R655(double p) { if (_R655 != p) { _R655 = p; emit pos_R655Changed(p);} } double pos_R655() { return _R655; }
    void setPos_X656(double p) { if (_X656 != p) { _X656 = p; emit pos_X656Changed(p);} } double pos_X656() { return _X656; }
    void setPos_Y656(double p) { if (_Y656 != p) { _Y656 = p; emit pos_Y656Changed(p);} } double pos_Y656() { return _Y656; }
    void setPos_R656(double p) { if (_R656 != p) { _R656 = p; emit pos_R656Changed(p);} } double pos_R656() { return _R656; }
    void setPos_X657(double p) { if (_X657 != p) { _X657 = p; emit pos_X657Changed(p);} } double pos_X657() { return _X657; }
    void setPos_Y657(double p) { if (_Y657 != p) { _Y657 = p; emit pos_Y657Changed(p);} } double pos_Y657() { return _Y657; }
    void setPos_R657(double p) { if (_R657 != p) { _R657 = p; emit pos_R657Changed(p);} } double pos_R657() { return _R657; }
    void setPos_X658(double p) { if (_X658 != p) { _X658 = p; emit pos_X658Changed(p);} } double pos_X658() { return _X658; }
    void setPos_Y658(double p) { if (_Y658 != p) { _Y658 = p; emit pos_Y658Changed(p);} } double pos_Y658() { return _Y658; }
    void setPos_R658(double p) { if (_R658 != p) { _R658 = p; emit pos_R658Changed(p);} } double pos_R658() { return _R658; }
    void setPos_X659(double p) { if (_X659 != p) { _X659 = p; emit pos_X659Changed(p);} } double pos_X659() { return _X659; }
    void setPos_Y659(double p) { if (_Y659 != p) { _Y659 = p; emit pos_Y659Changed(p);} } double pos_Y659() { return _Y659; }
    void setPos_R659(double p) { if (_R659 != p) { _R659 = p; emit pos_R659Changed(p);} } double pos_R659() { return _R659; }
    void setPos_X660(double p) { if (_X660 != p) { _X660 = p; emit pos_X660Changed(p);} } double pos_X660() { return _X660; }
    void setPos_Y660(double p) { if (_Y660 != p) { _Y660 = p; emit pos_Y660Changed(p);} } double pos_Y660() { return _Y660; }
    void setPos_R660(double p) { if (_R660 != p) { _R660 = p; emit pos_R660Changed(p);} } double pos_R660() { return _R660; }
    void setPos_X661(double p) { if (_X661 != p) { _X661 = p; emit pos_X661Changed(p);} } double pos_X661() { return _X661; }
    void setPos_Y661(double p) { if (_Y661 != p) { _Y661 = p; emit pos_Y661Changed(p);} } double pos_Y661() { return _Y661; }
    void setPos_R661(double p) { if (_R661 != p) { _R661 = p; emit pos_R661Changed(p);} } double pos_R661() { return _R661; }
    void setPos_X662(double p) { if (_X662 != p) { _X662 = p; emit pos_X662Changed(p);} } double pos_X662() { return _X662; }
    void setPos_Y662(double p) { if (_Y662 != p) { _Y662 = p; emit pos_Y662Changed(p);} } double pos_Y662() { return _Y662; }
    void setPos_R662(double p) { if (_R662 != p) { _R662 = p; emit pos_R662Changed(p);} } double pos_R662() { return _R662; }
    void setPos_X663(double p) { if (_X663 != p) { _X663 = p; emit pos_X663Changed(p);} } double pos_X663() { return _X663; }
    void setPos_Y663(double p) { if (_Y663 != p) { _Y663 = p; emit pos_Y663Changed(p);} } double pos_Y663() { return _Y663; }
    void setPos_R663(double p) { if (_R663 != p) { _R663 = p; emit pos_R663Changed(p);} } double pos_R663() { return _R663; }
    void setPos_X664(double p) { if (_X664 != p) { _X664 = p; emit pos_X664Changed(p);} } double pos_X664() { return _X664; }
    void setPos_Y664(double p) { if (_Y664 != p) { _Y664 = p; emit pos_Y664Changed(p);} } double pos_Y664() { return _Y664; }
    void setPos_R664(double p) { if (_R664 != p) { _R664 = p; emit pos_R664Changed(p);} } double pos_R664() { return _R664; }
    void setPos_X665(double p) { if (_X665 != p) { _X665 = p; emit pos_X665Changed(p);} } double pos_X665() { return _X665; }
    void setPos_Y665(double p) { if (_Y665 != p) { _Y665 = p; emit pos_Y665Changed(p);} } double pos_Y665() { return _Y665; }
    void setPos_R665(double p) { if (_R665 != p) { _R665 = p; emit pos_R665Changed(p);} } double pos_R665() { return _R665; }
    void setPos_X666(double p) { if (_X666 != p) { _X666 = p; emit pos_X666Changed(p);} } double pos_X666() { return _X666; }
    void setPos_Y666(double p) { if (_Y666 != p) { _Y666 = p; emit pos_Y666Changed(p);} } double pos_Y666() { return _Y666; }
    void setPos_R666(double p) { if (_R666 != p) { _R666 = p; emit pos_R666Changed(p);} } double pos_R666() { return _R666; }
    void setPos_X667(double p) { if (_X667 != p) { _X667 = p; emit pos_X667Changed(p);} } double pos_X667() { return _X667; }
    void setPos_Y667(double p) { if (_Y667 != p) { _Y667 = p; emit pos_Y667Changed(p);} } double pos_Y667() { return _Y667; }
    void setPos_R667(double p) { if (_R667 != p) { _R667 = p; emit pos_R667Changed(p);} } double pos_R667() { return _R667; }
    void setPos_X668(double p) { if (_X668 != p) { _X668 = p; emit pos_X668Changed(p);} } double pos_X668() { return _X668; }
    void setPos_Y668(double p) { if (_Y668 != p) { _Y668 = p; emit pos_Y668Changed(p);} } double pos_Y668() { return _Y668; }
    void setPos_R668(double p) { if (_R668 != p) { _R668 = p; emit pos_R668Changed(p);} } double pos_R668() { return _R668; }
    void setPos_X669(double p) { if (_X669 != p) { _X669 = p; emit pos_X669Changed(p);} } double pos_X669() { return _X669; }
    void setPos_Y669(double p) { if (_Y669 != p) { _Y669 = p; emit pos_Y669Changed(p);} } double pos_Y669() { return _Y669; }
    void setPos_R669(double p) { if (_R669 != p) { _R669 = p; emit pos_R669Changed(p);} } double pos_R669() { return _R669; }
    void setPos_X670(double p) { if (_X670 != p) { _X670 = p; emit pos_X670Changed(p);} } double pos_X670() { return _X670; }
    void setPos_Y670(double p) { if (_Y670 != p) { _Y670 = p; emit pos_Y670Changed(p);} } double pos_Y670() { return _Y670; }
    void setPos_R670(double p) { if (_R670 != p) { _R670 = p; emit pos_R670Changed(p);} } double pos_R670() { return _R670; }
    void setPos_X671(double p) { if (_X671 != p) { _X671 = p; emit pos_X671Changed(p);} } double pos_X671() { return _X671; }
    void setPos_Y671(double p) { if (_Y671 != p) { _Y671 = p; emit pos_Y671Changed(p);} } double pos_Y671() { return _Y671; }
    void setPos_R671(double p) { if (_R671 != p) { _R671 = p; emit pos_R671Changed(p);} } double pos_R671() { return _R671; }
    void setPos_X672(double p) { if (_X672 != p) { _X672 = p; emit pos_X672Changed(p);} } double pos_X672() { return _X672; }
    void setPos_Y672(double p) { if (_Y672 != p) { _Y672 = p; emit pos_Y672Changed(p);} } double pos_Y672() { return _Y672; }
    void setPos_R672(double p) { if (_R672 != p) { _R672 = p; emit pos_R672Changed(p);} } double pos_R672() { return _R672; }
    void setPos_X673(double p) { if (_X673 != p) { _X673 = p; emit pos_X673Changed(p);} } double pos_X673() { return _X673; }
    void setPos_Y673(double p) { if (_Y673 != p) { _Y673 = p; emit pos_Y673Changed(p);} } double pos_Y673() { return _Y673; }
    void setPos_R673(double p) { if (_R673 != p) { _R673 = p; emit pos_R673Changed(p);} } double pos_R673() { return _R673; }
    void setPos_X674(double p) { if (_X674 != p) { _X674 = p; emit pos_X674Changed(p);} } double pos_X674() { return _X674; }
    void setPos_Y674(double p) { if (_Y674 != p) { _Y674 = p; emit pos_Y674Changed(p);} } double pos_Y674() { return _Y674; }
    void setPos_R674(double p) { if (_R674 != p) { _R674 = p; emit pos_R674Changed(p);} } double pos_R674() { return _R674; }
    void setPos_X675(double p) { if (_X675 != p) { _X675 = p; emit pos_X675Changed(p);} } double pos_X675() { return _X675; }
    void setPos_Y675(double p) { if (_Y675 != p) { _Y675 = p; emit pos_Y675Changed(p);} } double pos_Y675() { return _Y675; }
    void setPos_R675(double p) { if (_R675 != p) { _R675 = p; emit pos_R675Changed(p);} } double pos_R675() { return _R675; }
    void setPos_X676(double p) { if (_X676 != p) { _X676 = p; emit pos_X676Changed(p);} } double pos_X676() { return _X676; }
    void setPos_Y676(double p) { if (_Y676 != p) { _Y676 = p; emit pos_Y676Changed(p);} } double pos_Y676() { return _Y676; }
    void setPos_R676(double p) { if (_R676 != p) { _R676 = p; emit pos_R676Changed(p);} } double pos_R676() { return _R676; }
    void setPos_X677(double p) { if (_X677 != p) { _X677 = p; emit pos_X677Changed(p);} } double pos_X677() { return _X677; }
    void setPos_Y677(double p) { if (_Y677 != p) { _Y677 = p; emit pos_Y677Changed(p);} } double pos_Y677() { return _Y677; }
    void setPos_R677(double p) { if (_R677 != p) { _R677 = p; emit pos_R677Changed(p);} } double pos_R677() { return _R677; }
    void setPos_X678(double p) { if (_X678 != p) { _X678 = p; emit pos_X678Changed(p);} } double pos_X678() { return _X678; }
    void setPos_Y678(double p) { if (_Y678 != p) { _Y678 = p; emit pos_Y678Changed(p);} } double pos_Y678() { return _Y678; }
    void setPos_R678(double p) { if (_R678 != p) { _R678 = p; emit pos_R678Changed(p);} } double pos_R678() { return _R678; }
    void setPos_X679(double p) { if (_X679 != p) { _X679 = p; emit pos_X679Changed(p);} } double pos_X679() { return _X679; }
    void setPos_Y679(double p) { if (_Y679 != p) { _Y679 = p; emit pos_Y679Changed(p);} } double pos_Y679() { return _Y679; }
    void setPos_R679(double p) { if (_R679 != p) { _R679 = p; emit pos_R679Changed(p);} } double pos_R679() { return _R679; }
    void setPos_X680(double p) { if (_X680 != p) { _X680 = p; emit pos_X680Changed(p);} } double pos_X680() { return _X680; }
    void setPos_Y680(double p) { if (_Y680 != p) { _Y680 = p; emit pos_Y680Changed(p);} } double pos_Y680() { return _Y680; }
    void setPos_R680(double p) { if (_R680 != p) { _R680 = p; emit pos_R680Changed(p);} } double pos_R680() { return _R680; }
    void setPos_X681(double p) { if (_X681 != p) { _X681 = p; emit pos_X681Changed(p);} } double pos_X681() { return _X681; }
    void setPos_Y681(double p) { if (_Y681 != p) { _Y681 = p; emit pos_Y681Changed(p);} } double pos_Y681() { return _Y681; }
    void setPos_R681(double p) { if (_R681 != p) { _R681 = p; emit pos_R681Changed(p);} } double pos_R681() { return _R681; }
    void setPos_X682(double p) { if (_X682 != p) { _X682 = p; emit pos_X682Changed(p);} } double pos_X682() { return _X682; }
    void setPos_Y682(double p) { if (_Y682 != p) { _Y682 = p; emit pos_Y682Changed(p);} } double pos_Y682() { return _Y682; }
    void setPos_R682(double p) { if (_R682 != p) { _R682 = p; emit pos_R682Changed(p);} } double pos_R682() { return _R682; }
    void setPos_X683(double p) { if (_X683 != p) { _X683 = p; emit pos_X683Changed(p);} } double pos_X683() { return _X683; }
    void setPos_Y683(double p) { if (_Y683 != p) { _Y683 = p; emit pos_Y683Changed(p);} } double pos_Y683() { return _Y683; }
    void setPos_R683(double p) { if (_R683 != p) { _R683 = p; emit pos_R683Changed(p);} } double pos_R683() { return _R683; }
    void setPos_X684(double p) { if (_X684 != p) { _X684 = p; emit pos_X684Changed(p);} } double pos_X684() { return _X684; }
    void setPos_Y684(double p) { if (_Y684 != p) { _Y684 = p; emit pos_Y684Changed(p);} } double pos_Y684() { return _Y684; }
    void setPos_R684(double p) { if (_R684 != p) { _R684 = p; emit pos_R684Changed(p);} } double pos_R684() { return _R684; }
    void setPos_X685(double p) { if (_X685 != p) { _X685 = p; emit pos_X685Changed(p);} } double pos_X685() { return _X685; }
    void setPos_Y685(double p) { if (_Y685 != p) { _Y685 = p; emit pos_Y685Changed(p);} } double pos_Y685() { return _Y685; }
    void setPos_R685(double p) { if (_R685 != p) { _R685 = p; emit pos_R685Changed(p);} } double pos_R685() { return _R685; }
    void setPos_X686(double p) { if (_X686 != p) { _X686 = p; emit pos_X686Changed(p);} } double pos_X686() { return _X686; }
    void setPos_Y686(double p) { if (_Y686 != p) { _Y686 = p; emit pos_Y686Changed(p);} } double pos_Y686() { return _Y686; }
    void setPos_R686(double p) { if (_R686 != p) { _R686 = p; emit pos_R686Changed(p);} } double pos_R686() { return _R686; }
    void setPos_X687(double p) { if (_X687 != p) { _X687 = p; emit pos_X687Changed(p);} } double pos_X687() { return _X687; }
    void setPos_Y687(double p) { if (_Y687 != p) { _Y687 = p; emit pos_Y687Changed(p);} } double pos_Y687() { return _Y687; }
    void setPos_R687(double p) { if (_R687 != p) { _R687 = p; emit pos_R687Changed(p);} } double pos_R687() { return _R687; }
    void setPos_X688(double p) { if (_X688 != p) { _X688 = p; emit pos_X688Changed(p);} } double pos_X688() { return _X688; }
    void setPos_Y688(double p) { if (_Y688 != p) { _Y688 = p; emit pos_Y688Changed(p);} } double pos_Y688() { return _Y688; }
    void setPos_R688(double p) { if (_R688 != p) { _R688 = p; emit pos_R688Changed(p);} } double pos_R688() { return _R688; }
    void setPos_X689(double p) { if (_X689 != p) { _X689 = p; emit pos_X689Changed(p);} } double pos_X689() { return _X689; }
    void setPos_Y689(double p) { if (_Y689 != p) { _Y689 = p; emit pos_Y689Changed(p);} } double pos_Y689() { return _Y689; }
    void setPos_R689(double p) { if (_R689 != p) { _R689 = p; emit pos_R689Changed(p);} } double pos_R689() { return _R689; }
    void setPos_X690(double p) { if (_X690 != p) { _X690 = p; emit pos_X690Changed(p);} } double pos_X690() { return _X690; }
    void setPos_Y690(double p) { if (_Y690 != p) { _Y690 = p; emit pos_Y690Changed(p);} } double pos_Y690() { return _Y690; }
    void setPos_R690(double p) { if (_R690 != p) { _R690 = p; emit pos_R690Changed(p);} } double pos_R690() { return _R690; }
    void setPos_X691(double p) { if (_X691 != p) { _X691 = p; emit pos_X691Changed(p);} } double pos_X691() { return _X691; }
    void setPos_Y691(double p) { if (_Y691 != p) { _Y691 = p; emit pos_Y691Changed(p);} } double pos_Y691() { return _Y691; }
    void setPos_R691(double p) { if (_R691 != p) { _R691 = p; emit pos_R691Changed(p);} } double pos_R691() { return _R691; }
    void setPos_X692(double p) { if (_X692 != p) { _X692 = p; emit pos_X692Changed(p);} } double pos_X692() { return _X692; }
    void setPos_Y692(double p) { if (_Y692 != p) { _Y692 = p; emit pos_Y692Changed(p);} } double pos_Y692() { return _Y692; }
    void setPos_R692(double p) { if (_R692 != p) { _R692 = p; emit pos_R692Changed(p);} } double pos_R692() { return _R692; }
    void setPos_X693(double p) { if (_X693 != p) { _X693 = p; emit pos_X693Changed(p);} } double pos_X693() { return _X693; }
    void setPos_Y693(double p) { if (_Y693 != p) { _Y693 = p; emit pos_Y693Changed(p);} } double pos_Y693() { return _Y693; }
    void setPos_R693(double p) { if (_R693 != p) { _R693 = p; emit pos_R693Changed(p);} } double pos_R693() { return _R693; }
    void setPos_X694(double p) { if (_X694 != p) { _X694 = p; emit pos_X694Changed(p);} } double pos_X694() { return _X694; }
    void setPos_Y694(double p) { if (_Y694 != p) { _Y694 = p; emit pos_Y694Changed(p);} } double pos_Y694() { return _Y694; }
    void setPos_R694(double p) { if (_R694 != p) { _R694 = p; emit pos_R694Changed(p);} } double pos_R694() { return _R694; }
    void setPos_X695(double p) { if (_X695 != p) { _X695 = p; emit pos_X695Changed(p);} } double pos_X695() { return _X695; }
    void setPos_Y695(double p) { if (_Y695 != p) { _Y695 = p; emit pos_Y695Changed(p);} } double pos_Y695() { return _Y695; }
    void setPos_R695(double p) { if (_R695 != p) { _R695 = p; emit pos_R695Changed(p);} } double pos_R695() { return _R695; }
    void setPos_X696(double p) { if (_X696 != p) { _X696 = p; emit pos_X696Changed(p);} } double pos_X696() { return _X696; }
    void setPos_Y696(double p) { if (_Y696 != p) { _Y696 = p; emit pos_Y696Changed(p);} } double pos_Y696() { return _Y696; }
    void setPos_R696(double p) { if (_R696 != p) { _R696 = p; emit pos_R696Changed(p);} } double pos_R696() { return _R696; }
    void setPos_X697(double p) { if (_X697 != p) { _X697 = p; emit pos_X697Changed(p);} } double pos_X697() { return _X697; }
    void setPos_Y697(double p) { if (_Y697 != p) { _Y697 = p; emit pos_Y697Changed(p);} } double pos_Y697() { return _Y697; }
    void setPos_R697(double p) { if (_R697 != p) { _R697 = p; emit pos_R697Changed(p);} } double pos_R697() { return _R697; }
    void setPos_X698(double p) { if (_X698 != p) { _X698 = p; emit pos_X698Changed(p);} } double pos_X698() { return _X698; }
    void setPos_Y698(double p) { if (_Y698 != p) { _Y698 = p; emit pos_Y698Changed(p);} } double pos_Y698() { return _Y698; }
    void setPos_R698(double p) { if (_R698 != p) { _R698 = p; emit pos_R698Changed(p);} } double pos_R698() { return _R698; }
    void setPos_X699(double p) { if (_X699 != p) { _X699 = p; emit pos_X699Changed(p);} } double pos_X699() { return _X699; }
    void setPos_Y699(double p) { if (_Y699 != p) { _Y699 = p; emit pos_Y699Changed(p);} } double pos_Y699() { return _Y699; }
    void setPos_R699(double p) { if (_R699 != p) { _R699 = p; emit pos_R699Changed(p);} } double pos_R699() { return _R699; }
    void setPos_X700(double p) { if (_X700 != p) { _X700 = p; emit pos_X700Changed(p);} } double pos_X700() { return _X700; }
    void setPos_Y700(double p) { if (_Y700 != p) { _Y700 = p; emit pos_Y700Changed(p);} } double pos_Y700() { return _Y700; }
    void setPos_R700(double p) { if (_R700 != p) { _R700 = p; emit pos_R700Changed(p);} } double pos_R700() { return _R700; }
    void setPos_X701(double p) { if (_X701 != p) { _X701 = p; emit pos_X701Changed(p);} } double pos_X701() { return _X701; }
    void setPos_Y701(double p) { if (_Y701 != p) { _Y701 = p; emit pos_Y701Changed(p);} } double pos_Y701() { return _Y701; }
    void setPos_R701(double p) { if (_R701 != p) { _R701 = p; emit pos_R701Changed(p);} } double pos_R701() { return _R701; }
    void setPos_X702(double p) { if (_X702 != p) { _X702 = p; emit pos_X702Changed(p);} } double pos_X702() { return _X702; }
    void setPos_Y702(double p) { if (_Y702 != p) { _Y702 = p; emit pos_Y702Changed(p);} } double pos_Y702() { return _Y702; }
    void setPos_R702(double p) { if (_R702 != p) { _R702 = p; emit pos_R702Changed(p);} } double pos_R702() { return _R702; }
    void setPos_X703(double p) { if (_X703 != p) { _X703 = p; emit pos_X703Changed(p);} } double pos_X703() { return _X703; }
    void setPos_Y703(double p) { if (_Y703 != p) { _Y703 = p; emit pos_Y703Changed(p);} } double pos_Y703() { return _Y703; }
    void setPos_R703(double p) { if (_R703 != p) { _R703 = p; emit pos_R703Changed(p);} } double pos_R703() { return _R703; }
    void setPos_X704(double p) { if (_X704 != p) { _X704 = p; emit pos_X704Changed(p);} } double pos_X704() { return _X704; }
    void setPos_Y704(double p) { if (_Y704 != p) { _Y704 = p; emit pos_Y704Changed(p);} } double pos_Y704() { return _Y704; }
    void setPos_R704(double p) { if (_R704 != p) { _R704 = p; emit pos_R704Changed(p);} } double pos_R704() { return _R704; }
    void setPos_X705(double p) { if (_X705 != p) { _X705 = p; emit pos_X705Changed(p);} } double pos_X705() { return _X705; }
    void setPos_Y705(double p) { if (_Y705 != p) { _Y705 = p; emit pos_Y705Changed(p);} } double pos_Y705() { return _Y705; }
    void setPos_R705(double p) { if (_R705 != p) { _R705 = p; emit pos_R705Changed(p);} } double pos_R705() { return _R705; }
    void setPos_X706(double p) { if (_X706 != p) { _X706 = p; emit pos_X706Changed(p);} } double pos_X706() { return _X706; }
    void setPos_Y706(double p) { if (_Y706 != p) { _Y706 = p; emit pos_Y706Changed(p);} } double pos_Y706() { return _Y706; }
    void setPos_R706(double p) { if (_R706 != p) { _R706 = p; emit pos_R706Changed(p);} } double pos_R706() { return _R706; }
    void setPos_X707(double p) { if (_X707 != p) { _X707 = p; emit pos_X707Changed(p);} } double pos_X707() { return _X707; }
    void setPos_Y707(double p) { if (_Y707 != p) { _Y707 = p; emit pos_Y707Changed(p);} } double pos_Y707() { return _Y707; }
    void setPos_R707(double p) { if (_R707 != p) { _R707 = p; emit pos_R707Changed(p);} } double pos_R707() { return _R707; }
    void setPos_X708(double p) { if (_X708 != p) { _X708 = p; emit pos_X708Changed(p);} } double pos_X708() { return _X708; }
    void setPos_Y708(double p) { if (_Y708 != p) { _Y708 = p; emit pos_Y708Changed(p);} } double pos_Y708() { return _Y708; }
    void setPos_R708(double p) { if (_R708 != p) { _R708 = p; emit pos_R708Changed(p);} } double pos_R708() { return _R708; }
    void setPos_X709(double p) { if (_X709 != p) { _X709 = p; emit pos_X709Changed(p);} } double pos_X709() { return _X709; }
    void setPos_Y709(double p) { if (_Y709 != p) { _Y709 = p; emit pos_Y709Changed(p);} } double pos_Y709() { return _Y709; }
    void setPos_R709(double p) { if (_R709 != p) { _R709 = p; emit pos_R709Changed(p);} } double pos_R709() { return _R709; }
    void setPos_X710(double p) { if (_X710 != p) { _X710 = p; emit pos_X710Changed(p);} } double pos_X710() { return _X710; }
    void setPos_Y710(double p) { if (_Y710 != p) { _Y710 = p; emit pos_Y710Changed(p);} } double pos_Y710() { return _Y710; }
    void setPos_R710(double p) { if (_R710 != p) { _R710 = p; emit pos_R710Changed(p);} } double pos_R710() { return _R710; }
    void setPos_X711(double p) { if (_X711 != p) { _X711 = p; emit pos_X711Changed(p);} } double pos_X711() { return _X711; }
    void setPos_Y711(double p) { if (_Y711 != p) { _Y711 = p; emit pos_Y711Changed(p);} } double pos_Y711() { return _Y711; }
    void setPos_R711(double p) { if (_R711 != p) { _R711 = p; emit pos_R711Changed(p);} } double pos_R711() { return _R711; }
    void setPos_X712(double p) { if (_X712 != p) { _X712 = p; emit pos_X712Changed(p);} } double pos_X712() { return _X712; }
    void setPos_Y712(double p) { if (_Y712 != p) { _Y712 = p; emit pos_Y712Changed(p);} } double pos_Y712() { return _Y712; }
    void setPos_R712(double p) { if (_R712 != p) { _R712 = p; emit pos_R712Changed(p);} } double pos_R712() { return _R712; }
    void setPos_X713(double p) { if (_X713 != p) { _X713 = p; emit pos_X713Changed(p);} } double pos_X713() { return _X713; }
    void setPos_Y713(double p) { if (_Y713 != p) { _Y713 = p; emit pos_Y713Changed(p);} } double pos_Y713() { return _Y713; }
    void setPos_R713(double p) { if (_R713 != p) { _R713 = p; emit pos_R713Changed(p);} } double pos_R713() { return _R713; }
    void setPos_X714(double p) { if (_X714 != p) { _X714 = p; emit pos_X714Changed(p);} } double pos_X714() { return _X714; }
    void setPos_Y714(double p) { if (_Y714 != p) { _Y714 = p; emit pos_Y714Changed(p);} } double pos_Y714() { return _Y714; }
    void setPos_R714(double p) { if (_R714 != p) { _R714 = p; emit pos_R714Changed(p);} } double pos_R714() { return _R714; }
    void setPos_X715(double p) { if (_X715 != p) { _X715 = p; emit pos_X715Changed(p);} } double pos_X715() { return _X715; }
    void setPos_Y715(double p) { if (_Y715 != p) { _Y715 = p; emit pos_Y715Changed(p);} } double pos_Y715() { return _Y715; }
    void setPos_R715(double p) { if (_R715 != p) { _R715 = p; emit pos_R715Changed(p);} } double pos_R715() { return _R715; }
    void setPos_X716(double p) { if (_X716 != p) { _X716 = p; emit pos_X716Changed(p);} } double pos_X716() { return _X716; }
    void setPos_Y716(double p) { if (_Y716 != p) { _Y716 = p; emit pos_Y716Changed(p);} } double pos_Y716() { return _Y716; }
    void setPos_R716(double p) { if (_R716 != p) { _R716 = p; emit pos_R716Changed(p);} } double pos_R716() { return _R716; }
    void setPos_X717(double p) { if (_X717 != p) { _X717 = p; emit pos_X717Changed(p);} } double pos_X717() { return _X717; }
    void setPos_Y717(double p) { if (_Y717 != p) { _Y717 = p; emit pos_Y717Changed(p);} } double pos_Y717() { return _Y717; }
    void setPos_R717(double p) { if (_R717 != p) { _R717 = p; emit pos_R717Changed(p);} } double pos_R717() { return _R717; }
    void setPos_X718(double p) { if (_X718 != p) { _X718 = p; emit pos_X718Changed(p);} } double pos_X718() { return _X718; }
    void setPos_Y718(double p) { if (_Y718 != p) { _Y718 = p; emit pos_Y718Changed(p);} } double pos_Y718() { return _Y718; }
    void setPos_R718(double p) { if (_R718 != p) { _R718 = p; emit pos_R718Changed(p);} } double pos_R718() { return _R718; }
    void setPos_X719(double p) { if (_X719 != p) { _X719 = p; emit pos_X719Changed(p);} } double pos_X719() { return _X719; }
    void setPos_Y719(double p) { if (_Y719 != p) { _Y719 = p; emit pos_Y719Changed(p);} } double pos_Y719() { return _Y719; }
    void setPos_R719(double p) { if (_R719 != p) { _R719 = p; emit pos_R719Changed(p);} } double pos_R719() { return _R719; }
    void setPos_X720(double p) { if (_X720 != p) { _X720 = p; emit pos_X720Changed(p);} } double pos_X720() { return _X720; }
    void setPos_Y720(double p) { if (_Y720 != p) { _Y720 = p; emit pos_Y720Changed(p);} } double pos_Y720() { return _Y720; }
    void setPos_R720(double p) { if (_R720 != p) { _R720 = p; emit pos_R720Changed(p);} } double pos_R720() { return _R720; }
    void setPos_X721(double p) { if (_X721 != p) { _X721 = p; emit pos_X721Changed(p);} } double pos_X721() { return _X721; }
    void setPos_Y721(double p) { if (_Y721 != p) { _Y721 = p; emit pos_Y721Changed(p);} } double pos_Y721() { return _Y721; }
    void setPos_R721(double p) { if (_R721 != p) { _R721 = p; emit pos_R721Changed(p);} } double pos_R721() { return _R721; }
    void setPos_X722(double p) { if (_X722 != p) { _X722 = p; emit pos_X722Changed(p);} } double pos_X722() { return _X722; }
    void setPos_Y722(double p) { if (_Y722 != p) { _Y722 = p; emit pos_Y722Changed(p);} } double pos_Y722() { return _Y722; }
    void setPos_R722(double p) { if (_R722 != p) { _R722 = p; emit pos_R722Changed(p);} } double pos_R722() { return _R722; }
    void setPos_X723(double p) { if (_X723 != p) { _X723 = p; emit pos_X723Changed(p);} } double pos_X723() { return _X723; }
    void setPos_Y723(double p) { if (_Y723 != p) { _Y723 = p; emit pos_Y723Changed(p);} } double pos_Y723() { return _Y723; }
    void setPos_R723(double p) { if (_R723 != p) { _R723 = p; emit pos_R723Changed(p);} } double pos_R723() { return _R723; }
    void setPos_X724(double p) { if (_X724 != p) { _X724 = p; emit pos_X724Changed(p);} } double pos_X724() { return _X724; }
    void setPos_Y724(double p) { if (_Y724 != p) { _Y724 = p; emit pos_Y724Changed(p);} } double pos_Y724() { return _Y724; }
    void setPos_R724(double p) { if (_R724 != p) { _R724 = p; emit pos_R724Changed(p);} } double pos_R724() { return _R724; }
    void setPos_X725(double p) { if (_X725 != p) { _X725 = p; emit pos_X725Changed(p);} } double pos_X725() { return _X725; }
    void setPos_Y725(double p) { if (_Y725 != p) { _Y725 = p; emit pos_Y725Changed(p);} } double pos_Y725() { return _Y725; }
    void setPos_R725(double p) { if (_R725 != p) { _R725 = p; emit pos_R725Changed(p);} } double pos_R725() { return _R725; }
    void setPos_X726(double p) { if (_X726 != p) { _X726 = p; emit pos_X726Changed(p);} } double pos_X726() { return _X726; }
    void setPos_Y726(double p) { if (_Y726 != p) { _Y726 = p; emit pos_Y726Changed(p);} } double pos_Y726() { return _Y726; }
    void setPos_R726(double p) { if (_R726 != p) { _R726 = p; emit pos_R726Changed(p);} } double pos_R726() { return _R726; }
    void setPos_X727(double p) { if (_X727 != p) { _X727 = p; emit pos_X727Changed(p);} } double pos_X727() { return _X727; }
    void setPos_Y727(double p) { if (_Y727 != p) { _Y727 = p; emit pos_Y727Changed(p);} } double pos_Y727() { return _Y727; }
    void setPos_R727(double p) { if (_R727 != p) { _R727 = p; emit pos_R727Changed(p);} } double pos_R727() { return _R727; }
    void setPos_X728(double p) { if (_X728 != p) { _X728 = p; emit pos_X728Changed(p);} } double pos_X728() { return _X728; }
    void setPos_Y728(double p) { if (_Y728 != p) { _Y728 = p; emit pos_Y728Changed(p);} } double pos_Y728() { return _Y728; }
    void setPos_R728(double p) { if (_R728 != p) { _R728 = p; emit pos_R728Changed(p);} } double pos_R728() { return _R728; }
    void setPos_X729(double p) { if (_X729 != p) { _X729 = p; emit pos_X729Changed(p);} } double pos_X729() { return _X729; }
    void setPos_Y729(double p) { if (_Y729 != p) { _Y729 = p; emit pos_Y729Changed(p);} } double pos_Y729() { return _Y729; }
    void setPos_R729(double p) { if (_R729 != p) { _R729 = p; emit pos_R729Changed(p);} } double pos_R729() { return _R729; }
    void setPos_X730(double p) { if (_X730 != p) { _X730 = p; emit pos_X730Changed(p);} } double pos_X730() { return _X730; }
    void setPos_Y730(double p) { if (_Y730 != p) { _Y730 = p; emit pos_Y730Changed(p);} } double pos_Y730() { return _Y730; }
    void setPos_R730(double p) { if (_R730 != p) { _R730 = p; emit pos_R730Changed(p);} } double pos_R730() { return _R730; }
    void setPos_X731(double p) { if (_X731 != p) { _X731 = p; emit pos_X731Changed(p);} } double pos_X731() { return _X731; }
    void setPos_Y731(double p) { if (_Y731 != p) { _Y731 = p; emit pos_Y731Changed(p);} } double pos_Y731() { return _Y731; }
    void setPos_R731(double p) { if (_R731 != p) { _R731 = p; emit pos_R731Changed(p);} } double pos_R731() { return _R731; }
    void setPos_X732(double p) { if (_X732 != p) { _X732 = p; emit pos_X732Changed(p);} } double pos_X732() { return _X732; }
    void setPos_Y732(double p) { if (_Y732 != p) { _Y732 = p; emit pos_Y732Changed(p);} } double pos_Y732() { return _Y732; }
    void setPos_R732(double p) { if (_R732 != p) { _R732 = p; emit pos_R732Changed(p);} } double pos_R732() { return _R732; }
    void setPos_X733(double p) { if (_X733 != p) { _X733 = p; emit pos_X733Changed(p);} } double pos_X733() { return _X733; }
    void setPos_Y733(double p) { if (_Y733 != p) { _Y733 = p; emit pos_Y733Changed(p);} } double pos_Y733() { return _Y733; }
    void setPos_R733(double p) { if (_R733 != p) { _R733 = p; emit pos_R733Changed(p);} } double pos_R733() { return _R733; }
    void setPos_X734(double p) { if (_X734 != p) { _X734 = p; emit pos_X734Changed(p);} } double pos_X734() { return _X734; }
    void setPos_Y734(double p) { if (_Y734 != p) { _Y734 = p; emit pos_Y734Changed(p);} } double pos_Y734() { return _Y734; }
    void setPos_R734(double p) { if (_R734 != p) { _R734 = p; emit pos_R734Changed(p);} } double pos_R734() { return _R734; }
    void setPos_X735(double p) { if (_X735 != p) { _X735 = p; emit pos_X735Changed(p);} } double pos_X735() { return _X735; }
    void setPos_Y735(double p) { if (_Y735 != p) { _Y735 = p; emit pos_Y735Changed(p);} } double pos_Y735() { return _Y735; }
    void setPos_R735(double p) { if (_R735 != p) { _R735 = p; emit pos_R735Changed(p);} } double pos_R735() { return _R735; }
    void setPos_X736(double p) { if (_X736 != p) { _X736 = p; emit pos_X736Changed(p);} } double pos_X736() { return _X736; }
    void setPos_Y736(double p) { if (_Y736 != p) { _Y736 = p; emit pos_Y736Changed(p);} } double pos_Y736() { return _Y736; }
    void setPos_R736(double p) { if (_R736 != p) { _R736 = p; emit pos_R736Changed(p);} } double pos_R736() { return _R736; }
    void setPos_X737(double p) { if (_X737 != p) { _X737 = p; emit pos_X737Changed(p);} } double pos_X737() { return _X737; }
    void setPos_Y737(double p) { if (_Y737 != p) { _Y737 = p; emit pos_Y737Changed(p);} } double pos_Y737() { return _Y737; }
    void setPos_R737(double p) { if (_R737 != p) { _R737 = p; emit pos_R737Changed(p);} } double pos_R737() { return _R737; }
    void setPos_X738(double p) { if (_X738 != p) { _X738 = p; emit pos_X738Changed(p);} } double pos_X738() { return _X738; }
    void setPos_Y738(double p) { if (_Y738 != p) { _Y738 = p; emit pos_Y738Changed(p);} } double pos_Y738() { return _Y738; }
    void setPos_R738(double p) { if (_R738 != p) { _R738 = p; emit pos_R738Changed(p);} } double pos_R738() { return _R738; }
    void setPos_X739(double p) { if (_X739 != p) { _X739 = p; emit pos_X739Changed(p);} } double pos_X739() { return _X739; }
    void setPos_Y739(double p) { if (_Y739 != p) { _Y739 = p; emit pos_Y739Changed(p);} } double pos_Y739() { return _Y739; }
    void setPos_R739(double p) { if (_R739 != p) { _R739 = p; emit pos_R739Changed(p);} } double pos_R739() { return _R739; }
    void setPos_X740(double p) { if (_X740 != p) { _X740 = p; emit pos_X740Changed(p);} } double pos_X740() { return _X740; }
    void setPos_Y740(double p) { if (_Y740 != p) { _Y740 = p; emit pos_Y740Changed(p);} } double pos_Y740() { return _Y740; }
    void setPos_R740(double p) { if (_R740 != p) { _R740 = p; emit pos_R740Changed(p);} } double pos_R740() { return _R740; }
    void setPos_X741(double p) { if (_X741 != p) { _X741 = p; emit pos_X741Changed(p);} } double pos_X741() { return _X741; }
    void setPos_Y741(double p) { if (_Y741 != p) { _Y741 = p; emit pos_Y741Changed(p);} } double pos_Y741() { return _Y741; }
    void setPos_R741(double p) { if (_R741 != p) { _R741 = p; emit pos_R741Changed(p);} } double pos_R741() { return _R741; }
    void setPos_X742(double p) { if (_X742 != p) { _X742 = p; emit pos_X742Changed(p);} } double pos_X742() { return _X742; }
    void setPos_Y742(double p) { if (_Y742 != p) { _Y742 = p; emit pos_Y742Changed(p);} } double pos_Y742() { return _Y742; }
    void setPos_R742(double p) { if (_R742 != p) { _R742 = p; emit pos_R742Changed(p);} } double pos_R742() { return _R742; }
    void setPos_X743(double p) { if (_X743 != p) { _X743 = p; emit pos_X743Changed(p);} } double pos_X743() { return _X743; }
    void setPos_Y743(double p) { if (_Y743 != p) { _Y743 = p; emit pos_Y743Changed(p);} } double pos_Y743() { return _Y743; }
    void setPos_R743(double p) { if (_R743 != p) { _R743 = p; emit pos_R743Changed(p);} } double pos_R743() { return _R743; }
    void setPos_X744(double p) { if (_X744 != p) { _X744 = p; emit pos_X744Changed(p);} } double pos_X744() { return _X744; }
    void setPos_Y744(double p) { if (_Y744 != p) { _Y744 = p; emit pos_Y744Changed(p);} } double pos_Y744() { return _Y744; }
    void setPos_R744(double p) { if (_R744 != p) { _R744 = p; emit pos_R744Changed(p);} } double pos_R744() { return _R744; }
    void setPos_X745(double p) { if (_X745 != p) { _X745 = p; emit pos_X745Changed(p);} } double pos_X745() { return _X745; }
    void setPos_Y745(double p) { if (_Y745 != p) { _Y745 = p; emit pos_Y745Changed(p);} } double pos_Y745() { return _Y745; }
    void setPos_R745(double p) { if (_R745 != p) { _R745 = p; emit pos_R745Changed(p);} } double pos_R745() { return _R745; }
    void setPos_X746(double p) { if (_X746 != p) { _X746 = p; emit pos_X746Changed(p);} } double pos_X746() { return _X746; }
    void setPos_Y746(double p) { if (_Y746 != p) { _Y746 = p; emit pos_Y746Changed(p);} } double pos_Y746() { return _Y746; }
    void setPos_R746(double p) { if (_R746 != p) { _R746 = p; emit pos_R746Changed(p);} } double pos_R746() { return _R746; }
    void setPos_X747(double p) { if (_X747 != p) { _X747 = p; emit pos_X747Changed(p);} } double pos_X747() { return _X747; }
    void setPos_Y747(double p) { if (_Y747 != p) { _Y747 = p; emit pos_Y747Changed(p);} } double pos_Y747() { return _Y747; }
    void setPos_R747(double p) { if (_R747 != p) { _R747 = p; emit pos_R747Changed(p);} } double pos_R747() { return _R747; }
    void setPos_X748(double p) { if (_X748 != p) { _X748 = p; emit pos_X748Changed(p);} } double pos_X748() { return _X748; }
    void setPos_Y748(double p) { if (_Y748 != p) { _Y748 = p; emit pos_Y748Changed(p);} } double pos_Y748() { return _Y748; }
    void setPos_R748(double p) { if (_R748 != p) { _R748 = p; emit pos_R748Changed(p);} } double pos_R748() { return _R748; }
    void setPos_X749(double p) { if (_X749 != p) { _X749 = p; emit pos_X749Changed(p);} } double pos_X749() { return _X749; }
    void setPos_Y749(double p) { if (_Y749 != p) { _Y749 = p; emit pos_Y749Changed(p);} } double pos_Y749() { return _Y749; }
    void setPos_R749(double p) { if (_R749 != p) { _R749 = p; emit pos_R749Changed(p);} } double pos_R749() { return _R749; }
    void setPos_X750(double p) { if (_X750 != p) { _X750 = p; emit pos_X750Changed(p);} } double pos_X750() { return _X750; }
    void setPos_Y750(double p) { if (_Y750 != p) { _Y750 = p; emit pos_Y750Changed(p);} } double pos_Y750() { return _Y750; }
    void setPos_R750(double p) { if (_R750 != p) { _R750 = p; emit pos_R750Changed(p);} } double pos_R750() { return _R750; }
    void setPos_X751(double p) { if (_X751 != p) { _X751 = p; emit pos_X751Changed(p);} } double pos_X751() { return _X751; }
    void setPos_Y751(double p) { if (_Y751 != p) { _Y751 = p; emit pos_Y751Changed(p);} } double pos_Y751() { return _Y751; }
    void setPos_R751(double p) { if (_R751 != p) { _R751 = p; emit pos_R751Changed(p);} } double pos_R751() { return _R751; }
    void setPos_X752(double p) { if (_X752 != p) { _X752 = p; emit pos_X752Changed(p);} } double pos_X752() { return _X752; }
    void setPos_Y752(double p) { if (_Y752 != p) { _Y752 = p; emit pos_Y752Changed(p);} } double pos_Y752() { return _Y752; }
    void setPos_R752(double p) { if (_R752 != p) { _R752 = p; emit pos_R752Changed(p);} } double pos_R752() { return _R752; }
    void setPos_X753(double p) { if (_X753 != p) { _X753 = p; emit pos_X753Changed(p);} } double pos_X753() { return _X753; }
    void setPos_Y753(double p) { if (_Y753 != p) { _Y753 = p; emit pos_Y753Changed(p);} } double pos_Y753() { return _Y753; }
    void setPos_R753(double p) { if (_R753 != p) { _R753 = p; emit pos_R753Changed(p);} } double pos_R753() { return _R753; }
    void setPos_X754(double p) { if (_X754 != p) { _X754 = p; emit pos_X754Changed(p);} } double pos_X754() { return _X754; }
    void setPos_Y754(double p) { if (_Y754 != p) { _Y754 = p; emit pos_Y754Changed(p);} } double pos_Y754() { return _Y754; }
    void setPos_R754(double p) { if (_R754 != p) { _R754 = p; emit pos_R754Changed(p);} } double pos_R754() { return _R754; }
    void setPos_X755(double p) { if (_X755 != p) { _X755 = p; emit pos_X755Changed(p);} } double pos_X755() { return _X755; }
    void setPos_Y755(double p) { if (_Y755 != p) { _Y755 = p; emit pos_Y755Changed(p);} } double pos_Y755() { return _Y755; }
    void setPos_R755(double p) { if (_R755 != p) { _R755 = p; emit pos_R755Changed(p);} } double pos_R755() { return _R755; }
    void setPos_X756(double p) { if (_X756 != p) { _X756 = p; emit pos_X756Changed(p);} } double pos_X756() { return _X756; }
    void setPos_Y756(double p) { if (_Y756 != p) { _Y756 = p; emit pos_Y756Changed(p);} } double pos_Y756() { return _Y756; }
    void setPos_R756(double p) { if (_R756 != p) { _R756 = p; emit pos_R756Changed(p);} } double pos_R756() { return _R756; }
    void setPos_X757(double p) { if (_X757 != p) { _X757 = p; emit pos_X757Changed(p);} } double pos_X757() { return _X757; }
    void setPos_Y757(double p) { if (_Y757 != p) { _Y757 = p; emit pos_Y757Changed(p);} } double pos_Y757() { return _Y757; }
    void setPos_R757(double p) { if (_R757 != p) { _R757 = p; emit pos_R757Changed(p);} } double pos_R757() { return _R757; }
    void setPos_X758(double p) { if (_X758 != p) { _X758 = p; emit pos_X758Changed(p);} } double pos_X758() { return _X758; }
    void setPos_Y758(double p) { if (_Y758 != p) { _Y758 = p; emit pos_Y758Changed(p);} } double pos_Y758() { return _Y758; }
    void setPos_R758(double p) { if (_R758 != p) { _R758 = p; emit pos_R758Changed(p);} } double pos_R758() { return _R758; }
    void setPos_X759(double p) { if (_X759 != p) { _X759 = p; emit pos_X759Changed(p);} } double pos_X759() { return _X759; }
    void setPos_Y759(double p) { if (_Y759 != p) { _Y759 = p; emit pos_Y759Changed(p);} } double pos_Y759() { return _Y759; }
    void setPos_R759(double p) { if (_R759 != p) { _R759 = p; emit pos_R759Changed(p);} } double pos_R759() { return _R759; }
    void setPos_X760(double p) { if (_X760 != p) { _X760 = p; emit pos_X760Changed(p);} } double pos_X760() { return _X760; }
    void setPos_Y760(double p) { if (_Y760 != p) { _Y760 = p; emit pos_Y760Changed(p);} } double pos_Y760() { return _Y760; }
    void setPos_R760(double p) { if (_R760 != p) { _R760 = p; emit pos_R760Changed(p);} } double pos_R760() { return _R760; }
    void setPos_X761(double p) { if (_X761 != p) { _X761 = p; emit pos_X761Changed(p);} } double pos_X761() { return _X761; }
    void setPos_Y761(double p) { if (_Y761 != p) { _Y761 = p; emit pos_Y761Changed(p);} } double pos_Y761() { return _Y761; }
    void setPos_R761(double p) { if (_R761 != p) { _R761 = p; emit pos_R761Changed(p);} } double pos_R761() { return _R761; }
    void setPos_X762(double p) { if (_X762 != p) { _X762 = p; emit pos_X762Changed(p);} } double pos_X762() { return _X762; }
    void setPos_Y762(double p) { if (_Y762 != p) { _Y762 = p; emit pos_Y762Changed(p);} } double pos_Y762() { return _Y762; }
    void setPos_R762(double p) { if (_R762 != p) { _R762 = p; emit pos_R762Changed(p);} } double pos_R762() { return _R762; }
    void setPos_X763(double p) { if (_X763 != p) { _X763 = p; emit pos_X763Changed(p);} } double pos_X763() { return _X763; }
    void setPos_Y763(double p) { if (_Y763 != p) { _Y763 = p; emit pos_Y763Changed(p);} } double pos_Y763() { return _Y763; }
    void setPos_R763(double p) { if (_R763 != p) { _R763 = p; emit pos_R763Changed(p);} } double pos_R763() { return _R763; }
    void setPos_X764(double p) { if (_X764 != p) { _X764 = p; emit pos_X764Changed(p);} } double pos_X764() { return _X764; }
    void setPos_Y764(double p) { if (_Y764 != p) { _Y764 = p; emit pos_Y764Changed(p);} } double pos_Y764() { return _Y764; }
    void setPos_R764(double p) { if (_R764 != p) { _R764 = p; emit pos_R764Changed(p);} } double pos_R764() { return _R764; }
    void setPos_X765(double p) { if (_X765 != p) { _X765 = p; emit pos_X765Changed(p);} } double pos_X765() { return _X765; }
    void setPos_Y765(double p) { if (_Y765 != p) { _Y765 = p; emit pos_Y765Changed(p);} } double pos_Y765() { return _Y765; }
    void setPos_R765(double p) { if (_R765 != p) { _R765 = p; emit pos_R765Changed(p);} } double pos_R765() { return _R765; }
    void setPos_X766(double p) { if (_X766 != p) { _X766 = p; emit pos_X766Changed(p);} } double pos_X766() { return _X766; }
    void setPos_Y766(double p) { if (_Y766 != p) { _Y766 = p; emit pos_Y766Changed(p);} } double pos_Y766() { return _Y766; }
    void setPos_R766(double p) { if (_R766 != p) { _R766 = p; emit pos_R766Changed(p);} } double pos_R766() { return _R766; }
    void setPos_X767(double p) { if (_X767 != p) { _X767 = p; emit pos_X767Changed(p);} } double pos_X767() { return _X767; }
    void setPos_Y767(double p) { if (_Y767 != p) { _Y767 = p; emit pos_Y767Changed(p);} } double pos_Y767() { return _Y767; }
    void setPos_R767(double p) { if (_R767 != p) { _R767 = p; emit pos_R767Changed(p);} } double pos_R767() { return _R767; }
    void setPos_X768(double p) { if (_X768 != p) { _X768 = p; emit pos_X768Changed(p);} } double pos_X768() { return _X768; }
    void setPos_Y768(double p) { if (_Y768 != p) { _Y768 = p; emit pos_Y768Changed(p);} } double pos_Y768() { return _Y768; }
    void setPos_R768(double p) { if (_R768 != p) { _R768 = p; emit pos_R768Changed(p);} } double pos_R768() { return _R768; }
    void setPos_X769(double p) { if (_X769 != p) { _X769 = p; emit pos_X769Changed(p);} } double pos_X769() { return _X769; }
    void setPos_Y769(double p) { if (_Y769 != p) { _Y769 = p; emit pos_Y769Changed(p);} } double pos_Y769() { return _Y769; }
    void setPos_R769(double p) { if (_R769 != p) { _R769 = p; emit pos_R769Changed(p);} } double pos_R769() { return _R769; }
    void setPos_X770(double p) { if (_X770 != p) { _X770 = p; emit pos_X770Changed(p);} } double pos_X770() { return _X770; }
    void setPos_Y770(double p) { if (_Y770 != p) { _Y770 = p; emit pos_Y770Changed(p);} } double pos_Y770() { return _Y770; }
    void setPos_R770(double p) { if (_R770 != p) { _R770 = p; emit pos_R770Changed(p);} } double pos_R770() { return _R770; }
    void setPos_X771(double p) { if (_X771 != p) { _X771 = p; emit pos_X771Changed(p);} } double pos_X771() { return _X771; }
    void setPos_Y771(double p) { if (_Y771 != p) { _Y771 = p; emit pos_Y771Changed(p);} } double pos_Y771() { return _Y771; }
    void setPos_R771(double p) { if (_R771 != p) { _R771 = p; emit pos_R771Changed(p);} } double pos_R771() { return _R771; }
    void setPos_X772(double p) { if (_X772 != p) { _X772 = p; emit pos_X772Changed(p);} } double pos_X772() { return _X772; }
    void setPos_Y772(double p) { if (_Y772 != p) { _Y772 = p; emit pos_Y772Changed(p);} } double pos_Y772() { return _Y772; }
    void setPos_R772(double p) { if (_R772 != p) { _R772 = p; emit pos_R772Changed(p);} } double pos_R772() { return _R772; }
    void setPos_X773(double p) { if (_X773 != p) { _X773 = p; emit pos_X773Changed(p);} } double pos_X773() { return _X773; }
    void setPos_Y773(double p) { if (_Y773 != p) { _Y773 = p; emit pos_Y773Changed(p);} } double pos_Y773() { return _Y773; }
    void setPos_R773(double p) { if (_R773 != p) { _R773 = p; emit pos_R773Changed(p);} } double pos_R773() { return _R773; }
    void setPos_X774(double p) { if (_X774 != p) { _X774 = p; emit pos_X774Changed(p);} } double pos_X774() { return _X774; }
    void setPos_Y774(double p) { if (_Y774 != p) { _Y774 = p; emit pos_Y774Changed(p);} } double pos_Y774() { return _Y774; }
    void setPos_R774(double p) { if (_R774 != p) { _R774 = p; emit pos_R774Changed(p);} } double pos_R774() { return _R774; }
    void setPos_X775(double p) { if (_X775 != p) { _X775 = p; emit pos_X775Changed(p);} } double pos_X775() { return _X775; }
    void setPos_Y775(double p) { if (_Y775 != p) { _Y775 = p; emit pos_Y775Changed(p);} } double pos_Y775() { return _Y775; }
    void setPos_R775(double p) { if (_R775 != p) { _R775 = p; emit pos_R775Changed(p);} } double pos_R775() { return _R775; }
    void setPos_X776(double p) { if (_X776 != p) { _X776 = p; emit pos_X776Changed(p);} } double pos_X776() { return _X776; }
    void setPos_Y776(double p) { if (_Y776 != p) { _Y776 = p; emit pos_Y776Changed(p);} } double pos_Y776() { return _Y776; }
    void setPos_R776(double p) { if (_R776 != p) { _R776 = p; emit pos_R776Changed(p);} } double pos_R776() { return _R776; }
    void setPos_X777(double p) { if (_X777 != p) { _X777 = p; emit pos_X777Changed(p);} } double pos_X777() { return _X777; }
    void setPos_Y777(double p) { if (_Y777 != p) { _Y777 = p; emit pos_Y777Changed(p);} } double pos_Y777() { return _Y777; }
    void setPos_R777(double p) { if (_R777 != p) { _R777 = p; emit pos_R777Changed(p);} } double pos_R777() { return _R777; }
    void setPos_X778(double p) { if (_X778 != p) { _X778 = p; emit pos_X778Changed(p);} } double pos_X778() { return _X778; }
    void setPos_Y778(double p) { if (_Y778 != p) { _Y778 = p; emit pos_Y778Changed(p);} } double pos_Y778() { return _Y778; }
    void setPos_R778(double p) { if (_R778 != p) { _R778 = p; emit pos_R778Changed(p);} } double pos_R778() { return _R778; }
    void setPos_X779(double p) { if (_X779 != p) { _X779 = p; emit pos_X779Changed(p);} } double pos_X779() { return _X779; }
    void setPos_Y779(double p) { if (_Y779 != p) { _Y779 = p; emit pos_Y779Changed(p);} } double pos_Y779() { return _Y779; }
    void setPos_R779(double p) { if (_R779 != p) { _R779 = p; emit pos_R779Changed(p);} } double pos_R779() { return _R779; }
    void setPos_X780(double p) { if (_X780 != p) { _X780 = p; emit pos_X780Changed(p);} } double pos_X780() { return _X780; }
    void setPos_Y780(double p) { if (_Y780 != p) { _Y780 = p; emit pos_Y780Changed(p);} } double pos_Y780() { return _Y780; }
    void setPos_R780(double p) { if (_R780 != p) { _R780 = p; emit pos_R780Changed(p);} } double pos_R780() { return _R780; }
    void setPos_X781(double p) { if (_X781 != p) { _X781 = p; emit pos_X781Changed(p);} } double pos_X781() { return _X781; }
    void setPos_Y781(double p) { if (_Y781 != p) { _Y781 = p; emit pos_Y781Changed(p);} } double pos_Y781() { return _Y781; }
    void setPos_R781(double p) { if (_R781 != p) { _R781 = p; emit pos_R781Changed(p);} } double pos_R781() { return _R781; }
    void setPos_X782(double p) { if (_X782 != p) { _X782 = p; emit pos_X782Changed(p);} } double pos_X782() { return _X782; }
    void setPos_Y782(double p) { if (_Y782 != p) { _Y782 = p; emit pos_Y782Changed(p);} } double pos_Y782() { return _Y782; }
    void setPos_R782(double p) { if (_R782 != p) { _R782 = p; emit pos_R782Changed(p);} } double pos_R782() { return _R782; }
    void setPos_X783(double p) { if (_X783 != p) { _X783 = p; emit pos_X783Changed(p);} } double pos_X783() { return _X783; }
    void setPos_Y783(double p) { if (_Y783 != p) { _Y783 = p; emit pos_Y783Changed(p);} } double pos_Y783() { return _Y783; }
    void setPos_R783(double p) { if (_R783 != p) { _R783 = p; emit pos_R783Changed(p);} } double pos_R783() { return _R783; }
    void setPos_X784(double p) { if (_X784 != p) { _X784 = p; emit pos_X784Changed(p);} } double pos_X784() { return _X784; }
    void setPos_Y784(double p) { if (_Y784 != p) { _Y784 = p; emit pos_Y784Changed(p);} } double pos_Y784() { return _Y784; }
    void setPos_R784(double p) { if (_R784 != p) { _R784 = p; emit pos_R784Changed(p);} } double pos_R784() { return _R784; }
    void setPos_X785(double p) { if (_X785 != p) { _X785 = p; emit pos_X785Changed(p);} } double pos_X785() { return _X785; }
    void setPos_Y785(double p) { if (_Y785 != p) { _Y785 = p; emit pos_Y785Changed(p);} } double pos_Y785() { return _Y785; }
    void setPos_R785(double p) { if (_R785 != p) { _R785 = p; emit pos_R785Changed(p);} } double pos_R785() { return _R785; }
    void setPos_X786(double p) { if (_X786 != p) { _X786 = p; emit pos_X786Changed(p);} } double pos_X786() { return _X786; }
    void setPos_Y786(double p) { if (_Y786 != p) { _Y786 = p; emit pos_Y786Changed(p);} } double pos_Y786() { return _Y786; }
    void setPos_R786(double p) { if (_R786 != p) { _R786 = p; emit pos_R786Changed(p);} } double pos_R786() { return _R786; }
    void setPos_X787(double p) { if (_X787 != p) { _X787 = p; emit pos_X787Changed(p);} } double pos_X787() { return _X787; }
    void setPos_Y787(double p) { if (_Y787 != p) { _Y787 = p; emit pos_Y787Changed(p);} } double pos_Y787() { return _Y787; }
    void setPos_R787(double p) { if (_R787 != p) { _R787 = p; emit pos_R787Changed(p);} } double pos_R787() { return _R787; }
    void setPos_X788(double p) { if (_X788 != p) { _X788 = p; emit pos_X788Changed(p);} } double pos_X788() { return _X788; }
    void setPos_Y788(double p) { if (_Y788 != p) { _Y788 = p; emit pos_Y788Changed(p);} } double pos_Y788() { return _Y788; }
    void setPos_R788(double p) { if (_R788 != p) { _R788 = p; emit pos_R788Changed(p);} } double pos_R788() { return _R788; }
    void setPos_X789(double p) { if (_X789 != p) { _X789 = p; emit pos_X789Changed(p);} } double pos_X789() { return _X789; }
    void setPos_Y789(double p) { if (_Y789 != p) { _Y789 = p; emit pos_Y789Changed(p);} } double pos_Y789() { return _Y789; }
    void setPos_R789(double p) { if (_R789 != p) { _R789 = p; emit pos_R789Changed(p);} } double pos_R789() { return _R789; }
    void setPos_X790(double p) { if (_X790 != p) { _X790 = p; emit pos_X790Changed(p);} } double pos_X790() { return _X790; }
    void setPos_Y790(double p) { if (_Y790 != p) { _Y790 = p; emit pos_Y790Changed(p);} } double pos_Y790() { return _Y790; }
    void setPos_R790(double p) { if (_R790 != p) { _R790 = p; emit pos_R790Changed(p);} } double pos_R790() { return _R790; }
    void setPos_X791(double p) { if (_X791 != p) { _X791 = p; emit pos_X791Changed(p);} } double pos_X791() { return _X791; }
    void setPos_Y791(double p) { if (_Y791 != p) { _Y791 = p; emit pos_Y791Changed(p);} } double pos_Y791() { return _Y791; }
    void setPos_R791(double p) { if (_R791 != p) { _R791 = p; emit pos_R791Changed(p);} } double pos_R791() { return _R791; }
    void setPos_X792(double p) { if (_X792 != p) { _X792 = p; emit pos_X792Changed(p);} } double pos_X792() { return _X792; }
    void setPos_Y792(double p) { if (_Y792 != p) { _Y792 = p; emit pos_Y792Changed(p);} } double pos_Y792() { return _Y792; }
    void setPos_R792(double p) { if (_R792 != p) { _R792 = p; emit pos_R792Changed(p);} } double pos_R792() { return _R792; }
    void setPos_X793(double p) { if (_X793 != p) { _X793 = p; emit pos_X793Changed(p);} } double pos_X793() { return _X793; }
    void setPos_Y793(double p) { if (_Y793 != p) { _Y793 = p; emit pos_Y793Changed(p);} } double pos_Y793() { return _Y793; }
    void setPos_R793(double p) { if (_R793 != p) { _R793 = p; emit pos_R793Changed(p);} } double pos_R793() { return _R793; }
    void setPos_X794(double p) { if (_X794 != p) { _X794 = p; emit pos_X794Changed(p);} } double pos_X794() { return _X794; }
    void setPos_Y794(double p) { if (_Y794 != p) { _Y794 = p; emit pos_Y794Changed(p);} } double pos_Y794() { return _Y794; }
    void setPos_R794(double p) { if (_R794 != p) { _R794 = p; emit pos_R794Changed(p);} } double pos_R794() { return _R794; }
    void setPos_X795(double p) { if (_X795 != p) { _X795 = p; emit pos_X795Changed(p);} } double pos_X795() { return _X795; }
    void setPos_Y795(double p) { if (_Y795 != p) { _Y795 = p; emit pos_Y795Changed(p);} } double pos_Y795() { return _Y795; }
    void setPos_R795(double p) { if (_R795 != p) { _R795 = p; emit pos_R795Changed(p);} } double pos_R795() { return _R795; }
    void setPos_X796(double p) { if (_X796 != p) { _X796 = p; emit pos_X796Changed(p);} } double pos_X796() { return _X796; }
    void setPos_Y796(double p) { if (_Y796 != p) { _Y796 = p; emit pos_Y796Changed(p);} } double pos_Y796() { return _Y796; }
    void setPos_R796(double p) { if (_R796 != p) { _R796 = p; emit pos_R796Changed(p);} } double pos_R796() { return _R796; }
    void setPos_X797(double p) { if (_X797 != p) { _X797 = p; emit pos_X797Changed(p);} } double pos_X797() { return _X797; }
    void setPos_Y797(double p) { if (_Y797 != p) { _Y797 = p; emit pos_Y797Changed(p);} } double pos_Y797() { return _Y797; }
    void setPos_R797(double p) { if (_R797 != p) { _R797 = p; emit pos_R797Changed(p);} } double pos_R797() { return _R797; }
    void setPos_X798(double p) { if (_X798 != p) { _X798 = p; emit pos_X798Changed(p);} } double pos_X798() { return _X798; }
    void setPos_Y798(double p) { if (_Y798 != p) { _Y798 = p; emit pos_Y798Changed(p);} } double pos_Y798() { return _Y798; }
    void setPos_R798(double p) { if (_R798 != p) { _R798 = p; emit pos_R798Changed(p);} } double pos_R798() { return _R798; }
    void setPos_X799(double p) { if (_X799 != p) { _X799 = p; emit pos_X799Changed(p);} } double pos_X799() { return _X799; }
    void setPos_Y799(double p) { if (_Y799 != p) { _Y799 = p; emit pos_Y799Changed(p);} } double pos_Y799() { return _Y799; }
    void setPos_R799(double p) { if (_R799 != p) { _R799 = p; emit pos_R799Changed(p);} } double pos_R799() { return _R799; }
    void setPos_X800(double p) { if (_X800 != p) { _X800 = p; emit pos_X800Changed(p);} } double pos_X800() { return _X800; }
    void setPos_Y800(double p) { if (_Y800 != p) { _Y800 = p; emit pos_Y800Changed(p);} } double pos_Y800() { return _Y800; }
    void setPos_R800(double p) { if (_R800 != p) { _R800 = p; emit pos_R800Changed(p);} } double pos_R800() { return _R800; }
    void setPos_X801(double p) { if (_X801 != p) { _X801 = p; emit pos_X801Changed(p);} } double pos_X801() { return _X801; }
    void setPos_Y801(double p) { if (_Y801 != p) { _Y801 = p; emit pos_Y801Changed(p);} } double pos_Y801() { return _Y801; }
    void setPos_R801(double p) { if (_R801 != p) { _R801 = p; emit pos_R801Changed(p);} } double pos_R801() { return _R801; }
    void setPos_X802(double p) { if (_X802 != p) { _X802 = p; emit pos_X802Changed(p);} } double pos_X802() { return _X802; }
    void setPos_Y802(double p) { if (_Y802 != p) { _Y802 = p; emit pos_Y802Changed(p);} } double pos_Y802() { return _Y802; }
    void setPos_R802(double p) { if (_R802 != p) { _R802 = p; emit pos_R802Changed(p);} } double pos_R802() { return _R802; }
    void setPos_X803(double p) { if (_X803 != p) { _X803 = p; emit pos_X803Changed(p);} } double pos_X803() { return _X803; }
    void setPos_Y803(double p) { if (_Y803 != p) { _Y803 = p; emit pos_Y803Changed(p);} } double pos_Y803() { return _Y803; }
    void setPos_R803(double p) { if (_R803 != p) { _R803 = p; emit pos_R803Changed(p);} } double pos_R803() { return _R803; }
    void setPos_X804(double p) { if (_X804 != p) { _X804 = p; emit pos_X804Changed(p);} } double pos_X804() { return _X804; }
    void setPos_Y804(double p) { if (_Y804 != p) { _Y804 = p; emit pos_Y804Changed(p);} } double pos_Y804() { return _Y804; }
    void setPos_R804(double p) { if (_R804 != p) { _R804 = p; emit pos_R804Changed(p);} } double pos_R804() { return _R804; }
    void setPos_X805(double p) { if (_X805 != p) { _X805 = p; emit pos_X805Changed(p);} } double pos_X805() { return _X805; }
    void setPos_Y805(double p) { if (_Y805 != p) { _Y805 = p; emit pos_Y805Changed(p);} } double pos_Y805() { return _Y805; }
    void setPos_R805(double p) { if (_R805 != p) { _R805 = p; emit pos_R805Changed(p);} } double pos_R805() { return _R805; }
    void setPos_X806(double p) { if (_X806 != p) { _X806 = p; emit pos_X806Changed(p);} } double pos_X806() { return _X806; }
    void setPos_Y806(double p) { if (_Y806 != p) { _Y806 = p; emit pos_Y806Changed(p);} } double pos_Y806() { return _Y806; }
    void setPos_R806(double p) { if (_R806 != p) { _R806 = p; emit pos_R806Changed(p);} } double pos_R806() { return _R806; }
    void setPos_X807(double p) { if (_X807 != p) { _X807 = p; emit pos_X807Changed(p);} } double pos_X807() { return _X807; }
    void setPos_Y807(double p) { if (_Y807 != p) { _Y807 = p; emit pos_Y807Changed(p);} } double pos_Y807() { return _Y807; }
    void setPos_R807(double p) { if (_R807 != p) { _R807 = p; emit pos_R807Changed(p);} } double pos_R807() { return _R807; }
    void setPos_X808(double p) { if (_X808 != p) { _X808 = p; emit pos_X808Changed(p);} } double pos_X808() { return _X808; }
    void setPos_Y808(double p) { if (_Y808 != p) { _Y808 = p; emit pos_Y808Changed(p);} } double pos_Y808() { return _Y808; }
    void setPos_R808(double p) { if (_R808 != p) { _R808 = p; emit pos_R808Changed(p);} } double pos_R808() { return _R808; }
    void setPos_X809(double p) { if (_X809 != p) { _X809 = p; emit pos_X809Changed(p);} } double pos_X809() { return _X809; }
    void setPos_Y809(double p) { if (_Y809 != p) { _Y809 = p; emit pos_Y809Changed(p);} } double pos_Y809() { return _Y809; }
    void setPos_R809(double p) { if (_R809 != p) { _R809 = p; emit pos_R809Changed(p);} } double pos_R809() { return _R809; }
    void setPos_X810(double p) { if (_X810 != p) { _X810 = p; emit pos_X810Changed(p);} } double pos_X810() { return _X810; }
    void setPos_Y810(double p) { if (_Y810 != p) { _Y810 = p; emit pos_Y810Changed(p);} } double pos_Y810() { return _Y810; }
    void setPos_R810(double p) { if (_R810 != p) { _R810 = p; emit pos_R810Changed(p);} } double pos_R810() { return _R810; }
    void setPos_X811(double p) { if (_X811 != p) { _X811 = p; emit pos_X811Changed(p);} } double pos_X811() { return _X811; }
    void setPos_Y811(double p) { if (_Y811 != p) { _Y811 = p; emit pos_Y811Changed(p);} } double pos_Y811() { return _Y811; }
    void setPos_R811(double p) { if (_R811 != p) { _R811 = p; emit pos_R811Changed(p);} } double pos_R811() { return _R811; }
    void setPos_X812(double p) { if (_X812 != p) { _X812 = p; emit pos_X812Changed(p);} } double pos_X812() { return _X812; }
    void setPos_Y812(double p) { if (_Y812 != p) { _Y812 = p; emit pos_Y812Changed(p);} } double pos_Y812() { return _Y812; }
    void setPos_R812(double p) { if (_R812 != p) { _R812 = p; emit pos_R812Changed(p);} } double pos_R812() { return _R812; }
    void setPos_X813(double p) { if (_X813 != p) { _X813 = p; emit pos_X813Changed(p);} } double pos_X813() { return _X813; }
    void setPos_Y813(double p) { if (_Y813 != p) { _Y813 = p; emit pos_Y813Changed(p);} } double pos_Y813() { return _Y813; }
    void setPos_R813(double p) { if (_R813 != p) { _R813 = p; emit pos_R813Changed(p);} } double pos_R813() { return _R813; }
    void setPos_X814(double p) { if (_X814 != p) { _X814 = p; emit pos_X814Changed(p);} } double pos_X814() { return _X814; }
    void setPos_Y814(double p) { if (_Y814 != p) { _Y814 = p; emit pos_Y814Changed(p);} } double pos_Y814() { return _Y814; }
    void setPos_R814(double p) { if (_R814 != p) { _R814 = p; emit pos_R814Changed(p);} } double pos_R814() { return _R814; }
    void setPos_X815(double p) { if (_X815 != p) { _X815 = p; emit pos_X815Changed(p);} } double pos_X815() { return _X815; }
    void setPos_Y815(double p) { if (_Y815 != p) { _Y815 = p; emit pos_Y815Changed(p);} } double pos_Y815() { return _Y815; }
    void setPos_R815(double p) { if (_R815 != p) { _R815 = p; emit pos_R815Changed(p);} } double pos_R815() { return _R815; }
    void setPos_X816(double p) { if (_X816 != p) { _X816 = p; emit pos_X816Changed(p);} } double pos_X816() { return _X816; }
    void setPos_Y816(double p) { if (_Y816 != p) { _Y816 = p; emit pos_Y816Changed(p);} } double pos_Y816() { return _Y816; }
    void setPos_R816(double p) { if (_R816 != p) { _R816 = p; emit pos_R816Changed(p);} } double pos_R816() { return _R816; }
    void setPos_X817(double p) { if (_X817 != p) { _X817 = p; emit pos_X817Changed(p);} } double pos_X817() { return _X817; }
    void setPos_Y817(double p) { if (_Y817 != p) { _Y817 = p; emit pos_Y817Changed(p);} } double pos_Y817() { return _Y817; }
    void setPos_R817(double p) { if (_R817 != p) { _R817 = p; emit pos_R817Changed(p);} } double pos_R817() { return _R817; }
    void setPos_X818(double p) { if (_X818 != p) { _X818 = p; emit pos_X818Changed(p);} } double pos_X818() { return _X818; }
    void setPos_Y818(double p) { if (_Y818 != p) { _Y818 = p; emit pos_Y818Changed(p);} } double pos_Y818() { return _Y818; }
    void setPos_R818(double p) { if (_R818 != p) { _R818 = p; emit pos_R818Changed(p);} } double pos_R818() { return _R818; }
    void setPos_X819(double p) { if (_X819 != p) { _X819 = p; emit pos_X819Changed(p);} } double pos_X819() { return _X819; }
    void setPos_Y819(double p) { if (_Y819 != p) { _Y819 = p; emit pos_Y819Changed(p);} } double pos_Y819() { return _Y819; }
    void setPos_R819(double p) { if (_R819 != p) { _R819 = p; emit pos_R819Changed(p);} } double pos_R819() { return _R819; }
    void setPos_X820(double p) { if (_X820 != p) { _X820 = p; emit pos_X820Changed(p);} } double pos_X820() { return _X820; }
    void setPos_Y820(double p) { if (_Y820 != p) { _Y820 = p; emit pos_Y820Changed(p);} } double pos_Y820() { return _Y820; }
    void setPos_R820(double p) { if (_R820 != p) { _R820 = p; emit pos_R820Changed(p);} } double pos_R820() { return _R820; }
    void setPos_X821(double p) { if (_X821 != p) { _X821 = p; emit pos_X821Changed(p);} } double pos_X821() { return _X821; }
    void setPos_Y821(double p) { if (_Y821 != p) { _Y821 = p; emit pos_Y821Changed(p);} } double pos_Y821() { return _Y821; }
    void setPos_R821(double p) { if (_R821 != p) { _R821 = p; emit pos_R821Changed(p);} } double pos_R821() { return _R821; }
    void setPos_X822(double p) { if (_X822 != p) { _X822 = p; emit pos_X822Changed(p);} } double pos_X822() { return _X822; }
    void setPos_Y822(double p) { if (_Y822 != p) { _Y822 = p; emit pos_Y822Changed(p);} } double pos_Y822() { return _Y822; }
    void setPos_R822(double p) { if (_R822 != p) { _R822 = p; emit pos_R822Changed(p);} } double pos_R822() { return _R822; }
    void setPos_X823(double p) { if (_X823 != p) { _X823 = p; emit pos_X823Changed(p);} } double pos_X823() { return _X823; }
    void setPos_Y823(double p) { if (_Y823 != p) { _Y823 = p; emit pos_Y823Changed(p);} } double pos_Y823() { return _Y823; }
    void setPos_R823(double p) { if (_R823 != p) { _R823 = p; emit pos_R823Changed(p);} } double pos_R823() { return _R823; }
    void setPos_X824(double p) { if (_X824 != p) { _X824 = p; emit pos_X824Changed(p);} } double pos_X824() { return _X824; }
    void setPos_Y824(double p) { if (_Y824 != p) { _Y824 = p; emit pos_Y824Changed(p);} } double pos_Y824() { return _Y824; }
    void setPos_R824(double p) { if (_R824 != p) { _R824 = p; emit pos_R824Changed(p);} } double pos_R824() { return _R824; }
    void setPos_X825(double p) { if (_X825 != p) { _X825 = p; emit pos_X825Changed(p);} } double pos_X825() { return _X825; }
    void setPos_Y825(double p) { if (_Y825 != p) { _Y825 = p; emit pos_Y825Changed(p);} } double pos_Y825() { return _Y825; }
    void setPos_R825(double p) { if (_R825 != p) { _R825 = p; emit pos_R825Changed(p);} } double pos_R825() { return _R825; }
    void setPos_X826(double p) { if (_X826 != p) { _X826 = p; emit pos_X826Changed(p);} } double pos_X826() { return _X826; }
    void setPos_Y826(double p) { if (_Y826 != p) { _Y826 = p; emit pos_Y826Changed(p);} } double pos_Y826() { return _Y826; }
    void setPos_R826(double p) { if (_R826 != p) { _R826 = p; emit pos_R826Changed(p);} } double pos_R826() { return _R826; }
    void setPos_X827(double p) { if (_X827 != p) { _X827 = p; emit pos_X827Changed(p);} } double pos_X827() { return _X827; }
    void setPos_Y827(double p) { if (_Y827 != p) { _Y827 = p; emit pos_Y827Changed(p);} } double pos_Y827() { return _Y827; }
    void setPos_R827(double p) { if (_R827 != p) { _R827 = p; emit pos_R827Changed(p);} } double pos_R827() { return _R827; }
    void setPos_X828(double p) { if (_X828 != p) { _X828 = p; emit pos_X828Changed(p);} } double pos_X828() { return _X828; }
    void setPos_Y828(double p) { if (_Y828 != p) { _Y828 = p; emit pos_Y828Changed(p);} } double pos_Y828() { return _Y828; }
    void setPos_R828(double p) { if (_R828 != p) { _R828 = p; emit pos_R828Changed(p);} } double pos_R828() { return _R828; }
    void setPos_X829(double p) { if (_X829 != p) { _X829 = p; emit pos_X829Changed(p);} } double pos_X829() { return _X829; }
    void setPos_Y829(double p) { if (_Y829 != p) { _Y829 = p; emit pos_Y829Changed(p);} } double pos_Y829() { return _Y829; }
    void setPos_R829(double p) { if (_R829 != p) { _R829 = p; emit pos_R829Changed(p);} } double pos_R829() { return _R829; }
    void setPos_X830(double p) { if (_X830 != p) { _X830 = p; emit pos_X830Changed(p);} } double pos_X830() { return _X830; }
    void setPos_Y830(double p) { if (_Y830 != p) { _Y830 = p; emit pos_Y830Changed(p);} } double pos_Y830() { return _Y830; }
    void setPos_R830(double p) { if (_R830 != p) { _R830 = p; emit pos_R830Changed(p);} } double pos_R830() { return _R830; }
    void setPos_X831(double p) { if (_X831 != p) { _X831 = p; emit pos_X831Changed(p);} } double pos_X831() { return _X831; }
    void setPos_Y831(double p) { if (_Y831 != p) { _Y831 = p; emit pos_Y831Changed(p);} } double pos_Y831() { return _Y831; }
    void setPos_R831(double p) { if (_R831 != p) { _R831 = p; emit pos_R831Changed(p);} } double pos_R831() { return _R831; }
    void setPos_X832(double p) { if (_X832 != p) { _X832 = p; emit pos_X832Changed(p);} } double pos_X832() { return _X832; }
    void setPos_Y832(double p) { if (_Y832 != p) { _Y832 = p; emit pos_Y832Changed(p);} } double pos_Y832() { return _Y832; }
    void setPos_R832(double p) { if (_R832 != p) { _R832 = p; emit pos_R832Changed(p);} } double pos_R832() { return _R832; }
    void setPos_X833(double p) { if (_X833 != p) { _X833 = p; emit pos_X833Changed(p);} } double pos_X833() { return _X833; }
    void setPos_Y833(double p) { if (_Y833 != p) { _Y833 = p; emit pos_Y833Changed(p);} } double pos_Y833() { return _Y833; }
    void setPos_R833(double p) { if (_R833 != p) { _R833 = p; emit pos_R833Changed(p);} } double pos_R833() { return _R833; }
    void setPos_X834(double p) { if (_X834 != p) { _X834 = p; emit pos_X834Changed(p);} } double pos_X834() { return _X834; }
    void setPos_Y834(double p) { if (_Y834 != p) { _Y834 = p; emit pos_Y834Changed(p);} } double pos_Y834() { return _Y834; }
    void setPos_R834(double p) { if (_R834 != p) { _R834 = p; emit pos_R834Changed(p);} } double pos_R834() { return _R834; }
    void setPos_X835(double p) { if (_X835 != p) { _X835 = p; emit pos_X835Changed(p);} } double pos_X835() { return _X835; }
    void setPos_Y835(double p) { if (_Y835 != p) { _Y835 = p; emit pos_Y835Changed(p);} } double pos_Y835() { return _Y835; }
    void setPos_R835(double p) { if (_R835 != p) { _R835 = p; emit pos_R835Changed(p);} } double pos_R835() { return _R835; }
    void setPos_X836(double p) { if (_X836 != p) { _X836 = p; emit pos_X836Changed(p);} } double pos_X836() { return _X836; }
    void setPos_Y836(double p) { if (_Y836 != p) { _Y836 = p; emit pos_Y836Changed(p);} } double pos_Y836() { return _Y836; }
    void setPos_R836(double p) { if (_R836 != p) { _R836 = p; emit pos_R836Changed(p);} } double pos_R836() { return _R836; }
    void setPos_X837(double p) { if (_X837 != p) { _X837 = p; emit pos_X837Changed(p);} } double pos_X837() { return _X837; }
    void setPos_Y837(double p) { if (_Y837 != p) { _Y837 = p; emit pos_Y837Changed(p);} } double pos_Y837() { return _Y837; }
    void setPos_R837(double p) { if (_R837 != p) { _R837 = p; emit pos_R837Changed(p);} } double pos_R837() { return _R837; }
    void setPos_X838(double p) { if (_X838 != p) { _X838 = p; emit pos_X838Changed(p);} } double pos_X838() { return _X838; }
    void setPos_Y838(double p) { if (_Y838 != p) { _Y838 = p; emit pos_Y838Changed(p);} } double pos_Y838() { return _Y838; }
    void setPos_R838(double p) { if (_R838 != p) { _R838 = p; emit pos_R838Changed(p);} } double pos_R838() { return _R838; }
    void setPos_X839(double p) { if (_X839 != p) { _X839 = p; emit pos_X839Changed(p);} } double pos_X839() { return _X839; }
    void setPos_Y839(double p) { if (_Y839 != p) { _Y839 = p; emit pos_Y839Changed(p);} } double pos_Y839() { return _Y839; }
    void setPos_R839(double p) { if (_R839 != p) { _R839 = p; emit pos_R839Changed(p);} } double pos_R839() { return _R839; }
    void setPos_X840(double p) { if (_X840 != p) { _X840 = p; emit pos_X840Changed(p);} } double pos_X840() { return _X840; }
    void setPos_Y840(double p) { if (_Y840 != p) { _Y840 = p; emit pos_Y840Changed(p);} } double pos_Y840() { return _Y840; }
    void setPos_R840(double p) { if (_R840 != p) { _R840 = p; emit pos_R840Changed(p);} } double pos_R840() { return _R840; }
    void setPos_X841(double p) { if (_X841 != p) { _X841 = p; emit pos_X841Changed(p);} } double pos_X841() { return _X841; }
    void setPos_Y841(double p) { if (_Y841 != p) { _Y841 = p; emit pos_Y841Changed(p);} } double pos_Y841() { return _Y841; }
    void setPos_R841(double p) { if (_R841 != p) { _R841 = p; emit pos_R841Changed(p);} } double pos_R841() { return _R841; }
    void setPos_X842(double p) { if (_X842 != p) { _X842 = p; emit pos_X842Changed(p);} } double pos_X842() { return _X842; }
    void setPos_Y842(double p) { if (_Y842 != p) { _Y842 = p; emit pos_Y842Changed(p);} } double pos_Y842() { return _Y842; }
    void setPos_R842(double p) { if (_R842 != p) { _R842 = p; emit pos_R842Changed(p);} } double pos_R842() { return _R842; }
    void setPos_X843(double p) { if (_X843 != p) { _X843 = p; emit pos_X843Changed(p);} } double pos_X843() { return _X843; }
    void setPos_Y843(double p) { if (_Y843 != p) { _Y843 = p; emit pos_Y843Changed(p);} } double pos_Y843() { return _Y843; }
    void setPos_R843(double p) { if (_R843 != p) { _R843 = p; emit pos_R843Changed(p);} } double pos_R843() { return _R843; }
    void setPos_X844(double p) { if (_X844 != p) { _X844 = p; emit pos_X844Changed(p);} } double pos_X844() { return _X844; }
    void setPos_Y844(double p) { if (_Y844 != p) { _Y844 = p; emit pos_Y844Changed(p);} } double pos_Y844() { return _Y844; }
    void setPos_R844(double p) { if (_R844 != p) { _R844 = p; emit pos_R844Changed(p);} } double pos_R844() { return _R844; }
    void setPos_X845(double p) { if (_X845 != p) { _X845 = p; emit pos_X845Changed(p);} } double pos_X845() { return _X845; }
    void setPos_Y845(double p) { if (_Y845 != p) { _Y845 = p; emit pos_Y845Changed(p);} } double pos_Y845() { return _Y845; }
    void setPos_R845(double p) { if (_R845 != p) { _R845 = p; emit pos_R845Changed(p);} } double pos_R845() { return _R845; }
    void setPos_X846(double p) { if (_X846 != p) { _X846 = p; emit pos_X846Changed(p);} } double pos_X846() { return _X846; }
    void setPos_Y846(double p) { if (_Y846 != p) { _Y846 = p; emit pos_Y846Changed(p);} } double pos_Y846() { return _Y846; }
    void setPos_R846(double p) { if (_R846 != p) { _R846 = p; emit pos_R846Changed(p);} } double pos_R846() { return _R846; }
    void setPos_X847(double p) { if (_X847 != p) { _X847 = p; emit pos_X847Changed(p);} } double pos_X847() { return _X847; }
    void setPos_Y847(double p) { if (_Y847 != p) { _Y847 = p; emit pos_Y847Changed(p);} } double pos_Y847() { return _Y847; }
    void setPos_R847(double p) { if (_R847 != p) { _R847 = p; emit pos_R847Changed(p);} } double pos_R847() { return _R847; }
    void setPos_X848(double p) { if (_X848 != p) { _X848 = p; emit pos_X848Changed(p);} } double pos_X848() { return _X848; }
    void setPos_Y848(double p) { if (_Y848 != p) { _Y848 = p; emit pos_Y848Changed(p);} } double pos_Y848() { return _Y848; }
    void setPos_R848(double p) { if (_R848 != p) { _R848 = p; emit pos_R848Changed(p);} } double pos_R848() { return _R848; }
    void setPos_X849(double p) { if (_X849 != p) { _X849 = p; emit pos_X849Changed(p);} } double pos_X849() { return _X849; }
    void setPos_Y849(double p) { if (_Y849 != p) { _Y849 = p; emit pos_Y849Changed(p);} } double pos_Y849() { return _Y849; }
    void setPos_R849(double p) { if (_R849 != p) { _R849 = p; emit pos_R849Changed(p);} } double pos_R849() { return _R849; }
    void setPos_X850(double p) { if (_X850 != p) { _X850 = p; emit pos_X850Changed(p);} } double pos_X850() { return _X850; }
    void setPos_Y850(double p) { if (_Y850 != p) { _Y850 = p; emit pos_Y850Changed(p);} } double pos_Y850() { return _Y850; }
    void setPos_R850(double p) { if (_R850 != p) { _R850 = p; emit pos_R850Changed(p);} } double pos_R850() { return _R850; }
    void setPos_X851(double p) { if (_X851 != p) { _X851 = p; emit pos_X851Changed(p);} } double pos_X851() { return _X851; }
    void setPos_Y851(double p) { if (_Y851 != p) { _Y851 = p; emit pos_Y851Changed(p);} } double pos_Y851() { return _Y851; }
    void setPos_R851(double p) { if (_R851 != p) { _R851 = p; emit pos_R851Changed(p);} } double pos_R851() { return _R851; }
    void setPos_X852(double p) { if (_X852 != p) { _X852 = p; emit pos_X852Changed(p);} } double pos_X852() { return _X852; }
    void setPos_Y852(double p) { if (_Y852 != p) { _Y852 = p; emit pos_Y852Changed(p);} } double pos_Y852() { return _Y852; }
    void setPos_R852(double p) { if (_R852 != p) { _R852 = p; emit pos_R852Changed(p);} } double pos_R852() { return _R852; }
    void setPos_X853(double p) { if (_X853 != p) { _X853 = p; emit pos_X853Changed(p);} } double pos_X853() { return _X853; }
    void setPos_Y853(double p) { if (_Y853 != p) { _Y853 = p; emit pos_Y853Changed(p);} } double pos_Y853() { return _Y853; }
    void setPos_R853(double p) { if (_R853 != p) { _R853 = p; emit pos_R853Changed(p);} } double pos_R853() { return _R853; }
    void setPos_X854(double p) { if (_X854 != p) { _X854 = p; emit pos_X854Changed(p);} } double pos_X854() { return _X854; }
    void setPos_Y854(double p) { if (_Y854 != p) { _Y854 = p; emit pos_Y854Changed(p);} } double pos_Y854() { return _Y854; }
    void setPos_R854(double p) { if (_R854 != p) { _R854 = p; emit pos_R854Changed(p);} } double pos_R854() { return _R854; }
    void setPos_X855(double p) { if (_X855 != p) { _X855 = p; emit pos_X855Changed(p);} } double pos_X855() { return _X855; }
    void setPos_Y855(double p) { if (_Y855 != p) { _Y855 = p; emit pos_Y855Changed(p);} } double pos_Y855() { return _Y855; }
    void setPos_R855(double p) { if (_R855 != p) { _R855 = p; emit pos_R855Changed(p);} } double pos_R855() { return _R855; }
    void setPos_X856(double p) { if (_X856 != p) { _X856 = p; emit pos_X856Changed(p);} } double pos_X856() { return _X856; }
    void setPos_Y856(double p) { if (_Y856 != p) { _Y856 = p; emit pos_Y856Changed(p);} } double pos_Y856() { return _Y856; }
    void setPos_R856(double p) { if (_R856 != p) { _R856 = p; emit pos_R856Changed(p);} } double pos_R856() { return _R856; }
    void setPos_X857(double p) { if (_X857 != p) { _X857 = p; emit pos_X857Changed(p);} } double pos_X857() { return _X857; }
    void setPos_Y857(double p) { if (_Y857 != p) { _Y857 = p; emit pos_Y857Changed(p);} } double pos_Y857() { return _Y857; }
    void setPos_R857(double p) { if (_R857 != p) { _R857 = p; emit pos_R857Changed(p);} } double pos_R857() { return _R857; }
    void setPos_X858(double p) { if (_X858 != p) { _X858 = p; emit pos_X858Changed(p);} } double pos_X858() { return _X858; }
    void setPos_Y858(double p) { if (_Y858 != p) { _Y858 = p; emit pos_Y858Changed(p);} } double pos_Y858() { return _Y858; }
    void setPos_R858(double p) { if (_R858 != p) { _R858 = p; emit pos_R858Changed(p);} } double pos_R858() { return _R858; }
    void setPos_X859(double p) { if (_X859 != p) { _X859 = p; emit pos_X859Changed(p);} } double pos_X859() { return _X859; }
    void setPos_Y859(double p) { if (_Y859 != p) { _Y859 = p; emit pos_Y859Changed(p);} } double pos_Y859() { return _Y859; }
    void setPos_R859(double p) { if (_R859 != p) { _R859 = p; emit pos_R859Changed(p);} } double pos_R859() { return _R859; }
    void setPos_X860(double p) { if (_X860 != p) { _X860 = p; emit pos_X860Changed(p);} } double pos_X860() { return _X860; }
    void setPos_Y860(double p) { if (_Y860 != p) { _Y860 = p; emit pos_Y860Changed(p);} } double pos_Y860() { return _Y860; }
    void setPos_R860(double p) { if (_R860 != p) { _R860 = p; emit pos_R860Changed(p);} } double pos_R860() { return _R860; }
    void setPos_X861(double p) { if (_X861 != p) { _X861 = p; emit pos_X861Changed(p);} } double pos_X861() { return _X861; }
    void setPos_Y861(double p) { if (_Y861 != p) { _Y861 = p; emit pos_Y861Changed(p);} } double pos_Y861() { return _Y861; }
    void setPos_R861(double p) { if (_R861 != p) { _R861 = p; emit pos_R861Changed(p);} } double pos_R861() { return _R861; }
    void setPos_X862(double p) { if (_X862 != p) { _X862 = p; emit pos_X862Changed(p);} } double pos_X862() { return _X862; }
    void setPos_Y862(double p) { if (_Y862 != p) { _Y862 = p; emit pos_Y862Changed(p);} } double pos_Y862() { return _Y862; }
    void setPos_R862(double p) { if (_R862 != p) { _R862 = p; emit pos_R862Changed(p);} } double pos_R862() { return _R862; }
    void setPos_X863(double p) { if (_X863 != p) { _X863 = p; emit pos_X863Changed(p);} } double pos_X863() { return _X863; }
    void setPos_Y863(double p) { if (_Y863 != p) { _Y863 = p; emit pos_Y863Changed(p);} } double pos_Y863() { return _Y863; }
    void setPos_R863(double p) { if (_R863 != p) { _R863 = p; emit pos_R863Changed(p);} } double pos_R863() { return _R863; }
    void setPos_X864(double p) { if (_X864 != p) { _X864 = p; emit pos_X864Changed(p);} } double pos_X864() { return _X864; }
    void setPos_Y864(double p) { if (_Y864 != p) { _Y864 = p; emit pos_Y864Changed(p);} } double pos_Y864() { return _Y864; }
    void setPos_R864(double p) { if (_R864 != p) { _R864 = p; emit pos_R864Changed(p);} } double pos_R864() { return _R864; }
    void setPos_X865(double p) { if (_X865 != p) { _X865 = p; emit pos_X865Changed(p);} } double pos_X865() { return _X865; }
    void setPos_Y865(double p) { if (_Y865 != p) { _Y865 = p; emit pos_Y865Changed(p);} } double pos_Y865() { return _Y865; }
    void setPos_R865(double p) { if (_R865 != p) { _R865 = p; emit pos_R865Changed(p);} } double pos_R865() { return _R865; }
    void setPos_X866(double p) { if (_X866 != p) { _X866 = p; emit pos_X866Changed(p);} } double pos_X866() { return _X866; }
    void setPos_Y866(double p) { if (_Y866 != p) { _Y866 = p; emit pos_Y866Changed(p);} } double pos_Y866() { return _Y866; }
    void setPos_R866(double p) { if (_R866 != p) { _R866 = p; emit pos_R866Changed(p);} } double pos_R866() { return _R866; }
    void setPos_X867(double p) { if (_X867 != p) { _X867 = p; emit pos_X867Changed(p);} } double pos_X867() { return _X867; }
    void setPos_Y867(double p) { if (_Y867 != p) { _Y867 = p; emit pos_Y867Changed(p);} } double pos_Y867() { return _Y867; }
    void setPos_R867(double p) { if (_R867 != p) { _R867 = p; emit pos_R867Changed(p);} } double pos_R867() { return _R867; }
    void setPos_X868(double p) { if (_X868 != p) { _X868 = p; emit pos_X868Changed(p);} } double pos_X868() { return _X868; }
    void setPos_Y868(double p) { if (_Y868 != p) { _Y868 = p; emit pos_Y868Changed(p);} } double pos_Y868() { return _Y868; }
    void setPos_R868(double p) { if (_R868 != p) { _R868 = p; emit pos_R868Changed(p);} } double pos_R868() { return _R868; }
    void setPos_X869(double p) { if (_X869 != p) { _X869 = p; emit pos_X869Changed(p);} } double pos_X869() { return _X869; }
    void setPos_Y869(double p) { if (_Y869 != p) { _Y869 = p; emit pos_Y869Changed(p);} } double pos_Y869() { return _Y869; }
    void setPos_R869(double p) { if (_R869 != p) { _R869 = p; emit pos_R869Changed(p);} } double pos_R869() { return _R869; }
    void setPos_X870(double p) { if (_X870 != p) { _X870 = p; emit pos_X870Changed(p);} } double pos_X870() { return _X870; }
    void setPos_Y870(double p) { if (_Y870 != p) { _Y870 = p; emit pos_Y870Changed(p);} } double pos_Y870() { return _Y870; }
    void setPos_R870(double p) { if (_R870 != p) { _R870 = p; emit pos_R870Changed(p);} } double pos_R870() { return _R870; }
    void setPos_X871(double p) { if (_X871 != p) { _X871 = p; emit pos_X871Changed(p);} } double pos_X871() { return _X871; }
    void setPos_Y871(double p) { if (_Y871 != p) { _Y871 = p; emit pos_Y871Changed(p);} } double pos_Y871() { return _Y871; }
    void setPos_R871(double p) { if (_R871 != p) { _R871 = p; emit pos_R871Changed(p);} } double pos_R871() { return _R871; }
    void setPos_X872(double p) { if (_X872 != p) { _X872 = p; emit pos_X872Changed(p);} } double pos_X872() { return _X872; }
    void setPos_Y872(double p) { if (_Y872 != p) { _Y872 = p; emit pos_Y872Changed(p);} } double pos_Y872() { return _Y872; }
    void setPos_R872(double p) { if (_R872 != p) { _R872 = p; emit pos_R872Changed(p);} } double pos_R872() { return _R872; }
    void setPos_X873(double p) { if (_X873 != p) { _X873 = p; emit pos_X873Changed(p);} } double pos_X873() { return _X873; }
    void setPos_Y873(double p) { if (_Y873 != p) { _Y873 = p; emit pos_Y873Changed(p);} } double pos_Y873() { return _Y873; }
    void setPos_R873(double p) { if (_R873 != p) { _R873 = p; emit pos_R873Changed(p);} } double pos_R873() { return _R873; }
    void setPos_X874(double p) { if (_X874 != p) { _X874 = p; emit pos_X874Changed(p);} } double pos_X874() { return _X874; }
    void setPos_Y874(double p) { if (_Y874 != p) { _Y874 = p; emit pos_Y874Changed(p);} } double pos_Y874() { return _Y874; }
    void setPos_R874(double p) { if (_R874 != p) { _R874 = p; emit pos_R874Changed(p);} } double pos_R874() { return _R874; }
    void setPos_X875(double p) { if (_X875 != p) { _X875 = p; emit pos_X875Changed(p);} } double pos_X875() { return _X875; }
    void setPos_Y875(double p) { if (_Y875 != p) { _Y875 = p; emit pos_Y875Changed(p);} } double pos_Y875() { return _Y875; }
    void setPos_R875(double p) { if (_R875 != p) { _R875 = p; emit pos_R875Changed(p);} } double pos_R875() { return _R875; }
    void setPos_X876(double p) { if (_X876 != p) { _X876 = p; emit pos_X876Changed(p);} } double pos_X876() { return _X876; }
    void setPos_Y876(double p) { if (_Y876 != p) { _Y876 = p; emit pos_Y876Changed(p);} } double pos_Y876() { return _Y876; }
    void setPos_R876(double p) { if (_R876 != p) { _R876 = p; emit pos_R876Changed(p);} } double pos_R876() { return _R876; }
    void setPos_X877(double p) { if (_X877 != p) { _X877 = p; emit pos_X877Changed(p);} } double pos_X877() { return _X877; }
    void setPos_Y877(double p) { if (_Y877 != p) { _Y877 = p; emit pos_Y877Changed(p);} } double pos_Y877() { return _Y877; }
    void setPos_R877(double p) { if (_R877 != p) { _R877 = p; emit pos_R877Changed(p);} } double pos_R877() { return _R877; }
    void setPos_X878(double p) { if (_X878 != p) { _X878 = p; emit pos_X878Changed(p);} } double pos_X878() { return _X878; }
    void setPos_Y878(double p) { if (_Y878 != p) { _Y878 = p; emit pos_Y878Changed(p);} } double pos_Y878() { return _Y878; }
    void setPos_R878(double p) { if (_R878 != p) { _R878 = p; emit pos_R878Changed(p);} } double pos_R878() { return _R878; }
    void setPos_X879(double p) { if (_X879 != p) { _X879 = p; emit pos_X879Changed(p);} } double pos_X879() { return _X879; }
    void setPos_Y879(double p) { if (_Y879 != p) { _Y879 = p; emit pos_Y879Changed(p);} } double pos_Y879() { return _Y879; }
    void setPos_R879(double p) { if (_R879 != p) { _R879 = p; emit pos_R879Changed(p);} } double pos_R879() { return _R879; }
    void setPos_X880(double p) { if (_X880 != p) { _X880 = p; emit pos_X880Changed(p);} } double pos_X880() { return _X880; }
    void setPos_Y880(double p) { if (_Y880 != p) { _Y880 = p; emit pos_Y880Changed(p);} } double pos_Y880() { return _Y880; }
    void setPos_R880(double p) { if (_R880 != p) { _R880 = p; emit pos_R880Changed(p);} } double pos_R880() { return _R880; }
    void setPos_X881(double p) { if (_X881 != p) { _X881 = p; emit pos_X881Changed(p);} } double pos_X881() { return _X881; }
    void setPos_Y881(double p) { if (_Y881 != p) { _Y881 = p; emit pos_Y881Changed(p);} } double pos_Y881() { return _Y881; }
    void setPos_R881(double p) { if (_R881 != p) { _R881 = p; emit pos_R881Changed(p);} } double pos_R881() { return _R881; }
    void setPos_X882(double p) { if (_X882 != p) { _X882 = p; emit pos_X882Changed(p);} } double pos_X882() { return _X882; }
    void setPos_Y882(double p) { if (_Y882 != p) { _Y882 = p; emit pos_Y882Changed(p);} } double pos_Y882() { return _Y882; }
    void setPos_R882(double p) { if (_R882 != p) { _R882 = p; emit pos_R882Changed(p);} } double pos_R882() { return _R882; }
    void setPos_X883(double p) { if (_X883 != p) { _X883 = p; emit pos_X883Changed(p);} } double pos_X883() { return _X883; }
    void setPos_Y883(double p) { if (_Y883 != p) { _Y883 = p; emit pos_Y883Changed(p);} } double pos_Y883() { return _Y883; }
    void setPos_R883(double p) { if (_R883 != p) { _R883 = p; emit pos_R883Changed(p);} } double pos_R883() { return _R883; }
    void setPos_X884(double p) { if (_X884 != p) { _X884 = p; emit pos_X884Changed(p);} } double pos_X884() { return _X884; }
    void setPos_Y884(double p) { if (_Y884 != p) { _Y884 = p; emit pos_Y884Changed(p);} } double pos_Y884() { return _Y884; }
    void setPos_R884(double p) { if (_R884 != p) { _R884 = p; emit pos_R884Changed(p);} } double pos_R884() { return _R884; }
    void setPos_X885(double p) { if (_X885 != p) { _X885 = p; emit pos_X885Changed(p);} } double pos_X885() { return _X885; }
    void setPos_Y885(double p) { if (_Y885 != p) { _Y885 = p; emit pos_Y885Changed(p);} } double pos_Y885() { return _Y885; }
    void setPos_R885(double p) { if (_R885 != p) { _R885 = p; emit pos_R885Changed(p);} } double pos_R885() { return _R885; }
    void setPos_X886(double p) { if (_X886 != p) { _X886 = p; emit pos_X886Changed(p);} } double pos_X886() { return _X886; }
    void setPos_Y886(double p) { if (_Y886 != p) { _Y886 = p; emit pos_Y886Changed(p);} } double pos_Y886() { return _Y886; }
    void setPos_R886(double p) { if (_R886 != p) { _R886 = p; emit pos_R886Changed(p);} } double pos_R886() { return _R886; }
    void setPos_X887(double p) { if (_X887 != p) { _X887 = p; emit pos_X887Changed(p);} } double pos_X887() { return _X887; }
    void setPos_Y887(double p) { if (_Y887 != p) { _Y887 = p; emit pos_Y887Changed(p);} } double pos_Y887() { return _Y887; }
    void setPos_R887(double p) { if (_R887 != p) { _R887 = p; emit pos_R887Changed(p);} } double pos_R887() { return _R887; }
    void setPos_X888(double p) { if (_X888 != p) { _X888 = p; emit pos_X888Changed(p);} } double pos_X888() { return _X888; }
    void setPos_Y888(double p) { if (_Y888 != p) { _Y888 = p; emit pos_Y888Changed(p);} } double pos_Y888() { return _Y888; }
    void setPos_R888(double p) { if (_R888 != p) { _R888 = p; emit pos_R888Changed(p);} } double pos_R888() { return _R888; }
    void setPos_X889(double p) { if (_X889 != p) { _X889 = p; emit pos_X889Changed(p);} } double pos_X889() { return _X889; }
    void setPos_Y889(double p) { if (_Y889 != p) { _Y889 = p; emit pos_Y889Changed(p);} } double pos_Y889() { return _Y889; }
    void setPos_R889(double p) { if (_R889 != p) { _R889 = p; emit pos_R889Changed(p);} } double pos_R889() { return _R889; }
    void setPos_X890(double p) { if (_X890 != p) { _X890 = p; emit pos_X890Changed(p);} } double pos_X890() { return _X890; }
    void setPos_Y890(double p) { if (_Y890 != p) { _Y890 = p; emit pos_Y890Changed(p);} } double pos_Y890() { return _Y890; }
    void setPos_R890(double p) { if (_R890 != p) { _R890 = p; emit pos_R890Changed(p);} } double pos_R890() { return _R890; }
    void setPos_X891(double p) { if (_X891 != p) { _X891 = p; emit pos_X891Changed(p);} } double pos_X891() { return _X891; }
    void setPos_Y891(double p) { if (_Y891 != p) { _Y891 = p; emit pos_Y891Changed(p);} } double pos_Y891() { return _Y891; }
    void setPos_R891(double p) { if (_R891 != p) { _R891 = p; emit pos_R891Changed(p);} } double pos_R891() { return _R891; }
    void setPos_X892(double p) { if (_X892 != p) { _X892 = p; emit pos_X892Changed(p);} } double pos_X892() { return _X892; }
    void setPos_Y892(double p) { if (_Y892 != p) { _Y892 = p; emit pos_Y892Changed(p);} } double pos_Y892() { return _Y892; }
    void setPos_R892(double p) { if (_R892 != p) { _R892 = p; emit pos_R892Changed(p);} } double pos_R892() { return _R892; }
    void setPos_X893(double p) { if (_X893 != p) { _X893 = p; emit pos_X893Changed(p);} } double pos_X893() { return _X893; }
    void setPos_Y893(double p) { if (_Y893 != p) { _Y893 = p; emit pos_Y893Changed(p);} } double pos_Y893() { return _Y893; }
    void setPos_R893(double p) { if (_R893 != p) { _R893 = p; emit pos_R893Changed(p);} } double pos_R893() { return _R893; }
    void setPos_X894(double p) { if (_X894 != p) { _X894 = p; emit pos_X894Changed(p);} } double pos_X894() { return _X894; }
    void setPos_Y894(double p) { if (_Y894 != p) { _Y894 = p; emit pos_Y894Changed(p);} } double pos_Y894() { return _Y894; }
    void setPos_R894(double p) { if (_R894 != p) { _R894 = p; emit pos_R894Changed(p);} } double pos_R894() { return _R894; }
    void setPos_X895(double p) { if (_X895 != p) { _X895 = p; emit pos_X895Changed(p);} } double pos_X895() { return _X895; }
    void setPos_Y895(double p) { if (_Y895 != p) { _Y895 = p; emit pos_Y895Changed(p);} } double pos_Y895() { return _Y895; }
    void setPos_R895(double p) { if (_R895 != p) { _R895 = p; emit pos_R895Changed(p);} } double pos_R895() { return _R895; }
    void setPos_X896(double p) { if (_X896 != p) { _X896 = p; emit pos_X896Changed(p);} } double pos_X896() { return _X896; }
    void setPos_Y896(double p) { if (_Y896 != p) { _Y896 = p; emit pos_Y896Changed(p);} } double pos_Y896() { return _Y896; }
    void setPos_R896(double p) { if (_R896 != p) { _R896 = p; emit pos_R896Changed(p);} } double pos_R896() { return _R896; }
    void setPos_X897(double p) { if (_X897 != p) { _X897 = p; emit pos_X897Changed(p);} } double pos_X897() { return _X897; }
    void setPos_Y897(double p) { if (_Y897 != p) { _Y897 = p; emit pos_Y897Changed(p);} } double pos_Y897() { return _Y897; }
    void setPos_R897(double p) { if (_R897 != p) { _R897 = p; emit pos_R897Changed(p);} } double pos_R897() { return _R897; }
    void setPos_X898(double p) { if (_X898 != p) { _X898 = p; emit pos_X898Changed(p);} } double pos_X898() { return _X898; }
    void setPos_Y898(double p) { if (_Y898 != p) { _Y898 = p; emit pos_Y898Changed(p);} } double pos_Y898() { return _Y898; }
    void setPos_R898(double p) { if (_R898 != p) { _R898 = p; emit pos_R898Changed(p);} } double pos_R898() { return _R898; }
    void setPos_X899(double p) { if (_X899 != p) { _X899 = p; emit pos_X899Changed(p);} } double pos_X899() { return _X899; }
    void setPos_Y899(double p) { if (_Y899 != p) { _Y899 = p; emit pos_Y899Changed(p);} } double pos_Y899() { return _Y899; }
    void setPos_R899(double p) { if (_R899 != p) { _R899 = p; emit pos_R899Changed(p);} } double pos_R899() { return _R899; }
    void setPos_X900(double p) { if (_X900 != p) { _X900 = p; emit pos_X900Changed(p);} } double pos_X900() { return _X900; }
    void setPos_Y900(double p) { if (_Y900 != p) { _Y900 = p; emit pos_Y900Changed(p);} } double pos_Y900() { return _Y900; }
    void setPos_R900(double p) { if (_R900 != p) { _R900 = p; emit pos_R900Changed(p);} } double pos_R900() { return _R900; }
    void setPos_X901(double p) { if (_X901 != p) { _X901 = p; emit pos_X901Changed(p);} } double pos_X901() { return _X901; }
    void setPos_Y901(double p) { if (_Y901 != p) { _Y901 = p; emit pos_Y901Changed(p);} } double pos_Y901() { return _Y901; }
    void setPos_R901(double p) { if (_R901 != p) { _R901 = p; emit pos_R901Changed(p);} } double pos_R901() { return _R901; }
    void setPos_X902(double p) { if (_X902 != p) { _X902 = p; emit pos_X902Changed(p);} } double pos_X902() { return _X902; }
    void setPos_Y902(double p) { if (_Y902 != p) { _Y902 = p; emit pos_Y902Changed(p);} } double pos_Y902() { return _Y902; }
    void setPos_R902(double p) { if (_R902 != p) { _R902 = p; emit pos_R902Changed(p);} } double pos_R902() { return _R902; }
    void setPos_X903(double p) { if (_X903 != p) { _X903 = p; emit pos_X903Changed(p);} } double pos_X903() { return _X903; }
    void setPos_Y903(double p) { if (_Y903 != p) { _Y903 = p; emit pos_Y903Changed(p);} } double pos_Y903() { return _Y903; }
    void setPos_R903(double p) { if (_R903 != p) { _R903 = p; emit pos_R903Changed(p);} } double pos_R903() { return _R903; }
    void setPos_X904(double p) { if (_X904 != p) { _X904 = p; emit pos_X904Changed(p);} } double pos_X904() { return _X904; }
    void setPos_Y904(double p) { if (_Y904 != p) { _Y904 = p; emit pos_Y904Changed(p);} } double pos_Y904() { return _Y904; }
    void setPos_R904(double p) { if (_R904 != p) { _R904 = p; emit pos_R904Changed(p);} } double pos_R904() { return _R904; }
    void setPos_X905(double p) { if (_X905 != p) { _X905 = p; emit pos_X905Changed(p);} } double pos_X905() { return _X905; }
    void setPos_Y905(double p) { if (_Y905 != p) { _Y905 = p; emit pos_Y905Changed(p);} } double pos_Y905() { return _Y905; }
    void setPos_R905(double p) { if (_R905 != p) { _R905 = p; emit pos_R905Changed(p);} } double pos_R905() { return _R905; }
    void setPos_X906(double p) { if (_X906 != p) { _X906 = p; emit pos_X906Changed(p);} } double pos_X906() { return _X906; }
    void setPos_Y906(double p) { if (_Y906 != p) { _Y906 = p; emit pos_Y906Changed(p);} } double pos_Y906() { return _Y906; }
    void setPos_R906(double p) { if (_R906 != p) { _R906 = p; emit pos_R906Changed(p);} } double pos_R906() { return _R906; }
    void setPos_X907(double p) { if (_X907 != p) { _X907 = p; emit pos_X907Changed(p);} } double pos_X907() { return _X907; }
    void setPos_Y907(double p) { if (_Y907 != p) { _Y907 = p; emit pos_Y907Changed(p);} } double pos_Y907() { return _Y907; }
    void setPos_R907(double p) { if (_R907 != p) { _R907 = p; emit pos_R907Changed(p);} } double pos_R907() { return _R907; }
    void setPos_X908(double p) { if (_X908 != p) { _X908 = p; emit pos_X908Changed(p);} } double pos_X908() { return _X908; }
    void setPos_Y908(double p) { if (_Y908 != p) { _Y908 = p; emit pos_Y908Changed(p);} } double pos_Y908() { return _Y908; }
    void setPos_R908(double p) { if (_R908 != p) { _R908 = p; emit pos_R908Changed(p);} } double pos_R908() { return _R908; }
    void setPos_X909(double p) { if (_X909 != p) { _X909 = p; emit pos_X909Changed(p);} } double pos_X909() { return _X909; }
    void setPos_Y909(double p) { if (_Y909 != p) { _Y909 = p; emit pos_Y909Changed(p);} } double pos_Y909() { return _Y909; }
    void setPos_R909(double p) { if (_R909 != p) { _R909 = p; emit pos_R909Changed(p);} } double pos_R909() { return _R909; }
    void setPos_X910(double p) { if (_X910 != p) { _X910 = p; emit pos_X910Changed(p);} } double pos_X910() { return _X910; }
    void setPos_Y910(double p) { if (_Y910 != p) { _Y910 = p; emit pos_Y910Changed(p);} } double pos_Y910() { return _Y910; }
    void setPos_R910(double p) { if (_R910 != p) { _R910 = p; emit pos_R910Changed(p);} } double pos_R910() { return _R910; }
    void setPos_X911(double p) { if (_X911 != p) { _X911 = p; emit pos_X911Changed(p);} } double pos_X911() { return _X911; }
    void setPos_Y911(double p) { if (_Y911 != p) { _Y911 = p; emit pos_Y911Changed(p);} } double pos_Y911() { return _Y911; }
    void setPos_R911(double p) { if (_R911 != p) { _R911 = p; emit pos_R911Changed(p);} } double pos_R911() { return _R911; }
    void setPos_X912(double p) { if (_X912 != p) { _X912 = p; emit pos_X912Changed(p);} } double pos_X912() { return _X912; }
    void setPos_Y912(double p) { if (_Y912 != p) { _Y912 = p; emit pos_Y912Changed(p);} } double pos_Y912() { return _Y912; }
    void setPos_R912(double p) { if (_R912 != p) { _R912 = p; emit pos_R912Changed(p);} } double pos_R912() { return _R912; }
    void setPos_X913(double p) { if (_X913 != p) { _X913 = p; emit pos_X913Changed(p);} } double pos_X913() { return _X913; }
    void setPos_Y913(double p) { if (_Y913 != p) { _Y913 = p; emit pos_Y913Changed(p);} } double pos_Y913() { return _Y913; }
    void setPos_R913(double p) { if (_R913 != p) { _R913 = p; emit pos_R913Changed(p);} } double pos_R913() { return _R913; }
    void setPos_X914(double p) { if (_X914 != p) { _X914 = p; emit pos_X914Changed(p);} } double pos_X914() { return _X914; }
    void setPos_Y914(double p) { if (_Y914 != p) { _Y914 = p; emit pos_Y914Changed(p);} } double pos_Y914() { return _Y914; }
    void setPos_R914(double p) { if (_R914 != p) { _R914 = p; emit pos_R914Changed(p);} } double pos_R914() { return _R914; }
    void setPos_X915(double p) { if (_X915 != p) { _X915 = p; emit pos_X915Changed(p);} } double pos_X915() { return _X915; }
    void setPos_Y915(double p) { if (_Y915 != p) { _Y915 = p; emit pos_Y915Changed(p);} } double pos_Y915() { return _Y915; }
    void setPos_R915(double p) { if (_R915 != p) { _R915 = p; emit pos_R915Changed(p);} } double pos_R915() { return _R915; }
    void setPos_X916(double p) { if (_X916 != p) { _X916 = p; emit pos_X916Changed(p);} } double pos_X916() { return _X916; }
    void setPos_Y916(double p) { if (_Y916 != p) { _Y916 = p; emit pos_Y916Changed(p);} } double pos_Y916() { return _Y916; }
    void setPos_R916(double p) { if (_R916 != p) { _R916 = p; emit pos_R916Changed(p);} } double pos_R916() { return _R916; }
    void setPos_X917(double p) { if (_X917 != p) { _X917 = p; emit pos_X917Changed(p);} } double pos_X917() { return _X917; }
    void setPos_Y917(double p) { if (_Y917 != p) { _Y917 = p; emit pos_Y917Changed(p);} } double pos_Y917() { return _Y917; }
    void setPos_R917(double p) { if (_R917 != p) { _R917 = p; emit pos_R917Changed(p);} } double pos_R917() { return _R917; }
    void setPos_X918(double p) { if (_X918 != p) { _X918 = p; emit pos_X918Changed(p);} } double pos_X918() { return _X918; }
    void setPos_Y918(double p) { if (_Y918 != p) { _Y918 = p; emit pos_Y918Changed(p);} } double pos_Y918() { return _Y918; }
    void setPos_R918(double p) { if (_R918 != p) { _R918 = p; emit pos_R918Changed(p);} } double pos_R918() { return _R918; }
    void setPos_X919(double p) { if (_X919 != p) { _X919 = p; emit pos_X919Changed(p);} } double pos_X919() { return _X919; }
    void setPos_Y919(double p) { if (_Y919 != p) { _Y919 = p; emit pos_Y919Changed(p);} } double pos_Y919() { return _Y919; }
    void setPos_R919(double p) { if (_R919 != p) { _R919 = p; emit pos_R919Changed(p);} } double pos_R919() { return _R919; }
    void setPos_X920(double p) { if (_X920 != p) { _X920 = p; emit pos_X920Changed(p);} } double pos_X920() { return _X920; }
    void setPos_Y920(double p) { if (_Y920 != p) { _Y920 = p; emit pos_Y920Changed(p);} } double pos_Y920() { return _Y920; }
    void setPos_R920(double p) { if (_R920 != p) { _R920 = p; emit pos_R920Changed(p);} } double pos_R920() { return _R920; }
    void setPos_X921(double p) { if (_X921 != p) { _X921 = p; emit pos_X921Changed(p);} } double pos_X921() { return _X921; }
    void setPos_Y921(double p) { if (_Y921 != p) { _Y921 = p; emit pos_Y921Changed(p);} } double pos_Y921() { return _Y921; }
    void setPos_R921(double p) { if (_R921 != p) { _R921 = p; emit pos_R921Changed(p);} } double pos_R921() { return _R921; }
    void setPos_X922(double p) { if (_X922 != p) { _X922 = p; emit pos_X922Changed(p);} } double pos_X922() { return _X922; }
    void setPos_Y922(double p) { if (_Y922 != p) { _Y922 = p; emit pos_Y922Changed(p);} } double pos_Y922() { return _Y922; }
    void setPos_R922(double p) { if (_R922 != p) { _R922 = p; emit pos_R922Changed(p);} } double pos_R922() { return _R922; }
    void setPos_X923(double p) { if (_X923 != p) { _X923 = p; emit pos_X923Changed(p);} } double pos_X923() { return _X923; }
    void setPos_Y923(double p) { if (_Y923 != p) { _Y923 = p; emit pos_Y923Changed(p);} } double pos_Y923() { return _Y923; }
    void setPos_R923(double p) { if (_R923 != p) { _R923 = p; emit pos_R923Changed(p);} } double pos_R923() { return _R923; }
    void setPos_X924(double p) { if (_X924 != p) { _X924 = p; emit pos_X924Changed(p);} } double pos_X924() { return _X924; }
    void setPos_Y924(double p) { if (_Y924 != p) { _Y924 = p; emit pos_Y924Changed(p);} } double pos_Y924() { return _Y924; }
    void setPos_R924(double p) { if (_R924 != p) { _R924 = p; emit pos_R924Changed(p);} } double pos_R924() { return _R924; }
    void setPos_X925(double p) { if (_X925 != p) { _X925 = p; emit pos_X925Changed(p);} } double pos_X925() { return _X925; }
    void setPos_Y925(double p) { if (_Y925 != p) { _Y925 = p; emit pos_Y925Changed(p);} } double pos_Y925() { return _Y925; }
    void setPos_R925(double p) { if (_R925 != p) { _R925 = p; emit pos_R925Changed(p);} } double pos_R925() { return _R925; }
    void setPos_X926(double p) { if (_X926 != p) { _X926 = p; emit pos_X926Changed(p);} } double pos_X926() { return _X926; }
    void setPos_Y926(double p) { if (_Y926 != p) { _Y926 = p; emit pos_Y926Changed(p);} } double pos_Y926() { return _Y926; }
    void setPos_R926(double p) { if (_R926 != p) { _R926 = p; emit pos_R926Changed(p);} } double pos_R926() { return _R926; }
    void setPos_X927(double p) { if (_X927 != p) { _X927 = p; emit pos_X927Changed(p);} } double pos_X927() { return _X927; }
    void setPos_Y927(double p) { if (_Y927 != p) { _Y927 = p; emit pos_Y927Changed(p);} } double pos_Y927() { return _Y927; }
    void setPos_R927(double p) { if (_R927 != p) { _R927 = p; emit pos_R927Changed(p);} } double pos_R927() { return _R927; }
    void setPos_X928(double p) { if (_X928 != p) { _X928 = p; emit pos_X928Changed(p);} } double pos_X928() { return _X928; }
    void setPos_Y928(double p) { if (_Y928 != p) { _Y928 = p; emit pos_Y928Changed(p);} } double pos_Y928() { return _Y928; }
    void setPos_R928(double p) { if (_R928 != p) { _R928 = p; emit pos_R928Changed(p);} } double pos_R928() { return _R928; }
    void setPos_X929(double p) { if (_X929 != p) { _X929 = p; emit pos_X929Changed(p);} } double pos_X929() { return _X929; }
    void setPos_Y929(double p) { if (_Y929 != p) { _Y929 = p; emit pos_Y929Changed(p);} } double pos_Y929() { return _Y929; }
    void setPos_R929(double p) { if (_R929 != p) { _R929 = p; emit pos_R929Changed(p);} } double pos_R929() { return _R929; }
    void setPos_X930(double p) { if (_X930 != p) { _X930 = p; emit pos_X930Changed(p);} } double pos_X930() { return _X930; }
    void setPos_Y930(double p) { if (_Y930 != p) { _Y930 = p; emit pos_Y930Changed(p);} } double pos_Y930() { return _Y930; }
    void setPos_R930(double p) { if (_R930 != p) { _R930 = p; emit pos_R930Changed(p);} } double pos_R930() { return _R930; }
    void setPos_X931(double p) { if (_X931 != p) { _X931 = p; emit pos_X931Changed(p);} } double pos_X931() { return _X931; }
    void setPos_Y931(double p) { if (_Y931 != p) { _Y931 = p; emit pos_Y931Changed(p);} } double pos_Y931() { return _Y931; }
    void setPos_R931(double p) { if (_R931 != p) { _R931 = p; emit pos_R931Changed(p);} } double pos_R931() { return _R931; }
    void setPos_X932(double p) { if (_X932 != p) { _X932 = p; emit pos_X932Changed(p);} } double pos_X932() { return _X932; }
    void setPos_Y932(double p) { if (_Y932 != p) { _Y932 = p; emit pos_Y932Changed(p);} } double pos_Y932() { return _Y932; }
    void setPos_R932(double p) { if (_R932 != p) { _R932 = p; emit pos_R932Changed(p);} } double pos_R932() { return _R932; }
    void setPos_X933(double p) { if (_X933 != p) { _X933 = p; emit pos_X933Changed(p);} } double pos_X933() { return _X933; }
    void setPos_Y933(double p) { if (_Y933 != p) { _Y933 = p; emit pos_Y933Changed(p);} } double pos_Y933() { return _Y933; }
    void setPos_R933(double p) { if (_R933 != p) { _R933 = p; emit pos_R933Changed(p);} } double pos_R933() { return _R933; }
    void setPos_X934(double p) { if (_X934 != p) { _X934 = p; emit pos_X934Changed(p);} } double pos_X934() { return _X934; }
    void setPos_Y934(double p) { if (_Y934 != p) { _Y934 = p; emit pos_Y934Changed(p);} } double pos_Y934() { return _Y934; }
    void setPos_R934(double p) { if (_R934 != p) { _R934 = p; emit pos_R934Changed(p);} } double pos_R934() { return _R934; }
    void setPos_X935(double p) { if (_X935 != p) { _X935 = p; emit pos_X935Changed(p);} } double pos_X935() { return _X935; }
    void setPos_Y935(double p) { if (_Y935 != p) { _Y935 = p; emit pos_Y935Changed(p);} } double pos_Y935() { return _Y935; }
    void setPos_R935(double p) { if (_R935 != p) { _R935 = p; emit pos_R935Changed(p);} } double pos_R935() { return _R935; }
    void setPos_X936(double p) { if (_X936 != p) { _X936 = p; emit pos_X936Changed(p);} } double pos_X936() { return _X936; }
    void setPos_Y936(double p) { if (_Y936 != p) { _Y936 = p; emit pos_Y936Changed(p);} } double pos_Y936() { return _Y936; }
    void setPos_R936(double p) { if (_R936 != p) { _R936 = p; emit pos_R936Changed(p);} } double pos_R936() { return _R936; }
    void setPos_X937(double p) { if (_X937 != p) { _X937 = p; emit pos_X937Changed(p);} } double pos_X937() { return _X937; }
    void setPos_Y937(double p) { if (_Y937 != p) { _Y937 = p; emit pos_Y937Changed(p);} } double pos_Y937() { return _Y937; }
    void setPos_R937(double p) { if (_R937 != p) { _R937 = p; emit pos_R937Changed(p);} } double pos_R937() { return _R937; }
    void setPos_X938(double p) { if (_X938 != p) { _X938 = p; emit pos_X938Changed(p);} } double pos_X938() { return _X938; }
    void setPos_Y938(double p) { if (_Y938 != p) { _Y938 = p; emit pos_Y938Changed(p);} } double pos_Y938() { return _Y938; }
    void setPos_R938(double p) { if (_R938 != p) { _R938 = p; emit pos_R938Changed(p);} } double pos_R938() { return _R938; }
    void setPos_X939(double p) { if (_X939 != p) { _X939 = p; emit pos_X939Changed(p);} } double pos_X939() { return _X939; }
    void setPos_Y939(double p) { if (_Y939 != p) { _Y939 = p; emit pos_Y939Changed(p);} } double pos_Y939() { return _Y939; }
    void setPos_R939(double p) { if (_R939 != p) { _R939 = p; emit pos_R939Changed(p);} } double pos_R939() { return _R939; }
    void setPos_X940(double p) { if (_X940 != p) { _X940 = p; emit pos_X940Changed(p);} } double pos_X940() { return _X940; }
    void setPos_Y940(double p) { if (_Y940 != p) { _Y940 = p; emit pos_Y940Changed(p);} } double pos_Y940() { return _Y940; }
    void setPos_R940(double p) { if (_R940 != p) { _R940 = p; emit pos_R940Changed(p);} } double pos_R940() { return _R940; }
    void setPos_X941(double p) { if (_X941 != p) { _X941 = p; emit pos_X941Changed(p);} } double pos_X941() { return _X941; }
    void setPos_Y941(double p) { if (_Y941 != p) { _Y941 = p; emit pos_Y941Changed(p);} } double pos_Y941() { return _Y941; }
    void setPos_R941(double p) { if (_R941 != p) { _R941 = p; emit pos_R941Changed(p);} } double pos_R941() { return _R941; }
    void setPos_X942(double p) { if (_X942 != p) { _X942 = p; emit pos_X942Changed(p);} } double pos_X942() { return _X942; }
    void setPos_Y942(double p) { if (_Y942 != p) { _Y942 = p; emit pos_Y942Changed(p);} } double pos_Y942() { return _Y942; }
    void setPos_R942(double p) { if (_R942 != p) { _R942 = p; emit pos_R942Changed(p);} } double pos_R942() { return _R942; }
    void setPos_X943(double p) { if (_X943 != p) { _X943 = p; emit pos_X943Changed(p);} } double pos_X943() { return _X943; }
    void setPos_Y943(double p) { if (_Y943 != p) { _Y943 = p; emit pos_Y943Changed(p);} } double pos_Y943() { return _Y943; }
    void setPos_R943(double p) { if (_R943 != p) { _R943 = p; emit pos_R943Changed(p);} } double pos_R943() { return _R943; }
    void setPos_X944(double p) { if (_X944 != p) { _X944 = p; emit pos_X944Changed(p);} } double pos_X944() { return _X944; }
    void setPos_Y944(double p) { if (_Y944 != p) { _Y944 = p; emit pos_Y944Changed(p);} } double pos_Y944() { return _Y944; }
    void setPos_R944(double p) { if (_R944 != p) { _R944 = p; emit pos_R944Changed(p);} } double pos_R944() { return _R944; }
    void setPos_X945(double p) { if (_X945 != p) { _X945 = p; emit pos_X945Changed(p);} } double pos_X945() { return _X945; }
    void setPos_Y945(double p) { if (_Y945 != p) { _Y945 = p; emit pos_Y945Changed(p);} } double pos_Y945() { return _Y945; }
    void setPos_R945(double p) { if (_R945 != p) { _R945 = p; emit pos_R945Changed(p);} } double pos_R945() { return _R945; }
    void setPos_X946(double p) { if (_X946 != p) { _X946 = p; emit pos_X946Changed(p);} } double pos_X946() { return _X946; }
    void setPos_Y946(double p) { if (_Y946 != p) { _Y946 = p; emit pos_Y946Changed(p);} } double pos_Y946() { return _Y946; }
    void setPos_R946(double p) { if (_R946 != p) { _R946 = p; emit pos_R946Changed(p);} } double pos_R946() { return _R946; }
    void setPos_X947(double p) { if (_X947 != p) { _X947 = p; emit pos_X947Changed(p);} } double pos_X947() { return _X947; }
    void setPos_Y947(double p) { if (_Y947 != p) { _Y947 = p; emit pos_Y947Changed(p);} } double pos_Y947() { return _Y947; }
    void setPos_R947(double p) { if (_R947 != p) { _R947 = p; emit pos_R947Changed(p);} } double pos_R947() { return _R947; }
    void setPos_X948(double p) { if (_X948 != p) { _X948 = p; emit pos_X948Changed(p);} } double pos_X948() { return _X948; }
    void setPos_Y948(double p) { if (_Y948 != p) { _Y948 = p; emit pos_Y948Changed(p);} } double pos_Y948() { return _Y948; }
    void setPos_R948(double p) { if (_R948 != p) { _R948 = p; emit pos_R948Changed(p);} } double pos_R948() { return _R948; }
    void setPos_X949(double p) { if (_X949 != p) { _X949 = p; emit pos_X949Changed(p);} } double pos_X949() { return _X949; }
    void setPos_Y949(double p) { if (_Y949 != p) { _Y949 = p; emit pos_Y949Changed(p);} } double pos_Y949() { return _Y949; }
    void setPos_R949(double p) { if (_R949 != p) { _R949 = p; emit pos_R949Changed(p);} } double pos_R949() { return _R949; }
    void setPos_X950(double p) { if (_X950 != p) { _X950 = p; emit pos_X950Changed(p);} } double pos_X950() { return _X950; }
    void setPos_Y950(double p) { if (_Y950 != p) { _Y950 = p; emit pos_Y950Changed(p);} } double pos_Y950() { return _Y950; }
    void setPos_R950(double p) { if (_R950 != p) { _R950 = p; emit pos_R950Changed(p);} } double pos_R950() { return _R950; }
    void setPos_X951(double p) { if (_X951 != p) { _X951 = p; emit pos_X951Changed(p);} } double pos_X951() { return _X951; }
    void setPos_Y951(double p) { if (_Y951 != p) { _Y951 = p; emit pos_Y951Changed(p);} } double pos_Y951() { return _Y951; }
    void setPos_R951(double p) { if (_R951 != p) { _R951 = p; emit pos_R951Changed(p);} } double pos_R951() { return _R951; }
    void setPos_X952(double p) { if (_X952 != p) { _X952 = p; emit pos_X952Changed(p);} } double pos_X952() { return _X952; }
    void setPos_Y952(double p) { if (_Y952 != p) { _Y952 = p; emit pos_Y952Changed(p);} } double pos_Y952() { return _Y952; }
    void setPos_R952(double p) { if (_R952 != p) { _R952 = p; emit pos_R952Changed(p);} } double pos_R952() { return _R952; }
    void setPos_X953(double p) { if (_X953 != p) { _X953 = p; emit pos_X953Changed(p);} } double pos_X953() { return _X953; }
    void setPos_Y953(double p) { if (_Y953 != p) { _Y953 = p; emit pos_Y953Changed(p);} } double pos_Y953() { return _Y953; }
    void setPos_R953(double p) { if (_R953 != p) { _R953 = p; emit pos_R953Changed(p);} } double pos_R953() { return _R953; }
    void setPos_X954(double p) { if (_X954 != p) { _X954 = p; emit pos_X954Changed(p);} } double pos_X954() { return _X954; }
    void setPos_Y954(double p) { if (_Y954 != p) { _Y954 = p; emit pos_Y954Changed(p);} } double pos_Y954() { return _Y954; }
    void setPos_R954(double p) { if (_R954 != p) { _R954 = p; emit pos_R954Changed(p);} } double pos_R954() { return _R954; }
    void setPos_X955(double p) { if (_X955 != p) { _X955 = p; emit pos_X955Changed(p);} } double pos_X955() { return _X955; }
    void setPos_Y955(double p) { if (_Y955 != p) { _Y955 = p; emit pos_Y955Changed(p);} } double pos_Y955() { return _Y955; }
    void setPos_R955(double p) { if (_R955 != p) { _R955 = p; emit pos_R955Changed(p);} } double pos_R955() { return _R955; }
    void setPos_X956(double p) { if (_X956 != p) { _X956 = p; emit pos_X956Changed(p);} } double pos_X956() { return _X956; }
    void setPos_Y956(double p) { if (_Y956 != p) { _Y956 = p; emit pos_Y956Changed(p);} } double pos_Y956() { return _Y956; }
    void setPos_R956(double p) { if (_R956 != p) { _R956 = p; emit pos_R956Changed(p);} } double pos_R956() { return _R956; }
    void setPos_X957(double p) { if (_X957 != p) { _X957 = p; emit pos_X957Changed(p);} } double pos_X957() { return _X957; }
    void setPos_Y957(double p) { if (_Y957 != p) { _Y957 = p; emit pos_Y957Changed(p);} } double pos_Y957() { return _Y957; }
    void setPos_R957(double p) { if (_R957 != p) { _R957 = p; emit pos_R957Changed(p);} } double pos_R957() { return _R957; }
    void setPos_X958(double p) { if (_X958 != p) { _X958 = p; emit pos_X958Changed(p);} } double pos_X958() { return _X958; }
    void setPos_Y958(double p) { if (_Y958 != p) { _Y958 = p; emit pos_Y958Changed(p);} } double pos_Y958() { return _Y958; }
    void setPos_R958(double p) { if (_R958 != p) { _R958 = p; emit pos_R958Changed(p);} } double pos_R958() { return _R958; }
    void setPos_X959(double p) { if (_X959 != p) { _X959 = p; emit pos_X959Changed(p);} } double pos_X959() { return _X959; }
    void setPos_Y959(double p) { if (_Y959 != p) { _Y959 = p; emit pos_Y959Changed(p);} } double pos_Y959() { return _Y959; }
    void setPos_R959(double p) { if (_R959 != p) { _R959 = p; emit pos_R959Changed(p);} } double pos_R959() { return _R959; }
    void setPos_X960(double p) { if (_X960 != p) { _X960 = p; emit pos_X960Changed(p);} } double pos_X960() { return _X960; }
    void setPos_Y960(double p) { if (_Y960 != p) { _Y960 = p; emit pos_Y960Changed(p);} } double pos_Y960() { return _Y960; }
    void setPos_R960(double p) { if (_R960 != p) { _R960 = p; emit pos_R960Changed(p);} } double pos_R960() { return _R960; }
    void setPos_X961(double p) { if (_X961 != p) { _X961 = p; emit pos_X961Changed(p);} } double pos_X961() { return _X961; }
    void setPos_Y961(double p) { if (_Y961 != p) { _Y961 = p; emit pos_Y961Changed(p);} } double pos_Y961() { return _Y961; }
    void setPos_R961(double p) { if (_R961 != p) { _R961 = p; emit pos_R961Changed(p);} } double pos_R961() { return _R961; }
    void setPos_X962(double p) { if (_X962 != p) { _X962 = p; emit pos_X962Changed(p);} } double pos_X962() { return _X962; }
    void setPos_Y962(double p) { if (_Y962 != p) { _Y962 = p; emit pos_Y962Changed(p);} } double pos_Y962() { return _Y962; }
    void setPos_R962(double p) { if (_R962 != p) { _R962 = p; emit pos_R962Changed(p);} } double pos_R962() { return _R962; }
    void setPos_X963(double p) { if (_X963 != p) { _X963 = p; emit pos_X963Changed(p);} } double pos_X963() { return _X963; }
    void setPos_Y963(double p) { if (_Y963 != p) { _Y963 = p; emit pos_Y963Changed(p);} } double pos_Y963() { return _Y963; }
    void setPos_R963(double p) { if (_R963 != p) { _R963 = p; emit pos_R963Changed(p);} } double pos_R963() { return _R963; }
    void setPos_X964(double p) { if (_X964 != p) { _X964 = p; emit pos_X964Changed(p);} } double pos_X964() { return _X964; }
    void setPos_Y964(double p) { if (_Y964 != p) { _Y964 = p; emit pos_Y964Changed(p);} } double pos_Y964() { return _Y964; }
    void setPos_R964(double p) { if (_R964 != p) { _R964 = p; emit pos_R964Changed(p);} } double pos_R964() { return _R964; }
    void setPos_X965(double p) { if (_X965 != p) { _X965 = p; emit pos_X965Changed(p);} } double pos_X965() { return _X965; }
    void setPos_Y965(double p) { if (_Y965 != p) { _Y965 = p; emit pos_Y965Changed(p);} } double pos_Y965() { return _Y965; }
    void setPos_R965(double p) { if (_R965 != p) { _R965 = p; emit pos_R965Changed(p);} } double pos_R965() { return _R965; }
    void setPos_X966(double p) { if (_X966 != p) { _X966 = p; emit pos_X966Changed(p);} } double pos_X966() { return _X966; }
    void setPos_Y966(double p) { if (_Y966 != p) { _Y966 = p; emit pos_Y966Changed(p);} } double pos_Y966() { return _Y966; }
    void setPos_R966(double p) { if (_R966 != p) { _R966 = p; emit pos_R966Changed(p);} } double pos_R966() { return _R966; }
    void setPos_X967(double p) { if (_X967 != p) { _X967 = p; emit pos_X967Changed(p);} } double pos_X967() { return _X967; }
    void setPos_Y967(double p) { if (_Y967 != p) { _Y967 = p; emit pos_Y967Changed(p);} } double pos_Y967() { return _Y967; }
    void setPos_R967(double p) { if (_R967 != p) { _R967 = p; emit pos_R967Changed(p);} } double pos_R967() { return _R967; }
    void setPos_X968(double p) { if (_X968 != p) { _X968 = p; emit pos_X968Changed(p);} } double pos_X968() { return _X968; }
    void setPos_Y968(double p) { if (_Y968 != p) { _Y968 = p; emit pos_Y968Changed(p);} } double pos_Y968() { return _Y968; }
    void setPos_R968(double p) { if (_R968 != p) { _R968 = p; emit pos_R968Changed(p);} } double pos_R968() { return _R968; }
    void setPos_X969(double p) { if (_X969 != p) { _X969 = p; emit pos_X969Changed(p);} } double pos_X969() { return _X969; }
    void setPos_Y969(double p) { if (_Y969 != p) { _Y969 = p; emit pos_Y969Changed(p);} } double pos_Y969() { return _Y969; }
    void setPos_R969(double p) { if (_R969 != p) { _R969 = p; emit pos_R969Changed(p);} } double pos_R969() { return _R969; }
    void setPos_X970(double p) { if (_X970 != p) { _X970 = p; emit pos_X970Changed(p);} } double pos_X970() { return _X970; }
    void setPos_Y970(double p) { if (_Y970 != p) { _Y970 = p; emit pos_Y970Changed(p);} } double pos_Y970() { return _Y970; }
    void setPos_R970(double p) { if (_R970 != p) { _R970 = p; emit pos_R970Changed(p);} } double pos_R970() { return _R970; }
    void setPos_X971(double p) { if (_X971 != p) { _X971 = p; emit pos_X971Changed(p);} } double pos_X971() { return _X971; }
    void setPos_Y971(double p) { if (_Y971 != p) { _Y971 = p; emit pos_Y971Changed(p);} } double pos_Y971() { return _Y971; }
    void setPos_R971(double p) { if (_R971 != p) { _R971 = p; emit pos_R971Changed(p);} } double pos_R971() { return _R971; }
    void setPos_X972(double p) { if (_X972 != p) { _X972 = p; emit pos_X972Changed(p);} } double pos_X972() { return _X972; }
    void setPos_Y972(double p) { if (_Y972 != p) { _Y972 = p; emit pos_Y972Changed(p);} } double pos_Y972() { return _Y972; }
    void setPos_R972(double p) { if (_R972 != p) { _R972 = p; emit pos_R972Changed(p);} } double pos_R972() { return _R972; }
    void setPos_X973(double p) { if (_X973 != p) { _X973 = p; emit pos_X973Changed(p);} } double pos_X973() { return _X973; }
    void setPos_Y973(double p) { if (_Y973 != p) { _Y973 = p; emit pos_Y973Changed(p);} } double pos_Y973() { return _Y973; }
    void setPos_R973(double p) { if (_R973 != p) { _R973 = p; emit pos_R973Changed(p);} } double pos_R973() { return _R973; }
    void setPos_X974(double p) { if (_X974 != p) { _X974 = p; emit pos_X974Changed(p);} } double pos_X974() { return _X974; }
    void setPos_Y974(double p) { if (_Y974 != p) { _Y974 = p; emit pos_Y974Changed(p);} } double pos_Y974() { return _Y974; }
    void setPos_R974(double p) { if (_R974 != p) { _R974 = p; emit pos_R974Changed(p);} } double pos_R974() { return _R974; }
    void setPos_X975(double p) { if (_X975 != p) { _X975 = p; emit pos_X975Changed(p);} } double pos_X975() { return _X975; }
    void setPos_Y975(double p) { if (_Y975 != p) { _Y975 = p; emit pos_Y975Changed(p);} } double pos_Y975() { return _Y975; }
    void setPos_R975(double p) { if (_R975 != p) { _R975 = p; emit pos_R975Changed(p);} } double pos_R975() { return _R975; }
    void setPos_X976(double p) { if (_X976 != p) { _X976 = p; emit pos_X976Changed(p);} } double pos_X976() { return _X976; }
    void setPos_Y976(double p) { if (_Y976 != p) { _Y976 = p; emit pos_Y976Changed(p);} } double pos_Y976() { return _Y976; }
    void setPos_R976(double p) { if (_R976 != p) { _R976 = p; emit pos_R976Changed(p);} } double pos_R976() { return _R976; }
    void setPos_X977(double p) { if (_X977 != p) { _X977 = p; emit pos_X977Changed(p);} } double pos_X977() { return _X977; }
    void setPos_Y977(double p) { if (_Y977 != p) { _Y977 = p; emit pos_Y977Changed(p);} } double pos_Y977() { return _Y977; }
    void setPos_R977(double p) { if (_R977 != p) { _R977 = p; emit pos_R977Changed(p);} } double pos_R977() { return _R977; }
    void setPos_X978(double p) { if (_X978 != p) { _X978 = p; emit pos_X978Changed(p);} } double pos_X978() { return _X978; }
    void setPos_Y978(double p) { if (_Y978 != p) { _Y978 = p; emit pos_Y978Changed(p);} } double pos_Y978() { return _Y978; }
    void setPos_R978(double p) { if (_R978 != p) { _R978 = p; emit pos_R978Changed(p);} } double pos_R978() { return _R978; }
    void setPos_X979(double p) { if (_X979 != p) { _X979 = p; emit pos_X979Changed(p);} } double pos_X979() { return _X979; }
    void setPos_Y979(double p) { if (_Y979 != p) { _Y979 = p; emit pos_Y979Changed(p);} } double pos_Y979() { return _Y979; }
    void setPos_R979(double p) { if (_R979 != p) { _R979 = p; emit pos_R979Changed(p);} } double pos_R979() { return _R979; }
    void setPos_X980(double p) { if (_X980 != p) { _X980 = p; emit pos_X980Changed(p);} } double pos_X980() { return _X980; }
    void setPos_Y980(double p) { if (_Y980 != p) { _Y980 = p; emit pos_Y980Changed(p);} } double pos_Y980() { return _Y980; }
    void setPos_R980(double p) { if (_R980 != p) { _R980 = p; emit pos_R980Changed(p);} } double pos_R980() { return _R980; }
    void setPos_X981(double p) { if (_X981 != p) { _X981 = p; emit pos_X981Changed(p);} } double pos_X981() { return _X981; }
    void setPos_Y981(double p) { if (_Y981 != p) { _Y981 = p; emit pos_Y981Changed(p);} } double pos_Y981() { return _Y981; }
    void setPos_R981(double p) { if (_R981 != p) { _R981 = p; emit pos_R981Changed(p);} } double pos_R981() { return _R981; }
    void setPos_X982(double p) { if (_X982 != p) { _X982 = p; emit pos_X982Changed(p);} } double pos_X982() { return _X982; }
    void setPos_Y982(double p) { if (_Y982 != p) { _Y982 = p; emit pos_Y982Changed(p);} } double pos_Y982() { return _Y982; }
    void setPos_R982(double p) { if (_R982 != p) { _R982 = p; emit pos_R982Changed(p);} } double pos_R982() { return _R982; }
    void setPos_X983(double p) { if (_X983 != p) { _X983 = p; emit pos_X983Changed(p);} } double pos_X983() { return _X983; }
    void setPos_Y983(double p) { if (_Y983 != p) { _Y983 = p; emit pos_Y983Changed(p);} } double pos_Y983() { return _Y983; }
    void setPos_R983(double p) { if (_R983 != p) { _R983 = p; emit pos_R983Changed(p);} } double pos_R983() { return _R983; }
    void setPos_X984(double p) { if (_X984 != p) { _X984 = p; emit pos_X984Changed(p);} } double pos_X984() { return _X984; }
    void setPos_Y984(double p) { if (_Y984 != p) { _Y984 = p; emit pos_Y984Changed(p);} } double pos_Y984() { return _Y984; }
    void setPos_R984(double p) { if (_R984 != p) { _R984 = p; emit pos_R984Changed(p);} } double pos_R984() { return _R984; }
    void setPos_X985(double p) { if (_X985 != p) { _X985 = p; emit pos_X985Changed(p);} } double pos_X985() { return _X985; }
    void setPos_Y985(double p) { if (_Y985 != p) { _Y985 = p; emit pos_Y985Changed(p);} } double pos_Y985() { return _Y985; }
    void setPos_R985(double p) { if (_R985 != p) { _R985 = p; emit pos_R985Changed(p);} } double pos_R985() { return _R985; }
    void setPos_X986(double p) { if (_X986 != p) { _X986 = p; emit pos_X986Changed(p);} } double pos_X986() { return _X986; }
    void setPos_Y986(double p) { if (_Y986 != p) { _Y986 = p; emit pos_Y986Changed(p);} } double pos_Y986() { return _Y986; }
    void setPos_R986(double p) { if (_R986 != p) { _R986 = p; emit pos_R986Changed(p);} } double pos_R986() { return _R986; }
    void setPos_X987(double p) { if (_X987 != p) { _X987 = p; emit pos_X987Changed(p);} } double pos_X987() { return _X987; }
    void setPos_Y987(double p) { if (_Y987 != p) { _Y987 = p; emit pos_Y987Changed(p);} } double pos_Y987() { return _Y987; }
    void setPos_R987(double p) { if (_R987 != p) { _R987 = p; emit pos_R987Changed(p);} } double pos_R987() { return _R987; }
    void setPos_X988(double p) { if (_X988 != p) { _X988 = p; emit pos_X988Changed(p);} } double pos_X988() { return _X988; }
    void setPos_Y988(double p) { if (_Y988 != p) { _Y988 = p; emit pos_Y988Changed(p);} } double pos_Y988() { return _Y988; }
    void setPos_R988(double p) { if (_R988 != p) { _R988 = p; emit pos_R988Changed(p);} } double pos_R988() { return _R988; }
    void setPos_X989(double p) { if (_X989 != p) { _X989 = p; emit pos_X989Changed(p);} } double pos_X989() { return _X989; }
    void setPos_Y989(double p) { if (_Y989 != p) { _Y989 = p; emit pos_Y989Changed(p);} } double pos_Y989() { return _Y989; }
    void setPos_R989(double p) { if (_R989 != p) { _R989 = p; emit pos_R989Changed(p);} } double pos_R989() { return _R989; }
    void setPos_X990(double p) { if (_X990 != p) { _X990 = p; emit pos_X990Changed(p);} } double pos_X990() { return _X990; }
    void setPos_Y990(double p) { if (_Y990 != p) { _Y990 = p; emit pos_Y990Changed(p);} } double pos_Y990() { return _Y990; }
    void setPos_R990(double p) { if (_R990 != p) { _R990 = p; emit pos_R990Changed(p);} } double pos_R990() { return _R990; }
    void setPos_X991(double p) { if (_X991 != p) { _X991 = p; emit pos_X991Changed(p);} } double pos_X991() { return _X991; }
    void setPos_Y991(double p) { if (_Y991 != p) { _Y991 = p; emit pos_Y991Changed(p);} } double pos_Y991() { return _Y991; }
    void setPos_R991(double p) { if (_R991 != p) { _R991 = p; emit pos_R991Changed(p);} } double pos_R991() { return _R991; }
    void setPos_X992(double p) { if (_X992 != p) { _X992 = p; emit pos_X992Changed(p);} } double pos_X992() { return _X992; }
    void setPos_Y992(double p) { if (_Y992 != p) { _Y992 = p; emit pos_Y992Changed(p);} } double pos_Y992() { return _Y992; }
    void setPos_R992(double p) { if (_R992 != p) { _R992 = p; emit pos_R992Changed(p);} } double pos_R992() { return _R992; }
    void setPos_X993(double p) { if (_X993 != p) { _X993 = p; emit pos_X993Changed(p);} } double pos_X993() { return _X993; }
    void setPos_Y993(double p) { if (_Y993 != p) { _Y993 = p; emit pos_Y993Changed(p);} } double pos_Y993() { return _Y993; }
    void setPos_R993(double p) { if (_R993 != p) { _R993 = p; emit pos_R993Changed(p);} } double pos_R993() { return _R993; }
    void setPos_X994(double p) { if (_X994 != p) { _X994 = p; emit pos_X994Changed(p);} } double pos_X994() { return _X994; }
    void setPos_Y994(double p) { if (_Y994 != p) { _Y994 = p; emit pos_Y994Changed(p);} } double pos_Y994() { return _Y994; }
    void setPos_R994(double p) { if (_R994 != p) { _R994 = p; emit pos_R994Changed(p);} } double pos_R994() { return _R994; }
    void setPos_X995(double p) { if (_X995 != p) { _X995 = p; emit pos_X995Changed(p);} } double pos_X995() { return _X995; }
    void setPos_Y995(double p) { if (_Y995 != p) { _Y995 = p; emit pos_Y995Changed(p);} } double pos_Y995() { return _Y995; }
    void setPos_R995(double p) { if (_R995 != p) { _R995 = p; emit pos_R995Changed(p);} } double pos_R995() { return _R995; }
    void setPos_X996(double p) { if (_X996 != p) { _X996 = p; emit pos_X996Changed(p);} } double pos_X996() { return _X996; }
    void setPos_Y996(double p) { if (_Y996 != p) { _Y996 = p; emit pos_Y996Changed(p);} } double pos_Y996() { return _Y996; }
    void setPos_R996(double p) { if (_R996 != p) { _R996 = p; emit pos_R996Changed(p);} } double pos_R996() { return _R996; }
    void setPos_X997(double p) { if (_X997 != p) { _X997 = p; emit pos_X997Changed(p);} } double pos_X997() { return _X997; }
    void setPos_Y997(double p) { if (_Y997 != p) { _Y997 = p; emit pos_Y997Changed(p);} } double pos_Y997() { return _Y997; }
    void setPos_R997(double p) { if (_R997 != p) { _R997 = p; emit pos_R997Changed(p);} } double pos_R997() { return _R997; }
    void setPos_X998(double p) { if (_X998 != p) { _X998 = p; emit pos_X998Changed(p);} } double pos_X998() { return _X998; }
    void setPos_Y998(double p) { if (_Y998 != p) { _Y998 = p; emit pos_Y998Changed(p);} } double pos_Y998() { return _Y998; }
    void setPos_R998(double p) { if (_R998 != p) { _R998 = p; emit pos_R998Changed(p);} } double pos_R998() { return _R998; }
    void setPos_X999(double p) { if (_X999 != p) { _X999 = p; emit pos_X999Changed(p);} } double pos_X999() { return _X999; }
    void setPos_Y999(double p) { if (_Y999 != p) { _Y999 = p; emit pos_Y999Changed(p);} } double pos_Y999() { return _Y999; }
    void setPos_R999(double p) { if (_R999 != p) { _R999 = p; emit pos_R999Changed(p);} } double pos_R999() { return _R999; }
signals:
    void valueChanged(const QString&, const QVariant&);
    void titleChanged(const QString&);
    void countChanged(int);
    void fpsChanged(int);
    void pos_X0Changed(double);
    void pos_Y0Changed(double);
    void pos_R0Changed(double);
    void pos_X1Changed(double);
    void pos_Y1Changed(double);
    void pos_R1Changed(double);
    void pos_X2Changed(double);
    void pos_Y2Changed(double);
    void pos_R2Changed(double);
    void pos_X3Changed(double);
    void pos_Y3Changed(double);
    void pos_R3Changed(double);
    void pos_X4Changed(double);
    void pos_Y4Changed(double);
    void pos_R4Changed(double);
    void pos_X5Changed(double);
    void pos_Y5Changed(double);
    void pos_R5Changed(double);
    void pos_X6Changed(double);
    void pos_Y6Changed(double);
    void pos_R6Changed(double);
    void pos_X7Changed(double);
    void pos_Y7Changed(double);
    void pos_R7Changed(double);
    void pos_X8Changed(double);
    void pos_Y8Changed(double);
    void pos_R8Changed(double);
    void pos_X9Changed(double);
    void pos_Y9Changed(double);
    void pos_R9Changed(double);
    void pos_X10Changed(double);
    void pos_Y10Changed(double);
    void pos_R10Changed(double);
    void pos_X11Changed(double);
    void pos_Y11Changed(double);
    void pos_R11Changed(double);
    void pos_X12Changed(double);
    void pos_Y12Changed(double);
    void pos_R12Changed(double);
    void pos_X13Changed(double);
    void pos_Y13Changed(double);
    void pos_R13Changed(double);
    void pos_X14Changed(double);
    void pos_Y14Changed(double);
    void pos_R14Changed(double);
    void pos_X15Changed(double);
    void pos_Y15Changed(double);
    void pos_R15Changed(double);
    void pos_X16Changed(double);
    void pos_Y16Changed(double);
    void pos_R16Changed(double);
    void pos_X17Changed(double);
    void pos_Y17Changed(double);
    void pos_R17Changed(double);
    void pos_X18Changed(double);
    void pos_Y18Changed(double);
    void pos_R18Changed(double);
    void pos_X19Changed(double);
    void pos_Y19Changed(double);
    void pos_R19Changed(double);
    void pos_X20Changed(double);
    void pos_Y20Changed(double);
    void pos_R20Changed(double);
    void pos_X21Changed(double);
    void pos_Y21Changed(double);
    void pos_R21Changed(double);
    void pos_X22Changed(double);
    void pos_Y22Changed(double);
    void pos_R22Changed(double);
    void pos_X23Changed(double);
    void pos_Y23Changed(double);
    void pos_R23Changed(double);
    void pos_X24Changed(double);
    void pos_Y24Changed(double);
    void pos_R24Changed(double);
    void pos_X25Changed(double);
    void pos_Y25Changed(double);
    void pos_R25Changed(double);
    void pos_X26Changed(double);
    void pos_Y26Changed(double);
    void pos_R26Changed(double);
    void pos_X27Changed(double);
    void pos_Y27Changed(double);
    void pos_R27Changed(double);
    void pos_X28Changed(double);
    void pos_Y28Changed(double);
    void pos_R28Changed(double);
    void pos_X29Changed(double);
    void pos_Y29Changed(double);
    void pos_R29Changed(double);
    void pos_X30Changed(double);
    void pos_Y30Changed(double);
    void pos_R30Changed(double);
    void pos_X31Changed(double);
    void pos_Y31Changed(double);
    void pos_R31Changed(double);
    void pos_X32Changed(double);
    void pos_Y32Changed(double);
    void pos_R32Changed(double);
    void pos_X33Changed(double);
    void pos_Y33Changed(double);
    void pos_R33Changed(double);
    void pos_X34Changed(double);
    void pos_Y34Changed(double);
    void pos_R34Changed(double);
    void pos_X35Changed(double);
    void pos_Y35Changed(double);
    void pos_R35Changed(double);
    void pos_X36Changed(double);
    void pos_Y36Changed(double);
    void pos_R36Changed(double);
    void pos_X37Changed(double);
    void pos_Y37Changed(double);
    void pos_R37Changed(double);
    void pos_X38Changed(double);
    void pos_Y38Changed(double);
    void pos_R38Changed(double);
    void pos_X39Changed(double);
    void pos_Y39Changed(double);
    void pos_R39Changed(double);
    void pos_X40Changed(double);
    void pos_Y40Changed(double);
    void pos_R40Changed(double);
    void pos_X41Changed(double);
    void pos_Y41Changed(double);
    void pos_R41Changed(double);
    void pos_X42Changed(double);
    void pos_Y42Changed(double);
    void pos_R42Changed(double);
    void pos_X43Changed(double);
    void pos_Y43Changed(double);
    void pos_R43Changed(double);
    void pos_X44Changed(double);
    void pos_Y44Changed(double);
    void pos_R44Changed(double);
    void pos_X45Changed(double);
    void pos_Y45Changed(double);
    void pos_R45Changed(double);
    void pos_X46Changed(double);
    void pos_Y46Changed(double);
    void pos_R46Changed(double);
    void pos_X47Changed(double);
    void pos_Y47Changed(double);
    void pos_R47Changed(double);
    void pos_X48Changed(double);
    void pos_Y48Changed(double);
    void pos_R48Changed(double);
    void pos_X49Changed(double);
    void pos_Y49Changed(double);
    void pos_R49Changed(double);
    void pos_X50Changed(double);
    void pos_Y50Changed(double);
    void pos_R50Changed(double);
    void pos_X51Changed(double);
    void pos_Y51Changed(double);
    void pos_R51Changed(double);
    void pos_X52Changed(double);
    void pos_Y52Changed(double);
    void pos_R52Changed(double);
    void pos_X53Changed(double);
    void pos_Y53Changed(double);
    void pos_R53Changed(double);
    void pos_X54Changed(double);
    void pos_Y54Changed(double);
    void pos_R54Changed(double);
    void pos_X55Changed(double);
    void pos_Y55Changed(double);
    void pos_R55Changed(double);
    void pos_X56Changed(double);
    void pos_Y56Changed(double);
    void pos_R56Changed(double);
    void pos_X57Changed(double);
    void pos_Y57Changed(double);
    void pos_R57Changed(double);
    void pos_X58Changed(double);
    void pos_Y58Changed(double);
    void pos_R58Changed(double);
    void pos_X59Changed(double);
    void pos_Y59Changed(double);
    void pos_R59Changed(double);
    void pos_X60Changed(double);
    void pos_Y60Changed(double);
    void pos_R60Changed(double);
    void pos_X61Changed(double);
    void pos_Y61Changed(double);
    void pos_R61Changed(double);
    void pos_X62Changed(double);
    void pos_Y62Changed(double);
    void pos_R62Changed(double);
    void pos_X63Changed(double);
    void pos_Y63Changed(double);
    void pos_R63Changed(double);
    void pos_X64Changed(double);
    void pos_Y64Changed(double);
    void pos_R64Changed(double);
    void pos_X65Changed(double);
    void pos_Y65Changed(double);
    void pos_R65Changed(double);
    void pos_X66Changed(double);
    void pos_Y66Changed(double);
    void pos_R66Changed(double);
    void pos_X67Changed(double);
    void pos_Y67Changed(double);
    void pos_R67Changed(double);
    void pos_X68Changed(double);
    void pos_Y68Changed(double);
    void pos_R68Changed(double);
    void pos_X69Changed(double);
    void pos_Y69Changed(double);
    void pos_R69Changed(double);
    void pos_X70Changed(double);
    void pos_Y70Changed(double);
    void pos_R70Changed(double);
    void pos_X71Changed(double);
    void pos_Y71Changed(double);
    void pos_R71Changed(double);
    void pos_X72Changed(double);
    void pos_Y72Changed(double);
    void pos_R72Changed(double);
    void pos_X73Changed(double);
    void pos_Y73Changed(double);
    void pos_R73Changed(double);
    void pos_X74Changed(double);
    void pos_Y74Changed(double);
    void pos_R74Changed(double);
    void pos_X75Changed(double);
    void pos_Y75Changed(double);
    void pos_R75Changed(double);
    void pos_X76Changed(double);
    void pos_Y76Changed(double);
    void pos_R76Changed(double);
    void pos_X77Changed(double);
    void pos_Y77Changed(double);
    void pos_R77Changed(double);
    void pos_X78Changed(double);
    void pos_Y78Changed(double);
    void pos_R78Changed(double);
    void pos_X79Changed(double);
    void pos_Y79Changed(double);
    void pos_R79Changed(double);
    void pos_X80Changed(double);
    void pos_Y80Changed(double);
    void pos_R80Changed(double);
    void pos_X81Changed(double);
    void pos_Y81Changed(double);
    void pos_R81Changed(double);
    void pos_X82Changed(double);
    void pos_Y82Changed(double);
    void pos_R82Changed(double);
    void pos_X83Changed(double);
    void pos_Y83Changed(double);
    void pos_R83Changed(double);
    void pos_X84Changed(double);
    void pos_Y84Changed(double);
    void pos_R84Changed(double);
    void pos_X85Changed(double);
    void pos_Y85Changed(double);
    void pos_R85Changed(double);
    void pos_X86Changed(double);
    void pos_Y86Changed(double);
    void pos_R86Changed(double);
    void pos_X87Changed(double);
    void pos_Y87Changed(double);
    void pos_R87Changed(double);
    void pos_X88Changed(double);
    void pos_Y88Changed(double);
    void pos_R88Changed(double);
    void pos_X89Changed(double);
    void pos_Y89Changed(double);
    void pos_R89Changed(double);
    void pos_X90Changed(double);
    void pos_Y90Changed(double);
    void pos_R90Changed(double);
    void pos_X91Changed(double);
    void pos_Y91Changed(double);
    void pos_R91Changed(double);
    void pos_X92Changed(double);
    void pos_Y92Changed(double);
    void pos_R92Changed(double);
    void pos_X93Changed(double);
    void pos_Y93Changed(double);
    void pos_R93Changed(double);
    void pos_X94Changed(double);
    void pos_Y94Changed(double);
    void pos_R94Changed(double);
    void pos_X95Changed(double);
    void pos_Y95Changed(double);
    void pos_R95Changed(double);
    void pos_X96Changed(double);
    void pos_Y96Changed(double);
    void pos_R96Changed(double);
    void pos_X97Changed(double);
    void pos_Y97Changed(double);
    void pos_R97Changed(double);
    void pos_X98Changed(double);
    void pos_Y98Changed(double);
    void pos_R98Changed(double);
    void pos_X99Changed(double);
    void pos_Y99Changed(double);
    void pos_R99Changed(double);
    void pos_X100Changed(double);
    void pos_Y100Changed(double);
    void pos_R100Changed(double);
    void pos_X101Changed(double);
    void pos_Y101Changed(double);
    void pos_R101Changed(double);
    void pos_X102Changed(double);
    void pos_Y102Changed(double);
    void pos_R102Changed(double);
    void pos_X103Changed(double);
    void pos_Y103Changed(double);
    void pos_R103Changed(double);
    void pos_X104Changed(double);
    void pos_Y104Changed(double);
    void pos_R104Changed(double);
    void pos_X105Changed(double);
    void pos_Y105Changed(double);
    void pos_R105Changed(double);
    void pos_X106Changed(double);
    void pos_Y106Changed(double);
    void pos_R106Changed(double);
    void pos_X107Changed(double);
    void pos_Y107Changed(double);
    void pos_R107Changed(double);
    void pos_X108Changed(double);
    void pos_Y108Changed(double);
    void pos_R108Changed(double);
    void pos_X109Changed(double);
    void pos_Y109Changed(double);
    void pos_R109Changed(double);
    void pos_X110Changed(double);
    void pos_Y110Changed(double);
    void pos_R110Changed(double);
    void pos_X111Changed(double);
    void pos_Y111Changed(double);
    void pos_R111Changed(double);
    void pos_X112Changed(double);
    void pos_Y112Changed(double);
    void pos_R112Changed(double);
    void pos_X113Changed(double);
    void pos_Y113Changed(double);
    void pos_R113Changed(double);
    void pos_X114Changed(double);
    void pos_Y114Changed(double);
    void pos_R114Changed(double);
    void pos_X115Changed(double);
    void pos_Y115Changed(double);
    void pos_R115Changed(double);
    void pos_X116Changed(double);
    void pos_Y116Changed(double);
    void pos_R116Changed(double);
    void pos_X117Changed(double);
    void pos_Y117Changed(double);
    void pos_R117Changed(double);
    void pos_X118Changed(double);
    void pos_Y118Changed(double);
    void pos_R118Changed(double);
    void pos_X119Changed(double);
    void pos_Y119Changed(double);
    void pos_R119Changed(double);
    void pos_X120Changed(double);
    void pos_Y120Changed(double);
    void pos_R120Changed(double);
    void pos_X121Changed(double);
    void pos_Y121Changed(double);
    void pos_R121Changed(double);
    void pos_X122Changed(double);
    void pos_Y122Changed(double);
    void pos_R122Changed(double);
    void pos_X123Changed(double);
    void pos_Y123Changed(double);
    void pos_R123Changed(double);
    void pos_X124Changed(double);
    void pos_Y124Changed(double);
    void pos_R124Changed(double);
    void pos_X125Changed(double);
    void pos_Y125Changed(double);
    void pos_R125Changed(double);
    void pos_X126Changed(double);
    void pos_Y126Changed(double);
    void pos_R126Changed(double);
    void pos_X127Changed(double);
    void pos_Y127Changed(double);
    void pos_R127Changed(double);
    void pos_X128Changed(double);
    void pos_Y128Changed(double);
    void pos_R128Changed(double);
    void pos_X129Changed(double);
    void pos_Y129Changed(double);
    void pos_R129Changed(double);
    void pos_X130Changed(double);
    void pos_Y130Changed(double);
    void pos_R130Changed(double);
    void pos_X131Changed(double);
    void pos_Y131Changed(double);
    void pos_R131Changed(double);
    void pos_X132Changed(double);
    void pos_Y132Changed(double);
    void pos_R132Changed(double);
    void pos_X133Changed(double);
    void pos_Y133Changed(double);
    void pos_R133Changed(double);
    void pos_X134Changed(double);
    void pos_Y134Changed(double);
    void pos_R134Changed(double);
    void pos_X135Changed(double);
    void pos_Y135Changed(double);
    void pos_R135Changed(double);
    void pos_X136Changed(double);
    void pos_Y136Changed(double);
    void pos_R136Changed(double);
    void pos_X137Changed(double);
    void pos_Y137Changed(double);
    void pos_R137Changed(double);
    void pos_X138Changed(double);
    void pos_Y138Changed(double);
    void pos_R138Changed(double);
    void pos_X139Changed(double);
    void pos_Y139Changed(double);
    void pos_R139Changed(double);
    void pos_X140Changed(double);
    void pos_Y140Changed(double);
    void pos_R140Changed(double);
    void pos_X141Changed(double);
    void pos_Y141Changed(double);
    void pos_R141Changed(double);
    void pos_X142Changed(double);
    void pos_Y142Changed(double);
    void pos_R142Changed(double);
    void pos_X143Changed(double);
    void pos_Y143Changed(double);
    void pos_R143Changed(double);
    void pos_X144Changed(double);
    void pos_Y144Changed(double);
    void pos_R144Changed(double);
    void pos_X145Changed(double);
    void pos_Y145Changed(double);
    void pos_R145Changed(double);
    void pos_X146Changed(double);
    void pos_Y146Changed(double);
    void pos_R146Changed(double);
    void pos_X147Changed(double);
    void pos_Y147Changed(double);
    void pos_R147Changed(double);
    void pos_X148Changed(double);
    void pos_Y148Changed(double);
    void pos_R148Changed(double);
    void pos_X149Changed(double);
    void pos_Y149Changed(double);
    void pos_R149Changed(double);
    void pos_X150Changed(double);
    void pos_Y150Changed(double);
    void pos_R150Changed(double);
    void pos_X151Changed(double);
    void pos_Y151Changed(double);
    void pos_R151Changed(double);
    void pos_X152Changed(double);
    void pos_Y152Changed(double);
    void pos_R152Changed(double);
    void pos_X153Changed(double);
    void pos_Y153Changed(double);
    void pos_R153Changed(double);
    void pos_X154Changed(double);
    void pos_Y154Changed(double);
    void pos_R154Changed(double);
    void pos_X155Changed(double);
    void pos_Y155Changed(double);
    void pos_R155Changed(double);
    void pos_X156Changed(double);
    void pos_Y156Changed(double);
    void pos_R156Changed(double);
    void pos_X157Changed(double);
    void pos_Y157Changed(double);
    void pos_R157Changed(double);
    void pos_X158Changed(double);
    void pos_Y158Changed(double);
    void pos_R158Changed(double);
    void pos_X159Changed(double);
    void pos_Y159Changed(double);
    void pos_R159Changed(double);
    void pos_X160Changed(double);
    void pos_Y160Changed(double);
    void pos_R160Changed(double);
    void pos_X161Changed(double);
    void pos_Y161Changed(double);
    void pos_R161Changed(double);
    void pos_X162Changed(double);
    void pos_Y162Changed(double);
    void pos_R162Changed(double);
    void pos_X163Changed(double);
    void pos_Y163Changed(double);
    void pos_R163Changed(double);
    void pos_X164Changed(double);
    void pos_Y164Changed(double);
    void pos_R164Changed(double);
    void pos_X165Changed(double);
    void pos_Y165Changed(double);
    void pos_R165Changed(double);
    void pos_X166Changed(double);
    void pos_Y166Changed(double);
    void pos_R166Changed(double);
    void pos_X167Changed(double);
    void pos_Y167Changed(double);
    void pos_R167Changed(double);
    void pos_X168Changed(double);
    void pos_Y168Changed(double);
    void pos_R168Changed(double);
    void pos_X169Changed(double);
    void pos_Y169Changed(double);
    void pos_R169Changed(double);
    void pos_X170Changed(double);
    void pos_Y170Changed(double);
    void pos_R170Changed(double);
    void pos_X171Changed(double);
    void pos_Y171Changed(double);
    void pos_R171Changed(double);
    void pos_X172Changed(double);
    void pos_Y172Changed(double);
    void pos_R172Changed(double);
    void pos_X173Changed(double);
    void pos_Y173Changed(double);
    void pos_R173Changed(double);
    void pos_X174Changed(double);
    void pos_Y174Changed(double);
    void pos_R174Changed(double);
    void pos_X175Changed(double);
    void pos_Y175Changed(double);
    void pos_R175Changed(double);
    void pos_X176Changed(double);
    void pos_Y176Changed(double);
    void pos_R176Changed(double);
    void pos_X177Changed(double);
    void pos_Y177Changed(double);
    void pos_R177Changed(double);
    void pos_X178Changed(double);
    void pos_Y178Changed(double);
    void pos_R178Changed(double);
    void pos_X179Changed(double);
    void pos_Y179Changed(double);
    void pos_R179Changed(double);
    void pos_X180Changed(double);
    void pos_Y180Changed(double);
    void pos_R180Changed(double);
    void pos_X181Changed(double);
    void pos_Y181Changed(double);
    void pos_R181Changed(double);
    void pos_X182Changed(double);
    void pos_Y182Changed(double);
    void pos_R182Changed(double);
    void pos_X183Changed(double);
    void pos_Y183Changed(double);
    void pos_R183Changed(double);
    void pos_X184Changed(double);
    void pos_Y184Changed(double);
    void pos_R184Changed(double);
    void pos_X185Changed(double);
    void pos_Y185Changed(double);
    void pos_R185Changed(double);
    void pos_X186Changed(double);
    void pos_Y186Changed(double);
    void pos_R186Changed(double);
    void pos_X187Changed(double);
    void pos_Y187Changed(double);
    void pos_R187Changed(double);
    void pos_X188Changed(double);
    void pos_Y188Changed(double);
    void pos_R188Changed(double);
    void pos_X189Changed(double);
    void pos_Y189Changed(double);
    void pos_R189Changed(double);
    void pos_X190Changed(double);
    void pos_Y190Changed(double);
    void pos_R190Changed(double);
    void pos_X191Changed(double);
    void pos_Y191Changed(double);
    void pos_R191Changed(double);
    void pos_X192Changed(double);
    void pos_Y192Changed(double);
    void pos_R192Changed(double);
    void pos_X193Changed(double);
    void pos_Y193Changed(double);
    void pos_R193Changed(double);
    void pos_X194Changed(double);
    void pos_Y194Changed(double);
    void pos_R194Changed(double);
    void pos_X195Changed(double);
    void pos_Y195Changed(double);
    void pos_R195Changed(double);
    void pos_X196Changed(double);
    void pos_Y196Changed(double);
    void pos_R196Changed(double);
    void pos_X197Changed(double);
    void pos_Y197Changed(double);
    void pos_R197Changed(double);
    void pos_X198Changed(double);
    void pos_Y198Changed(double);
    void pos_R198Changed(double);
    void pos_X199Changed(double);
    void pos_Y199Changed(double);
    void pos_R199Changed(double);
    void pos_X200Changed(double);
    void pos_Y200Changed(double);
    void pos_R200Changed(double);
    void pos_X201Changed(double);
    void pos_Y201Changed(double);
    void pos_R201Changed(double);
    void pos_X202Changed(double);
    void pos_Y202Changed(double);
    void pos_R202Changed(double);
    void pos_X203Changed(double);
    void pos_Y203Changed(double);
    void pos_R203Changed(double);
    void pos_X204Changed(double);
    void pos_Y204Changed(double);
    void pos_R204Changed(double);
    void pos_X205Changed(double);
    void pos_Y205Changed(double);
    void pos_R205Changed(double);
    void pos_X206Changed(double);
    void pos_Y206Changed(double);
    void pos_R206Changed(double);
    void pos_X207Changed(double);
    void pos_Y207Changed(double);
    void pos_R207Changed(double);
    void pos_X208Changed(double);
    void pos_Y208Changed(double);
    void pos_R208Changed(double);
    void pos_X209Changed(double);
    void pos_Y209Changed(double);
    void pos_R209Changed(double);
    void pos_X210Changed(double);
    void pos_Y210Changed(double);
    void pos_R210Changed(double);
    void pos_X211Changed(double);
    void pos_Y211Changed(double);
    void pos_R211Changed(double);
    void pos_X212Changed(double);
    void pos_Y212Changed(double);
    void pos_R212Changed(double);
    void pos_X213Changed(double);
    void pos_Y213Changed(double);
    void pos_R213Changed(double);
    void pos_X214Changed(double);
    void pos_Y214Changed(double);
    void pos_R214Changed(double);
    void pos_X215Changed(double);
    void pos_Y215Changed(double);
    void pos_R215Changed(double);
    void pos_X216Changed(double);
    void pos_Y216Changed(double);
    void pos_R216Changed(double);
    void pos_X217Changed(double);
    void pos_Y217Changed(double);
    void pos_R217Changed(double);
    void pos_X218Changed(double);
    void pos_Y218Changed(double);
    void pos_R218Changed(double);
    void pos_X219Changed(double);
    void pos_Y219Changed(double);
    void pos_R219Changed(double);
    void pos_X220Changed(double);
    void pos_Y220Changed(double);
    void pos_R220Changed(double);
    void pos_X221Changed(double);
    void pos_Y221Changed(double);
    void pos_R221Changed(double);
    void pos_X222Changed(double);
    void pos_Y222Changed(double);
    void pos_R222Changed(double);
    void pos_X223Changed(double);
    void pos_Y223Changed(double);
    void pos_R223Changed(double);
    void pos_X224Changed(double);
    void pos_Y224Changed(double);
    void pos_R224Changed(double);
    void pos_X225Changed(double);
    void pos_Y225Changed(double);
    void pos_R225Changed(double);
    void pos_X226Changed(double);
    void pos_Y226Changed(double);
    void pos_R226Changed(double);
    void pos_X227Changed(double);
    void pos_Y227Changed(double);
    void pos_R227Changed(double);
    void pos_X228Changed(double);
    void pos_Y228Changed(double);
    void pos_R228Changed(double);
    void pos_X229Changed(double);
    void pos_Y229Changed(double);
    void pos_R229Changed(double);
    void pos_X230Changed(double);
    void pos_Y230Changed(double);
    void pos_R230Changed(double);
    void pos_X231Changed(double);
    void pos_Y231Changed(double);
    void pos_R231Changed(double);
    void pos_X232Changed(double);
    void pos_Y232Changed(double);
    void pos_R232Changed(double);
    void pos_X233Changed(double);
    void pos_Y233Changed(double);
    void pos_R233Changed(double);
    void pos_X234Changed(double);
    void pos_Y234Changed(double);
    void pos_R234Changed(double);
    void pos_X235Changed(double);
    void pos_Y235Changed(double);
    void pos_R235Changed(double);
    void pos_X236Changed(double);
    void pos_Y236Changed(double);
    void pos_R236Changed(double);
    void pos_X237Changed(double);
    void pos_Y237Changed(double);
    void pos_R237Changed(double);
    void pos_X238Changed(double);
    void pos_Y238Changed(double);
    void pos_R238Changed(double);
    void pos_X239Changed(double);
    void pos_Y239Changed(double);
    void pos_R239Changed(double);
    void pos_X240Changed(double);
    void pos_Y240Changed(double);
    void pos_R240Changed(double);
    void pos_X241Changed(double);
    void pos_Y241Changed(double);
    void pos_R241Changed(double);
    void pos_X242Changed(double);
    void pos_Y242Changed(double);
    void pos_R242Changed(double);
    void pos_X243Changed(double);
    void pos_Y243Changed(double);
    void pos_R243Changed(double);
    void pos_X244Changed(double);
    void pos_Y244Changed(double);
    void pos_R244Changed(double);
    void pos_X245Changed(double);
    void pos_Y245Changed(double);
    void pos_R245Changed(double);
    void pos_X246Changed(double);
    void pos_Y246Changed(double);
    void pos_R246Changed(double);
    void pos_X247Changed(double);
    void pos_Y247Changed(double);
    void pos_R247Changed(double);
    void pos_X248Changed(double);
    void pos_Y248Changed(double);
    void pos_R248Changed(double);
    void pos_X249Changed(double);
    void pos_Y249Changed(double);
    void pos_R249Changed(double);
    void pos_X250Changed(double);
    void pos_Y250Changed(double);
    void pos_R250Changed(double);
    void pos_X251Changed(double);
    void pos_Y251Changed(double);
    void pos_R251Changed(double);
    void pos_X252Changed(double);
    void pos_Y252Changed(double);
    void pos_R252Changed(double);
    void pos_X253Changed(double);
    void pos_Y253Changed(double);
    void pos_R253Changed(double);
    void pos_X254Changed(double);
    void pos_Y254Changed(double);
    void pos_R254Changed(double);
    void pos_X255Changed(double);
    void pos_Y255Changed(double);
    void pos_R255Changed(double);
    void pos_X256Changed(double);
    void pos_Y256Changed(double);
    void pos_R256Changed(double);
    void pos_X257Changed(double);
    void pos_Y257Changed(double);
    void pos_R257Changed(double);
    void pos_X258Changed(double);
    void pos_Y258Changed(double);
    void pos_R258Changed(double);
    void pos_X259Changed(double);
    void pos_Y259Changed(double);
    void pos_R259Changed(double);
    void pos_X260Changed(double);
    void pos_Y260Changed(double);
    void pos_R260Changed(double);
    void pos_X261Changed(double);
    void pos_Y261Changed(double);
    void pos_R261Changed(double);
    void pos_X262Changed(double);
    void pos_Y262Changed(double);
    void pos_R262Changed(double);
    void pos_X263Changed(double);
    void pos_Y263Changed(double);
    void pos_R263Changed(double);
    void pos_X264Changed(double);
    void pos_Y264Changed(double);
    void pos_R264Changed(double);
    void pos_X265Changed(double);
    void pos_Y265Changed(double);
    void pos_R265Changed(double);
    void pos_X266Changed(double);
    void pos_Y266Changed(double);
    void pos_R266Changed(double);
    void pos_X267Changed(double);
    void pos_Y267Changed(double);
    void pos_R267Changed(double);
    void pos_X268Changed(double);
    void pos_Y268Changed(double);
    void pos_R268Changed(double);
    void pos_X269Changed(double);
    void pos_Y269Changed(double);
    void pos_R269Changed(double);
    void pos_X270Changed(double);
    void pos_Y270Changed(double);
    void pos_R270Changed(double);
    void pos_X271Changed(double);
    void pos_Y271Changed(double);
    void pos_R271Changed(double);
    void pos_X272Changed(double);
    void pos_Y272Changed(double);
    void pos_R272Changed(double);
    void pos_X273Changed(double);
    void pos_Y273Changed(double);
    void pos_R273Changed(double);
    void pos_X274Changed(double);
    void pos_Y274Changed(double);
    void pos_R274Changed(double);
    void pos_X275Changed(double);
    void pos_Y275Changed(double);
    void pos_R275Changed(double);
    void pos_X276Changed(double);
    void pos_Y276Changed(double);
    void pos_R276Changed(double);
    void pos_X277Changed(double);
    void pos_Y277Changed(double);
    void pos_R277Changed(double);
    void pos_X278Changed(double);
    void pos_Y278Changed(double);
    void pos_R278Changed(double);
    void pos_X279Changed(double);
    void pos_Y279Changed(double);
    void pos_R279Changed(double);
    void pos_X280Changed(double);
    void pos_Y280Changed(double);
    void pos_R280Changed(double);
    void pos_X281Changed(double);
    void pos_Y281Changed(double);
    void pos_R281Changed(double);
    void pos_X282Changed(double);
    void pos_Y282Changed(double);
    void pos_R282Changed(double);
    void pos_X283Changed(double);
    void pos_Y283Changed(double);
    void pos_R283Changed(double);
    void pos_X284Changed(double);
    void pos_Y284Changed(double);
    void pos_R284Changed(double);
    void pos_X285Changed(double);
    void pos_Y285Changed(double);
    void pos_R285Changed(double);
    void pos_X286Changed(double);
    void pos_Y286Changed(double);
    void pos_R286Changed(double);
    void pos_X287Changed(double);
    void pos_Y287Changed(double);
    void pos_R287Changed(double);
    void pos_X288Changed(double);
    void pos_Y288Changed(double);
    void pos_R288Changed(double);
    void pos_X289Changed(double);
    void pos_Y289Changed(double);
    void pos_R289Changed(double);
    void pos_X290Changed(double);
    void pos_Y290Changed(double);
    void pos_R290Changed(double);
    void pos_X291Changed(double);
    void pos_Y291Changed(double);
    void pos_R291Changed(double);
    void pos_X292Changed(double);
    void pos_Y292Changed(double);
    void pos_R292Changed(double);
    void pos_X293Changed(double);
    void pos_Y293Changed(double);
    void pos_R293Changed(double);
    void pos_X294Changed(double);
    void pos_Y294Changed(double);
    void pos_R294Changed(double);
    void pos_X295Changed(double);
    void pos_Y295Changed(double);
    void pos_R295Changed(double);
    void pos_X296Changed(double);
    void pos_Y296Changed(double);
    void pos_R296Changed(double);
    void pos_X297Changed(double);
    void pos_Y297Changed(double);
    void pos_R297Changed(double);
    void pos_X298Changed(double);
    void pos_Y298Changed(double);
    void pos_R298Changed(double);
    void pos_X299Changed(double);
    void pos_Y299Changed(double);
    void pos_R299Changed(double);
    void pos_X300Changed(double);
    void pos_Y300Changed(double);
    void pos_R300Changed(double);
    void pos_X301Changed(double);
    void pos_Y301Changed(double);
    void pos_R301Changed(double);
    void pos_X302Changed(double);
    void pos_Y302Changed(double);
    void pos_R302Changed(double);
    void pos_X303Changed(double);
    void pos_Y303Changed(double);
    void pos_R303Changed(double);
    void pos_X304Changed(double);
    void pos_Y304Changed(double);
    void pos_R304Changed(double);
    void pos_X305Changed(double);
    void pos_Y305Changed(double);
    void pos_R305Changed(double);
    void pos_X306Changed(double);
    void pos_Y306Changed(double);
    void pos_R306Changed(double);
    void pos_X307Changed(double);
    void pos_Y307Changed(double);
    void pos_R307Changed(double);
    void pos_X308Changed(double);
    void pos_Y308Changed(double);
    void pos_R308Changed(double);
    void pos_X309Changed(double);
    void pos_Y309Changed(double);
    void pos_R309Changed(double);
    void pos_X310Changed(double);
    void pos_Y310Changed(double);
    void pos_R310Changed(double);
    void pos_X311Changed(double);
    void pos_Y311Changed(double);
    void pos_R311Changed(double);
    void pos_X312Changed(double);
    void pos_Y312Changed(double);
    void pos_R312Changed(double);
    void pos_X313Changed(double);
    void pos_Y313Changed(double);
    void pos_R313Changed(double);
    void pos_X314Changed(double);
    void pos_Y314Changed(double);
    void pos_R314Changed(double);
    void pos_X315Changed(double);
    void pos_Y315Changed(double);
    void pos_R315Changed(double);
    void pos_X316Changed(double);
    void pos_Y316Changed(double);
    void pos_R316Changed(double);
    void pos_X317Changed(double);
    void pos_Y317Changed(double);
    void pos_R317Changed(double);
    void pos_X318Changed(double);
    void pos_Y318Changed(double);
    void pos_R318Changed(double);
    void pos_X319Changed(double);
    void pos_Y319Changed(double);
    void pos_R319Changed(double);
    void pos_X320Changed(double);
    void pos_Y320Changed(double);
    void pos_R320Changed(double);
    void pos_X321Changed(double);
    void pos_Y321Changed(double);
    void pos_R321Changed(double);
    void pos_X322Changed(double);
    void pos_Y322Changed(double);
    void pos_R322Changed(double);
    void pos_X323Changed(double);
    void pos_Y323Changed(double);
    void pos_R323Changed(double);
    void pos_X324Changed(double);
    void pos_Y324Changed(double);
    void pos_R324Changed(double);
    void pos_X325Changed(double);
    void pos_Y325Changed(double);
    void pos_R325Changed(double);
    void pos_X326Changed(double);
    void pos_Y326Changed(double);
    void pos_R326Changed(double);
    void pos_X327Changed(double);
    void pos_Y327Changed(double);
    void pos_R327Changed(double);
    void pos_X328Changed(double);
    void pos_Y328Changed(double);
    void pos_R328Changed(double);
    void pos_X329Changed(double);
    void pos_Y329Changed(double);
    void pos_R329Changed(double);
    void pos_X330Changed(double);
    void pos_Y330Changed(double);
    void pos_R330Changed(double);
    void pos_X331Changed(double);
    void pos_Y331Changed(double);
    void pos_R331Changed(double);
    void pos_X332Changed(double);
    void pos_Y332Changed(double);
    void pos_R332Changed(double);
    void pos_X333Changed(double);
    void pos_Y333Changed(double);
    void pos_R333Changed(double);
    void pos_X334Changed(double);
    void pos_Y334Changed(double);
    void pos_R334Changed(double);
    void pos_X335Changed(double);
    void pos_Y335Changed(double);
    void pos_R335Changed(double);
    void pos_X336Changed(double);
    void pos_Y336Changed(double);
    void pos_R336Changed(double);
    void pos_X337Changed(double);
    void pos_Y337Changed(double);
    void pos_R337Changed(double);
    void pos_X338Changed(double);
    void pos_Y338Changed(double);
    void pos_R338Changed(double);
    void pos_X339Changed(double);
    void pos_Y339Changed(double);
    void pos_R339Changed(double);
    void pos_X340Changed(double);
    void pos_Y340Changed(double);
    void pos_R340Changed(double);
    void pos_X341Changed(double);
    void pos_Y341Changed(double);
    void pos_R341Changed(double);
    void pos_X342Changed(double);
    void pos_Y342Changed(double);
    void pos_R342Changed(double);
    void pos_X343Changed(double);
    void pos_Y343Changed(double);
    void pos_R343Changed(double);
    void pos_X344Changed(double);
    void pos_Y344Changed(double);
    void pos_R344Changed(double);
    void pos_X345Changed(double);
    void pos_Y345Changed(double);
    void pos_R345Changed(double);
    void pos_X346Changed(double);
    void pos_Y346Changed(double);
    void pos_R346Changed(double);
    void pos_X347Changed(double);
    void pos_Y347Changed(double);
    void pos_R347Changed(double);
    void pos_X348Changed(double);
    void pos_Y348Changed(double);
    void pos_R348Changed(double);
    void pos_X349Changed(double);
    void pos_Y349Changed(double);
    void pos_R349Changed(double);
    void pos_X350Changed(double);
    void pos_Y350Changed(double);
    void pos_R350Changed(double);
    void pos_X351Changed(double);
    void pos_Y351Changed(double);
    void pos_R351Changed(double);
    void pos_X352Changed(double);
    void pos_Y352Changed(double);
    void pos_R352Changed(double);
    void pos_X353Changed(double);
    void pos_Y353Changed(double);
    void pos_R353Changed(double);
    void pos_X354Changed(double);
    void pos_Y354Changed(double);
    void pos_R354Changed(double);
    void pos_X355Changed(double);
    void pos_Y355Changed(double);
    void pos_R355Changed(double);
    void pos_X356Changed(double);
    void pos_Y356Changed(double);
    void pos_R356Changed(double);
    void pos_X357Changed(double);
    void pos_Y357Changed(double);
    void pos_R357Changed(double);
    void pos_X358Changed(double);
    void pos_Y358Changed(double);
    void pos_R358Changed(double);
    void pos_X359Changed(double);
    void pos_Y359Changed(double);
    void pos_R359Changed(double);
    void pos_X360Changed(double);
    void pos_Y360Changed(double);
    void pos_R360Changed(double);
    void pos_X361Changed(double);
    void pos_Y361Changed(double);
    void pos_R361Changed(double);
    void pos_X362Changed(double);
    void pos_Y362Changed(double);
    void pos_R362Changed(double);
    void pos_X363Changed(double);
    void pos_Y363Changed(double);
    void pos_R363Changed(double);
    void pos_X364Changed(double);
    void pos_Y364Changed(double);
    void pos_R364Changed(double);
    void pos_X365Changed(double);
    void pos_Y365Changed(double);
    void pos_R365Changed(double);
    void pos_X366Changed(double);
    void pos_Y366Changed(double);
    void pos_R366Changed(double);
    void pos_X367Changed(double);
    void pos_Y367Changed(double);
    void pos_R367Changed(double);
    void pos_X368Changed(double);
    void pos_Y368Changed(double);
    void pos_R368Changed(double);
    void pos_X369Changed(double);
    void pos_Y369Changed(double);
    void pos_R369Changed(double);
    void pos_X370Changed(double);
    void pos_Y370Changed(double);
    void pos_R370Changed(double);
    void pos_X371Changed(double);
    void pos_Y371Changed(double);
    void pos_R371Changed(double);
    void pos_X372Changed(double);
    void pos_Y372Changed(double);
    void pos_R372Changed(double);
    void pos_X373Changed(double);
    void pos_Y373Changed(double);
    void pos_R373Changed(double);
    void pos_X374Changed(double);
    void pos_Y374Changed(double);
    void pos_R374Changed(double);
    void pos_X375Changed(double);
    void pos_Y375Changed(double);
    void pos_R375Changed(double);
    void pos_X376Changed(double);
    void pos_Y376Changed(double);
    void pos_R376Changed(double);
    void pos_X377Changed(double);
    void pos_Y377Changed(double);
    void pos_R377Changed(double);
    void pos_X378Changed(double);
    void pos_Y378Changed(double);
    void pos_R378Changed(double);
    void pos_X379Changed(double);
    void pos_Y379Changed(double);
    void pos_R379Changed(double);
    void pos_X380Changed(double);
    void pos_Y380Changed(double);
    void pos_R380Changed(double);
    void pos_X381Changed(double);
    void pos_Y381Changed(double);
    void pos_R381Changed(double);
    void pos_X382Changed(double);
    void pos_Y382Changed(double);
    void pos_R382Changed(double);
    void pos_X383Changed(double);
    void pos_Y383Changed(double);
    void pos_R383Changed(double);
    void pos_X384Changed(double);
    void pos_Y384Changed(double);
    void pos_R384Changed(double);
    void pos_X385Changed(double);
    void pos_Y385Changed(double);
    void pos_R385Changed(double);
    void pos_X386Changed(double);
    void pos_Y386Changed(double);
    void pos_R386Changed(double);
    void pos_X387Changed(double);
    void pos_Y387Changed(double);
    void pos_R387Changed(double);
    void pos_X388Changed(double);
    void pos_Y388Changed(double);
    void pos_R388Changed(double);
    void pos_X389Changed(double);
    void pos_Y389Changed(double);
    void pos_R389Changed(double);
    void pos_X390Changed(double);
    void pos_Y390Changed(double);
    void pos_R390Changed(double);
    void pos_X391Changed(double);
    void pos_Y391Changed(double);
    void pos_R391Changed(double);
    void pos_X392Changed(double);
    void pos_Y392Changed(double);
    void pos_R392Changed(double);
    void pos_X393Changed(double);
    void pos_Y393Changed(double);
    void pos_R393Changed(double);
    void pos_X394Changed(double);
    void pos_Y394Changed(double);
    void pos_R394Changed(double);
    void pos_X395Changed(double);
    void pos_Y395Changed(double);
    void pos_R395Changed(double);
    void pos_X396Changed(double);
    void pos_Y396Changed(double);
    void pos_R396Changed(double);
    void pos_X397Changed(double);
    void pos_Y397Changed(double);
    void pos_R397Changed(double);
    void pos_X398Changed(double);
    void pos_Y398Changed(double);
    void pos_R398Changed(double);
    void pos_X399Changed(double);
    void pos_Y399Changed(double);
    void pos_R399Changed(double);
    void pos_X400Changed(double);
    void pos_Y400Changed(double);
    void pos_R400Changed(double);
    void pos_X401Changed(double);
    void pos_Y401Changed(double);
    void pos_R401Changed(double);
    void pos_X402Changed(double);
    void pos_Y402Changed(double);
    void pos_R402Changed(double);
    void pos_X403Changed(double);
    void pos_Y403Changed(double);
    void pos_R403Changed(double);
    void pos_X404Changed(double);
    void pos_Y404Changed(double);
    void pos_R404Changed(double);
    void pos_X405Changed(double);
    void pos_Y405Changed(double);
    void pos_R405Changed(double);
    void pos_X406Changed(double);
    void pos_Y406Changed(double);
    void pos_R406Changed(double);
    void pos_X407Changed(double);
    void pos_Y407Changed(double);
    void pos_R407Changed(double);
    void pos_X408Changed(double);
    void pos_Y408Changed(double);
    void pos_R408Changed(double);
    void pos_X409Changed(double);
    void pos_Y409Changed(double);
    void pos_R409Changed(double);
    void pos_X410Changed(double);
    void pos_Y410Changed(double);
    void pos_R410Changed(double);
    void pos_X411Changed(double);
    void pos_Y411Changed(double);
    void pos_R411Changed(double);
    void pos_X412Changed(double);
    void pos_Y412Changed(double);
    void pos_R412Changed(double);
    void pos_X413Changed(double);
    void pos_Y413Changed(double);
    void pos_R413Changed(double);
    void pos_X414Changed(double);
    void pos_Y414Changed(double);
    void pos_R414Changed(double);
    void pos_X415Changed(double);
    void pos_Y415Changed(double);
    void pos_R415Changed(double);
    void pos_X416Changed(double);
    void pos_Y416Changed(double);
    void pos_R416Changed(double);
    void pos_X417Changed(double);
    void pos_Y417Changed(double);
    void pos_R417Changed(double);
    void pos_X418Changed(double);
    void pos_Y418Changed(double);
    void pos_R418Changed(double);
    void pos_X419Changed(double);
    void pos_Y419Changed(double);
    void pos_R419Changed(double);
    void pos_X420Changed(double);
    void pos_Y420Changed(double);
    void pos_R420Changed(double);
    void pos_X421Changed(double);
    void pos_Y421Changed(double);
    void pos_R421Changed(double);
    void pos_X422Changed(double);
    void pos_Y422Changed(double);
    void pos_R422Changed(double);
    void pos_X423Changed(double);
    void pos_Y423Changed(double);
    void pos_R423Changed(double);
    void pos_X424Changed(double);
    void pos_Y424Changed(double);
    void pos_R424Changed(double);
    void pos_X425Changed(double);
    void pos_Y425Changed(double);
    void pos_R425Changed(double);
    void pos_X426Changed(double);
    void pos_Y426Changed(double);
    void pos_R426Changed(double);
    void pos_X427Changed(double);
    void pos_Y427Changed(double);
    void pos_R427Changed(double);
    void pos_X428Changed(double);
    void pos_Y428Changed(double);
    void pos_R428Changed(double);
    void pos_X429Changed(double);
    void pos_Y429Changed(double);
    void pos_R429Changed(double);
    void pos_X430Changed(double);
    void pos_Y430Changed(double);
    void pos_R430Changed(double);
    void pos_X431Changed(double);
    void pos_Y431Changed(double);
    void pos_R431Changed(double);
    void pos_X432Changed(double);
    void pos_Y432Changed(double);
    void pos_R432Changed(double);
    void pos_X433Changed(double);
    void pos_Y433Changed(double);
    void pos_R433Changed(double);
    void pos_X434Changed(double);
    void pos_Y434Changed(double);
    void pos_R434Changed(double);
    void pos_X435Changed(double);
    void pos_Y435Changed(double);
    void pos_R435Changed(double);
    void pos_X436Changed(double);
    void pos_Y436Changed(double);
    void pos_R436Changed(double);
    void pos_X437Changed(double);
    void pos_Y437Changed(double);
    void pos_R437Changed(double);
    void pos_X438Changed(double);
    void pos_Y438Changed(double);
    void pos_R438Changed(double);
    void pos_X439Changed(double);
    void pos_Y439Changed(double);
    void pos_R439Changed(double);
    void pos_X440Changed(double);
    void pos_Y440Changed(double);
    void pos_R440Changed(double);
    void pos_X441Changed(double);
    void pos_Y441Changed(double);
    void pos_R441Changed(double);
    void pos_X442Changed(double);
    void pos_Y442Changed(double);
    void pos_R442Changed(double);
    void pos_X443Changed(double);
    void pos_Y443Changed(double);
    void pos_R443Changed(double);
    void pos_X444Changed(double);
    void pos_Y444Changed(double);
    void pos_R444Changed(double);
    void pos_X445Changed(double);
    void pos_Y445Changed(double);
    void pos_R445Changed(double);
    void pos_X446Changed(double);
    void pos_Y446Changed(double);
    void pos_R446Changed(double);
    void pos_X447Changed(double);
    void pos_Y447Changed(double);
    void pos_R447Changed(double);
    void pos_X448Changed(double);
    void pos_Y448Changed(double);
    void pos_R448Changed(double);
    void pos_X449Changed(double);
    void pos_Y449Changed(double);
    void pos_R449Changed(double);
    void pos_X450Changed(double);
    void pos_Y450Changed(double);
    void pos_R450Changed(double);
    void pos_X451Changed(double);
    void pos_Y451Changed(double);
    void pos_R451Changed(double);
    void pos_X452Changed(double);
    void pos_Y452Changed(double);
    void pos_R452Changed(double);
    void pos_X453Changed(double);
    void pos_Y453Changed(double);
    void pos_R453Changed(double);
    void pos_X454Changed(double);
    void pos_Y454Changed(double);
    void pos_R454Changed(double);
    void pos_X455Changed(double);
    void pos_Y455Changed(double);
    void pos_R455Changed(double);
    void pos_X456Changed(double);
    void pos_Y456Changed(double);
    void pos_R456Changed(double);
    void pos_X457Changed(double);
    void pos_Y457Changed(double);
    void pos_R457Changed(double);
    void pos_X458Changed(double);
    void pos_Y458Changed(double);
    void pos_R458Changed(double);
    void pos_X459Changed(double);
    void pos_Y459Changed(double);
    void pos_R459Changed(double);
    void pos_X460Changed(double);
    void pos_Y460Changed(double);
    void pos_R460Changed(double);
    void pos_X461Changed(double);
    void pos_Y461Changed(double);
    void pos_R461Changed(double);
    void pos_X462Changed(double);
    void pos_Y462Changed(double);
    void pos_R462Changed(double);
    void pos_X463Changed(double);
    void pos_Y463Changed(double);
    void pos_R463Changed(double);
    void pos_X464Changed(double);
    void pos_Y464Changed(double);
    void pos_R464Changed(double);
    void pos_X465Changed(double);
    void pos_Y465Changed(double);
    void pos_R465Changed(double);
    void pos_X466Changed(double);
    void pos_Y466Changed(double);
    void pos_R466Changed(double);
    void pos_X467Changed(double);
    void pos_Y467Changed(double);
    void pos_R467Changed(double);
    void pos_X468Changed(double);
    void pos_Y468Changed(double);
    void pos_R468Changed(double);
    void pos_X469Changed(double);
    void pos_Y469Changed(double);
    void pos_R469Changed(double);
    void pos_X470Changed(double);
    void pos_Y470Changed(double);
    void pos_R470Changed(double);
    void pos_X471Changed(double);
    void pos_Y471Changed(double);
    void pos_R471Changed(double);
    void pos_X472Changed(double);
    void pos_Y472Changed(double);
    void pos_R472Changed(double);
    void pos_X473Changed(double);
    void pos_Y473Changed(double);
    void pos_R473Changed(double);
    void pos_X474Changed(double);
    void pos_Y474Changed(double);
    void pos_R474Changed(double);
    void pos_X475Changed(double);
    void pos_Y475Changed(double);
    void pos_R475Changed(double);
    void pos_X476Changed(double);
    void pos_Y476Changed(double);
    void pos_R476Changed(double);
    void pos_X477Changed(double);
    void pos_Y477Changed(double);
    void pos_R477Changed(double);
    void pos_X478Changed(double);
    void pos_Y478Changed(double);
    void pos_R478Changed(double);
    void pos_X479Changed(double);
    void pos_Y479Changed(double);
    void pos_R479Changed(double);
    void pos_X480Changed(double);
    void pos_Y480Changed(double);
    void pos_R480Changed(double);
    void pos_X481Changed(double);
    void pos_Y481Changed(double);
    void pos_R481Changed(double);
    void pos_X482Changed(double);
    void pos_Y482Changed(double);
    void pos_R482Changed(double);
    void pos_X483Changed(double);
    void pos_Y483Changed(double);
    void pos_R483Changed(double);
    void pos_X484Changed(double);
    void pos_Y484Changed(double);
    void pos_R484Changed(double);
    void pos_X485Changed(double);
    void pos_Y485Changed(double);
    void pos_R485Changed(double);
    void pos_X486Changed(double);
    void pos_Y486Changed(double);
    void pos_R486Changed(double);
    void pos_X487Changed(double);
    void pos_Y487Changed(double);
    void pos_R487Changed(double);
    void pos_X488Changed(double);
    void pos_Y488Changed(double);
    void pos_R488Changed(double);
    void pos_X489Changed(double);
    void pos_Y489Changed(double);
    void pos_R489Changed(double);
    void pos_X490Changed(double);
    void pos_Y490Changed(double);
    void pos_R490Changed(double);
    void pos_X491Changed(double);
    void pos_Y491Changed(double);
    void pos_R491Changed(double);
    void pos_X492Changed(double);
    void pos_Y492Changed(double);
    void pos_R492Changed(double);
    void pos_X493Changed(double);
    void pos_Y493Changed(double);
    void pos_R493Changed(double);
    void pos_X494Changed(double);
    void pos_Y494Changed(double);
    void pos_R494Changed(double);
    void pos_X495Changed(double);
    void pos_Y495Changed(double);
    void pos_R495Changed(double);
    void pos_X496Changed(double);
    void pos_Y496Changed(double);
    void pos_R496Changed(double);
    void pos_X497Changed(double);
    void pos_Y497Changed(double);
    void pos_R497Changed(double);
    void pos_X498Changed(double);
    void pos_Y498Changed(double);
    void pos_R498Changed(double);
    void pos_X499Changed(double);
    void pos_Y499Changed(double);
    void pos_R499Changed(double);
    void pos_X500Changed(double);
    void pos_Y500Changed(double);
    void pos_R500Changed(double);
    void pos_X501Changed(double);
    void pos_Y501Changed(double);
    void pos_R501Changed(double);
    void pos_X502Changed(double);
    void pos_Y502Changed(double);
    void pos_R502Changed(double);
    void pos_X503Changed(double);
    void pos_Y503Changed(double);
    void pos_R503Changed(double);
    void pos_X504Changed(double);
    void pos_Y504Changed(double);
    void pos_R504Changed(double);
    void pos_X505Changed(double);
    void pos_Y505Changed(double);
    void pos_R505Changed(double);
    void pos_X506Changed(double);
    void pos_Y506Changed(double);
    void pos_R506Changed(double);
    void pos_X507Changed(double);
    void pos_Y507Changed(double);
    void pos_R507Changed(double);
    void pos_X508Changed(double);
    void pos_Y508Changed(double);
    void pos_R508Changed(double);
    void pos_X509Changed(double);
    void pos_Y509Changed(double);
    void pos_R509Changed(double);
    void pos_X510Changed(double);
    void pos_Y510Changed(double);
    void pos_R510Changed(double);
    void pos_X511Changed(double);
    void pos_Y511Changed(double);
    void pos_R511Changed(double);
    void pos_X512Changed(double);
    void pos_Y512Changed(double);
    void pos_R512Changed(double);
    void pos_X513Changed(double);
    void pos_Y513Changed(double);
    void pos_R513Changed(double);
    void pos_X514Changed(double);
    void pos_Y514Changed(double);
    void pos_R514Changed(double);
    void pos_X515Changed(double);
    void pos_Y515Changed(double);
    void pos_R515Changed(double);
    void pos_X516Changed(double);
    void pos_Y516Changed(double);
    void pos_R516Changed(double);
    void pos_X517Changed(double);
    void pos_Y517Changed(double);
    void pos_R517Changed(double);
    void pos_X518Changed(double);
    void pos_Y518Changed(double);
    void pos_R518Changed(double);
    void pos_X519Changed(double);
    void pos_Y519Changed(double);
    void pos_R519Changed(double);
    void pos_X520Changed(double);
    void pos_Y520Changed(double);
    void pos_R520Changed(double);
    void pos_X521Changed(double);
    void pos_Y521Changed(double);
    void pos_R521Changed(double);
    void pos_X522Changed(double);
    void pos_Y522Changed(double);
    void pos_R522Changed(double);
    void pos_X523Changed(double);
    void pos_Y523Changed(double);
    void pos_R523Changed(double);
    void pos_X524Changed(double);
    void pos_Y524Changed(double);
    void pos_R524Changed(double);
    void pos_X525Changed(double);
    void pos_Y525Changed(double);
    void pos_R525Changed(double);
    void pos_X526Changed(double);
    void pos_Y526Changed(double);
    void pos_R526Changed(double);
    void pos_X527Changed(double);
    void pos_Y527Changed(double);
    void pos_R527Changed(double);
    void pos_X528Changed(double);
    void pos_Y528Changed(double);
    void pos_R528Changed(double);
    void pos_X529Changed(double);
    void pos_Y529Changed(double);
    void pos_R529Changed(double);
    void pos_X530Changed(double);
    void pos_Y530Changed(double);
    void pos_R530Changed(double);
    void pos_X531Changed(double);
    void pos_Y531Changed(double);
    void pos_R531Changed(double);
    void pos_X532Changed(double);
    void pos_Y532Changed(double);
    void pos_R532Changed(double);
    void pos_X533Changed(double);
    void pos_Y533Changed(double);
    void pos_R533Changed(double);
    void pos_X534Changed(double);
    void pos_Y534Changed(double);
    void pos_R534Changed(double);
    void pos_X535Changed(double);
    void pos_Y535Changed(double);
    void pos_R535Changed(double);
    void pos_X536Changed(double);
    void pos_Y536Changed(double);
    void pos_R536Changed(double);
    void pos_X537Changed(double);
    void pos_Y537Changed(double);
    void pos_R537Changed(double);
    void pos_X538Changed(double);
    void pos_Y538Changed(double);
    void pos_R538Changed(double);
    void pos_X539Changed(double);
    void pos_Y539Changed(double);
    void pos_R539Changed(double);
    void pos_X540Changed(double);
    void pos_Y540Changed(double);
    void pos_R540Changed(double);
    void pos_X541Changed(double);
    void pos_Y541Changed(double);
    void pos_R541Changed(double);
    void pos_X542Changed(double);
    void pos_Y542Changed(double);
    void pos_R542Changed(double);
    void pos_X543Changed(double);
    void pos_Y543Changed(double);
    void pos_R543Changed(double);
    void pos_X544Changed(double);
    void pos_Y544Changed(double);
    void pos_R544Changed(double);
    void pos_X545Changed(double);
    void pos_Y545Changed(double);
    void pos_R545Changed(double);
    void pos_X546Changed(double);
    void pos_Y546Changed(double);
    void pos_R546Changed(double);
    void pos_X547Changed(double);
    void pos_Y547Changed(double);
    void pos_R547Changed(double);
    void pos_X548Changed(double);
    void pos_Y548Changed(double);
    void pos_R548Changed(double);
    void pos_X549Changed(double);
    void pos_Y549Changed(double);
    void pos_R549Changed(double);
    void pos_X550Changed(double);
    void pos_Y550Changed(double);
    void pos_R550Changed(double);
    void pos_X551Changed(double);
    void pos_Y551Changed(double);
    void pos_R551Changed(double);
    void pos_X552Changed(double);
    void pos_Y552Changed(double);
    void pos_R552Changed(double);
    void pos_X553Changed(double);
    void pos_Y553Changed(double);
    void pos_R553Changed(double);
    void pos_X554Changed(double);
    void pos_Y554Changed(double);
    void pos_R554Changed(double);
    void pos_X555Changed(double);
    void pos_Y555Changed(double);
    void pos_R555Changed(double);
    void pos_X556Changed(double);
    void pos_Y556Changed(double);
    void pos_R556Changed(double);
    void pos_X557Changed(double);
    void pos_Y557Changed(double);
    void pos_R557Changed(double);
    void pos_X558Changed(double);
    void pos_Y558Changed(double);
    void pos_R558Changed(double);
    void pos_X559Changed(double);
    void pos_Y559Changed(double);
    void pos_R559Changed(double);
    void pos_X560Changed(double);
    void pos_Y560Changed(double);
    void pos_R560Changed(double);
    void pos_X561Changed(double);
    void pos_Y561Changed(double);
    void pos_R561Changed(double);
    void pos_X562Changed(double);
    void pos_Y562Changed(double);
    void pos_R562Changed(double);
    void pos_X563Changed(double);
    void pos_Y563Changed(double);
    void pos_R563Changed(double);
    void pos_X564Changed(double);
    void pos_Y564Changed(double);
    void pos_R564Changed(double);
    void pos_X565Changed(double);
    void pos_Y565Changed(double);
    void pos_R565Changed(double);
    void pos_X566Changed(double);
    void pos_Y566Changed(double);
    void pos_R566Changed(double);
    void pos_X567Changed(double);
    void pos_Y567Changed(double);
    void pos_R567Changed(double);
    void pos_X568Changed(double);
    void pos_Y568Changed(double);
    void pos_R568Changed(double);
    void pos_X569Changed(double);
    void pos_Y569Changed(double);
    void pos_R569Changed(double);
    void pos_X570Changed(double);
    void pos_Y570Changed(double);
    void pos_R570Changed(double);
    void pos_X571Changed(double);
    void pos_Y571Changed(double);
    void pos_R571Changed(double);
    void pos_X572Changed(double);
    void pos_Y572Changed(double);
    void pos_R572Changed(double);
    void pos_X573Changed(double);
    void pos_Y573Changed(double);
    void pos_R573Changed(double);
    void pos_X574Changed(double);
    void pos_Y574Changed(double);
    void pos_R574Changed(double);
    void pos_X575Changed(double);
    void pos_Y575Changed(double);
    void pos_R575Changed(double);
    void pos_X576Changed(double);
    void pos_Y576Changed(double);
    void pos_R576Changed(double);
    void pos_X577Changed(double);
    void pos_Y577Changed(double);
    void pos_R577Changed(double);
    void pos_X578Changed(double);
    void pos_Y578Changed(double);
    void pos_R578Changed(double);
    void pos_X579Changed(double);
    void pos_Y579Changed(double);
    void pos_R579Changed(double);
    void pos_X580Changed(double);
    void pos_Y580Changed(double);
    void pos_R580Changed(double);
    void pos_X581Changed(double);
    void pos_Y581Changed(double);
    void pos_R581Changed(double);
    void pos_X582Changed(double);
    void pos_Y582Changed(double);
    void pos_R582Changed(double);
    void pos_X583Changed(double);
    void pos_Y583Changed(double);
    void pos_R583Changed(double);
    void pos_X584Changed(double);
    void pos_Y584Changed(double);
    void pos_R584Changed(double);
    void pos_X585Changed(double);
    void pos_Y585Changed(double);
    void pos_R585Changed(double);
    void pos_X586Changed(double);
    void pos_Y586Changed(double);
    void pos_R586Changed(double);
    void pos_X587Changed(double);
    void pos_Y587Changed(double);
    void pos_R587Changed(double);
    void pos_X588Changed(double);
    void pos_Y588Changed(double);
    void pos_R588Changed(double);
    void pos_X589Changed(double);
    void pos_Y589Changed(double);
    void pos_R589Changed(double);
    void pos_X590Changed(double);
    void pos_Y590Changed(double);
    void pos_R590Changed(double);
    void pos_X591Changed(double);
    void pos_Y591Changed(double);
    void pos_R591Changed(double);
    void pos_X592Changed(double);
    void pos_Y592Changed(double);
    void pos_R592Changed(double);
    void pos_X593Changed(double);
    void pos_Y593Changed(double);
    void pos_R593Changed(double);
    void pos_X594Changed(double);
    void pos_Y594Changed(double);
    void pos_R594Changed(double);
    void pos_X595Changed(double);
    void pos_Y595Changed(double);
    void pos_R595Changed(double);
    void pos_X596Changed(double);
    void pos_Y596Changed(double);
    void pos_R596Changed(double);
    void pos_X597Changed(double);
    void pos_Y597Changed(double);
    void pos_R597Changed(double);
    void pos_X598Changed(double);
    void pos_Y598Changed(double);
    void pos_R598Changed(double);
    void pos_X599Changed(double);
    void pos_Y599Changed(double);
    void pos_R599Changed(double);
    void pos_X600Changed(double);
    void pos_Y600Changed(double);
    void pos_R600Changed(double);
    void pos_X601Changed(double);
    void pos_Y601Changed(double);
    void pos_R601Changed(double);
    void pos_X602Changed(double);
    void pos_Y602Changed(double);
    void pos_R602Changed(double);
    void pos_X603Changed(double);
    void pos_Y603Changed(double);
    void pos_R603Changed(double);
    void pos_X604Changed(double);
    void pos_Y604Changed(double);
    void pos_R604Changed(double);
    void pos_X605Changed(double);
    void pos_Y605Changed(double);
    void pos_R605Changed(double);
    void pos_X606Changed(double);
    void pos_Y606Changed(double);
    void pos_R606Changed(double);
    void pos_X607Changed(double);
    void pos_Y607Changed(double);
    void pos_R607Changed(double);
    void pos_X608Changed(double);
    void pos_Y608Changed(double);
    void pos_R608Changed(double);
    void pos_X609Changed(double);
    void pos_Y609Changed(double);
    void pos_R609Changed(double);
    void pos_X610Changed(double);
    void pos_Y610Changed(double);
    void pos_R610Changed(double);
    void pos_X611Changed(double);
    void pos_Y611Changed(double);
    void pos_R611Changed(double);
    void pos_X612Changed(double);
    void pos_Y612Changed(double);
    void pos_R612Changed(double);
    void pos_X613Changed(double);
    void pos_Y613Changed(double);
    void pos_R613Changed(double);
    void pos_X614Changed(double);
    void pos_Y614Changed(double);
    void pos_R614Changed(double);
    void pos_X615Changed(double);
    void pos_Y615Changed(double);
    void pos_R615Changed(double);
    void pos_X616Changed(double);
    void pos_Y616Changed(double);
    void pos_R616Changed(double);
    void pos_X617Changed(double);
    void pos_Y617Changed(double);
    void pos_R617Changed(double);
    void pos_X618Changed(double);
    void pos_Y618Changed(double);
    void pos_R618Changed(double);
    void pos_X619Changed(double);
    void pos_Y619Changed(double);
    void pos_R619Changed(double);
    void pos_X620Changed(double);
    void pos_Y620Changed(double);
    void pos_R620Changed(double);
    void pos_X621Changed(double);
    void pos_Y621Changed(double);
    void pos_R621Changed(double);
    void pos_X622Changed(double);
    void pos_Y622Changed(double);
    void pos_R622Changed(double);
    void pos_X623Changed(double);
    void pos_Y623Changed(double);
    void pos_R623Changed(double);
    void pos_X624Changed(double);
    void pos_Y624Changed(double);
    void pos_R624Changed(double);
    void pos_X625Changed(double);
    void pos_Y625Changed(double);
    void pos_R625Changed(double);
    void pos_X626Changed(double);
    void pos_Y626Changed(double);
    void pos_R626Changed(double);
    void pos_X627Changed(double);
    void pos_Y627Changed(double);
    void pos_R627Changed(double);
    void pos_X628Changed(double);
    void pos_Y628Changed(double);
    void pos_R628Changed(double);
    void pos_X629Changed(double);
    void pos_Y629Changed(double);
    void pos_R629Changed(double);
    void pos_X630Changed(double);
    void pos_Y630Changed(double);
    void pos_R630Changed(double);
    void pos_X631Changed(double);
    void pos_Y631Changed(double);
    void pos_R631Changed(double);
    void pos_X632Changed(double);
    void pos_Y632Changed(double);
    void pos_R632Changed(double);
    void pos_X633Changed(double);
    void pos_Y633Changed(double);
    void pos_R633Changed(double);
    void pos_X634Changed(double);
    void pos_Y634Changed(double);
    void pos_R634Changed(double);
    void pos_X635Changed(double);
    void pos_Y635Changed(double);
    void pos_R635Changed(double);
    void pos_X636Changed(double);
    void pos_Y636Changed(double);
    void pos_R636Changed(double);
    void pos_X637Changed(double);
    void pos_Y637Changed(double);
    void pos_R637Changed(double);
    void pos_X638Changed(double);
    void pos_Y638Changed(double);
    void pos_R638Changed(double);
    void pos_X639Changed(double);
    void pos_Y639Changed(double);
    void pos_R639Changed(double);
    void pos_X640Changed(double);
    void pos_Y640Changed(double);
    void pos_R640Changed(double);
    void pos_X641Changed(double);
    void pos_Y641Changed(double);
    void pos_R641Changed(double);
    void pos_X642Changed(double);
    void pos_Y642Changed(double);
    void pos_R642Changed(double);
    void pos_X643Changed(double);
    void pos_Y643Changed(double);
    void pos_R643Changed(double);
    void pos_X644Changed(double);
    void pos_Y644Changed(double);
    void pos_R644Changed(double);
    void pos_X645Changed(double);
    void pos_Y645Changed(double);
    void pos_R645Changed(double);
    void pos_X646Changed(double);
    void pos_Y646Changed(double);
    void pos_R646Changed(double);
    void pos_X647Changed(double);
    void pos_Y647Changed(double);
    void pos_R647Changed(double);
    void pos_X648Changed(double);
    void pos_Y648Changed(double);
    void pos_R648Changed(double);
    void pos_X649Changed(double);
    void pos_Y649Changed(double);
    void pos_R649Changed(double);
    void pos_X650Changed(double);
    void pos_Y650Changed(double);
    void pos_R650Changed(double);
    void pos_X651Changed(double);
    void pos_Y651Changed(double);
    void pos_R651Changed(double);
    void pos_X652Changed(double);
    void pos_Y652Changed(double);
    void pos_R652Changed(double);
    void pos_X653Changed(double);
    void pos_Y653Changed(double);
    void pos_R653Changed(double);
    void pos_X654Changed(double);
    void pos_Y654Changed(double);
    void pos_R654Changed(double);
    void pos_X655Changed(double);
    void pos_Y655Changed(double);
    void pos_R655Changed(double);
    void pos_X656Changed(double);
    void pos_Y656Changed(double);
    void pos_R656Changed(double);
    void pos_X657Changed(double);
    void pos_Y657Changed(double);
    void pos_R657Changed(double);
    void pos_X658Changed(double);
    void pos_Y658Changed(double);
    void pos_R658Changed(double);
    void pos_X659Changed(double);
    void pos_Y659Changed(double);
    void pos_R659Changed(double);
    void pos_X660Changed(double);
    void pos_Y660Changed(double);
    void pos_R660Changed(double);
    void pos_X661Changed(double);
    void pos_Y661Changed(double);
    void pos_R661Changed(double);
    void pos_X662Changed(double);
    void pos_Y662Changed(double);
    void pos_R662Changed(double);
    void pos_X663Changed(double);
    void pos_Y663Changed(double);
    void pos_R663Changed(double);
    void pos_X664Changed(double);
    void pos_Y664Changed(double);
    void pos_R664Changed(double);
    void pos_X665Changed(double);
    void pos_Y665Changed(double);
    void pos_R665Changed(double);
    void pos_X666Changed(double);
    void pos_Y666Changed(double);
    void pos_R666Changed(double);
    void pos_X667Changed(double);
    void pos_Y667Changed(double);
    void pos_R667Changed(double);
    void pos_X668Changed(double);
    void pos_Y668Changed(double);
    void pos_R668Changed(double);
    void pos_X669Changed(double);
    void pos_Y669Changed(double);
    void pos_R669Changed(double);
    void pos_X670Changed(double);
    void pos_Y670Changed(double);
    void pos_R670Changed(double);
    void pos_X671Changed(double);
    void pos_Y671Changed(double);
    void pos_R671Changed(double);
    void pos_X672Changed(double);
    void pos_Y672Changed(double);
    void pos_R672Changed(double);
    void pos_X673Changed(double);
    void pos_Y673Changed(double);
    void pos_R673Changed(double);
    void pos_X674Changed(double);
    void pos_Y674Changed(double);
    void pos_R674Changed(double);
    void pos_X675Changed(double);
    void pos_Y675Changed(double);
    void pos_R675Changed(double);
    void pos_X676Changed(double);
    void pos_Y676Changed(double);
    void pos_R676Changed(double);
    void pos_X677Changed(double);
    void pos_Y677Changed(double);
    void pos_R677Changed(double);
    void pos_X678Changed(double);
    void pos_Y678Changed(double);
    void pos_R678Changed(double);
    void pos_X679Changed(double);
    void pos_Y679Changed(double);
    void pos_R679Changed(double);
    void pos_X680Changed(double);
    void pos_Y680Changed(double);
    void pos_R680Changed(double);
    void pos_X681Changed(double);
    void pos_Y681Changed(double);
    void pos_R681Changed(double);
    void pos_X682Changed(double);
    void pos_Y682Changed(double);
    void pos_R682Changed(double);
    void pos_X683Changed(double);
    void pos_Y683Changed(double);
    void pos_R683Changed(double);
    void pos_X684Changed(double);
    void pos_Y684Changed(double);
    void pos_R684Changed(double);
    void pos_X685Changed(double);
    void pos_Y685Changed(double);
    void pos_R685Changed(double);
    void pos_X686Changed(double);
    void pos_Y686Changed(double);
    void pos_R686Changed(double);
    void pos_X687Changed(double);
    void pos_Y687Changed(double);
    void pos_R687Changed(double);
    void pos_X688Changed(double);
    void pos_Y688Changed(double);
    void pos_R688Changed(double);
    void pos_X689Changed(double);
    void pos_Y689Changed(double);
    void pos_R689Changed(double);
    void pos_X690Changed(double);
    void pos_Y690Changed(double);
    void pos_R690Changed(double);
    void pos_X691Changed(double);
    void pos_Y691Changed(double);
    void pos_R691Changed(double);
    void pos_X692Changed(double);
    void pos_Y692Changed(double);
    void pos_R692Changed(double);
    void pos_X693Changed(double);
    void pos_Y693Changed(double);
    void pos_R693Changed(double);
    void pos_X694Changed(double);
    void pos_Y694Changed(double);
    void pos_R694Changed(double);
    void pos_X695Changed(double);
    void pos_Y695Changed(double);
    void pos_R695Changed(double);
    void pos_X696Changed(double);
    void pos_Y696Changed(double);
    void pos_R696Changed(double);
    void pos_X697Changed(double);
    void pos_Y697Changed(double);
    void pos_R697Changed(double);
    void pos_X698Changed(double);
    void pos_Y698Changed(double);
    void pos_R698Changed(double);
    void pos_X699Changed(double);
    void pos_Y699Changed(double);
    void pos_R699Changed(double);
    void pos_X700Changed(double);
    void pos_Y700Changed(double);
    void pos_R700Changed(double);
    void pos_X701Changed(double);
    void pos_Y701Changed(double);
    void pos_R701Changed(double);
    void pos_X702Changed(double);
    void pos_Y702Changed(double);
    void pos_R702Changed(double);
    void pos_X703Changed(double);
    void pos_Y703Changed(double);
    void pos_R703Changed(double);
    void pos_X704Changed(double);
    void pos_Y704Changed(double);
    void pos_R704Changed(double);
    void pos_X705Changed(double);
    void pos_Y705Changed(double);
    void pos_R705Changed(double);
    void pos_X706Changed(double);
    void pos_Y706Changed(double);
    void pos_R706Changed(double);
    void pos_X707Changed(double);
    void pos_Y707Changed(double);
    void pos_R707Changed(double);
    void pos_X708Changed(double);
    void pos_Y708Changed(double);
    void pos_R708Changed(double);
    void pos_X709Changed(double);
    void pos_Y709Changed(double);
    void pos_R709Changed(double);
    void pos_X710Changed(double);
    void pos_Y710Changed(double);
    void pos_R710Changed(double);
    void pos_X711Changed(double);
    void pos_Y711Changed(double);
    void pos_R711Changed(double);
    void pos_X712Changed(double);
    void pos_Y712Changed(double);
    void pos_R712Changed(double);
    void pos_X713Changed(double);
    void pos_Y713Changed(double);
    void pos_R713Changed(double);
    void pos_X714Changed(double);
    void pos_Y714Changed(double);
    void pos_R714Changed(double);
    void pos_X715Changed(double);
    void pos_Y715Changed(double);
    void pos_R715Changed(double);
    void pos_X716Changed(double);
    void pos_Y716Changed(double);
    void pos_R716Changed(double);
    void pos_X717Changed(double);
    void pos_Y717Changed(double);
    void pos_R717Changed(double);
    void pos_X718Changed(double);
    void pos_Y718Changed(double);
    void pos_R718Changed(double);
    void pos_X719Changed(double);
    void pos_Y719Changed(double);
    void pos_R719Changed(double);
    void pos_X720Changed(double);
    void pos_Y720Changed(double);
    void pos_R720Changed(double);
    void pos_X721Changed(double);
    void pos_Y721Changed(double);
    void pos_R721Changed(double);
    void pos_X722Changed(double);
    void pos_Y722Changed(double);
    void pos_R722Changed(double);
    void pos_X723Changed(double);
    void pos_Y723Changed(double);
    void pos_R723Changed(double);
    void pos_X724Changed(double);
    void pos_Y724Changed(double);
    void pos_R724Changed(double);
    void pos_X725Changed(double);
    void pos_Y725Changed(double);
    void pos_R725Changed(double);
    void pos_X726Changed(double);
    void pos_Y726Changed(double);
    void pos_R726Changed(double);
    void pos_X727Changed(double);
    void pos_Y727Changed(double);
    void pos_R727Changed(double);
    void pos_X728Changed(double);
    void pos_Y728Changed(double);
    void pos_R728Changed(double);
    void pos_X729Changed(double);
    void pos_Y729Changed(double);
    void pos_R729Changed(double);
    void pos_X730Changed(double);
    void pos_Y730Changed(double);
    void pos_R730Changed(double);
    void pos_X731Changed(double);
    void pos_Y731Changed(double);
    void pos_R731Changed(double);
    void pos_X732Changed(double);
    void pos_Y732Changed(double);
    void pos_R732Changed(double);
    void pos_X733Changed(double);
    void pos_Y733Changed(double);
    void pos_R733Changed(double);
    void pos_X734Changed(double);
    void pos_Y734Changed(double);
    void pos_R734Changed(double);
    void pos_X735Changed(double);
    void pos_Y735Changed(double);
    void pos_R735Changed(double);
    void pos_X736Changed(double);
    void pos_Y736Changed(double);
    void pos_R736Changed(double);
    void pos_X737Changed(double);
    void pos_Y737Changed(double);
    void pos_R737Changed(double);
    void pos_X738Changed(double);
    void pos_Y738Changed(double);
    void pos_R738Changed(double);
    void pos_X739Changed(double);
    void pos_Y739Changed(double);
    void pos_R739Changed(double);
    void pos_X740Changed(double);
    void pos_Y740Changed(double);
    void pos_R740Changed(double);
    void pos_X741Changed(double);
    void pos_Y741Changed(double);
    void pos_R741Changed(double);
    void pos_X742Changed(double);
    void pos_Y742Changed(double);
    void pos_R742Changed(double);
    void pos_X743Changed(double);
    void pos_Y743Changed(double);
    void pos_R743Changed(double);
    void pos_X744Changed(double);
    void pos_Y744Changed(double);
    void pos_R744Changed(double);
    void pos_X745Changed(double);
    void pos_Y745Changed(double);
    void pos_R745Changed(double);
    void pos_X746Changed(double);
    void pos_Y746Changed(double);
    void pos_R746Changed(double);
    void pos_X747Changed(double);
    void pos_Y747Changed(double);
    void pos_R747Changed(double);
    void pos_X748Changed(double);
    void pos_Y748Changed(double);
    void pos_R748Changed(double);
    void pos_X749Changed(double);
    void pos_Y749Changed(double);
    void pos_R749Changed(double);
    void pos_X750Changed(double);
    void pos_Y750Changed(double);
    void pos_R750Changed(double);
    void pos_X751Changed(double);
    void pos_Y751Changed(double);
    void pos_R751Changed(double);
    void pos_X752Changed(double);
    void pos_Y752Changed(double);
    void pos_R752Changed(double);
    void pos_X753Changed(double);
    void pos_Y753Changed(double);
    void pos_R753Changed(double);
    void pos_X754Changed(double);
    void pos_Y754Changed(double);
    void pos_R754Changed(double);
    void pos_X755Changed(double);
    void pos_Y755Changed(double);
    void pos_R755Changed(double);
    void pos_X756Changed(double);
    void pos_Y756Changed(double);
    void pos_R756Changed(double);
    void pos_X757Changed(double);
    void pos_Y757Changed(double);
    void pos_R757Changed(double);
    void pos_X758Changed(double);
    void pos_Y758Changed(double);
    void pos_R758Changed(double);
    void pos_X759Changed(double);
    void pos_Y759Changed(double);
    void pos_R759Changed(double);
    void pos_X760Changed(double);
    void pos_Y760Changed(double);
    void pos_R760Changed(double);
    void pos_X761Changed(double);
    void pos_Y761Changed(double);
    void pos_R761Changed(double);
    void pos_X762Changed(double);
    void pos_Y762Changed(double);
    void pos_R762Changed(double);
    void pos_X763Changed(double);
    void pos_Y763Changed(double);
    void pos_R763Changed(double);
    void pos_X764Changed(double);
    void pos_Y764Changed(double);
    void pos_R764Changed(double);
    void pos_X765Changed(double);
    void pos_Y765Changed(double);
    void pos_R765Changed(double);
    void pos_X766Changed(double);
    void pos_Y766Changed(double);
    void pos_R766Changed(double);
    void pos_X767Changed(double);
    void pos_Y767Changed(double);
    void pos_R767Changed(double);
    void pos_X768Changed(double);
    void pos_Y768Changed(double);
    void pos_R768Changed(double);
    void pos_X769Changed(double);
    void pos_Y769Changed(double);
    void pos_R769Changed(double);
    void pos_X770Changed(double);
    void pos_Y770Changed(double);
    void pos_R770Changed(double);
    void pos_X771Changed(double);
    void pos_Y771Changed(double);
    void pos_R771Changed(double);
    void pos_X772Changed(double);
    void pos_Y772Changed(double);
    void pos_R772Changed(double);
    void pos_X773Changed(double);
    void pos_Y773Changed(double);
    void pos_R773Changed(double);
    void pos_X774Changed(double);
    void pos_Y774Changed(double);
    void pos_R774Changed(double);
    void pos_X775Changed(double);
    void pos_Y775Changed(double);
    void pos_R775Changed(double);
    void pos_X776Changed(double);
    void pos_Y776Changed(double);
    void pos_R776Changed(double);
    void pos_X777Changed(double);
    void pos_Y777Changed(double);
    void pos_R777Changed(double);
    void pos_X778Changed(double);
    void pos_Y778Changed(double);
    void pos_R778Changed(double);
    void pos_X779Changed(double);
    void pos_Y779Changed(double);
    void pos_R779Changed(double);
    void pos_X780Changed(double);
    void pos_Y780Changed(double);
    void pos_R780Changed(double);
    void pos_X781Changed(double);
    void pos_Y781Changed(double);
    void pos_R781Changed(double);
    void pos_X782Changed(double);
    void pos_Y782Changed(double);
    void pos_R782Changed(double);
    void pos_X783Changed(double);
    void pos_Y783Changed(double);
    void pos_R783Changed(double);
    void pos_X784Changed(double);
    void pos_Y784Changed(double);
    void pos_R784Changed(double);
    void pos_X785Changed(double);
    void pos_Y785Changed(double);
    void pos_R785Changed(double);
    void pos_X786Changed(double);
    void pos_Y786Changed(double);
    void pos_R786Changed(double);
    void pos_X787Changed(double);
    void pos_Y787Changed(double);
    void pos_R787Changed(double);
    void pos_X788Changed(double);
    void pos_Y788Changed(double);
    void pos_R788Changed(double);
    void pos_X789Changed(double);
    void pos_Y789Changed(double);
    void pos_R789Changed(double);
    void pos_X790Changed(double);
    void pos_Y790Changed(double);
    void pos_R790Changed(double);
    void pos_X791Changed(double);
    void pos_Y791Changed(double);
    void pos_R791Changed(double);
    void pos_X792Changed(double);
    void pos_Y792Changed(double);
    void pos_R792Changed(double);
    void pos_X793Changed(double);
    void pos_Y793Changed(double);
    void pos_R793Changed(double);
    void pos_X794Changed(double);
    void pos_Y794Changed(double);
    void pos_R794Changed(double);
    void pos_X795Changed(double);
    void pos_Y795Changed(double);
    void pos_R795Changed(double);
    void pos_X796Changed(double);
    void pos_Y796Changed(double);
    void pos_R796Changed(double);
    void pos_X797Changed(double);
    void pos_Y797Changed(double);
    void pos_R797Changed(double);
    void pos_X798Changed(double);
    void pos_Y798Changed(double);
    void pos_R798Changed(double);
    void pos_X799Changed(double);
    void pos_Y799Changed(double);
    void pos_R799Changed(double);
    void pos_X800Changed(double);
    void pos_Y800Changed(double);
    void pos_R800Changed(double);
    void pos_X801Changed(double);
    void pos_Y801Changed(double);
    void pos_R801Changed(double);
    void pos_X802Changed(double);
    void pos_Y802Changed(double);
    void pos_R802Changed(double);
    void pos_X803Changed(double);
    void pos_Y803Changed(double);
    void pos_R803Changed(double);
    void pos_X804Changed(double);
    void pos_Y804Changed(double);
    void pos_R804Changed(double);
    void pos_X805Changed(double);
    void pos_Y805Changed(double);
    void pos_R805Changed(double);
    void pos_X806Changed(double);
    void pos_Y806Changed(double);
    void pos_R806Changed(double);
    void pos_X807Changed(double);
    void pos_Y807Changed(double);
    void pos_R807Changed(double);
    void pos_X808Changed(double);
    void pos_Y808Changed(double);
    void pos_R808Changed(double);
    void pos_X809Changed(double);
    void pos_Y809Changed(double);
    void pos_R809Changed(double);
    void pos_X810Changed(double);
    void pos_Y810Changed(double);
    void pos_R810Changed(double);
    void pos_X811Changed(double);
    void pos_Y811Changed(double);
    void pos_R811Changed(double);
    void pos_X812Changed(double);
    void pos_Y812Changed(double);
    void pos_R812Changed(double);
    void pos_X813Changed(double);
    void pos_Y813Changed(double);
    void pos_R813Changed(double);
    void pos_X814Changed(double);
    void pos_Y814Changed(double);
    void pos_R814Changed(double);
    void pos_X815Changed(double);
    void pos_Y815Changed(double);
    void pos_R815Changed(double);
    void pos_X816Changed(double);
    void pos_Y816Changed(double);
    void pos_R816Changed(double);
    void pos_X817Changed(double);
    void pos_Y817Changed(double);
    void pos_R817Changed(double);
    void pos_X818Changed(double);
    void pos_Y818Changed(double);
    void pos_R818Changed(double);
    void pos_X819Changed(double);
    void pos_Y819Changed(double);
    void pos_R819Changed(double);
    void pos_X820Changed(double);
    void pos_Y820Changed(double);
    void pos_R820Changed(double);
    void pos_X821Changed(double);
    void pos_Y821Changed(double);
    void pos_R821Changed(double);
    void pos_X822Changed(double);
    void pos_Y822Changed(double);
    void pos_R822Changed(double);
    void pos_X823Changed(double);
    void pos_Y823Changed(double);
    void pos_R823Changed(double);
    void pos_X824Changed(double);
    void pos_Y824Changed(double);
    void pos_R824Changed(double);
    void pos_X825Changed(double);
    void pos_Y825Changed(double);
    void pos_R825Changed(double);
    void pos_X826Changed(double);
    void pos_Y826Changed(double);
    void pos_R826Changed(double);
    void pos_X827Changed(double);
    void pos_Y827Changed(double);
    void pos_R827Changed(double);
    void pos_X828Changed(double);
    void pos_Y828Changed(double);
    void pos_R828Changed(double);
    void pos_X829Changed(double);
    void pos_Y829Changed(double);
    void pos_R829Changed(double);
    void pos_X830Changed(double);
    void pos_Y830Changed(double);
    void pos_R830Changed(double);
    void pos_X831Changed(double);
    void pos_Y831Changed(double);
    void pos_R831Changed(double);
    void pos_X832Changed(double);
    void pos_Y832Changed(double);
    void pos_R832Changed(double);
    void pos_X833Changed(double);
    void pos_Y833Changed(double);
    void pos_R833Changed(double);
    void pos_X834Changed(double);
    void pos_Y834Changed(double);
    void pos_R834Changed(double);
    void pos_X835Changed(double);
    void pos_Y835Changed(double);
    void pos_R835Changed(double);
    void pos_X836Changed(double);
    void pos_Y836Changed(double);
    void pos_R836Changed(double);
    void pos_X837Changed(double);
    void pos_Y837Changed(double);
    void pos_R837Changed(double);
    void pos_X838Changed(double);
    void pos_Y838Changed(double);
    void pos_R838Changed(double);
    void pos_X839Changed(double);
    void pos_Y839Changed(double);
    void pos_R839Changed(double);
    void pos_X840Changed(double);
    void pos_Y840Changed(double);
    void pos_R840Changed(double);
    void pos_X841Changed(double);
    void pos_Y841Changed(double);
    void pos_R841Changed(double);
    void pos_X842Changed(double);
    void pos_Y842Changed(double);
    void pos_R842Changed(double);
    void pos_X843Changed(double);
    void pos_Y843Changed(double);
    void pos_R843Changed(double);
    void pos_X844Changed(double);
    void pos_Y844Changed(double);
    void pos_R844Changed(double);
    void pos_X845Changed(double);
    void pos_Y845Changed(double);
    void pos_R845Changed(double);
    void pos_X846Changed(double);
    void pos_Y846Changed(double);
    void pos_R846Changed(double);
    void pos_X847Changed(double);
    void pos_Y847Changed(double);
    void pos_R847Changed(double);
    void pos_X848Changed(double);
    void pos_Y848Changed(double);
    void pos_R848Changed(double);
    void pos_X849Changed(double);
    void pos_Y849Changed(double);
    void pos_R849Changed(double);
    void pos_X850Changed(double);
    void pos_Y850Changed(double);
    void pos_R850Changed(double);
    void pos_X851Changed(double);
    void pos_Y851Changed(double);
    void pos_R851Changed(double);
    void pos_X852Changed(double);
    void pos_Y852Changed(double);
    void pos_R852Changed(double);
    void pos_X853Changed(double);
    void pos_Y853Changed(double);
    void pos_R853Changed(double);
    void pos_X854Changed(double);
    void pos_Y854Changed(double);
    void pos_R854Changed(double);
    void pos_X855Changed(double);
    void pos_Y855Changed(double);
    void pos_R855Changed(double);
    void pos_X856Changed(double);
    void pos_Y856Changed(double);
    void pos_R856Changed(double);
    void pos_X857Changed(double);
    void pos_Y857Changed(double);
    void pos_R857Changed(double);
    void pos_X858Changed(double);
    void pos_Y858Changed(double);
    void pos_R858Changed(double);
    void pos_X859Changed(double);
    void pos_Y859Changed(double);
    void pos_R859Changed(double);
    void pos_X860Changed(double);
    void pos_Y860Changed(double);
    void pos_R860Changed(double);
    void pos_X861Changed(double);
    void pos_Y861Changed(double);
    void pos_R861Changed(double);
    void pos_X862Changed(double);
    void pos_Y862Changed(double);
    void pos_R862Changed(double);
    void pos_X863Changed(double);
    void pos_Y863Changed(double);
    void pos_R863Changed(double);
    void pos_X864Changed(double);
    void pos_Y864Changed(double);
    void pos_R864Changed(double);
    void pos_X865Changed(double);
    void pos_Y865Changed(double);
    void pos_R865Changed(double);
    void pos_X866Changed(double);
    void pos_Y866Changed(double);
    void pos_R866Changed(double);
    void pos_X867Changed(double);
    void pos_Y867Changed(double);
    void pos_R867Changed(double);
    void pos_X868Changed(double);
    void pos_Y868Changed(double);
    void pos_R868Changed(double);
    void pos_X869Changed(double);
    void pos_Y869Changed(double);
    void pos_R869Changed(double);
    void pos_X870Changed(double);
    void pos_Y870Changed(double);
    void pos_R870Changed(double);
    void pos_X871Changed(double);
    void pos_Y871Changed(double);
    void pos_R871Changed(double);
    void pos_X872Changed(double);
    void pos_Y872Changed(double);
    void pos_R872Changed(double);
    void pos_X873Changed(double);
    void pos_Y873Changed(double);
    void pos_R873Changed(double);
    void pos_X874Changed(double);
    void pos_Y874Changed(double);
    void pos_R874Changed(double);
    void pos_X875Changed(double);
    void pos_Y875Changed(double);
    void pos_R875Changed(double);
    void pos_X876Changed(double);
    void pos_Y876Changed(double);
    void pos_R876Changed(double);
    void pos_X877Changed(double);
    void pos_Y877Changed(double);
    void pos_R877Changed(double);
    void pos_X878Changed(double);
    void pos_Y878Changed(double);
    void pos_R878Changed(double);
    void pos_X879Changed(double);
    void pos_Y879Changed(double);
    void pos_R879Changed(double);
    void pos_X880Changed(double);
    void pos_Y880Changed(double);
    void pos_R880Changed(double);
    void pos_X881Changed(double);
    void pos_Y881Changed(double);
    void pos_R881Changed(double);
    void pos_X882Changed(double);
    void pos_Y882Changed(double);
    void pos_R882Changed(double);
    void pos_X883Changed(double);
    void pos_Y883Changed(double);
    void pos_R883Changed(double);
    void pos_X884Changed(double);
    void pos_Y884Changed(double);
    void pos_R884Changed(double);
    void pos_X885Changed(double);
    void pos_Y885Changed(double);
    void pos_R885Changed(double);
    void pos_X886Changed(double);
    void pos_Y886Changed(double);
    void pos_R886Changed(double);
    void pos_X887Changed(double);
    void pos_Y887Changed(double);
    void pos_R887Changed(double);
    void pos_X888Changed(double);
    void pos_Y888Changed(double);
    void pos_R888Changed(double);
    void pos_X889Changed(double);
    void pos_Y889Changed(double);
    void pos_R889Changed(double);
    void pos_X890Changed(double);
    void pos_Y890Changed(double);
    void pos_R890Changed(double);
    void pos_X891Changed(double);
    void pos_Y891Changed(double);
    void pos_R891Changed(double);
    void pos_X892Changed(double);
    void pos_Y892Changed(double);
    void pos_R892Changed(double);
    void pos_X893Changed(double);
    void pos_Y893Changed(double);
    void pos_R893Changed(double);
    void pos_X894Changed(double);
    void pos_Y894Changed(double);
    void pos_R894Changed(double);
    void pos_X895Changed(double);
    void pos_Y895Changed(double);
    void pos_R895Changed(double);
    void pos_X896Changed(double);
    void pos_Y896Changed(double);
    void pos_R896Changed(double);
    void pos_X897Changed(double);
    void pos_Y897Changed(double);
    void pos_R897Changed(double);
    void pos_X898Changed(double);
    void pos_Y898Changed(double);
    void pos_R898Changed(double);
    void pos_X899Changed(double);
    void pos_Y899Changed(double);
    void pos_R899Changed(double);
    void pos_X900Changed(double);
    void pos_Y900Changed(double);
    void pos_R900Changed(double);
    void pos_X901Changed(double);
    void pos_Y901Changed(double);
    void pos_R901Changed(double);
    void pos_X902Changed(double);
    void pos_Y902Changed(double);
    void pos_R902Changed(double);
    void pos_X903Changed(double);
    void pos_Y903Changed(double);
    void pos_R903Changed(double);
    void pos_X904Changed(double);
    void pos_Y904Changed(double);
    void pos_R904Changed(double);
    void pos_X905Changed(double);
    void pos_Y905Changed(double);
    void pos_R905Changed(double);
    void pos_X906Changed(double);
    void pos_Y906Changed(double);
    void pos_R906Changed(double);
    void pos_X907Changed(double);
    void pos_Y907Changed(double);
    void pos_R907Changed(double);
    void pos_X908Changed(double);
    void pos_Y908Changed(double);
    void pos_R908Changed(double);
    void pos_X909Changed(double);
    void pos_Y909Changed(double);
    void pos_R909Changed(double);
    void pos_X910Changed(double);
    void pos_Y910Changed(double);
    void pos_R910Changed(double);
    void pos_X911Changed(double);
    void pos_Y911Changed(double);
    void pos_R911Changed(double);
    void pos_X912Changed(double);
    void pos_Y912Changed(double);
    void pos_R912Changed(double);
    void pos_X913Changed(double);
    void pos_Y913Changed(double);
    void pos_R913Changed(double);
    void pos_X914Changed(double);
    void pos_Y914Changed(double);
    void pos_R914Changed(double);
    void pos_X915Changed(double);
    void pos_Y915Changed(double);
    void pos_R915Changed(double);
    void pos_X916Changed(double);
    void pos_Y916Changed(double);
    void pos_R916Changed(double);
    void pos_X917Changed(double);
    void pos_Y917Changed(double);
    void pos_R917Changed(double);
    void pos_X918Changed(double);
    void pos_Y918Changed(double);
    void pos_R918Changed(double);
    void pos_X919Changed(double);
    void pos_Y919Changed(double);
    void pos_R919Changed(double);
    void pos_X920Changed(double);
    void pos_Y920Changed(double);
    void pos_R920Changed(double);
    void pos_X921Changed(double);
    void pos_Y921Changed(double);
    void pos_R921Changed(double);
    void pos_X922Changed(double);
    void pos_Y922Changed(double);
    void pos_R922Changed(double);
    void pos_X923Changed(double);
    void pos_Y923Changed(double);
    void pos_R923Changed(double);
    void pos_X924Changed(double);
    void pos_Y924Changed(double);
    void pos_R924Changed(double);
    void pos_X925Changed(double);
    void pos_Y925Changed(double);
    void pos_R925Changed(double);
    void pos_X926Changed(double);
    void pos_Y926Changed(double);
    void pos_R926Changed(double);
    void pos_X927Changed(double);
    void pos_Y927Changed(double);
    void pos_R927Changed(double);
    void pos_X928Changed(double);
    void pos_Y928Changed(double);
    void pos_R928Changed(double);
    void pos_X929Changed(double);
    void pos_Y929Changed(double);
    void pos_R929Changed(double);
    void pos_X930Changed(double);
    void pos_Y930Changed(double);
    void pos_R930Changed(double);
    void pos_X931Changed(double);
    void pos_Y931Changed(double);
    void pos_R931Changed(double);
    void pos_X932Changed(double);
    void pos_Y932Changed(double);
    void pos_R932Changed(double);
    void pos_X933Changed(double);
    void pos_Y933Changed(double);
    void pos_R933Changed(double);
    void pos_X934Changed(double);
    void pos_Y934Changed(double);
    void pos_R934Changed(double);
    void pos_X935Changed(double);
    void pos_Y935Changed(double);
    void pos_R935Changed(double);
    void pos_X936Changed(double);
    void pos_Y936Changed(double);
    void pos_R936Changed(double);
    void pos_X937Changed(double);
    void pos_Y937Changed(double);
    void pos_R937Changed(double);
    void pos_X938Changed(double);
    void pos_Y938Changed(double);
    void pos_R938Changed(double);
    void pos_X939Changed(double);
    void pos_Y939Changed(double);
    void pos_R939Changed(double);
    void pos_X940Changed(double);
    void pos_Y940Changed(double);
    void pos_R940Changed(double);
    void pos_X941Changed(double);
    void pos_Y941Changed(double);
    void pos_R941Changed(double);
    void pos_X942Changed(double);
    void pos_Y942Changed(double);
    void pos_R942Changed(double);
    void pos_X943Changed(double);
    void pos_Y943Changed(double);
    void pos_R943Changed(double);
    void pos_X944Changed(double);
    void pos_Y944Changed(double);
    void pos_R944Changed(double);
    void pos_X945Changed(double);
    void pos_Y945Changed(double);
    void pos_R945Changed(double);
    void pos_X946Changed(double);
    void pos_Y946Changed(double);
    void pos_R946Changed(double);
    void pos_X947Changed(double);
    void pos_Y947Changed(double);
    void pos_R947Changed(double);
    void pos_X948Changed(double);
    void pos_Y948Changed(double);
    void pos_R948Changed(double);
    void pos_X949Changed(double);
    void pos_Y949Changed(double);
    void pos_R949Changed(double);
    void pos_X950Changed(double);
    void pos_Y950Changed(double);
    void pos_R950Changed(double);
    void pos_X951Changed(double);
    void pos_Y951Changed(double);
    void pos_R951Changed(double);
    void pos_X952Changed(double);
    void pos_Y952Changed(double);
    void pos_R952Changed(double);
    void pos_X953Changed(double);
    void pos_Y953Changed(double);
    void pos_R953Changed(double);
    void pos_X954Changed(double);
    void pos_Y954Changed(double);
    void pos_R954Changed(double);
    void pos_X955Changed(double);
    void pos_Y955Changed(double);
    void pos_R955Changed(double);
    void pos_X956Changed(double);
    void pos_Y956Changed(double);
    void pos_R956Changed(double);
    void pos_X957Changed(double);
    void pos_Y957Changed(double);
    void pos_R957Changed(double);
    void pos_X958Changed(double);
    void pos_Y958Changed(double);
    void pos_R958Changed(double);
    void pos_X959Changed(double);
    void pos_Y959Changed(double);
    void pos_R959Changed(double);
    void pos_X960Changed(double);
    void pos_Y960Changed(double);
    void pos_R960Changed(double);
    void pos_X961Changed(double);
    void pos_Y961Changed(double);
    void pos_R961Changed(double);
    void pos_X962Changed(double);
    void pos_Y962Changed(double);
    void pos_R962Changed(double);
    void pos_X963Changed(double);
    void pos_Y963Changed(double);
    void pos_R963Changed(double);
    void pos_X964Changed(double);
    void pos_Y964Changed(double);
    void pos_R964Changed(double);
    void pos_X965Changed(double);
    void pos_Y965Changed(double);
    void pos_R965Changed(double);
    void pos_X966Changed(double);
    void pos_Y966Changed(double);
    void pos_R966Changed(double);
    void pos_X967Changed(double);
    void pos_Y967Changed(double);
    void pos_R967Changed(double);
    void pos_X968Changed(double);
    void pos_Y968Changed(double);
    void pos_R968Changed(double);
    void pos_X969Changed(double);
    void pos_Y969Changed(double);
    void pos_R969Changed(double);
    void pos_X970Changed(double);
    void pos_Y970Changed(double);
    void pos_R970Changed(double);
    void pos_X971Changed(double);
    void pos_Y971Changed(double);
    void pos_R971Changed(double);
    void pos_X972Changed(double);
    void pos_Y972Changed(double);
    void pos_R972Changed(double);
    void pos_X973Changed(double);
    void pos_Y973Changed(double);
    void pos_R973Changed(double);
    void pos_X974Changed(double);
    void pos_Y974Changed(double);
    void pos_R974Changed(double);
    void pos_X975Changed(double);
    void pos_Y975Changed(double);
    void pos_R975Changed(double);
    void pos_X976Changed(double);
    void pos_Y976Changed(double);
    void pos_R976Changed(double);
    void pos_X977Changed(double);
    void pos_Y977Changed(double);
    void pos_R977Changed(double);
    void pos_X978Changed(double);
    void pos_Y978Changed(double);
    void pos_R978Changed(double);
    void pos_X979Changed(double);
    void pos_Y979Changed(double);
    void pos_R979Changed(double);
    void pos_X980Changed(double);
    void pos_Y980Changed(double);
    void pos_R980Changed(double);
    void pos_X981Changed(double);
    void pos_Y981Changed(double);
    void pos_R981Changed(double);
    void pos_X982Changed(double);
    void pos_Y982Changed(double);
    void pos_R982Changed(double);
    void pos_X983Changed(double);
    void pos_Y983Changed(double);
    void pos_R983Changed(double);
    void pos_X984Changed(double);
    void pos_Y984Changed(double);
    void pos_R984Changed(double);
    void pos_X985Changed(double);
    void pos_Y985Changed(double);
    void pos_R985Changed(double);
    void pos_X986Changed(double);
    void pos_Y986Changed(double);
    void pos_R986Changed(double);
    void pos_X987Changed(double);
    void pos_Y987Changed(double);
    void pos_R987Changed(double);
    void pos_X988Changed(double);
    void pos_Y988Changed(double);
    void pos_R988Changed(double);
    void pos_X989Changed(double);
    void pos_Y989Changed(double);
    void pos_R989Changed(double);
    void pos_X990Changed(double);
    void pos_Y990Changed(double);
    void pos_R990Changed(double);
    void pos_X991Changed(double);
    void pos_Y991Changed(double);
    void pos_R991Changed(double);
    void pos_X992Changed(double);
    void pos_Y992Changed(double);
    void pos_R992Changed(double);
    void pos_X993Changed(double);
    void pos_Y993Changed(double);
    void pos_R993Changed(double);
    void pos_X994Changed(double);
    void pos_Y994Changed(double);
    void pos_R994Changed(double);
    void pos_X995Changed(double);
    void pos_Y995Changed(double);
    void pos_R995Changed(double);
    void pos_X996Changed(double);
    void pos_Y996Changed(double);
    void pos_R996Changed(double);
    void pos_X997Changed(double);
    void pos_Y997Changed(double);
    void pos_R997Changed(double);
    void pos_X998Changed(double);
    void pos_Y998Changed(double);
    void pos_R998Changed(double);
    void pos_X999Changed(double);
    void pos_Y999Changed(double);
    void pos_R999Changed(double);
private:
    QString _title;
    int _count;
    int _fps;
    double _X0;
    double _Y0;
    double _R0;
    double _X1;
    double _Y1;
    double _R1;
    double _X2;
    double _Y2;
    double _R2;
    double _X3;
    double _Y3;
    double _R3;
    double _X4;
    double _Y4;
    double _R4;
    double _X5;
    double _Y5;
    double _R5;
    double _X6;
    double _Y6;
    double _R6;
    double _X7;
    double _Y7;
    double _R7;
    double _X8;
    double _Y8;
    double _R8;
    double _X9;
    double _Y9;
    double _R9;
    double _X10;
    double _Y10;
    double _R10;
    double _X11;
    double _Y11;
    double _R11;
    double _X12;
    double _Y12;
    double _R12;
    double _X13;
    double _Y13;
    double _R13;
    double _X14;
    double _Y14;
    double _R14;
    double _X15;
    double _Y15;
    double _R15;
    double _X16;
    double _Y16;
    double _R16;
    double _X17;
    double _Y17;
    double _R17;
    double _X18;
    double _Y18;
    double _R18;
    double _X19;
    double _Y19;
    double _R19;
    double _X20;
    double _Y20;
    double _R20;
    double _X21;
    double _Y21;
    double _R21;
    double _X22;
    double _Y22;
    double _R22;
    double _X23;
    double _Y23;
    double _R23;
    double _X24;
    double _Y24;
    double _R24;
    double _X25;
    double _Y25;
    double _R25;
    double _X26;
    double _Y26;
    double _R26;
    double _X27;
    double _Y27;
    double _R27;
    double _X28;
    double _Y28;
    double _R28;
    double _X29;
    double _Y29;
    double _R29;
    double _X30;
    double _Y30;
    double _R30;
    double _X31;
    double _Y31;
    double _R31;
    double _X32;
    double _Y32;
    double _R32;
    double _X33;
    double _Y33;
    double _R33;
    double _X34;
    double _Y34;
    double _R34;
    double _X35;
    double _Y35;
    double _R35;
    double _X36;
    double _Y36;
    double _R36;
    double _X37;
    double _Y37;
    double _R37;
    double _X38;
    double _Y38;
    double _R38;
    double _X39;
    double _Y39;
    double _R39;
    double _X40;
    double _Y40;
    double _R40;
    double _X41;
    double _Y41;
    double _R41;
    double _X42;
    double _Y42;
    double _R42;
    double _X43;
    double _Y43;
    double _R43;
    double _X44;
    double _Y44;
    double _R44;
    double _X45;
    double _Y45;
    double _R45;
    double _X46;
    double _Y46;
    double _R46;
    double _X47;
    double _Y47;
    double _R47;
    double _X48;
    double _Y48;
    double _R48;
    double _X49;
    double _Y49;
    double _R49;
    double _X50;
    double _Y50;
    double _R50;
    double _X51;
    double _Y51;
    double _R51;
    double _X52;
    double _Y52;
    double _R52;
    double _X53;
    double _Y53;
    double _R53;
    double _X54;
    double _Y54;
    double _R54;
    double _X55;
    double _Y55;
    double _R55;
    double _X56;
    double _Y56;
    double _R56;
    double _X57;
    double _Y57;
    double _R57;
    double _X58;
    double _Y58;
    double _R58;
    double _X59;
    double _Y59;
    double _R59;
    double _X60;
    double _Y60;
    double _R60;
    double _X61;
    double _Y61;
    double _R61;
    double _X62;
    double _Y62;
    double _R62;
    double _X63;
    double _Y63;
    double _R63;
    double _X64;
    double _Y64;
    double _R64;
    double _X65;
    double _Y65;
    double _R65;
    double _X66;
    double _Y66;
    double _R66;
    double _X67;
    double _Y67;
    double _R67;
    double _X68;
    double _Y68;
    double _R68;
    double _X69;
    double _Y69;
    double _R69;
    double _X70;
    double _Y70;
    double _R70;
    double _X71;
    double _Y71;
    double _R71;
    double _X72;
    double _Y72;
    double _R72;
    double _X73;
    double _Y73;
    double _R73;
    double _X74;
    double _Y74;
    double _R74;
    double _X75;
    double _Y75;
    double _R75;
    double _X76;
    double _Y76;
    double _R76;
    double _X77;
    double _Y77;
    double _R77;
    double _X78;
    double _Y78;
    double _R78;
    double _X79;
    double _Y79;
    double _R79;
    double _X80;
    double _Y80;
    double _R80;
    double _X81;
    double _Y81;
    double _R81;
    double _X82;
    double _Y82;
    double _R82;
    double _X83;
    double _Y83;
    double _R83;
    double _X84;
    double _Y84;
    double _R84;
    double _X85;
    double _Y85;
    double _R85;
    double _X86;
    double _Y86;
    double _R86;
    double _X87;
    double _Y87;
    double _R87;
    double _X88;
    double _Y88;
    double _R88;
    double _X89;
    double _Y89;
    double _R89;
    double _X90;
    double _Y90;
    double _R90;
    double _X91;
    double _Y91;
    double _R91;
    double _X92;
    double _Y92;
    double _R92;
    double _X93;
    double _Y93;
    double _R93;
    double _X94;
    double _Y94;
    double _R94;
    double _X95;
    double _Y95;
    double _R95;
    double _X96;
    double _Y96;
    double _R96;
    double _X97;
    double _Y97;
    double _R97;
    double _X98;
    double _Y98;
    double _R98;
    double _X99;
    double _Y99;
    double _R99;
    double _X100;
    double _Y100;
    double _R100;
    double _X101;
    double _Y101;
    double _R101;
    double _X102;
    double _Y102;
    double _R102;
    double _X103;
    double _Y103;
    double _R103;
    double _X104;
    double _Y104;
    double _R104;
    double _X105;
    double _Y105;
    double _R105;
    double _X106;
    double _Y106;
    double _R106;
    double _X107;
    double _Y107;
    double _R107;
    double _X108;
    double _Y108;
    double _R108;
    double _X109;
    double _Y109;
    double _R109;
    double _X110;
    double _Y110;
    double _R110;
    double _X111;
    double _Y111;
    double _R111;
    double _X112;
    double _Y112;
    double _R112;
    double _X113;
    double _Y113;
    double _R113;
    double _X114;
    double _Y114;
    double _R114;
    double _X115;
    double _Y115;
    double _R115;
    double _X116;
    double _Y116;
    double _R116;
    double _X117;
    double _Y117;
    double _R117;
    double _X118;
    double _Y118;
    double _R118;
    double _X119;
    double _Y119;
    double _R119;
    double _X120;
    double _Y120;
    double _R120;
    double _X121;
    double _Y121;
    double _R121;
    double _X122;
    double _Y122;
    double _R122;
    double _X123;
    double _Y123;
    double _R123;
    double _X124;
    double _Y124;
    double _R124;
    double _X125;
    double _Y125;
    double _R125;
    double _X126;
    double _Y126;
    double _R126;
    double _X127;
    double _Y127;
    double _R127;
    double _X128;
    double _Y128;
    double _R128;
    double _X129;
    double _Y129;
    double _R129;
    double _X130;
    double _Y130;
    double _R130;
    double _X131;
    double _Y131;
    double _R131;
    double _X132;
    double _Y132;
    double _R132;
    double _X133;
    double _Y133;
    double _R133;
    double _X134;
    double _Y134;
    double _R134;
    double _X135;
    double _Y135;
    double _R135;
    double _X136;
    double _Y136;
    double _R136;
    double _X137;
    double _Y137;
    double _R137;
    double _X138;
    double _Y138;
    double _R138;
    double _X139;
    double _Y139;
    double _R139;
    double _X140;
    double _Y140;
    double _R140;
    double _X141;
    double _Y141;
    double _R141;
    double _X142;
    double _Y142;
    double _R142;
    double _X143;
    double _Y143;
    double _R143;
    double _X144;
    double _Y144;
    double _R144;
    double _X145;
    double _Y145;
    double _R145;
    double _X146;
    double _Y146;
    double _R146;
    double _X147;
    double _Y147;
    double _R147;
    double _X148;
    double _Y148;
    double _R148;
    double _X149;
    double _Y149;
    double _R149;
    double _X150;
    double _Y150;
    double _R150;
    double _X151;
    double _Y151;
    double _R151;
    double _X152;
    double _Y152;
    double _R152;
    double _X153;
    double _Y153;
    double _R153;
    double _X154;
    double _Y154;
    double _R154;
    double _X155;
    double _Y155;
    double _R155;
    double _X156;
    double _Y156;
    double _R156;
    double _X157;
    double _Y157;
    double _R157;
    double _X158;
    double _Y158;
    double _R158;
    double _X159;
    double _Y159;
    double _R159;
    double _X160;
    double _Y160;
    double _R160;
    double _X161;
    double _Y161;
    double _R161;
    double _X162;
    double _Y162;
    double _R162;
    double _X163;
    double _Y163;
    double _R163;
    double _X164;
    double _Y164;
    double _R164;
    double _X165;
    double _Y165;
    double _R165;
    double _X166;
    double _Y166;
    double _R166;
    double _X167;
    double _Y167;
    double _R167;
    double _X168;
    double _Y168;
    double _R168;
    double _X169;
    double _Y169;
    double _R169;
    double _X170;
    double _Y170;
    double _R170;
    double _X171;
    double _Y171;
    double _R171;
    double _X172;
    double _Y172;
    double _R172;
    double _X173;
    double _Y173;
    double _R173;
    double _X174;
    double _Y174;
    double _R174;
    double _X175;
    double _Y175;
    double _R175;
    double _X176;
    double _Y176;
    double _R176;
    double _X177;
    double _Y177;
    double _R177;
    double _X178;
    double _Y178;
    double _R178;
    double _X179;
    double _Y179;
    double _R179;
    double _X180;
    double _Y180;
    double _R180;
    double _X181;
    double _Y181;
    double _R181;
    double _X182;
    double _Y182;
    double _R182;
    double _X183;
    double _Y183;
    double _R183;
    double _X184;
    double _Y184;
    double _R184;
    double _X185;
    double _Y185;
    double _R185;
    double _X186;
    double _Y186;
    double _R186;
    double _X187;
    double _Y187;
    double _R187;
    double _X188;
    double _Y188;
    double _R188;
    double _X189;
    double _Y189;
    double _R189;
    double _X190;
    double _Y190;
    double _R190;
    double _X191;
    double _Y191;
    double _R191;
    double _X192;
    double _Y192;
    double _R192;
    double _X193;
    double _Y193;
    double _R193;
    double _X194;
    double _Y194;
    double _R194;
    double _X195;
    double _Y195;
    double _R195;
    double _X196;
    double _Y196;
    double _R196;
    double _X197;
    double _Y197;
    double _R197;
    double _X198;
    double _Y198;
    double _R198;
    double _X199;
    double _Y199;
    double _R199;
    double _X200;
    double _Y200;
    double _R200;
    double _X201;
    double _Y201;
    double _R201;
    double _X202;
    double _Y202;
    double _R202;
    double _X203;
    double _Y203;
    double _R203;
    double _X204;
    double _Y204;
    double _R204;
    double _X205;
    double _Y205;
    double _R205;
    double _X206;
    double _Y206;
    double _R206;
    double _X207;
    double _Y207;
    double _R207;
    double _X208;
    double _Y208;
    double _R208;
    double _X209;
    double _Y209;
    double _R209;
    double _X210;
    double _Y210;
    double _R210;
    double _X211;
    double _Y211;
    double _R211;
    double _X212;
    double _Y212;
    double _R212;
    double _X213;
    double _Y213;
    double _R213;
    double _X214;
    double _Y214;
    double _R214;
    double _X215;
    double _Y215;
    double _R215;
    double _X216;
    double _Y216;
    double _R216;
    double _X217;
    double _Y217;
    double _R217;
    double _X218;
    double _Y218;
    double _R218;
    double _X219;
    double _Y219;
    double _R219;
    double _X220;
    double _Y220;
    double _R220;
    double _X221;
    double _Y221;
    double _R221;
    double _X222;
    double _Y222;
    double _R222;
    double _X223;
    double _Y223;
    double _R223;
    double _X224;
    double _Y224;
    double _R224;
    double _X225;
    double _Y225;
    double _R225;
    double _X226;
    double _Y226;
    double _R226;
    double _X227;
    double _Y227;
    double _R227;
    double _X228;
    double _Y228;
    double _R228;
    double _X229;
    double _Y229;
    double _R229;
    double _X230;
    double _Y230;
    double _R230;
    double _X231;
    double _Y231;
    double _R231;
    double _X232;
    double _Y232;
    double _R232;
    double _X233;
    double _Y233;
    double _R233;
    double _X234;
    double _Y234;
    double _R234;
    double _X235;
    double _Y235;
    double _R235;
    double _X236;
    double _Y236;
    double _R236;
    double _X237;
    double _Y237;
    double _R237;
    double _X238;
    double _Y238;
    double _R238;
    double _X239;
    double _Y239;
    double _R239;
    double _X240;
    double _Y240;
    double _R240;
    double _X241;
    double _Y241;
    double _R241;
    double _X242;
    double _Y242;
    double _R242;
    double _X243;
    double _Y243;
    double _R243;
    double _X244;
    double _Y244;
    double _R244;
    double _X245;
    double _Y245;
    double _R245;
    double _X246;
    double _Y246;
    double _R246;
    double _X247;
    double _Y247;
    double _R247;
    double _X248;
    double _Y248;
    double _R248;
    double _X249;
    double _Y249;
    double _R249;
    double _X250;
    double _Y250;
    double _R250;
    double _X251;
    double _Y251;
    double _R251;
    double _X252;
    double _Y252;
    double _R252;
    double _X253;
    double _Y253;
    double _R253;
    double _X254;
    double _Y254;
    double _R254;
    double _X255;
    double _Y255;
    double _R255;
    double _X256;
    double _Y256;
    double _R256;
    double _X257;
    double _Y257;
    double _R257;
    double _X258;
    double _Y258;
    double _R258;
    double _X259;
    double _Y259;
    double _R259;
    double _X260;
    double _Y260;
    double _R260;
    double _X261;
    double _Y261;
    double _R261;
    double _X262;
    double _Y262;
    double _R262;
    double _X263;
    double _Y263;
    double _R263;
    double _X264;
    double _Y264;
    double _R264;
    double _X265;
    double _Y265;
    double _R265;
    double _X266;
    double _Y266;
    double _R266;
    double _X267;
    double _Y267;
    double _R267;
    double _X268;
    double _Y268;
    double _R268;
    double _X269;
    double _Y269;
    double _R269;
    double _X270;
    double _Y270;
    double _R270;
    double _X271;
    double _Y271;
    double _R271;
    double _X272;
    double _Y272;
    double _R272;
    double _X273;
    double _Y273;
    double _R273;
    double _X274;
    double _Y274;
    double _R274;
    double _X275;
    double _Y275;
    double _R275;
    double _X276;
    double _Y276;
    double _R276;
    double _X277;
    double _Y277;
    double _R277;
    double _X278;
    double _Y278;
    double _R278;
    double _X279;
    double _Y279;
    double _R279;
    double _X280;
    double _Y280;
    double _R280;
    double _X281;
    double _Y281;
    double _R281;
    double _X282;
    double _Y282;
    double _R282;
    double _X283;
    double _Y283;
    double _R283;
    double _X284;
    double _Y284;
    double _R284;
    double _X285;
    double _Y285;
    double _R285;
    double _X286;
    double _Y286;
    double _R286;
    double _X287;
    double _Y287;
    double _R287;
    double _X288;
    double _Y288;
    double _R288;
    double _X289;
    double _Y289;
    double _R289;
    double _X290;
    double _Y290;
    double _R290;
    double _X291;
    double _Y291;
    double _R291;
    double _X292;
    double _Y292;
    double _R292;
    double _X293;
    double _Y293;
    double _R293;
    double _X294;
    double _Y294;
    double _R294;
    double _X295;
    double _Y295;
    double _R295;
    double _X296;
    double _Y296;
    double _R296;
    double _X297;
    double _Y297;
    double _R297;
    double _X298;
    double _Y298;
    double _R298;
    double _X299;
    double _Y299;
    double _R299;
    double _X300;
    double _Y300;
    double _R300;
    double _X301;
    double _Y301;
    double _R301;
    double _X302;
    double _Y302;
    double _R302;
    double _X303;
    double _Y303;
    double _R303;
    double _X304;
    double _Y304;
    double _R304;
    double _X305;
    double _Y305;
    double _R305;
    double _X306;
    double _Y306;
    double _R306;
    double _X307;
    double _Y307;
    double _R307;
    double _X308;
    double _Y308;
    double _R308;
    double _X309;
    double _Y309;
    double _R309;
    double _X310;
    double _Y310;
    double _R310;
    double _X311;
    double _Y311;
    double _R311;
    double _X312;
    double _Y312;
    double _R312;
    double _X313;
    double _Y313;
    double _R313;
    double _X314;
    double _Y314;
    double _R314;
    double _X315;
    double _Y315;
    double _R315;
    double _X316;
    double _Y316;
    double _R316;
    double _X317;
    double _Y317;
    double _R317;
    double _X318;
    double _Y318;
    double _R318;
    double _X319;
    double _Y319;
    double _R319;
    double _X320;
    double _Y320;
    double _R320;
    double _X321;
    double _Y321;
    double _R321;
    double _X322;
    double _Y322;
    double _R322;
    double _X323;
    double _Y323;
    double _R323;
    double _X324;
    double _Y324;
    double _R324;
    double _X325;
    double _Y325;
    double _R325;
    double _X326;
    double _Y326;
    double _R326;
    double _X327;
    double _Y327;
    double _R327;
    double _X328;
    double _Y328;
    double _R328;
    double _X329;
    double _Y329;
    double _R329;
    double _X330;
    double _Y330;
    double _R330;
    double _X331;
    double _Y331;
    double _R331;
    double _X332;
    double _Y332;
    double _R332;
    double _X333;
    double _Y333;
    double _R333;
    double _X334;
    double _Y334;
    double _R334;
    double _X335;
    double _Y335;
    double _R335;
    double _X336;
    double _Y336;
    double _R336;
    double _X337;
    double _Y337;
    double _R337;
    double _X338;
    double _Y338;
    double _R338;
    double _X339;
    double _Y339;
    double _R339;
    double _X340;
    double _Y340;
    double _R340;
    double _X341;
    double _Y341;
    double _R341;
    double _X342;
    double _Y342;
    double _R342;
    double _X343;
    double _Y343;
    double _R343;
    double _X344;
    double _Y344;
    double _R344;
    double _X345;
    double _Y345;
    double _R345;
    double _X346;
    double _Y346;
    double _R346;
    double _X347;
    double _Y347;
    double _R347;
    double _X348;
    double _Y348;
    double _R348;
    double _X349;
    double _Y349;
    double _R349;
    double _X350;
    double _Y350;
    double _R350;
    double _X351;
    double _Y351;
    double _R351;
    double _X352;
    double _Y352;
    double _R352;
    double _X353;
    double _Y353;
    double _R353;
    double _X354;
    double _Y354;
    double _R354;
    double _X355;
    double _Y355;
    double _R355;
    double _X356;
    double _Y356;
    double _R356;
    double _X357;
    double _Y357;
    double _R357;
    double _X358;
    double _Y358;
    double _R358;
    double _X359;
    double _Y359;
    double _R359;
    double _X360;
    double _Y360;
    double _R360;
    double _X361;
    double _Y361;
    double _R361;
    double _X362;
    double _Y362;
    double _R362;
    double _X363;
    double _Y363;
    double _R363;
    double _X364;
    double _Y364;
    double _R364;
    double _X365;
    double _Y365;
    double _R365;
    double _X366;
    double _Y366;
    double _R366;
    double _X367;
    double _Y367;
    double _R367;
    double _X368;
    double _Y368;
    double _R368;
    double _X369;
    double _Y369;
    double _R369;
    double _X370;
    double _Y370;
    double _R370;
    double _X371;
    double _Y371;
    double _R371;
    double _X372;
    double _Y372;
    double _R372;
    double _X373;
    double _Y373;
    double _R373;
    double _X374;
    double _Y374;
    double _R374;
    double _X375;
    double _Y375;
    double _R375;
    double _X376;
    double _Y376;
    double _R376;
    double _X377;
    double _Y377;
    double _R377;
    double _X378;
    double _Y378;
    double _R378;
    double _X379;
    double _Y379;
    double _R379;
    double _X380;
    double _Y380;
    double _R380;
    double _X381;
    double _Y381;
    double _R381;
    double _X382;
    double _Y382;
    double _R382;
    double _X383;
    double _Y383;
    double _R383;
    double _X384;
    double _Y384;
    double _R384;
    double _X385;
    double _Y385;
    double _R385;
    double _X386;
    double _Y386;
    double _R386;
    double _X387;
    double _Y387;
    double _R387;
    double _X388;
    double _Y388;
    double _R388;
    double _X389;
    double _Y389;
    double _R389;
    double _X390;
    double _Y390;
    double _R390;
    double _X391;
    double _Y391;
    double _R391;
    double _X392;
    double _Y392;
    double _R392;
    double _X393;
    double _Y393;
    double _R393;
    double _X394;
    double _Y394;
    double _R394;
    double _X395;
    double _Y395;
    double _R395;
    double _X396;
    double _Y396;
    double _R396;
    double _X397;
    double _Y397;
    double _R397;
    double _X398;
    double _Y398;
    double _R398;
    double _X399;
    double _Y399;
    double _R399;
    double _X400;
    double _Y400;
    double _R400;
    double _X401;
    double _Y401;
    double _R401;
    double _X402;
    double _Y402;
    double _R402;
    double _X403;
    double _Y403;
    double _R403;
    double _X404;
    double _Y404;
    double _R404;
    double _X405;
    double _Y405;
    double _R405;
    double _X406;
    double _Y406;
    double _R406;
    double _X407;
    double _Y407;
    double _R407;
    double _X408;
    double _Y408;
    double _R408;
    double _X409;
    double _Y409;
    double _R409;
    double _X410;
    double _Y410;
    double _R410;
    double _X411;
    double _Y411;
    double _R411;
    double _X412;
    double _Y412;
    double _R412;
    double _X413;
    double _Y413;
    double _R413;
    double _X414;
    double _Y414;
    double _R414;
    double _X415;
    double _Y415;
    double _R415;
    double _X416;
    double _Y416;
    double _R416;
    double _X417;
    double _Y417;
    double _R417;
    double _X418;
    double _Y418;
    double _R418;
    double _X419;
    double _Y419;
    double _R419;
    double _X420;
    double _Y420;
    double _R420;
    double _X421;
    double _Y421;
    double _R421;
    double _X422;
    double _Y422;
    double _R422;
    double _X423;
    double _Y423;
    double _R423;
    double _X424;
    double _Y424;
    double _R424;
    double _X425;
    double _Y425;
    double _R425;
    double _X426;
    double _Y426;
    double _R426;
    double _X427;
    double _Y427;
    double _R427;
    double _X428;
    double _Y428;
    double _R428;
    double _X429;
    double _Y429;
    double _R429;
    double _X430;
    double _Y430;
    double _R430;
    double _X431;
    double _Y431;
    double _R431;
    double _X432;
    double _Y432;
    double _R432;
    double _X433;
    double _Y433;
    double _R433;
    double _X434;
    double _Y434;
    double _R434;
    double _X435;
    double _Y435;
    double _R435;
    double _X436;
    double _Y436;
    double _R436;
    double _X437;
    double _Y437;
    double _R437;
    double _X438;
    double _Y438;
    double _R438;
    double _X439;
    double _Y439;
    double _R439;
    double _X440;
    double _Y440;
    double _R440;
    double _X441;
    double _Y441;
    double _R441;
    double _X442;
    double _Y442;
    double _R442;
    double _X443;
    double _Y443;
    double _R443;
    double _X444;
    double _Y444;
    double _R444;
    double _X445;
    double _Y445;
    double _R445;
    double _X446;
    double _Y446;
    double _R446;
    double _X447;
    double _Y447;
    double _R447;
    double _X448;
    double _Y448;
    double _R448;
    double _X449;
    double _Y449;
    double _R449;
    double _X450;
    double _Y450;
    double _R450;
    double _X451;
    double _Y451;
    double _R451;
    double _X452;
    double _Y452;
    double _R452;
    double _X453;
    double _Y453;
    double _R453;
    double _X454;
    double _Y454;
    double _R454;
    double _X455;
    double _Y455;
    double _R455;
    double _X456;
    double _Y456;
    double _R456;
    double _X457;
    double _Y457;
    double _R457;
    double _X458;
    double _Y458;
    double _R458;
    double _X459;
    double _Y459;
    double _R459;
    double _X460;
    double _Y460;
    double _R460;
    double _X461;
    double _Y461;
    double _R461;
    double _X462;
    double _Y462;
    double _R462;
    double _X463;
    double _Y463;
    double _R463;
    double _X464;
    double _Y464;
    double _R464;
    double _X465;
    double _Y465;
    double _R465;
    double _X466;
    double _Y466;
    double _R466;
    double _X467;
    double _Y467;
    double _R467;
    double _X468;
    double _Y468;
    double _R468;
    double _X469;
    double _Y469;
    double _R469;
    double _X470;
    double _Y470;
    double _R470;
    double _X471;
    double _Y471;
    double _R471;
    double _X472;
    double _Y472;
    double _R472;
    double _X473;
    double _Y473;
    double _R473;
    double _X474;
    double _Y474;
    double _R474;
    double _X475;
    double _Y475;
    double _R475;
    double _X476;
    double _Y476;
    double _R476;
    double _X477;
    double _Y477;
    double _R477;
    double _X478;
    double _Y478;
    double _R478;
    double _X479;
    double _Y479;
    double _R479;
    double _X480;
    double _Y480;
    double _R480;
    double _X481;
    double _Y481;
    double _R481;
    double _X482;
    double _Y482;
    double _R482;
    double _X483;
    double _Y483;
    double _R483;
    double _X484;
    double _Y484;
    double _R484;
    double _X485;
    double _Y485;
    double _R485;
    double _X486;
    double _Y486;
    double _R486;
    double _X487;
    double _Y487;
    double _R487;
    double _X488;
    double _Y488;
    double _R488;
    double _X489;
    double _Y489;
    double _R489;
    double _X490;
    double _Y490;
    double _R490;
    double _X491;
    double _Y491;
    double _R491;
    double _X492;
    double _Y492;
    double _R492;
    double _X493;
    double _Y493;
    double _R493;
    double _X494;
    double _Y494;
    double _R494;
    double _X495;
    double _Y495;
    double _R495;
    double _X496;
    double _Y496;
    double _R496;
    double _X497;
    double _Y497;
    double _R497;
    double _X498;
    double _Y498;
    double _R498;
    double _X499;
    double _Y499;
    double _R499;
    double _X500;
    double _Y500;
    double _R500;
    double _X501;
    double _Y501;
    double _R501;
    double _X502;
    double _Y502;
    double _R502;
    double _X503;
    double _Y503;
    double _R503;
    double _X504;
    double _Y504;
    double _R504;
    double _X505;
    double _Y505;
    double _R505;
    double _X506;
    double _Y506;
    double _R506;
    double _X507;
    double _Y507;
    double _R507;
    double _X508;
    double _Y508;
    double _R508;
    double _X509;
    double _Y509;
    double _R509;
    double _X510;
    double _Y510;
    double _R510;
    double _X511;
    double _Y511;
    double _R511;
    double _X512;
    double _Y512;
    double _R512;
    double _X513;
    double _Y513;
    double _R513;
    double _X514;
    double _Y514;
    double _R514;
    double _X515;
    double _Y515;
    double _R515;
    double _X516;
    double _Y516;
    double _R516;
    double _X517;
    double _Y517;
    double _R517;
    double _X518;
    double _Y518;
    double _R518;
    double _X519;
    double _Y519;
    double _R519;
    double _X520;
    double _Y520;
    double _R520;
    double _X521;
    double _Y521;
    double _R521;
    double _X522;
    double _Y522;
    double _R522;
    double _X523;
    double _Y523;
    double _R523;
    double _X524;
    double _Y524;
    double _R524;
    double _X525;
    double _Y525;
    double _R525;
    double _X526;
    double _Y526;
    double _R526;
    double _X527;
    double _Y527;
    double _R527;
    double _X528;
    double _Y528;
    double _R528;
    double _X529;
    double _Y529;
    double _R529;
    double _X530;
    double _Y530;
    double _R530;
    double _X531;
    double _Y531;
    double _R531;
    double _X532;
    double _Y532;
    double _R532;
    double _X533;
    double _Y533;
    double _R533;
    double _X534;
    double _Y534;
    double _R534;
    double _X535;
    double _Y535;
    double _R535;
    double _X536;
    double _Y536;
    double _R536;
    double _X537;
    double _Y537;
    double _R537;
    double _X538;
    double _Y538;
    double _R538;
    double _X539;
    double _Y539;
    double _R539;
    double _X540;
    double _Y540;
    double _R540;
    double _X541;
    double _Y541;
    double _R541;
    double _X542;
    double _Y542;
    double _R542;
    double _X543;
    double _Y543;
    double _R543;
    double _X544;
    double _Y544;
    double _R544;
    double _X545;
    double _Y545;
    double _R545;
    double _X546;
    double _Y546;
    double _R546;
    double _X547;
    double _Y547;
    double _R547;
    double _X548;
    double _Y548;
    double _R548;
    double _X549;
    double _Y549;
    double _R549;
    double _X550;
    double _Y550;
    double _R550;
    double _X551;
    double _Y551;
    double _R551;
    double _X552;
    double _Y552;
    double _R552;
    double _X553;
    double _Y553;
    double _R553;
    double _X554;
    double _Y554;
    double _R554;
    double _X555;
    double _Y555;
    double _R555;
    double _X556;
    double _Y556;
    double _R556;
    double _X557;
    double _Y557;
    double _R557;
    double _X558;
    double _Y558;
    double _R558;
    double _X559;
    double _Y559;
    double _R559;
    double _X560;
    double _Y560;
    double _R560;
    double _X561;
    double _Y561;
    double _R561;
    double _X562;
    double _Y562;
    double _R562;
    double _X563;
    double _Y563;
    double _R563;
    double _X564;
    double _Y564;
    double _R564;
    double _X565;
    double _Y565;
    double _R565;
    double _X566;
    double _Y566;
    double _R566;
    double _X567;
    double _Y567;
    double _R567;
    double _X568;
    double _Y568;
    double _R568;
    double _X569;
    double _Y569;
    double _R569;
    double _X570;
    double _Y570;
    double _R570;
    double _X571;
    double _Y571;
    double _R571;
    double _X572;
    double _Y572;
    double _R572;
    double _X573;
    double _Y573;
    double _R573;
    double _X574;
    double _Y574;
    double _R574;
    double _X575;
    double _Y575;
    double _R575;
    double _X576;
    double _Y576;
    double _R576;
    double _X577;
    double _Y577;
    double _R577;
    double _X578;
    double _Y578;
    double _R578;
    double _X579;
    double _Y579;
    double _R579;
    double _X580;
    double _Y580;
    double _R580;
    double _X581;
    double _Y581;
    double _R581;
    double _X582;
    double _Y582;
    double _R582;
    double _X583;
    double _Y583;
    double _R583;
    double _X584;
    double _Y584;
    double _R584;
    double _X585;
    double _Y585;
    double _R585;
    double _X586;
    double _Y586;
    double _R586;
    double _X587;
    double _Y587;
    double _R587;
    double _X588;
    double _Y588;
    double _R588;
    double _X589;
    double _Y589;
    double _R589;
    double _X590;
    double _Y590;
    double _R590;
    double _X591;
    double _Y591;
    double _R591;
    double _X592;
    double _Y592;
    double _R592;
    double _X593;
    double _Y593;
    double _R593;
    double _X594;
    double _Y594;
    double _R594;
    double _X595;
    double _Y595;
    double _R595;
    double _X596;
    double _Y596;
    double _R596;
    double _X597;
    double _Y597;
    double _R597;
    double _X598;
    double _Y598;
    double _R598;
    double _X599;
    double _Y599;
    double _R599;
    double _X600;
    double _Y600;
    double _R600;
    double _X601;
    double _Y601;
    double _R601;
    double _X602;
    double _Y602;
    double _R602;
    double _X603;
    double _Y603;
    double _R603;
    double _X604;
    double _Y604;
    double _R604;
    double _X605;
    double _Y605;
    double _R605;
    double _X606;
    double _Y606;
    double _R606;
    double _X607;
    double _Y607;
    double _R607;
    double _X608;
    double _Y608;
    double _R608;
    double _X609;
    double _Y609;
    double _R609;
    double _X610;
    double _Y610;
    double _R610;
    double _X611;
    double _Y611;
    double _R611;
    double _X612;
    double _Y612;
    double _R612;
    double _X613;
    double _Y613;
    double _R613;
    double _X614;
    double _Y614;
    double _R614;
    double _X615;
    double _Y615;
    double _R615;
    double _X616;
    double _Y616;
    double _R616;
    double _X617;
    double _Y617;
    double _R617;
    double _X618;
    double _Y618;
    double _R618;
    double _X619;
    double _Y619;
    double _R619;
    double _X620;
    double _Y620;
    double _R620;
    double _X621;
    double _Y621;
    double _R621;
    double _X622;
    double _Y622;
    double _R622;
    double _X623;
    double _Y623;
    double _R623;
    double _X624;
    double _Y624;
    double _R624;
    double _X625;
    double _Y625;
    double _R625;
    double _X626;
    double _Y626;
    double _R626;
    double _X627;
    double _Y627;
    double _R627;
    double _X628;
    double _Y628;
    double _R628;
    double _X629;
    double _Y629;
    double _R629;
    double _X630;
    double _Y630;
    double _R630;
    double _X631;
    double _Y631;
    double _R631;
    double _X632;
    double _Y632;
    double _R632;
    double _X633;
    double _Y633;
    double _R633;
    double _X634;
    double _Y634;
    double _R634;
    double _X635;
    double _Y635;
    double _R635;
    double _X636;
    double _Y636;
    double _R636;
    double _X637;
    double _Y637;
    double _R637;
    double _X638;
    double _Y638;
    double _R638;
    double _X639;
    double _Y639;
    double _R639;
    double _X640;
    double _Y640;
    double _R640;
    double _X641;
    double _Y641;
    double _R641;
    double _X642;
    double _Y642;
    double _R642;
    double _X643;
    double _Y643;
    double _R643;
    double _X644;
    double _Y644;
    double _R644;
    double _X645;
    double _Y645;
    double _R645;
    double _X646;
    double _Y646;
    double _R646;
    double _X647;
    double _Y647;
    double _R647;
    double _X648;
    double _Y648;
    double _R648;
    double _X649;
    double _Y649;
    double _R649;
    double _X650;
    double _Y650;
    double _R650;
    double _X651;
    double _Y651;
    double _R651;
    double _X652;
    double _Y652;
    double _R652;
    double _X653;
    double _Y653;
    double _R653;
    double _X654;
    double _Y654;
    double _R654;
    double _X655;
    double _Y655;
    double _R655;
    double _X656;
    double _Y656;
    double _R656;
    double _X657;
    double _Y657;
    double _R657;
    double _X658;
    double _Y658;
    double _R658;
    double _X659;
    double _Y659;
    double _R659;
    double _X660;
    double _Y660;
    double _R660;
    double _X661;
    double _Y661;
    double _R661;
    double _X662;
    double _Y662;
    double _R662;
    double _X663;
    double _Y663;
    double _R663;
    double _X664;
    double _Y664;
    double _R664;
    double _X665;
    double _Y665;
    double _R665;
    double _X666;
    double _Y666;
    double _R666;
    double _X667;
    double _Y667;
    double _R667;
    double _X668;
    double _Y668;
    double _R668;
    double _X669;
    double _Y669;
    double _R669;
    double _X670;
    double _Y670;
    double _R670;
    double _X671;
    double _Y671;
    double _R671;
    double _X672;
    double _Y672;
    double _R672;
    double _X673;
    double _Y673;
    double _R673;
    double _X674;
    double _Y674;
    double _R674;
    double _X675;
    double _Y675;
    double _R675;
    double _X676;
    double _Y676;
    double _R676;
    double _X677;
    double _Y677;
    double _R677;
    double _X678;
    double _Y678;
    double _R678;
    double _X679;
    double _Y679;
    double _R679;
    double _X680;
    double _Y680;
    double _R680;
    double _X681;
    double _Y681;
    double _R681;
    double _X682;
    double _Y682;
    double _R682;
    double _X683;
    double _Y683;
    double _R683;
    double _X684;
    double _Y684;
    double _R684;
    double _X685;
    double _Y685;
    double _R685;
    double _X686;
    double _Y686;
    double _R686;
    double _X687;
    double _Y687;
    double _R687;
    double _X688;
    double _Y688;
    double _R688;
    double _X689;
    double _Y689;
    double _R689;
    double _X690;
    double _Y690;
    double _R690;
    double _X691;
    double _Y691;
    double _R691;
    double _X692;
    double _Y692;
    double _R692;
    double _X693;
    double _Y693;
    double _R693;
    double _X694;
    double _Y694;
    double _R694;
    double _X695;
    double _Y695;
    double _R695;
    double _X696;
    double _Y696;
    double _R696;
    double _X697;
    double _Y697;
    double _R697;
    double _X698;
    double _Y698;
    double _R698;
    double _X699;
    double _Y699;
    double _R699;
    double _X700;
    double _Y700;
    double _R700;
    double _X701;
    double _Y701;
    double _R701;
    double _X702;
    double _Y702;
    double _R702;
    double _X703;
    double _Y703;
    double _R703;
    double _X704;
    double _Y704;
    double _R704;
    double _X705;
    double _Y705;
    double _R705;
    double _X706;
    double _Y706;
    double _R706;
    double _X707;
    double _Y707;
    double _R707;
    double _X708;
    double _Y708;
    double _R708;
    double _X709;
    double _Y709;
    double _R709;
    double _X710;
    double _Y710;
    double _R710;
    double _X711;
    double _Y711;
    double _R711;
    double _X712;
    double _Y712;
    double _R712;
    double _X713;
    double _Y713;
    double _R713;
    double _X714;
    double _Y714;
    double _R714;
    double _X715;
    double _Y715;
    double _R715;
    double _X716;
    double _Y716;
    double _R716;
    double _X717;
    double _Y717;
    double _R717;
    double _X718;
    double _Y718;
    double _R718;
    double _X719;
    double _Y719;
    double _R719;
    double _X720;
    double _Y720;
    double _R720;
    double _X721;
    double _Y721;
    double _R721;
    double _X722;
    double _Y722;
    double _R722;
    double _X723;
    double _Y723;
    double _R723;
    double _X724;
    double _Y724;
    double _R724;
    double _X725;
    double _Y725;
    double _R725;
    double _X726;
    double _Y726;
    double _R726;
    double _X727;
    double _Y727;
    double _R727;
    double _X728;
    double _Y728;
    double _R728;
    double _X729;
    double _Y729;
    double _R729;
    double _X730;
    double _Y730;
    double _R730;
    double _X731;
    double _Y731;
    double _R731;
    double _X732;
    double _Y732;
    double _R732;
    double _X733;
    double _Y733;
    double _R733;
    double _X734;
    double _Y734;
    double _R734;
    double _X735;
    double _Y735;
    double _R735;
    double _X736;
    double _Y736;
    double _R736;
    double _X737;
    double _Y737;
    double _R737;
    double _X738;
    double _Y738;
    double _R738;
    double _X739;
    double _Y739;
    double _R739;
    double _X740;
    double _Y740;
    double _R740;
    double _X741;
    double _Y741;
    double _R741;
    double _X742;
    double _Y742;
    double _R742;
    double _X743;
    double _Y743;
    double _R743;
    double _X744;
    double _Y744;
    double _R744;
    double _X745;
    double _Y745;
    double _R745;
    double _X746;
    double _Y746;
    double _R746;
    double _X747;
    double _Y747;
    double _R747;
    double _X748;
    double _Y748;
    double _R748;
    double _X749;
    double _Y749;
    double _R749;
    double _X750;
    double _Y750;
    double _R750;
    double _X751;
    double _Y751;
    double _R751;
    double _X752;
    double _Y752;
    double _R752;
    double _X753;
    double _Y753;
    double _R753;
    double _X754;
    double _Y754;
    double _R754;
    double _X755;
    double _Y755;
    double _R755;
    double _X756;
    double _Y756;
    double _R756;
    double _X757;
    double _Y757;
    double _R757;
    double _X758;
    double _Y758;
    double _R758;
    double _X759;
    double _Y759;
    double _R759;
    double _X760;
    double _Y760;
    double _R760;
    double _X761;
    double _Y761;
    double _R761;
    double _X762;
    double _Y762;
    double _R762;
    double _X763;
    double _Y763;
    double _R763;
    double _X764;
    double _Y764;
    double _R764;
    double _X765;
    double _Y765;
    double _R765;
    double _X766;
    double _Y766;
    double _R766;
    double _X767;
    double _Y767;
    double _R767;
    double _X768;
    double _Y768;
    double _R768;
    double _X769;
    double _Y769;
    double _R769;
    double _X770;
    double _Y770;
    double _R770;
    double _X771;
    double _Y771;
    double _R771;
    double _X772;
    double _Y772;
    double _R772;
    double _X773;
    double _Y773;
    double _R773;
    double _X774;
    double _Y774;
    double _R774;
    double _X775;
    double _Y775;
    double _R775;
    double _X776;
    double _Y776;
    double _R776;
    double _X777;
    double _Y777;
    double _R777;
    double _X778;
    double _Y778;
    double _R778;
    double _X779;
    double _Y779;
    double _R779;
    double _X780;
    double _Y780;
    double _R780;
    double _X781;
    double _Y781;
    double _R781;
    double _X782;
    double _Y782;
    double _R782;
    double _X783;
    double _Y783;
    double _R783;
    double _X784;
    double _Y784;
    double _R784;
    double _X785;
    double _Y785;
    double _R785;
    double _X786;
    double _Y786;
    double _R786;
    double _X787;
    double _Y787;
    double _R787;
    double _X788;
    double _Y788;
    double _R788;
    double _X789;
    double _Y789;
    double _R789;
    double _X790;
    double _Y790;
    double _R790;
    double _X791;
    double _Y791;
    double _R791;
    double _X792;
    double _Y792;
    double _R792;
    double _X793;
    double _Y793;
    double _R793;
    double _X794;
    double _Y794;
    double _R794;
    double _X795;
    double _Y795;
    double _R795;
    double _X796;
    double _Y796;
    double _R796;
    double _X797;
    double _Y797;
    double _R797;
    double _X798;
    double _Y798;
    double _R798;
    double _X799;
    double _Y799;
    double _R799;
    double _X800;
    double _Y800;
    double _R800;
    double _X801;
    double _Y801;
    double _R801;
    double _X802;
    double _Y802;
    double _R802;
    double _X803;
    double _Y803;
    double _R803;
    double _X804;
    double _Y804;
    double _R804;
    double _X805;
    double _Y805;
    double _R805;
    double _X806;
    double _Y806;
    double _R806;
    double _X807;
    double _Y807;
    double _R807;
    double _X808;
    double _Y808;
    double _R808;
    double _X809;
    double _Y809;
    double _R809;
    double _X810;
    double _Y810;
    double _R810;
    double _X811;
    double _Y811;
    double _R811;
    double _X812;
    double _Y812;
    double _R812;
    double _X813;
    double _Y813;
    double _R813;
    double _X814;
    double _Y814;
    double _R814;
    double _X815;
    double _Y815;
    double _R815;
    double _X816;
    double _Y816;
    double _R816;
    double _X817;
    double _Y817;
    double _R817;
    double _X818;
    double _Y818;
    double _R818;
    double _X819;
    double _Y819;
    double _R819;
    double _X820;
    double _Y820;
    double _R820;
    double _X821;
    double _Y821;
    double _R821;
    double _X822;
    double _Y822;
    double _R822;
    double _X823;
    double _Y823;
    double _R823;
    double _X824;
    double _Y824;
    double _R824;
    double _X825;
    double _Y825;
    double _R825;
    double _X826;
    double _Y826;
    double _R826;
    double _X827;
    double _Y827;
    double _R827;
    double _X828;
    double _Y828;
    double _R828;
    double _X829;
    double _Y829;
    double _R829;
    double _X830;
    double _Y830;
    double _R830;
    double _X831;
    double _Y831;
    double _R831;
    double _X832;
    double _Y832;
    double _R832;
    double _X833;
    double _Y833;
    double _R833;
    double _X834;
    double _Y834;
    double _R834;
    double _X835;
    double _Y835;
    double _R835;
    double _X836;
    double _Y836;
    double _R836;
    double _X837;
    double _Y837;
    double _R837;
    double _X838;
    double _Y838;
    double _R838;
    double _X839;
    double _Y839;
    double _R839;
    double _X840;
    double _Y840;
    double _R840;
    double _X841;
    double _Y841;
    double _R841;
    double _X842;
    double _Y842;
    double _R842;
    double _X843;
    double _Y843;
    double _R843;
    double _X844;
    double _Y844;
    double _R844;
    double _X845;
    double _Y845;
    double _R845;
    double _X846;
    double _Y846;
    double _R846;
    double _X847;
    double _Y847;
    double _R847;
    double _X848;
    double _Y848;
    double _R848;
    double _X849;
    double _Y849;
    double _R849;
    double _X850;
    double _Y850;
    double _R850;
    double _X851;
    double _Y851;
    double _R851;
    double _X852;
    double _Y852;
    double _R852;
    double _X853;
    double _Y853;
    double _R853;
    double _X854;
    double _Y854;
    double _R854;
    double _X855;
    double _Y855;
    double _R855;
    double _X856;
    double _Y856;
    double _R856;
    double _X857;
    double _Y857;
    double _R857;
    double _X858;
    double _Y858;
    double _R858;
    double _X859;
    double _Y859;
    double _R859;
    double _X860;
    double _Y860;
    double _R860;
    double _X861;
    double _Y861;
    double _R861;
    double _X862;
    double _Y862;
    double _R862;
    double _X863;
    double _Y863;
    double _R863;
    double _X864;
    double _Y864;
    double _R864;
    double _X865;
    double _Y865;
    double _R865;
    double _X866;
    double _Y866;
    double _R866;
    double _X867;
    double _Y867;
    double _R867;
    double _X868;
    double _Y868;
    double _R868;
    double _X869;
    double _Y869;
    double _R869;
    double _X870;
    double _Y870;
    double _R870;
    double _X871;
    double _Y871;
    double _R871;
    double _X872;
    double _Y872;
    double _R872;
    double _X873;
    double _Y873;
    double _R873;
    double _X874;
    double _Y874;
    double _R874;
    double _X875;
    double _Y875;
    double _R875;
    double _X876;
    double _Y876;
    double _R876;
    double _X877;
    double _Y877;
    double _R877;
    double _X878;
    double _Y878;
    double _R878;
    double _X879;
    double _Y879;
    double _R879;
    double _X880;
    double _Y880;
    double _R880;
    double _X881;
    double _Y881;
    double _R881;
    double _X882;
    double _Y882;
    double _R882;
    double _X883;
    double _Y883;
    double _R883;
    double _X884;
    double _Y884;
    double _R884;
    double _X885;
    double _Y885;
    double _R885;
    double _X886;
    double _Y886;
    double _R886;
    double _X887;
    double _Y887;
    double _R887;
    double _X888;
    double _Y888;
    double _R888;
    double _X889;
    double _Y889;
    double _R889;
    double _X890;
    double _Y890;
    double _R890;
    double _X891;
    double _Y891;
    double _R891;
    double _X892;
    double _Y892;
    double _R892;
    double _X893;
    double _Y893;
    double _R893;
    double _X894;
    double _Y894;
    double _R894;
    double _X895;
    double _Y895;
    double _R895;
    double _X896;
    double _Y896;
    double _R896;
    double _X897;
    double _Y897;
    double _R897;
    double _X898;
    double _Y898;
    double _R898;
    double _X899;
    double _Y899;
    double _R899;
    double _X900;
    double _Y900;
    double _R900;
    double _X901;
    double _Y901;
    double _R901;
    double _X902;
    double _Y902;
    double _R902;
    double _X903;
    double _Y903;
    double _R903;
    double _X904;
    double _Y904;
    double _R904;
    double _X905;
    double _Y905;
    double _R905;
    double _X906;
    double _Y906;
    double _R906;
    double _X907;
    double _Y907;
    double _R907;
    double _X908;
    double _Y908;
    double _R908;
    double _X909;
    double _Y909;
    double _R909;
    double _X910;
    double _Y910;
    double _R910;
    double _X911;
    double _Y911;
    double _R911;
    double _X912;
    double _Y912;
    double _R912;
    double _X913;
    double _Y913;
    double _R913;
    double _X914;
    double _Y914;
    double _R914;
    double _X915;
    double _Y915;
    double _R915;
    double _X916;
    double _Y916;
    double _R916;
    double _X917;
    double _Y917;
    double _R917;
    double _X918;
    double _Y918;
    double _R918;
    double _X919;
    double _Y919;
    double _R919;
    double _X920;
    double _Y920;
    double _R920;
    double _X921;
    double _Y921;
    double _R921;
    double _X922;
    double _Y922;
    double _R922;
    double _X923;
    double _Y923;
    double _R923;
    double _X924;
    double _Y924;
    double _R924;
    double _X925;
    double _Y925;
    double _R925;
    double _X926;
    double _Y926;
    double _R926;
    double _X927;
    double _Y927;
    double _R927;
    double _X928;
    double _Y928;
    double _R928;
    double _X929;
    double _Y929;
    double _R929;
    double _X930;
    double _Y930;
    double _R930;
    double _X931;
    double _Y931;
    double _R931;
    double _X932;
    double _Y932;
    double _R932;
    double _X933;
    double _Y933;
    double _R933;
    double _X934;
    double _Y934;
    double _R934;
    double _X935;
    double _Y935;
    double _R935;
    double _X936;
    double _Y936;
    double _R936;
    double _X937;
    double _Y937;
    double _R937;
    double _X938;
    double _Y938;
    double _R938;
    double _X939;
    double _Y939;
    double _R939;
    double _X940;
    double _Y940;
    double _R940;
    double _X941;
    double _Y941;
    double _R941;
    double _X942;
    double _Y942;
    double _R942;
    double _X943;
    double _Y943;
    double _R943;
    double _X944;
    double _Y944;
    double _R944;
    double _X945;
    double _Y945;
    double _R945;
    double _X946;
    double _Y946;
    double _R946;
    double _X947;
    double _Y947;
    double _R947;
    double _X948;
    double _Y948;
    double _R948;
    double _X949;
    double _Y949;
    double _R949;
    double _X950;
    double _Y950;
    double _R950;
    double _X951;
    double _Y951;
    double _R951;
    double _X952;
    double _Y952;
    double _R952;
    double _X953;
    double _Y953;
    double _R953;
    double _X954;
    double _Y954;
    double _R954;
    double _X955;
    double _Y955;
    double _R955;
    double _X956;
    double _Y956;
    double _R956;
    double _X957;
    double _Y957;
    double _R957;
    double _X958;
    double _Y958;
    double _R958;
    double _X959;
    double _Y959;
    double _R959;
    double _X960;
    double _Y960;
    double _R960;
    double _X961;
    double _Y961;
    double _R961;
    double _X962;
    double _Y962;
    double _R962;
    double _X963;
    double _Y963;
    double _R963;
    double _X964;
    double _Y964;
    double _R964;
    double _X965;
    double _Y965;
    double _R965;
    double _X966;
    double _Y966;
    double _R966;
    double _X967;
    double _Y967;
    double _R967;
    double _X968;
    double _Y968;
    double _R968;
    double _X969;
    double _Y969;
    double _R969;
    double _X970;
    double _Y970;
    double _R970;
    double _X971;
    double _Y971;
    double _R971;
    double _X972;
    double _Y972;
    double _R972;
    double _X973;
    double _Y973;
    double _R973;
    double _X974;
    double _Y974;
    double _R974;
    double _X975;
    double _Y975;
    double _R975;
    double _X976;
    double _Y976;
    double _R976;
    double _X977;
    double _Y977;
    double _R977;
    double _X978;
    double _Y978;
    double _R978;
    double _X979;
    double _Y979;
    double _R979;
    double _X980;
    double _Y980;
    double _R980;
    double _X981;
    double _Y981;
    double _R981;
    double _X982;
    double _Y982;
    double _R982;
    double _X983;
    double _Y983;
    double _R983;
    double _X984;
    double _Y984;
    double _R984;
    double _X985;
    double _Y985;
    double _R985;
    double _X986;
    double _Y986;
    double _R986;
    double _X987;
    double _Y987;
    double _R987;
    double _X988;
    double _Y988;
    double _R988;
    double _X989;
    double _Y989;
    double _R989;
    double _X990;
    double _Y990;
    double _R990;
    double _X991;
    double _Y991;
    double _R991;
    double _X992;
    double _Y992;
    double _R992;
    double _X993;
    double _Y993;
    double _R993;
    double _X994;
    double _Y994;
    double _R994;
    double _X995;
    double _Y995;
    double _R995;
    double _X996;
    double _Y996;
    double _R996;
    double _X997;
    double _Y997;
    double _R997;
    double _X998;
    double _Y998;
    double _R998;
    double _X999;
    double _Y999;
    double _R999;

public:
    explicit StaticPropertyMap(QObject* parent = nullptr);

public:
    void insert(const QByteArray& k, const QVariant& v);
};
